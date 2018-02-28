const path = require("path");
const HtmlWebpackPlugin = require("html-webpack-plugin");

const outputDir = path.join(__dirname, "build/");

module.exports = {
  entry: "./src/Index.bs.js",
  output: {
    path: outputDir,
    publicPath: "/",
    filename: "Index.js"
  },
  mode: "development",
  devServer: {
    contentBase: outputDir,
    compress: true,
    port: 9000
  },
  plugins: [
    new HtmlWebpackPlugin({
      inject: true,
      template: "public/index.html"
    })
  ]
};
