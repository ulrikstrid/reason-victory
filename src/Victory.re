type victoryData = {
  .
  "x": int,
  "y": int
};

module VictoryTheme = {
  type t;
  [@bs.module "victory-core/es/victory-theme/material"] [@bs.val]
  external material : t = "default";
  [@bs.module "victory-core/es/victory-theme/grayscale"] [@bs.val]
  external grayscale : t = "default";
};

module VictoryBar = {
  [@bs.module "victory"]
  external victoryBar : ReasonReact.reactClass = "VictoryBar";
  let make = (~data: option(array(victoryData))=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryBar,
      ~props={"data": Js.Undefined.fromOption(data)},
      children
    );
};

module VictoryStack = {
  [@bs.module "victory"]
  external victoryStack : ReasonReact.reactClass = "VictoryStack";
  let make = (~colorScale=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryStack,
      ~props={"colorScale": Js.Undefined.fromOption(colorScale)},
      children
    );
};

module VictoryChart = {
  [@bs.module "victory"]
  external victoryChart : ReasonReact.reactClass = "VictoryChart";
  let make = (~domainPadding=?, ~theme: option(VictoryTheme.t)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryChart,
      ~props={
        "domainPadding": Js.Undefined.fromOption(domainPadding),
        "theme": Js.Undefined.fromOption(theme)
      },
      children
    );
};

module VictoryAxis = {
  [@bs.module "victory"]
  external victoryAxis : ReasonReact.reactClass = "VictoryAxis";
  let make =
      (
        ~tickValues=?,
        ~tickFormat: option('a => string)=?,
        ~dependentAxis: option(bool)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryAxis,
      ~props={
        "tickValues": Js.Undefined.fromOption(tickValues),
        "tickFormat": Js.Undefined.fromOption(tickFormat),
        "dependentAxis": Js.Undefined.fromOption(dependentAxis)
      },
      children
    );
};

module VictoryArea = {
  [@bs.module "victory"]
  external victoryArea : ReasonReact.reactClass = "VictoryArea";
  let make = (~animate=?, ~data=?, ~interpolation="linear", children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryArea,
      ~props={
        "animate": Js.Undefined.fromOption(animate),
        "data": Js.Undefined.fromOption(data),
        "interpolation": interpolation
      },
      children
    );
};
