let component = ReasonReact.statelessComponent("Page");

let xAxisFormatter = x => "Q " ++ Js.Int.toString(x);

let yAxisFormatter = y => Js.Int.toString(y / 1000) ++ "k";

let data = [|
  {"x": 1, "y": 13000},
  {"x": 2, "y": 16500},
  {"x": 3, "y": 14250},
  {"x": 4, "y": 19000}
|];

let make = _children => {
  ...component,
  render: _self => {
    Js.log(Victory.VictoryTheme.material);
    Victory.(
      <VictoryChart domainPadding=20 theme=VictoryTheme.material>
        <VictoryAxis tickValues=[|1, 2, 3, 4|] tickFormat=xAxisFormatter />
        <VictoryAxis dependentAxis=true tickFormat=yAxisFormatter />
        <VictoryStack colorScale="warm">
          <VictoryBar data />
          <VictoryBar data />
          <VictoryBar data />
          <VictoryBar data />
        </VictoryStack>
      </VictoryChart>
    );
  }
};
