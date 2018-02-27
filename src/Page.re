let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: _self => <Victory.VictoryBar />
};