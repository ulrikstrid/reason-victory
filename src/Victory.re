module VictoryBar = {
  [@bs.module "victory"]
  external victoryBar : ReasonReact.reactClass = "VictoryBar";
  let make = (~data=?, ~x=?, ~y=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryBar,
      ~props={
        "data": Js.Undefined.from_opt(data),
        "x": Js.Undefined.from_opt(x),
        "y": Js.Undefined.from_opt(y)
      },
      children
    );
};

module VictoryStack = {
  [@bs.module "victory"]
  external victoryStack : ReasonReact.reactClass = "VictoryStack";
  let make = (~colorScale=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryStack,
      ~props={"colorScale": colorScale},
      children
    );
};

module VictoryChart = {
  [@bs.module "victory"]
  external victoryChart : ReasonReact.reactClass = "VictoryChart";
  let make = (~domainPadding=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryChart,
      ~props={"domainPadding": domainPadding},
      children
    );
};

module VictoryAxis = {
  [@bs.module "victory"]
  external victoryAxis : ReasonReact.reactClass = "VictoryAxis";
  let make = (~tickValues=?, ~tickFormat=?, ~dependentAxis=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=victoryAxis,
      ~props={
        "tickValues": tickValues,
        "tickFormat": tickFormat,
        "dependentAxis": dependentAxis
      },
      children
    );
};