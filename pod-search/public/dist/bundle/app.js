/******/ (function(modules) { // webpackBootstrap
/******/ 	// install a JSONP callback for chunk loading
/******/ 	function webpackJsonpCallback(data) {
/******/ 		var chunkIds = data[0];
/******/ 		var moreModules = data[1]
/******/ 		var executeModules = data[2];
/******/ 		// add "moreModules" to the modules object,
/******/ 		// then flag all "chunkIds" as loaded and fire callback
/******/ 		var moduleId, chunkId, i = 0, resolves = [];
/******/ 		for(;i < chunkIds.length; i++) {
/******/ 			chunkId = chunkIds[i];
/******/ 			if(installedChunks[chunkId]) {
/******/ 				resolves.push(installedChunks[chunkId][0]);
/******/ 			}
/******/ 			installedChunks[chunkId] = 0;
/******/ 		}
/******/ 		for(moduleId in moreModules) {
/******/ 			if(Object.prototype.hasOwnProperty.call(moreModules, moduleId)) {
/******/ 				modules[moduleId] = moreModules[moduleId];
/******/ 			}
/******/ 		}
/******/ 		if(parentJsonpFunction) parentJsonpFunction(data);
/******/ 		while(resolves.length) {
/******/ 			resolves.shift()();
/******/ 		}
/******/
/******/ 		// add entry modules from loaded chunk to deferred list
/******/ 		deferredModules.push.apply(deferredModules, executeModules || []);
/******/
/******/ 		// run deferred modules when all chunks ready
/******/ 		return checkDeferredModules();
/******/ 	};
/******/ 	function checkDeferredModules() {
/******/ 		var result;
/******/ 		for(var i = 0; i < deferredModules.length; i++) {
/******/ 			var deferredModule = deferredModules[i];
/******/ 			var fullfilled = true;
/******/ 			for(var j = 1; j < deferredModule.length; j++) {
/******/ 				var depId = deferredModule[j];
/******/ 				if(installedChunks[depId] !== 0) fullfilled = false;
/******/ 			}
/******/ 			if(fullfilled) {
/******/ 				deferredModules.splice(i--, 1);
/******/ 				result = __webpack_require__(__webpack_require__.s = deferredModule[0]);
/******/ 			}
/******/ 		}
/******/ 		return result;
/******/ 	}
/******/
/******/ 	// The module cache
/******/ 	var installedModules = {};
/******/
/******/ 	// object to store loaded and loading chunks
/******/ 	var installedChunks = {
/******/ 		"app": 0
/******/ 	};
/******/
/******/ 	var deferredModules = [];
/******/
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/
/******/ 		// Check if module is in cache
/******/ 		if(installedModules[moduleId]) {
/******/ 			return installedModules[moduleId].exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = installedModules[moduleId] = {
/******/ 			i: moduleId,
/******/ 			l: false,
/******/ 			exports: {}
/******/ 		};
/******/
/******/ 		// Execute the module function
/******/ 		modules[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/
/******/ 		// Flag the module as loaded
/******/ 		module.l = true;
/******/
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/
/******/
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = modules;
/******/
/******/ 	// expose the module cache
/******/ 	__webpack_require__.c = installedModules;
/******/
/******/ 	// define getter function for harmony exports
/******/ 	__webpack_require__.d = function(exports, name, getter) {
/******/ 		if(!__webpack_require__.o(exports, name)) {
/******/ 			Object.defineProperty(exports, name, {
/******/ 				configurable: false,
/******/ 				enumerable: true,
/******/ 				get: getter
/******/ 			});
/******/ 		}
/******/ 	};
/******/
/******/ 	// define __esModule on exports
/******/ 	__webpack_require__.r = function(exports) {
/******/ 		Object.defineProperty(exports, '__esModule', { value: true });
/******/ 	};
/******/
/******/ 	// getDefaultExport function for compatibility with non-harmony modules
/******/ 	__webpack_require__.n = function(module) {
/******/ 		var getter = module && module.__esModule ?
/******/ 			function getDefault() { return module['default']; } :
/******/ 			function getModuleExports() { return module; };
/******/ 		__webpack_require__.d(getter, 'a', getter);
/******/ 		return getter;
/******/ 	};
/******/
/******/ 	// Object.prototype.hasOwnProperty.call
/******/ 	__webpack_require__.o = function(object, property) { return Object.prototype.hasOwnProperty.call(object, property); };
/******/
/******/ 	// __webpack_public_path__
/******/ 	__webpack_require__.p = "";
/******/
/******/ 	var jsonpArray = window["webpackJsonp"] = window["webpackJsonp"] || [];
/******/ 	var oldJsonpFunction = jsonpArray.push.bind(jsonpArray);
/******/ 	jsonpArray.push = webpackJsonpCallback;
/******/ 	jsonpArray = jsonpArray.slice();
/******/ 	for(var i = 0; i < jsonpArray.length; i++) webpackJsonpCallback(jsonpArray[i]);
/******/ 	var parentJsonpFunction = oldJsonpFunction;
/******/
/******/
/******/ 	// add entry module to deferred list
/******/ 	deferredModules.push(["./src/index.js","commons"]);
/******/ 	// run deferred modules when ready
/******/ 	return checkDeferredModules();
/******/ })
/************************************************************************/
/******/ ({

/***/ "./src/components/EpisodeList.js":
/*!***************************************!*\
  !*** ./src/components/EpisodeList.js ***!
  \***************************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

"use strict";


Object.defineProperty(exports, "__esModule", {
    value: true
});

var _extends2 = __webpack_require__(/*! babel-runtime/helpers/extends */ "./node_modules/babel-runtime/helpers/extends.js");

var _extends3 = _interopRequireDefault(_extends2);

var _react = __webpack_require__(/*! react */ "./node_modules/react/index.js");

var _react2 = _interopRequireDefault(_react);

var _episode = __webpack_require__(/*! ./episode */ "./src/components/episode.js");

var _episode2 = _interopRequireDefault(_episode);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

//  const EpiList = [
//      {id : 0, name : "By Mike Smith", image : "/images/img_1.jpg", linkUrl : "https://audio-ssl.itunes.apple.com/itunes-assets/AudioPreview115/v4/a5/dd/92/a5dd929d-c457-3b53-e278-cf2e5bfc544a/mzaf_16628235598750249007.std.aac.p.m4a",
//       date : "16 September 2017 ", text : "Episode 08: How To Create Web Page Using Bootstrap 4"}
//  ]

var episodeList = function episodeList(_ref) {
    var EpiList = _ref.EpiList;

    return _react2.default.createElement(
        "div",
        null,
        EpiList.map(function (Epi) {
            return _react2.default.createElement(_episode2.default, (0, _extends3.default)({ key: Epi.id }, Epi));
        })
    );
};

exports.default = episodeList;

/***/ }),

/***/ "./src/components/episode.js":
/*!***********************************!*\
  !*** ./src/components/episode.js ***!
  \***********************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

"use strict";


Object.defineProperty(exports, "__esModule", {
  value: true
});

var _react = __webpack_require__(/*! react */ "./node_modules/react/index.js");

var _react2 = _interopRequireDefault(_react);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

var Episode = function Episode(_ref) {
  var image = _ref.image,
      link = _ref.link,
      text = _ref.text,
      linkUrl = _ref.linkUrl,
      name = _ref.name,
      date = _ref.date;

  // const bgImage = "url('images/img_2.jpg')"
  var bgImage = "url('" + image + "')";
  return _react2.default.createElement(
    "div",
    { className: "d-block d-md-flex podcast-entry bg-white mb-5" },
    _react2.default.createElement("div", { className: "image", style: { backgroundImage: bgImage } }),
    _react2.default.createElement(
      "div",
      { className: "text" },
      _react2.default.createElement(
        "h3",
        { className: "font-weight-light" },
        _react2.default.createElement(
          "a",
          { href: link },
          text
        )
      ),
      _react2.default.createElement(
        "div",
        { className: "text-white mb-3" },
        _react2.default.createElement(
          "span",
          { className: "text-black-opacity-05" },
          _react2.default.createElement(
            "small",
            null,
            name,
            _react2.default.createElement(
              "span",
              { className: "sep" },
              "/"
            ),
            " ",
            date,
            _react2.default.createElement(
              "span",
              { className: "sep" },
              "/"
            ),
            " 1:30:20"
          )
        )
      ),
      _react2.default.createElement(
        "div",
        { className: "player" },
        _react2.default.createElement(
          "audio",
          { id: "player2", preload: "none", controls: true, controlsList: "nodownload", style: { width: "100%" } },
          _react2.default.createElement("source", { src: linkUrl, type: "audio/mp3" })
        )
      )
    )
  );
};
exports.default = Episode;

/***/ }),

/***/ "./src/components/header.js":
/*!**********************************!*\
  !*** ./src/components/header.js ***!
  \**********************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

"use strict";


Object.defineProperty(exports, "__esModule", {
  value: true
});

var _react = __webpack_require__(/*! react */ "./node_modules/react/index.js");

var _react2 = _interopRequireDefault(_react);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

var Header = function Header() {
  return _react2.default.createElement(
    "header",
    { className: "site-navbar py-4", role: "banner" },
    _react2.default.createElement(
      "div",
      { className: "container" },
      _react2.default.createElement(
        "div",
        { className: "row align-items-center" },
        _react2.default.createElement(
          "div",
          { className: "col-3" },
          _react2.default.createElement(
            "h1",
            { className: "site-logo" },
            _react2.default.createElement(
              "a",
              { href: "index.html", className: "h2" },
              "Podcast",
              _react2.default.createElement(
                "span",
                { className: "text-primary" },
                "."
              ),
              " "
            )
          )
        ),
        _react2.default.createElement(
          "div",
          { className: "col-9" },
          _react2.default.createElement(
            "nav",
            { className: "site-navigation position-relative text-right text-md-right", role: "navigation" },
            _react2.default.createElement(
              "div",
              { className: "d-block d-lg-none ml-md-0 mr-auto" },
              _react2.default.createElement(
                "a",
                { href: "#", className: "site-menu-toggle js-menu-toggle text-black" },
                _react2.default.createElement("span", { className: "icon-menu h3" })
              )
            ),
            _react2.default.createElement(
              "ul",
              { className: "site-menu js-clone-nav d-none d-lg-block" },
              _react2.default.createElement(
                "li",
                { className: "active" },
                _react2.default.createElement(
                  "a",
                  { href: "index.html" },
                  "Home"
                )
              ),
              _react2.default.createElement(
                "li",
                null,
                _react2.default.createElement(
                  "a",
                  { href: "about.html" },
                  "About"
                )
              ),
              _react2.default.createElement(
                "li",
                null,
                _react2.default.createElement(
                  "a",
                  { href: "contact.html" },
                  "Contact"
                )
              ),
              _react2.default.createElement(
                "li",
                null,
                _react2.default.createElement(
                  "a",
                  { href: "login-register.html" },
                  "Login / Register"
                )
              )
            )
          )
        )
      )
    )
  );
};

exports.default = Header;

/***/ }),

/***/ "./src/components/list.js":
/*!********************************!*\
  !*** ./src/components/list.js ***!
  \********************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

"use strict";


Object.defineProperty(exports, "__esModule", {
    value: true
});

var _react = __webpack_require__(/*! react */ "./node_modules/react/index.js");

var _react2 = _interopRequireDefault(_react);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

var List = function List(_ref) {
    var feed = _ref.feed,
        image = _ref.image,
        name = _ref.name,
        categories = _ref.categories,
        onSelect = _ref.onSelect;

    return _react2.default.createElement(
        "li",
        null,
        _react2.default.createElement(
            "a",
            { href: feed, onClick: onSelect, className: "d-flex align-items-center  p-2" },
            _react2.default.createElement("img", { src: image, alt: "Image", className: "img-fluid mr-2" }),
            _react2.default.createElement(
                "div",
                { className: "podcaster" },
                _react2.default.createElement(
                    "span",
                    { className: "d-block" },
                    name
                ),
                _react2.default.createElement(
                    "span",
                    { className: "small" },
                    categories,
                    " podcasts"
                )
            )
        )
    );
};
exports.default = List;

/***/ }),

/***/ "./src/index.js":
/*!**********************!*\
  !*** ./src/index.js ***!
  \**********************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

"use strict";


var _stringify = __webpack_require__(/*! babel-runtime/core-js/json/stringify */ "./node_modules/babel-runtime/core-js/json/stringify.js");

var _stringify2 = _interopRequireDefault(_stringify);

var _slicedToArray2 = __webpack_require__(/*! babel-runtime/helpers/slicedToArray */ "./node_modules/babel-runtime/helpers/slicedToArray.js");

var _slicedToArray3 = _interopRequireDefault(_slicedToArray2);

var _react = __webpack_require__(/*! react */ "./node_modules/react/index.js");

var _react2 = _interopRequireDefault(_react);

var _reactDom = __webpack_require__(/*! react-dom */ "./node_modules/react-dom/index.js");

var _reactDom2 = _interopRequireDefault(_reactDom);

var _header = __webpack_require__(/*! ./components/header */ "./src/components/header.js");

var _header2 = _interopRequireDefault(_header);

var _list = __webpack_require__(/*! ./components/list */ "./src/components/list.js");

var _list2 = _interopRequireDefault(_list);

var _EpisodeList = __webpack_require__(/*! ./components/EpisodeList */ "./src/components/EpisodeList.js");

var _EpisodeList2 = _interopRequireDefault(_EpisodeList);

var _axios = __webpack_require__(/*! axios */ "./node_modules/axios/index.js");

var _axios2 = _interopRequireDefault(_axios);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

var App = function App() {
    var _useState = (0, _react.useState)(null),
        _useState2 = (0, _slicedToArray3.default)(_useState, 2),
        selectedPodcast = _useState2[0],
        setSelectedPodcast = _useState2[1];

    var ArtList = function ArtList() {
        var _useState3 = (0, _react.useState)(''),
            _useState4 = (0, _slicedToArray3.default)(_useState3, 2),
            searchTerm = _useState4[0],
            setSearchTerm = _useState4[1];

        var _useState5 = (0, _react.useState)([]),
            _useState6 = (0, _slicedToArray3.default)(_useState5, 2),
            itemLi = _useState6[0],
            setItemList = _useState6[1];

        var selectPodcast = function selectPodcast(podcast, event) {
            event.preventDefault();
            console.log("Podcast is " + (0, _stringify2.default)(podcast));
            setSelectedPodcast(podcast);
        };
        (0, _react.useEffect)(function () {
            // console.log("SELECTED PODCAST IS "+ JSON.stringify(selectedPodcast))
            if (!selectedPodcast) return;
            var url = "/feed?url=" + selectedPodcast.feed;
            // console.log(url)
            (0, _axios2.default)({
                url: url,
                method: "get",
                options: {
                    Headers: { Accept: "application/json" }
                }
            }).then(function (_ref) {
                var data = _ref.data;

                console.log("there is no error" + (0, _stringify2.default)(data));
                var item = data.item;
                // console.log(data.item)
            }).catch(function (err) {
                return console.log("there is error");
            });
        }, [selectedPodcast]);

        var onType = function onType(event) {
            setSearchTerm(event.target.value);
        };
        var onButtonClick = function onButtonClick(event) {
            (0, _axios2.default)({
                url: "/search",
                method: "post",
                data: {
                    term: searchTerm.trim().toLocaleLowerCase()
                },
                options: {
                    Headers: { Accept: "application/json" }
                }
            }).then(function (_ref2) {
                var data = _ref2.data;

                var podlist = data.podcasts;
                var PodeList = podlist.sort(function (podL) {
                    podL.name != undefined || podL.trackName != undefined;
                });
                // console.log(PodeList)
                setItemList(PodeList);
                // console.log(data.podcasts)
            }).catch(function (err) {
                console.log(err);
            });
        };
        return _react2.default.createElement(
            "div",
            { className: "col-lg-3" },
            _react2.default.createElement(
                "div",
                { className: "featured-user mb-5 mb-lg-0" },
                _react2.default.createElement(
                    "h3",
                    { className: "mb-2" },
                    "Search Podcasts"
                ),
                _react2.default.createElement(
                    "div",
                    { style: { display: "flex" } },
                    _react2.default.createElement("input", { onChange: onType, type: "text", style: { height: "32px" }, className: "form-control mb-4" }),
                    _react2.default.createElement(
                        "button",
                        { onClick: onButtonClick, className: "btn btn-info p-1 ml-2", style: { height: "32px" } },
                        "GO!"
                    )
                ),
                _react2.default.createElement(
                    "ul",
                    { className: "list-unstyled" },
                    itemLi.map(function (item) {
                        return _react2.default.createElement(_list2.default, { image: item.Image, key: item.id, feed: item.feed, onSelect: function onSelect(e) {
                                selectPodcast(item, e);
                            }, name: item.name ? item.name : item.trackName, categories: item.categories });
                    })
                )
            )
        );
    };

    return _react2.default.createElement(
        "div",
        { className: "site-wrap" },
        _react2.default.createElement(_header2.default, null),
        _react2.default.createElement(
            "div",
            { className: "site-section" },
            _react2.default.createElement(
                "div",
                { className: "container" },
                _react2.default.createElement(
                    "div",
                    { className: "row" },
                    _react2.default.createElement(ArtList, null),
                    _react2.default.createElement(
                        "div",
                        { className: "col-lg-9" },
                        _react2.default.createElement(_EpisodeList2.default, { EpiList: selectedPodcast ? [selectedPodcast] : [] })
                    )
                )
            )
        )
    );
};

_reactDom2.default.render(_react2.default.createElement(App, null), document.getElementById("root"));

/***/ })

/******/ });
//# sourceMappingURL=app.map