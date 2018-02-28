const path = require("path");
const outputDir = path.join(__dirname, "build/");

module.exports = {
  entry: "./src/Index.bs.js",
  output: {
    path: outputDir,
    publicPath: outputDir,
    filename: "Index.js"
  },
  mode: "development",
  devServer: {
    contentBase: path.join(__dirname, "build"),
    compress: true,
    port: 9000,
    historyApiFallback: true
  }
};
