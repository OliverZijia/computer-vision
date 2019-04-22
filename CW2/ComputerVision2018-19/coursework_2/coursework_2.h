<!DOCTYPE html>
<html><head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8"><meta charset="utf-8">

<title>coursework_2</title>

<script src="coursework_2_files/require.js"></script>
<script src="coursework_2_files/jquery.js"></script>



<style type="text/css">
    /*!
*
* Twitter Bootstrap
*
*/
/*!
 * Bootstrap v3.3.7 (http://getbootstrap.com)
 * Copyright 2011-2016 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 */
/*! normalize.css v3.0.3 | MIT License | github.com/necolas/normalize.css */
html {
  font-family: sans-serif;
  -ms-text-size-adjust: 100%;
  -webkit-text-size-adjust: 100%;
}
body {
  margin: 0;
}
article,
aside,
details,
figcaption,
figure,
footer,
header,
hgroup,
main,
menu,
nav,
section,
summary {
  display: block;
}
audio,
canvas,
progress,
video {
  display: inline-block;
  vertical-align: baseline;
}
audio:not([controls]) {
  display: none;
  height: 0;
}
[hidden],
template {
  display: none;
}
a {
  background-color: transparent;
}
a:active,
a:hover {
  outline: 0;
}
abbr[title] {
  border-bottom: 1px dotted;
}
b,
strong {
  font-weight: bold;
}
dfn {
  font-style: italic;
}
h1 {
  font-size: 2em;
  margin: 0.67em 0;
}
mark {
  background: #ff0;
  color: #000;
}
small {
  font-size: 80%;
}
sub,
sup {
  font-size: 75%;
  line-height: 0;
  position: relative;
  vertical-align: baseline;
}
sup {
  top: -0.5em;
}
sub {
  bottom: -0.25em;
}
img {
  border: 0;
}
svg:not(:root) {
  overflow: hidden;
}
figure {
  margin: 1em 40px;
}
hr {
  box-sizing: content-box;
  height: 0;
}
pre {
  overflow: auto;
}
code,
kbd,
pre,
samp {
  font-family: monospace, monospace;
  font-size: 1em;
}
button,
input,
optgroup,
select,
textarea {
  color: inherit;
  font: inherit;
  margin: 0;
}
button {
  overflow: visible;
}
button,
select {
  text-transform: none;
}
button,
html input[type="button"],
input[type="reset"],
input[type="submit"] {
  -webkit-appearance: button;
  cursor: pointer;
}
button[disabled],
html input[disabled] {
  cursor: default;
}
button::-moz-focus-inner,
input::-moz-focus-inner {
  border: 0;
  padding: 0;
}
input {
  line-height: normal;
}
input[type="checkbox"],
input[type="radio"] {
  box-sizing: border-box;
  padding: 0;
}
input[type="number"]::-webkit-inner-spin-button,
input[type="number"]::-webkit-outer-spin-button {
  height: auto;
}
input[type="search"] {
  -webkit-appearance: textfield;
  box-sizing: content-box;
}
input[type="search"]::-webkit-search-cancel-button,
input[type="search"]::-webkit-search-decoration {
  -webkit-appearance: none;
}
fieldset {
  border: 1px solid #c0c0c0;
  margin: 0 2px;
  padding: 0.35em 0.625em 0.75em;
}
legend {
  border: 0;
  padding: 0;
}
textarea {
  overflow: auto;
}
optgroup {
  font-weight: bold;
}
table {
  border-collapse: collapse;
  border-spacing: 0;
}
td,
th {
  padding: 0;
}
/*! Source: https://github.com/h5bp/html5-boilerplate/blob/master/src/css/main.css */
@media print {
  *,
  *:before,
  *:after {
    background: transparent !important;
    box-shadow: none !important;
    text-shadow: none !important;
  }
  a,
  a:visited {
    text-decoration: underline;
  }
  a[href]:after {
    content: " (" attr(href) ")";
  }
  abbr[title]:after {
    content: " (" attr(title) ")";
  }
  a[href^="#"]:after,
  a[href^="javascript:"]:after {
    content: "";
  }
  pre,
  blockquote {
    border: 1px solid #999;
    page-break-inside: avoid;
  }
  thead {
    display: table-header-group;
  }
  tr,
  img {
    page-break-inside: avoid;
  }
  img {
    max-width: 100% !important;
  }
  p,
  h2,
  h3 {
    orphans: 3;
    widows: 3;
  }
  h2,
  h3 {
    page-break-after: avoid;
  }
  .navbar {
    display: none;
  }
  .btn > .caret,
  .dropup > .btn > .caret {
    border-top-color: #000 !important;
  }
  .label {
    border: 1px solid #000;
  }
  .table {
    border-collapse: collapse !important;
  }
  .table td,
  .table th {
    background-color: #fff !important;
  }
  .table-bordered th,
  .table-bordered td {
    border: 1px solid #ddd !important;
  }
}
@font-face {
  font-family: 'Glyphicons Halflings';
  src: url('../components/bootstrap/fonts/glyphicons-halflings-regular.eot');
  src: url('../components/bootstrap/fonts/glyphicons-halflings-regular.eot?#iefix') format('embedded-opentype'), url('../components/bootstrap/fonts/glyphicons-halflings-regular.woff2') format('woff2'), url('../components/bootstrap/fonts/glyphicons-halflings-regular.woff') format('woff'), url('../components/bootstrap/fonts/glyphicons-halflings-regular.ttf') format('truetype'), url('../components/bootstrap/fonts/glyphicons-halflings-regular.svg#glyphicons_halflingsregular') format('svg');
}
.glyphicon {
  position: relative;
  top: 1px;
  display: inline-block;
  font-family: 'Glyphicons Halflings';
  font-style: normal;
  font-weight: normal;
  line-height: 1;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
.glyphicon-asterisk:before {
  content: "\002a";
}
.glyphicon-plus:before {
  content: "\002b";
}
.glyphicon-euro:before,
.glyphicon-eur:before {
  content: "\20ac";
}
.glyphicon-minus:before {
  content: "\2212";
}
.glyphicon-cloud:before {
  content: "\2601";
}
.glyphicon-envelope:before {
  content: "\2709";
}
.glyphicon-pencil:before {
  content: "\270f";
}
.glyphicon-glass:before {
  content: "\e001";
}
.glyphicon-music:before {
  content: "\e002";
}
.glyphicon-search:before {
  content: "\e003";
}
.glyphicon-heart:before {
  content: "\e005";
}
.glyphicon-star:before {
  content: "\e006";
}
.glyphicon-star-empty:before {
  content: "\e007";
}
.glyphicon-user:before {
  content: "\e008";
}
.glyphicon-film:before {
  content: "\e009";
}
.glyphicon-th-large:before {
  content: "\e010";
}
.glyphicon-th:before {
  content: "\e011";
}
.glyphicon-th-list:before {
  content: "\e012";
}
.glyphicon-ok:before {
  content: "\e013";
}
.glyphicon-remove:before {
  content: "\e014";
}
.glyphicon-zoom-in:before {
  content: "\e015";
}
.glyphicon-zoom-out:before {
  content: "\e016";
}
.glyphicon-off:before {
  content: "\e017";
}
.glyphicon-signal:before {
  content: "\e018";
}
.glyphicon-cog:before {
  content: "\e019";
}
.glyphicon-trash:before {
  content: "\e020";
}
.glyphicon-home:before {
  content: "\e021";
}
.glyphicon-file:before {
  content: "\e022";
}
.glyphicon-time:before {
  content: "\e023";
}
.glyphicon-road:before {
  content: "\e024";
}
.glyphicon-download-alt:before {
  content: "\e025";
}
.glyphicon-download:before {
  content: "\e026";
}
.glyphicon-upload:before {
  content: "\e027";
}
.glyphicon-inbox:before {
  content: "\e028";
}
.glyphicon-play-circle:before {
  content: "\e029";
}
.glyphicon-repeat:before {
  content: "\e030";
}
.glyphicon-refresh:before {
  content: "\e031";
}
.glyphicon-list-alt:before {
  content: "\e032";
}
.glyphicon-lock:before {
  content: "\e033";
}
.glyphicon-flag:before {
  content: "\e034";
}
.glyphicon-headphones:before {
  content: "\e035";
}
.glyphicon-volume-off:before {
  content: "\e036";
}
.glyphicon-volume-down:before {
  content: "\e037";
}
.glyphicon-volume-up:before {
  content: "\e038";
}
.glyphicon-qrcode:before {
  content: "\e039";
}
.glyphicon-barcode:before {
  content: "\e040";
}
.glyphicon-tag:before {
  content: "\e041";
}
.glyphicon-tags:before {
  content: "\e042";
}
.glyphicon-book:before {
  content: "\e043";
}
.glyphicon-bookmark:before {
  content: "\e044";
}
.glyphicon-print:before {
  content: "\e045";
}
.glyphicon-camera:before {
  content: "\e046";
}
.glyphicon-font:before {
  content: "\e047";
}
.glyphicon-bold:before {
  content: "\e048";
}
.glyphicon-italic:before {
  content: "\e049";
}
.glyphicon-text-height:before {
  content: "\e050";
}
.glyphicon-text-width:before {
  content: "\e051";
}
.glyphicon-align-left:before {
  content: "\e052";
}
.glyphicon-align-center:before {
  content: "\e053";
}
.glyphicon-align-right:before {
  content: "\e054";
}
.glyphicon-align-justify:before {
  content: "\e055";
}
.glyphicon-list:before {
  content: "\e056";
}
.glyphicon-indent-left:before {
  content: "\e057";
}
.glyphicon-indent-right:before {
  content: "\e058";
}
.glyphicon-facetime-video:before {
  content: "\e059";
}
.glyphicon-picture:before {
  content: "\e060";
}
.glyphicon-map-marker:before {
  content: "\e062";
}
.glyphicon-adjust:before {
  content: "\e063";
}
.glyphicon-tint:before {
  content: "\e064";
}
.glyphicon-edit:before {
  content: "\e065";
}
.glyphicon-share:before {
  content: "\e066";
}
.glyphicon-check:before {
  content: "\e067";
}
.glyphicon-move:before {
  content: "\e068";
}
.glyphicon-step-backward:before {
  content: "\e069";
}
.glyphicon-fast-backward:before {
  content: "\e070";
}
.glyphicon-backward:before {
  content: "\e071";
}
.glyphicon-play:before {
  content: "\e072";
}
.glyphicon-pause:before {
  content: "\e073";
}
.glyphicon-stop:before {
  content: "\e074";
}
.glyphicon-forward:before {
  content: "\e075";
}
.glyphicon-fast-forward:before {
  content: "\e076";
}
.glyphicon-step-forward:before {
  content: "\e077";
}
.glyphicon-eject:before {
  content: "\e078";
}
.glyphicon-chevron-left:before {
  content: "\e079";
}
.glyphicon-chevron-right:before {
  content: "\e080";
}
.glyphicon-plus-sign:before {
  content: "\e081";
}
.glyphicon-minus-sign:before {
  content: "\e082";
}
.glyphicon-remove-sign:before {
  content: "\e083";
}
.glyphicon-ok-sign:before {
  content: "\e084";
}
.glyphicon-question-sign:before {
  content: "\e085";
}
.glyphicon-info-sign:before {
  content: "\e086";
}
.glyphicon-screenshot:before {
  content: "\e087";
}
.glyphicon-remove-circle:before {
  content: "\e088";
}
.glyphicon-ok-circle:before {
  content: "\e089";
}
.glyphicon-ban-circle:before {
  content: "\e090";
}
.glyphicon-arrow-left:before {
  content: "\e091";
}
.glyphicon-arrow-right:before {
  content: "\e092";
}
.glyphicon-arrow-up:before {
  content: "\e093";
}
.glyphicon-arrow-down:before {
  content: "\e094";
}
.glyphicon-share-alt:before {
  content: "\e095";
}
.glyphicon-resize-full:before {
  content: "\e096";
}
.glyphicon-resize-small:before {
  content: "\e097";
}
.glyphicon-exclamation-sign:before {
  content: "\e101";
}
.glyphicon-gift:before {
  content: "\e102";
}
.glyphicon-leaf:before {
  content: "\e103";
}
.glyphicon-fire:before {
  content: "\e104";
}
.glyphicon-eye-open:before {
  content: "\e105";
}
.glyphicon-eye-close:before {
  content: "\e106";
}
.glyphicon-warning-sign:before {
  content: "\e107";
}
.glyphicon-plane:before {
  content: "\e108";
}
.glyphicon-calendar:before {
  content: "\e109";
}
.glyphicon-random:before {
  content: "\e110";
}
.glyphicon-comment:before {
  content: "\e111";
}
.glyphicon-magnet:before {
  content: "\e112";
}
.glyphicon-chevron-up:before {
  content: "\e113";
}
.glyphicon-chevron-down:before {
  content: "\e114";
}
.glyphicon-retweet:before {
  content: "\e115";
}
.glyphicon-shopping-cart:before {
  content: "\e116";
}
.glyphicon-folder-close:before {
  content: "\e117";
}
.glyphicon-folder-open:before {
  content: "\e118";
}
.glyphicon-resize-vertical:before {
  content: "\e119";
}
.glyphicon-resize-horizontal:before {
  content: "\e120";
}
.glyphicon-hdd:before {
  content: "\e121";
}
.glyphicon-bullhorn:before {
  content: "\e122";
}
.glyphicon-bell:before {
  content: "\e123";
}
.glyphicon-certificate:before {
  content: "\e124";
}
.glyphicon-thumbs-up:before {
  content: "\e125";
}
.glyphicon-thumbs-down:before {
  content: "\e126";
}
.glyphicon-hand-right:before {
  content: "\e127";
}
.glyphicon-hand-left:before {
  content: "\e128";
}
.glyphicon-hand-up:before {
  content: "\e129";
}
.glyphicon-hand-down:before {
  content: "\e130";
}
.glyphicon-circle-arrow-right:before {
  content: "\e131";
}
.glyphicon-circle-arrow-left:before {
  content: "\e132";
}
.glyphicon-circle-arrow-up:before {
  content: "\e133";
}
.glyphicon-circle-arrow-down:before {
  content: "\e134";
}
.glyphicon-globe:before {
  content: "\e135";
}
.glyphicon-wrench:before {
  content: "\e136";
}
.glyphicon-tasks:before {
  content: "\e137";
}
.glyphicon-filter:before {
  content: "\e138";
}
.glyphicon-briefcase:before {
  content: "\e139";
}
.glyphicon-fullscreen:before {
  content: "\e140";
}
.glyphicon-dashboard:before {
  content: "\e141";
}
.glyphicon-paperclip:before {
  content: "\e142";
}
.glyphicon-heart-empty:before {
  content: "\e143";
}
.glyphicon-link:before {
  content: "\e144";
}
.glyphicon-phone:before {
  content: "\e145";
}
.glyphicon-pushpin:before {
  content: "\e146";
}
.glyphicon-usd:before {
  content: "\e148";
}
.glyphicon-gbp:before {
  content: "\e149";
}
.glyphicon-sort:before {
  content: "\e150";
}
.glyphicon-sort-by-alphabet:before {
  content: "\e151";
}
.glyphicon-sort-by-alphabet-alt:before {
  content: "\e152";
}
.glyphicon-sort-by-order:before {
  content: "\e153";
}
.glyphicon-sort-by-order-alt:before {
  content: "\e154";
}
.glyphicon-sort-by-attributes:before {
  content: "\e155";
}
.glyphicon-sort-by-attributes-alt:before {
  content: "\e156";
}
.glyphicon-unchecked:before {
  content: "\e157";
}
.glyphicon-expand:before {
  content: "\e158";
}
.glyphicon-collapse-down:before {
  content: "\e159";
}
.glyphicon-collapse-up:before {
  content: "\e160";
}
.glyphicon-log-in:before {
  content: "\e161";
}
.glyphicon-flash:before {
  content: "\e162";
}
.glyphicon-log-out:before {
  content: "\e163";
}
.glyphicon-new-window:before {
  content: "\e164";
}
.glyphicon-record:before {
  content: "\e165";
}
.glyphicon-save:before {
  content: "\e166";
}
.glyphicon-open:before {
  content: "\e167";
}
.glyphicon-saved:before {
  content: "\e168";
}
.glyphicon-import:before {
  content: "\e169";
}
.glyphicon-export:before {
  content: "\e170";
}
.glyphicon-send:before {
  content: "\e171";
}
.glyphicon-floppy-disk:before {
  content: "\e172";
}
.glyphicon-floppy-saved:before {
  content: "\e173";
}
.glyphicon-floppy-remove:before {
  content: "\e174";
}
.glyphicon-floppy-save:before {
  content: "\e175";
}
.glyphicon-floppy-open:before {
  content: "\e176";
}
.glyphicon-credit-card:before {
  content: "\e177";
}
.glyphicon-transfer:before {
  content: "\e178";
}
.glyphicon-cutlery:before {
  content: "\e179";
}
.glyphicon-header:before {
  content: "\e180";
}
.glyphicon-compressed:before {
  content: "\e181";
}
.glyphicon-earphone:before {
  content: "\e182";
}
.glyphicon-phone-alt:before {
  content: "\e183";
}
.glyphicon-tower:before {
  content: "\e184";
}
.glyphicon-stats:before {
  content: "\e185";
}
.glyphicon-sd-video:before {
  content: "\e186";
}
.glyphicon-hd-video:before {
  content: "\e187";
}
.glyphicon-subtitles:before {
  content: "\e188";
}
.glyphicon-sound-stereo:before {
  content: "\e189";
}
.glyphicon-sound-dolby:before {
  content: "\e190";
}
.glyphicon-sound-5-1:before {
  content: "\e191";
}
.glyphicon-sound-6-1:before {
  content: "\e192";
}
.glyphicon-sound-7-1:before {
  content: "\e193";
}
.glyphicon-copyright-mark:before {
  content: "\e194";
}
.glyphicon-registration-mark:before {
  content: "\e195";
}
.glyphicon-cloud-download:before {
  content: "\e197";
}
.glyphicon-cloud-upload:before {
  content: "\e198";
}
.glyphicon-tree-conifer:before {
  content: "\e199";
}
.glyphicon-tree-deciduous:before {
  content: "\e200";
}
.glyphicon-cd:before {
  content: "\e201";
}
.glyphicon-save-file:before {
  content: "\e202";
}
.glyphicon-open-file:before {
  content: "\e203";
}
.glyphicon-level-up:before {
  content: "\e204";
}
.glyphicon-copy:before {
  content: "\e205";
}
.glyphicon-paste:before {
  content: "\e206";
}
.glyphicon-alert:before {
  content: "\e209";
}
.glyphicon-equalizer:before {
  content: "\e210";
}
.glyphicon-king:before {
  content: "\e211";
}
.glyphicon-queen:before {
  content: "\e212";
}
.glyphicon-pawn:before {
  content: "\e213";
}
.glyphicon-bishop:before {
  content: "\e214";
}
.glyphicon-knight:before {
  content: "\e215";
}
.glyphicon-baby-formula:before {
  content: "\e216";
}
.glyphicon-tent:before {
  content: "\26fa";
}
.glyphicon-blackboard:before {
  content: "\e218";
}
.glyphicon-bed:before {
  content: "\e219";
}
.glyphicon-apple:before {
  content: "\f8ff";
}
.glyphicon-erase:before {
  content: "\e221";
}
.glyphicon-hourglass:before {
  content: "\231b";
}
.glyphicon-lamp:before {
  content: "\e223";
}
.glyphicon-duplicate:before {
  content: "\e224";
}
.glyphicon-piggy-bank:before {
  content: "\e225";
}
.glyphicon-scissors:before {
  content: "\e226";
}
.glyphicon-bitcoin:before {
  content: "\e227";
}
.glyphicon-btc:before {
  content: "\e227";
}
.glyphicon-xbt:before {
  content: "\e227";
}
.glyphicon-yen:before {
  content: "\00a5";
}
.glyphicon-jpy:before {
  content: "\00a5";
}
.glyphicon-ruble:before {
  content: "\20bd";
}
.glyphicon-rub:before {
  content: "\20bd";
}
.glyphicon-scale:before {
  content: "\e230";
}
.glyphicon-ice-lolly:before {
  content: "\e231";
}
.glyphicon-ice-lolly-tasted:before {
  content: "\e232";
}
.glyphicon-education:before {
  content: "\e233";
}
.glyphicon-option-horizontal:before {
  content: "\e234";
}
.glyphicon-option-vertical:before {
  content: "\e235";
}
.glyphicon-menu-hamburger:before {
  content: "\e236";
}
.glyphicon-modal-window:before {
  content: "\e237";
}
.glyphicon-oil:before {
  content: "\e238";
}
.glyphicon-grain:before {
  content: "\e239";
}
.glyphicon-sunglasses:before {
  content: "\e240";
}
.glyphicon-text-size:before {
  content: "\e241";
}
.glyphicon-text-color:before {
  content: "\e242";
}
.glyphicon-text-background:before {
  content: "\e243";
}
.glyphicon-object-align-top:before {
  content: "\e244";
}
.glyphicon-object-align-bottom:before {
  content: "\e245";
}
.glyphicon-object-align-horizontal:before {
  content: "\e246";
}
.glyphicon-object-align-left:before {
  content: "\e247";
}
.glyphicon-object-align-vertical:before {
  content: "\e248";
}
.glyphicon-object-align-right:before {
  content: "\e249";
}
.glyphicon-triangle-right:before {
  content: "\e250";
}
.glyphicon-triangle-left:before {
  content: "\e251";
}
.glyphicon-triangle-bottom:before {
  content: "\e252";
}
.glyphicon-triangle-top:before {
  content: "\e253";
}
.glyphicon-console:before {
  content: "\e254";
}
.glyphicon-superscript:before {
  content: "\e255";
}
.glyphicon-subscript:before {
  content: "\e256";
}
.glyphicon-menu-left:before {
  content: "\e257";
}
.glyphicon-menu-right:before {
  content: "\e258";
}
.glyphicon-menu-down:before {
  content: "\e259";
}
.glyphicon-menu-up:before {
  content: "\e260";
}
* {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
*:before,
*:after {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
html {
  font-size: 10px;
  -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
}
body {
  font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
  font-size: 13px;
  line-height: 1.42857143;
  color: #000;
  background-color: #fff;
}
input,
button,
select,
textarea {
  font-family: inherit;
  font-size: inherit;
  line-height: inherit;
}
a {
  color: #337ab7;
  text-decoration: none;
}
a:hover,
a:focus {
  color: #23527c;
  text-decoration: underline;
}
a:focus {
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}
figure {
  margin: 0;
}
img {
  vertical-align: middle;
}
.img-responsive,
.thumbnail > img,
.thumbnail a > img,
.carousel-inner > .item > img,
.carousel-inner > .item > a > img {
  display: block;
  max-width: 100%;
  height: auto;
}
.img-rounded {
  border-radius: 3px;
}
.img-thumbnail {
  padding: 4px;
  line-height: 1.42857143;
  background-color: #fff;
  border: 1px solid #ddd;
  border-radius: 2px;
  -webkit-transition: all 0.2s ease-in-out;
  -o-transition: all 0.2s ease-in-out;
  transition: all 0.2s ease-in-out;
  display: inline-block;
  max-width: 100%;
  height: auto;
}
.img-circle {
  border-radius: 50%;
}
hr {
  margin-top: 18px;
  margin-bottom: 18px;
  border: 0;
  border-top: 1px solid #eeeeee;
}
.sr-only {
  position: absolute;
  width: 1px;
  height: 1px;
  margin: -1px;
  padding: 0;
  overflow: hidden;
  clip: rect(0, 0, 0, 0);
  border: 0;
}
.sr-only-focusable:active,
.sr-only-focusable:focus {
  position: static;
  width: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  clip: auto;
}
[role="button"] {
  cursor: pointer;
}
h1,
h2,
h3,
h4,
h5,
h6,
.h1,
.h2,
.h3,
.h4,
.h5,
.h6 {
  font-family: inherit;
  font-weight: 500;
  line-height: 1.1;
  color: inherit;
}
h1 small,
h2 small,
h3 small,
h4 small,
h5 small,
h6 small,
.h1 small,
.h2 small,
.h3 small,
.h4 small,
.h5 small,
.h6 small,
h1 .small,
h2 .small,
h3 .small,
h4 .small,
h5 .small,
h6 .small,
.h1 .small,
.h2 .small,
.h3 .small,
.h4 .small,
.h5 .small,
.h6 .small {
  font-weight: normal;
  line-height: 1;
  color: #777777;
}
h1,
.h1,
h2,
.h2,
h3,
.h3 {
  margin-top: 18px;
  margin-bottom: 9px;
}
h1 small,
.h1 small,
h2 small,
.h2 small,
h3 small,
.h3 small,
h1 .small,
.h1 .small,
h2 .small,
.h2 .small,
h3 .small,
.h3 .small {
  font-size: 65%;
}
h4,
.h4,
h5,
.h5,
h6,
.h6 {
  margin-top: 9px;
  margin-bottom: 9px;
}
h4 small,
.h4 small,
h5 small,
.h5 small,
h6 small,
.h6 small,
h4 .small,
.h4 .small,
h5 .small,
.h5 .small,
h6 .small,
.h6 .small {
  font-size: 75%;
}
h1,
.h1 {
  font-size: 33px;
}
h2,
.h2 {
  font-size: 27px;
}
h3,
.h3 {
  font-size: 23px;
}
h4,
.h4 {
  font-size: 17px;
}
h5,
.h5 {
  font-size: 13px;
}
h6,
.h6 {
  font-size: 12px;
}
p {
  margin: 0 0 9px;
}
.lead {
  margin-bottom: 18px;
  font-size: 14px;
  font-weight: 300;
  line-height: 1.4;
}
@media (min-width: 768px) {
  .lead {
    font-size: 19.5px;
  }
}
small,
.small {
  font-size: 92%;
}
mark,
.mark {
  background-color: #fcf8e3;
  padding: .2em;
}
.text-left {
  text-align: left;
}
.text-right {
  text-align: right;
}
.text-center {
  text-align: center;
}
.text-justify {
  text-align: justify;
}
.text-nowrap {
  white-space: nowrap;
}
.text-lowercase {
  text-transform: lowercase;
}
.text-uppercase {
  text-transform: uppercase;
}
.text-capitalize {
  text-transform: capitalize;
}
.text-muted {
  color: #777777;
}
.text-primary {
  color: #337ab7;
}
a.text-primary:hover,
a.text-primary:focus {
  color: #286090;
}
.text-success {
  color: #3c763d;
}
a.text-success:hover,
a.text-success:focus {
  color: #2b542c;
}
.text-info {
  color: #31708f;
}
a.text-info:hover,
a.text-info:focus {
  color: #245269;
}
.text-warning {
  color: #8a6d3b;
}
a.text-warning:hover,
a.text-warning:focus {
  color: #66512c;
}
.text-danger {
  color: #a94442;
}
a.text-danger:hover,
a.text-danger:focus {
  color: #843534;
}
.bg-primary {
  color: #fff;
  background-color: #337ab7;
}
a.bg-primary:hover,
a.bg-primary:focus {
  background-color: #286090;
}
.bg-success {
  background-color: #dff0d8;
}
a.bg-success:hover,
a.bg-success:focus {
  background-color: #c1e2b3;
}
.bg-info {
  background-color: #d9edf7;
}
a.bg-info:hover,
a.bg-info:focus {
  background-color: #afd9ee;
}
.bg-warning {
  background-color: #fcf8e3;
}
a.bg-warning:hover,
a.bg-warning:focus {
  background-color: #f7ecb5;
}
.bg-danger {
  background-color: #f2dede;
}
a.bg-danger:hover,
a.bg-danger:focus {
  background-color: #e4b9b9;
}
.page-header {
  padding-bottom: 8px;
  margin: 36px 0 18px;
  border-bottom: 1px solid #eeeeee;
}
ul,
ol {
  margin-top: 0;
  margin-bottom: 9px;
}
ul ul,
ol ul,
ul ol,
ol ol {
  margin-bottom: 0;
}
.list-unstyled {
  padding-left: 0;
  list-style: none;
}
.list-inline {
  padding-left: 0;
  list-style: none;
  margin-left: -5px;
}
.list-inline > li {
  display: inline-block;
  padding-left: 5px;
  padding-right: 5px;
}
dl {
  margin-top: 0;
  margin-bottom: 18px;
}
dt,
dd {
  line-height: 1.42857143;
}
dt {
  font-weight: bold;
}
dd {
  margin-left: 0;
}
@media (min-width: 541px) {
  .dl-horizontal dt {
    float: left;
    width: 160px;
    clear: left;
    text-align: right;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap;
  }
  .dl-horizontal dd {
    margin-left: 180px;
  }
}
abbr[title],
abbr[data-original-title] {
  cursor: help;
  border-bottom: 1px dotted #777777;
}
.initialism {
  font-size: 90%;
  text-transform: uppercase;
}
blockquote {
  padding: 9px 18px;
  margin: 0 0 18px;
  font-size: inherit;
  border-left: 5px solid #eeeeee;
}
blockquote p:last-child,
blockquote ul:last-child,
blockquote ol:last-child {
  margin-bottom: 0;
}
blockquote footer,
blockquote small,
blockquote .small {
  display: block;
  font-size: 80%;
  line-height: 1.42857143;
  color: #777777;
}
blockquote footer:before,
blockquote small:before,
blockquote .small:before {
  content: '\2014 \00A0';
}
.blockquote-reverse,
blockquote.pull-right {
  padding-right: 15px;
  padding-left: 0;
  border-right: 5px solid #eeeeee;
  border-left: 0;
  text-align: right;
}
.blockquote-reverse footer:before,
blockquote.pull-right footer:before,
.blockquote-reverse small:before,
blockquote.pull-right small:before,
.blockquote-reverse .small:before,
blockquote.pull-right .small:before {
  content: '';
}
.blockquote-reverse footer:after,
blockquote.pull-right footer:after,
.blockquote-reverse small:after,
blockquote.pull-right small:after,
.blockquote-reverse .small:after,
blockquote.pull-right .small:after {
  content: '\00A0 \2014';
}
address {
  margin-bottom: 18px;
  font-style: normal;
  line-height: 1.42857143;
}
code,
kbd,
pre,
samp {
  font-family: monospace;
}
code {
  padding: 2px 4px;
  font-size: 90%;
  color: #c7254e;
  background-color: #f9f2f4;
  border-radius: 2px;
}
kbd {
  padding: 2px 4px;
  font-size: 90%;
  color: #888;
  background-color: transparent;
  border-radius: 1px;
  box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.25);
}
kbd kbd {
  padding: 0;
  font-size: 100%;
  font-weight: bold;
  box-shadow: none;
}
pre {
  display: block;
  padding: 8.5px;
  margin: 0 0 9px;
  font-size: 12px;
  line-height: 1.42857143;
  word-break: break-all;
  word-wrap: break-word;
  color: #333333;
  background-color: #f5f5f5;
  border: 1px solid #ccc;
  border-radius: 2px;
}
pre code {
  padding: 0;
  font-size: inherit;
  color: inherit;
  white-space: pre-wrap;
  background-color: transparent;
  border-radius: 0;
}
.pre-scrollable {
  max-height: 340px;
  overflow-y: scroll;
}
.container {
  margin-right: auto;
  margin-left: auto;
  padding-left: 0px;
  padding-right: 0px;
}
@media (min-width: 768px) {
  .container {
    width: 768px;
  }
}
@media (min-width: 992px) {
  .container {
    width: 940px;
  }
}
@media (min-width: 1200px) {
  .container {
    width: 1140px;
  }
}
.container-fluid {
  margin-right: auto;
  margin-left: auto;
  padding-left: 0px;
  padding-right: 0px;
}
.row {
  margin-left: 0px;
  margin-right: 0px;
}
.col-xs-1, .col-sm-1, .col-md-1, .col-lg-1, .col-xs-2, .col-sm-2, .col-md-2, .col-lg-2, .col-xs-3, .col-sm-3, .col-md-3, .col-lg-3, .col-xs-4, .col-sm-4, .col-md-4, .col-lg-4, .col-xs-5, .col-sm-5, .col-md-5, .col-lg-5, .col-xs-6, .col-sm-6, .col-md-6, .col-lg-6, .col-xs-7, .col-sm-7, .col-md-7, .col-lg-7, .col-xs-8, .col-sm-8, .col-md-8, .col-lg-8, .col-xs-9, .col-sm-9, .col-md-9, .col-lg-9, .col-xs-10, .col-sm-10, .col-md-10, .col-lg-10, .col-xs-11, .col-sm-11, .col-md-11, .col-lg-11, .col-xs-12, .col-sm-12, .col-md-12, .col-lg-12 {
  position: relative;
  min-height: 1px;
  padding-left: 0px;
  padding-right: 0px;
}
.col-xs-1, .col-xs-2, .col-xs-3, .col-xs-4, .col-xs-5, .col-xs-6, .col-xs-7, .col-xs-8, .col-xs-9, .col-xs-10, .col-xs-11, .col-xs-12 {
  float: left;
}
.col-xs-12 {
  width: 100%;
}
.col-xs-11 {
  width: 91.66666667%;
}
.col-xs-10 {
  width: 83.33333333%;
}
.col-xs-9 {
  width: 75%;
}
.col-xs-8 {
  width: 66.66666667%;
}
.col-xs-7 {
  width: 58.33333333%;
}
.col-xs-6 {
  width: 50%;
}
.col-xs-5 {
  width: 41.66666667%;
}
.col-xs-4 {
  width: 33.33333333%;
}
.col-xs-3 {
  width: 25%;
}
.col-xs-2 {
  width: 16.66666667%;
}
.col-xs-1 {
  width: 8.33333333%;
}
.col-xs-pull-12 {
  right: 100%;
}
.col-xs-pull-11 {
  right: 91.66666667%;
}
.col-xs-pull-10 {
  right: 83.33333333%;
}
.col-xs-pull-9 {
  right: 75%;
}
.col-xs-pull-8 {
  right: 66.66666667%;
}
.col-xs-pull-7 {
  right: 58.33333333%;
}
.col-xs-pull-6 {
  right: 50%;
}
.col-xs-pull-5 {
  right: 41.66666667%;
}
.col-xs-pull-4 {
  right: 33.33333333%;
}
.col-xs-pull-3 {
  right: 25%;
}
.col-xs-pull-2 {
  right: 16.66666667%;
}
.col-xs-pull-1 {
  right: 8.33333333%;
}
.col-xs-pull-0 {
  right: auto;
}
.col-xs-push-12 {
  left: 100%;
}
.col-xs-push-11 {
  left: 91.66666667%;
}
.col-xs-push-10 {
  left: 83.33333333%;
}
.col-xs-push-9 {
  left: 75%;
}
.col-xs-push-8 {
  left: 66.66666667%;
}
.col-xs-push-7 {
  left: 58.33333333%;
}
.col-xs-push-6 {
  left: 50%;
}
.col-xs-push-5 {
  left: 41.66666667%;
}
.col-xs-push-4 {
  left: 33.33333333%;
}
.col-xs-push-3 {
  left: 25%;
}
.col-xs-push-2 {
  left: 16.66666667%;
}
.col-xs-push-1 {
  left: 8.33333333%;
}
.col-xs-push-0 {
  left: auto;
}
.col-xs-offset-12 {
  margin-left: 100%;
}
.col-xs-offset-11 {
  margin-left: 91.66666667%;
}
.col-xs-offset-10 {
  margin-left: 83.33333333%;
}
.col-xs-offset-9 {
  margin-left: 75%;
}
.col-xs-offset-8 {
  margin-left: 66.66666667%;
}
.col-xs-offset-7 {
  margin-left: 58.33333333%;
}
.col-xs-offset-6 {
  margin-left: 50%;
}
.col-xs-offset-5 {
  margin-left: 41.66666667%;
}
.col-xs-offset-4 {
  margin-left: 33.33333333%;
}
.col-xs-offset-3 {
  margin-left: 25%;
}
.col-xs-offset-2 {
  margin-left: 16.66666667%;
}
.col-xs-offset-1 {
  margin-left: 8.33333333%;
}
.col-xs-offset-0 {
  margin-left: 0%;
}
@media (min-width: 768px) {
  .col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12 {
    float: left;
  }
  .col-sm-12 {
    width: 100%;
  }
  .col-sm-11 {
    width: 91.66666667%;
  }
  .col-sm-10 {
    width: 83.33333333%;
  }
  .col-sm-9 {
    width: 75%;
  }
  .col-sm-8 {
    width: 66.66666667%;
  }
  .col-sm-7 {
    width: 58.33333333%;
  }
  .col-sm-6 {
    width: 50%;
  }
  .col-sm-5 {
    width: 41.66666667%;
  }
  .col-sm-4 {
    width: 33.33333333%;
  }
  .col-sm-3 {
    width: 25%;
  }
  .col-sm-2 {
    width: 16.66666667%;
  }
  .col-sm-1 {
    width: 8.33333333%;
  }
  .col-sm-pull-12 {
    right: 100%;
  }
  .col-sm-pull-11 {
    right: 91.66666667%;
  }
  .col-sm-pull-10 {
    right: 83.33333333%;
  }
  .col-sm-pull-9 {
    right: 75%;
  }
  .col-sm-pull-8 {
    right: 66.66666667%;
  }
  .col-sm-pull-7 {
    right: 58.33333333%;
  }
  .col-sm-pull-6 {
    right: 50%;
  }
  .col-sm-pull-5 {
    right: 41.66666667%;
  }
  .col-sm-pull-4 {
    right: 33.33333333%;
  }
  .col-sm-pull-3 {
    right: 25%;
  }
  .col-sm-pull-2 {
    right: 16.66666667%;
  }
  .col-sm-pull-1 {
    right: 8.33333333%;
  }
  .col-sm-pull-0 {
    right: auto;
  }
  .col-sm-push-12 {
    left: 100%;
  }
  .col-sm-push-11 {
    left: 91.66666667%;
  }
  .col-sm-push-10 {
    left: 83.33333333%;
  }
  .col-sm-push-9 {
    left: 75%;
  }
  .col-sm-push-8 {
    left: 66.66666667%;
  }
  .col-sm-push-7 {
    left: 58.33333333%;
  }
  .col-sm-push-6 {
    left: 50%;
  }
  .col-sm-push-5 {
    left: 41.66666667%;
  }
  .col-sm-push-4 {
    left: 33.33333333%;
  }
  .col-sm-push-3 {
    left: 25%;
  }
  .col-sm-push-2 {
    left: 16.66666667%;
  }
  .col-sm-push-1 {
    left: 8.33333333%;
  }
  .col-sm-push-0 {
    left: auto;
  }
  .col-sm-offset-12 {
    margin-left: 100%;
  }
  .col-sm-offset-11 {
    margin-left: 91.66666667%;
  }
  .col-sm-offset-10 {
    margin-left: 83.33333333%;
  }
  .col-sm-offset-9 {
    margin-left: 75%;
  }
  .col-sm-offset-8 {
    margin-left: 66.66666667%;
  }
  .col-sm-offset-7 {
    margin-left: 58.33333333%;
  }
  .col-sm-offset-6 {
    margin-left: 50%;
  }
  .col-sm-offset-5 {
    margin-left: 41.66666667%;
  }
  .col-sm-offset-4 {
    margin-left: 33.33333333%;
  }
  .col-sm-offset-3 {
    margin-left: 25%;
  }
  .col-sm-offset-2 {
    margin-left: 16.66666667%;
  }
  .col-sm-offset-1 {
    margin-left: 8.33333333%;
  }
  .col-sm-offset-0 {
    margin-left: 0%;
  }
}
@media (min-width: 992px) {
  .col-md-1, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-10, .col-md-11, .col-md-12 {
    float: left;
  }
  .col-md-12 {
    width: 100%;
  }
  .col-md-11 {
    width: 91.66666667%;
  }
  .col-md-10 {
    width: 83.33333333%;
  }
  .col-md-9 {
    width: 75%;
  }
  .col-md-8 {
    width: 66.66666667%;
  }
  .col-md-7 {
    width: 58.33333333%;
  }
  .col-md-6 {
    width: 50%;
  }
  .col-md-5 {
    width: 41.66666667%;
  }
  .col-md-4 {
    width: 33.33333333%;
  }
  .col-md-3 {
    width: 25%;
  }
  .col-md-2 {
    width: 16.66666667%;
  }
  .col-md-1 {
    width: 8.33333333%;
  }
  .col-md-pull-12 {
    right: 100%;
  }
  .col-md-pull-11 {
    right: 91.66666667%;
  }
  .col-md-pull-10 {
    right: 83.33333333%;
  }
  .col-md-pull-9 {
    right: 75%;
  }
  .col-md-pull-8 {
    right: 66.66666667%;
  }
  .col-md-pull-7 {
    right: 58.33333333%;
  }
  .col-md-pull-6 {
    right: 50%;
  }
  .col-md-pull-5 {
    right: 41.66666667%;
  }
  .col-md-pull-4 {
    right: 33.33333333%;
  }
  .col-md-pull-3 {
    right: 25%;
  }
  .col-md-pull-2 {
    right: 16.66666667%;
  }
  .col-md-pull-1 {
    right: 8.33333333%;
  }
  .col-md-pull-0 {
    right: auto;
  }
  .col-md-push-12 {
    left: 100%;
  }
  .col-md-push-11 {
    left: 91.66666667%;
  }
  .col-md-push-10 {
    left: 83.33333333%;
  }
  .col-md-push-9 {
    left: 75%;
  }
  .col-md-push-8 {
    left: 66.66666667%;
  }
  .col-md-push-7 {
    left: 58.33333333%;
  }
  .col-md-push-6 {
    left: 50%;
  }
  .col-md-push-5 {
    left: 41.66666667%;
  }
  .col-md-push-4 {
    left: 33.33333333%;
  }
  .col-md-push-3 {
    left: 25%;
  }
  .col-md-push-2 {
    left: 16.66666667%;
  }
  .col-md-push-1 {
    left: 8.33333333%;
  }
  .col-md-push-0 {
    left: auto;
  }
  .col-md-offset-12 {
    margin-left: 100%;
  }
  .col-md-offset-11 {
    margin-left: 91.66666667%;
  }
  .col-md-offset-10 {
    margin-left: 83.33333333%;
  }
  .col-md-offset-9 {
    margin-left: 75%;
  }
  .col-md-offset-8 {
    margin-left: 66.66666667%;
  }
  .col-md-offset-7 {
    margin-left: 58.33333333%;
  }
  .col-md-offset-6 {
    margin-left: 50%;
  }
  .col-md-offset-5 {
    margin-left: 41.66666667%;
  }
  .col-md-offset-4 {
    margin-left: 33.33333333%;
  }
  .col-md-offset-3 {
    margin-left: 25%;
  }
  .col-md-offset-2 {
    margin-left: 16.66666667%;
  }
  .col-md-offset-1 {
    margin-left: 8.33333333%;
  }
  .col-md-offset-0 {
    margin-left: 0%;
  }
}
@media (min-width: 1200px) {
  .col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12 {
    float: left;
  }
  .col-lg-12 {
    width: 100%;
  }
  .col-lg-11 {
    width: 91.66666667%;
  }
  .col-lg-10 {
    width: 83.33333333%;
  }
  .col-lg-9 {
    width: 75%;
  }
  .col-lg-8 {
    width: 66.66666667%;
  }
  .col-lg-7 {
    width: 58.33333333%;
  }
  .col-lg-6 {
    width: 50%;
  }
  .col-lg-5 {
    width: 41.66666667%;
  }
  .col-lg-4 {
    width: 33.33333333%;
  }
  .col-lg-3 {
    width: 25%;
  }
  .col-lg-2 {
    width: 16.66666667%;
  }
  .col-lg-1 {
    width: 8.33333333%;
  }
  .col-lg-pull-12 {
    right: 100%;
  }
  .col-lg-pull-11 {
    right: 91.66666667%;
  }
  .col-lg-pull-10 {
    right: 83.33333333%;
  }
  .col-lg-pull-9 {
    right: 75%;
  }
  .col-lg-pull-8 {
    right: 66.66666667%;
  }
  .col-lg-pull-7 {
    right: 58.33333333%;
  }
  .col-lg-pull-6 {
    right: 50%;
  }
  .col-lg-pull-5 {
    right: 41.66666667%;
  }
  .col-lg-pull-4 {
    right: 33.33333333%;
  }
  .col-lg-pull-3 {
    right: 25%;
  }
  .col-lg-pull-2 {
    right: 16.66666667%;
  }
  .col-lg-pull-1 {
    right: 8.33333333%;
  }
  .col-lg-pull-0 {
    right: auto;
  }
  .col-lg-push-12 {
    left: 100%;
  }
  .col-lg-push-11 {
    left: 91.66666667%;
  }
  .col-lg-push-10 {
    left: 83.33333333%;
  }
  .col-lg-push-9 {
    left: 75%;
  }
  .col-lg-push-8 {
    left: 66.66666667%;
  }
  .col-lg-push-7 {
    left: 58.33333333%;
  }
  .col-lg-push-6 {
    left: 50%;
  }
  .col-lg-push-5 {
    left: 41.66666667%;
  }
  .col-lg-push-4 {
    left: 33.33333333%;
  }
  .col-lg-push-3 {
    left: 25%;
  }
  .col-lg-push-2 {
    left: 16.66666667%;
  }
  .col-lg-push-1 {
    left: 8.33333333%;
  }
  .col-lg-push-0 {
    left: auto;
  }
  .col-lg-offset-12 {
    margin-left: 100%;
  }
  .col-lg-offset-11 {
    margin-left: 91.66666667%;
  }
  .col-lg-offset-10 {
    margin-left: 83.33333333%;
  }
  .col-lg-offset-9 {
    margin-left: 75%;
  }
  .col-lg-offset-8 {
    margin-left: 66.66666667%;
  }
  .col-lg-offset-7 {
    margin-left: 58.33333333%;
  }
  .col-lg-offset-6 {
    margin-left: 50%;
  }
  .col-lg-offset-5 {
    margin-left: 41.66666667%;
  }
  .col-lg-offset-4 {
    margin-left: 33.33333333%;
  }
  .col-lg-offset-3 {
    margin-left: 25%;
  }
  .col-lg-offset-2 {
    margin-left: 16.66666667%;
  }
  .col-lg-offset-1 {
    margin-left: 8.33333333%;
  }
  .col-lg-offset-0 {
    margin-left: 0%;
  }
}
table {
  background-color: transparent;
}
caption {
  padding-top: 8px;
  padding-bottom: 8px;
  color: #777777;
  text-align: left;
}
th {
  text-align: left;
}
.table {
  width: 100%;
  max-width: 100%;
  margin-bottom: 18px;
}
.table > thead > tr > th,
.table > tbody > tr > th,
.table > tfoot > tr > th,
.table > thead > tr > td,
.table > tbody > tr > td,
.table > tfoot > tr > td {
  padding: 8px;
  line-height: 1.42857143;
  vertical-align: top;
  border-top: 1px solid #ddd;
}
.table > thead > tr > th {
  vertical-align: bottom;
  border-bottom: 2px solid #ddd;
}
.table > caption + thead > tr:first-child > th,
.table > colgroup + thead > tr:first-child > th,
.table > thead:first-child > tr:first-child > th,
.table > caption + thead > tr:first-child > td,
.table > colgroup + thead > tr:first-child > td,
.table > thead:first-child > tr:first-child > td {
  border-top: 0;
}
.table > tbody + tbody {
  border-top: 2px solid #ddd;
}
.table .table {
  background-color: #fff;
}
.table-condensed > thead > tr > th,
.table-condensed > tbody > tr > th,
.table-condensed > tfoot > tr > th,
.table-condensed > thead > tr > td,
.table-condensed > tbody > tr > td,
.table-condensed > tfoot > tr > td {
  padding: 5px;
}
.table-bordered {
  border: 1px solid #ddd;
}
.table-bordered > thead > tr > th,
.table-bordered > tbody > tr > th,
.table-bordered > tfoot > tr > th,
.table-bordered > thead > tr > td,
.table-bordered > tbody > tr > td,
.table-bordered > tfoot > tr > td {
  border: 1px solid #ddd;
}
.table-bordered > thead > tr > th,
.table-bordered > thead > tr > td {
  border-bottom-width: 2px;
}
.table-striped > tbody > tr:nth-of-type(odd) {
  background-color: #f9f9f9;
}
.table-hover > tbody > tr:hover {
  background-color: #f5f5f5;
}
table col[class*="col-"] {
  position: static;
  float: none;
  display: table-column;
}
table td[class*="col-"],
table th[class*="col-"] {
  position: static;
  float: none;
  display: table-cell;
}
.table > thead > tr > td.active,
.table > tbody > tr > td.active,
.table > tfoot > tr > td.active,
.table > thead > tr > th.active,
.table > tbody > tr > th.active,
.table > tfoot > tr > th.active,
.table > thead > tr.active > td,
.table > tbody > tr.active > td,
.table > tfoot > tr.active > td,
.table > thead > tr.active > th,
.table > tbody > tr.active > th,
.table > tfoot > tr.active > th {
  background-color: #f5f5f5;
}
.table-hover > tbody > tr > td.active:hover,
.table-hover > tbody > tr > th.active:hover,
.table-hover > tbody > tr.active:hover > td,
.table-hover > tbody > tr:hover > .active,
.table-hover > tbody > tr.active:hover > th {
  background-color: #e8e8e8;
}
.table > thead > tr > td.success,
.table > tbody > tr > td.success,
.table > tfoot > tr > td.success,
.table > thead > tr > th.success,
.table > tbody > tr > th.success,
.table > tfoot > tr > th.success,
.table > thead > tr.success > td,
.table > tbody > tr.success > td,
.table > tfoot > tr.success > td,
.table > thead > tr.success > th,
.table > tbody > tr.success > th,
.table > tfoot > tr.success > th {
  background-color: #dff0d8;
}
.table-hover > tbody > tr > td.success:hover,
.table-hover > tbody > tr > th.success:hover,
.table-hover > tbody > tr.success:hover > td,
.table-hover > tbody > tr:hover > .success,
.table-hover > tbody > tr.success:hover > th {
  background-color: #d0e9c6;
}
.table > thead > tr > td.info,
.table > tbody > tr > td.info,
.table > tfoot > tr > td.info,
.table > thead > tr > th.info,
.table > tbody > tr > th.info,
.table > tfoot > tr > th.info,
.table > thead > tr.info > td,
.table > tbody > tr.info > td,
.table > tfoot > tr.info > td,
.table > thead > tr.info > th,
.table > tbody > tr.info > th,
.table > tfoot > tr.info > th {
  background-color: #d9edf7;
}
.table-hover > tbody > tr > td.info:hover,
.table-hover > tbody > tr > th.info:hover,
.table-hover > tbody > tr.info:hover > td,
.table-hover > tbody > tr:hover > .info,
.table-hover > tbody > tr.info:hover > th {
  background-color: #c4e3f3;
}
.table > thead > tr > td.warning,
.table > tbody > tr > td.warning,
.table > tfoot > tr > td.warning,
.table > thead > tr > th.warning,
.table > tbody > tr > th.warning,
.table > tfoot > tr > th.warning,
.table > thead > tr.warning > td,
.table > tbody > tr.warning > td,
.table > tfoot > tr.warning > td,
.table > thead > tr.warning > th,
.table > tbody > tr.warning > th,
.table > tfoot > tr.warning > th {
  background-color: #fcf8e3;
}
.table-hover > tbody > tr > td.warning:hover,
.table-hover > tbody > tr > th.warning:hover,
.table-hover > tbody > tr.warning:hover > td,
.table-hover > tbody > tr:hover > .warning,
.table-hover > tbody > tr.warning:hover > th {
  background-color: #faf2cc;
}
.table > thead > tr > td.danger,
.table > tbody > tr > td.danger,
.table > tfoot > tr > td.danger,
.table > thead > tr > th.danger,
.table > tbody > tr > th.danger,
.table > tfoot > tr > th.danger,
.table > thead > tr.danger > td,
.table > tbody > tr.danger > td,
.table > tfoot > tr.danger > td,
.table > thead > tr.danger > th,
.table > tbody > tr.danger > th,
.table > tfoot > tr.danger > th {
  background-color: #f2dede;
}
.table-hover > tbody > tr > td.danger:hover,
.table-hover > tbody > tr > th.danger:hover,
.table-hover > tbody > tr.danger:hover > td,
.table-hover > tbody > tr:hover > .danger,
.table-hover > tbody > tr.danger:hover > th {
  background-color: #ebcccc;
}
.table-responsive {
  overflow-x: auto;
  min-height: 0.01%;
}
@media screen and (max-width: 767px) {
  .table-responsive {
    width: 100%;
    margin-bottom: 13.5px;
    overflow-y: hidden;
    -ms-overflow-style: -ms-autohiding-scrollbar;
    border: 1px solid #ddd;
  }
  .table-responsive > .table {
    margin-bottom: 0;
  }
  .table-responsive > .table > thead > tr > th,
  .table-responsive > .table > tbody > tr > th,
  .table-responsive > .table > tfoot > tr > th,
  .table-responsive > .table > thead > tr > td,
  .table-responsive > .table > tbody > tr > td,
  .table-responsive > .table > tfoot > tr > td {
    white-space: nowrap;
  }
  .table-responsive > .table-bordered {
    border: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:first-child,
  .table-responsive > .table-bordered > tbody > tr > th:first-child,
  .table-responsive > .table-bordered > tfoot > tr > th:first-child,
  .table-responsive > .table-bordered > thead > tr > td:first-child,
  .table-responsive > .table-bordered > tbody > tr > td:first-child,
  .table-responsive > .table-bordered > tfoot > tr > td:first-child {
    border-left: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:last-child,
  .table-responsive > .table-bordered > tbody > tr > th:last-child,
  .table-responsive > .table-bordered > tfoot > tr > th:last-child,
  .table-responsive > .table-bordered > thead > tr > td:last-child,
  .table-responsive > .table-bordered > tbody > tr > td:last-child,
  .table-responsive > .table-bordered > tfoot > tr > td:last-child {
    border-right: 0;
  }
  .table-responsive > .table-bordered > tbody > tr:last-child > th,
  .table-responsive > .table-bordered > tfoot > tr:last-child > th,
  .table-responsive > .table-bordered > tbody > tr:last-child > td,
  .table-responsive > .table-bordered > tfoot > tr:last-child > td {
    border-bottom: 0;
  }
}
fieldset {
  padding: 0;
  margin: 0;
  border: 0;
  min-width: 0;
}
legend {
  display: block;
  width: 100%;
  padding: 0;
  margin-bottom: 18px;
  font-size: 19.5px;
  line-height: inherit;
  color: #333333;
  border: 0;
  border-bottom: 1px solid #e5e5e5;
}
label {
  display: inline-block;
  max-width: 100%;
  margin-bottom: 5px;
  font-weight: bold;
}
input[type="search"] {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
input[type="radio"],
input[type="checkbox"] {
  margin: 4px 0 0;
  margin-top: 1px \9;
  line-height: normal;
}
input[type="file"] {
  display: block;
}
input[type="range"] {
  display: block;
  width: 100%;
}
select[multiple],
select[size] {
  height: auto;
}
input[type="file"]:focus,
input[type="radio"]:focus,
input[type="checkbox"]:focus {
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}
output {
  display: block;
  padding-top: 7px;
  font-size: 13px;
  line-height: 1.42857143;
  color: #555555;
}
.form-control {
  display: block;
  width: 100%;
  height: 32px;
  padding: 6px 12px;
  font-size: 13px;
  line-height: 1.42857143;
  color: #555555;
  background-color: #fff;
  background-image: none;
  border: 1px solid #ccc;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  -webkit-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  -o-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
}
.form-control:focus {
  border-color: #66afe9;
  outline: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
  box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
}
.form-control::-moz-placeholder {
  color: #999;
  opacity: 1;
}
.form-control:-ms-input-placeholder {
  color: #999;
}
.form-control::-webkit-input-placeholder {
  color: #999;
}
.form-control::-ms-expand {
  border: 0;
  background-color: transparent;
}
.form-control[disabled],
.form-control[readonly],
fieldset[disabled] .form-control {
  background-color: #eeeeee;
  opacity: 1;
}
.form-control[disabled],
fieldset[disabled] .form-control {
  cursor: not-allowed;
}
textarea.form-control {
  height: auto;
}
input[type="search"] {
  -webkit-appearance: none;
}
@media screen and (-webkit-min-device-pixel-ratio: 0) {
  input[type="date"].form-control,
  input[type="time"].form-control,
  input[type="datetime-local"].form-control,
  input[type="month"].form-control {
    line-height: 32px;
  }
  input[type="date"].input-sm,
  input[type="time"].input-sm,
  input[type="datetime-local"].input-sm,
  input[type="month"].input-sm,
  .input-group-sm input[type="date"],
  .input-group-sm input[type="time"],
  .input-group-sm input[type="datetime-local"],
  .input-group-sm input[type="month"] {
    line-height: 30px;
  }
  input[type="date"].input-lg,
  input[type="time"].input-lg,
  input[type="datetime-local"].input-lg,
  input[type="month"].input-lg,
  .input-group-lg input[type="date"],
  .input-group-lg input[type="time"],
  .input-group-lg input[type="datetime-local"],
  .input-group-lg input[type="month"] {
    line-height: 45px;
  }
}
.form-group {
  margin-bottom: 15px;
}
.radio,
.checkbox {
  position: relative;
  display: block;
  margin-top: 10px;
  margin-bottom: 10px;
}
.radio label,
.checkbox label {
  min-height: 18px;
  padding-left: 20px;
  margin-bottom: 0;
  font-weight: normal;
  cursor: pointer;
}
.radio input[type="radio"],
.radio-inline input[type="radio"],
.checkbox input[type="checkbox"],
.checkbox-inline input[type="checkbox"] {
  position: absolute;
  margin-left: -20px;
  margin-top: 4px \9;
}
.radio + .radio,
.checkbox + .checkbox {
  margin-top: -5px;
}
.radio-inline,
.checkbox-inline {
  position: relative;
  display: inline-block;
  padding-left: 20px;
  margin-bottom: 0;
  vertical-align: middle;
  font-weight: normal;
  cursor: pointer;
}
.radio-inline + .radio-inline,
.checkbox-inline + .checkbox-inline {
  margin-top: 0;
  margin-left: 10px;
}
input[type="radio"][disabled],
input[type="checkbox"][disabled],
input[type="radio"].disabled,
input[type="checkbox"].disabled,
fieldset[disabled] input[type="radio"],
fieldset[disabled] input[type="checkbox"] {
  cursor: not-allowed;
}
.radio-inline.disabled,
.checkbox-inline.disabled,
fieldset[disabled] .radio-inline,
fieldset[disabled] .checkbox-inline {
  cursor: not-allowed;
}
.radio.disabled label,
.checkbox.disabled label,
fieldset[disabled] .radio label,
fieldset[disabled] .checkbox label {
  cursor: not-allowed;
}
.form-control-static {
  padding-top: 7px;
  padding-bottom: 7px;
  margin-bottom: 0;
  min-height: 31px;
}
.form-control-static.input-lg,
.form-control-static.input-sm {
  padding-left: 0;
  padding-right: 0;
}
.input-sm {
  height: 30px;
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
}
select.input-sm {
  height: 30px;
  line-height: 30px;
}
textarea.input-sm,
select[multiple].input-sm {
  height: auto;
}
.form-group-sm .form-control {
  height: 30px;
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
}
.form-group-sm select.form-control {
  height: 30px;
  line-height: 30px;
}
.form-group-sm textarea.form-control,
.form-group-sm select[multiple].form-control {
  height: auto;
}
.form-group-sm .form-control-static {
  height: 30px;
  min-height: 30px;
  padding: 6px 10px;
  font-size: 12px;
  line-height: 1.5;
}
.input-lg {
  height: 45px;
  padding: 10px 16px;
  font-size: 17px;
  line-height: 1.3333333;
  border-radius: 3px;
}
select.input-lg {
  height: 45px;
  line-height: 45px;
}
textarea.input-lg,
select[multiple].input-lg {
  height: auto;
}
.form-group-lg .form-control {
  height: 45px;
  padding: 10px 16px;
  font-size: 17px;
  line-height: 1.3333333;
  border-radius: 3px;
}
.form-group-lg select.form-control {
  height: 45px;
  line-height: 45px;
}
.form-group-lg textarea.form-control,
.form-group-lg select[multiple].form-control {
  height: auto;
}
.form-group-lg .form-control-static {
  height: 45px;
  min-height: 35px;
  padding: 11px 16px;
  font-size: 17px;
  line-height: 1.3333333;
}
.has-feedback {
  position: relative;
}
.has-feedback .form-control {
  padding-right: 40px;
}
.form-control-feedback {
  position: absolute;
  top: 0;
  right: 0;
  z-index: 2;
  display: block;
  width: 32px;
  height: 32px;
  line-height: 32px;
  text-align: center;
  pointer-events: none;
}
.input-lg + .form-control-feedback,
.input-group-lg + .form-control-feedback,
.form-group-lg .form-control + .form-control-feedback {
  width: 45px;
  height: 45px;
  line-height: 45px;
}
.input-sm + .form-control-feedback,
.input-group-sm + .form-control-feedback,
.form-group-sm .form-control + .form-control-feedback {
  width: 30px;
  height: 30px;
  line-height: 30px;
}
.has-success .help-block,
.has-success .control-label,
.has-success .radio,
.has-success .checkbox,
.has-success .radio-inline,
.has-success .checkbox-inline,
.has-success.radio label,
.has-success.checkbox label,
.has-success.radio-inline label,
.has-success.checkbox-inline label {
  color: #3c763d;
}
.has-success .form-control {
  border-color: #3c763d;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}
.has-success .form-control:focus {
  border-color: #2b542c;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #67b168;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #67b168;
}
.has-success .input-group-addon {
  color: #3c763d;
  border-color: #3c763d;
  background-color: #dff0d8;
}
.has-success .form-control-feedback {
  color: #3c763d;
}
.has-warning .help-block,
.has-warning .control-label,
.has-warning .radio,
.has-warning .checkbox,
.has-warning .radio-inline,
.has-warning .checkbox-inline,
.has-warning.radio label,
.has-warning.checkbox label,
.has-warning.radio-inline label,
.has-warning.checkbox-inline label {
  color: #8a6d3b;
}
.has-warning .form-control {
  border-color: #8a6d3b;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}
.has-warning .form-control:focus {
  border-color: #66512c;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #c0a16b;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #c0a16b;
}
.has-warning .input-group-addon {
  color: #8a6d3b;
  border-color: #8a6d3b;
  background-color: #fcf8e3;
}
.has-warning .form-control-feedback {
  color: #8a6d3b;
}
.has-error .help-block,
.has-error .control-label,
.has-error .radio,
.has-error .checkbox,
.has-error .radio-inline,
.has-error .checkbox-inline,
.has-error.radio label,
.has-error.checkbox label,
.has-error.radio-inline label,
.has-error.checkbox-inline label {
  color: #a94442;
}
.has-error .form-control {
  border-color: #a94442;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}
.has-error .form-control:focus {
  border-color: #843534;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ce8483;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ce8483;
}
.has-error .input-group-addon {
  color: #a94442;
  border-color: #a94442;
  background-color: #f2dede;
}
.has-error .form-control-feedback {
  color: #a94442;
}
.has-feedback label ~ .form-control-feedback {
  top: 23px;
}
.has-feedback label.sr-only ~ .form-control-feedback {
  top: 0;
}
.help-block {
  display: block;
  margin-top: 5px;
  margin-bottom: 10px;
  color: #404040;
}
@media (min-width: 768px) {
  .form-inline .form-group {
    display: inline-block;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .form-control {
    display: inline-block;
    width: auto;
    vertical-align: middle;
  }
  .form-inline .form-control-static {
    display: inline-block;
  }
  .form-inline .input-group {
    display: inline-table;
    vertical-align: middle;
  }
  .form-inline .input-group .input-group-addon,
  .form-inline .input-group .input-group-btn,
  .form-inline .input-group .form-control {
    width: auto;
  }
  .form-inline .input-group > .form-control {
    width: 100%;
  }
  .form-inline .control-label {
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .radio,
  .form-inline .checkbox {
    display: inline-block;
    margin-top: 0;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .radio label,
  .form-inline .checkbox label {
    padding-left: 0;
  }
  .form-inline .radio input[type="radio"],
  .form-inline .checkbox input[type="checkbox"] {
    position: relative;
    margin-left: 0;
  }
  .form-inline .has-feedback .form-control-feedback {
    top: 0;
  }
}
.form-horizontal .radio,
.form-horizontal .checkbox,
.form-horizontal .radio-inline,
.form-horizontal .checkbox-inline {
  margin-top: 0;
  margin-bottom: 0;
  padding-top: 7px;
}
.form-horizontal .radio,
.form-horizontal .checkbox {
  min-height: 25px;
}
.form-horizontal .form-group {
  margin-left: 0px;
  margin-right: 0px;
}
@media (min-width: 768px) {
  .form-horizontal .control-label {
    text-align: right;
    margin-bottom: 0;
    padding-top: 7px;
  }
}
.form-horizontal .has-feedback .form-control-feedback {
  right: 0px;
}
@media (min-width: 768px) {
  .form-horizontal .form-group-lg .control-label {
    padding-top: 11px;
    font-size: 17px;
  }
}
@media (min-width: 768px) {
  .form-horizontal .form-group-sm .control-label {
    padding-top: 6px;
    font-size: 12px;
  }
}
.btn {
  display: inline-block;
  margin-bottom: 0;
  font-weight: normal;
  text-align: center;
  vertical-align: middle;
  touch-action: manipulation;
  cursor: pointer;
  background-image: none;
  border: 1px solid transparent;
  white-space: nowrap;
  padding: 6px 12px;
  font-size: 13px;
  line-height: 1.42857143;
  border-radius: 2px;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}
.btn:focus,
.btn:active:focus,
.btn.active:focus,
.btn.focus,
.btn:active.focus,
.btn.active.focus {
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}
.btn:hover,
.btn:focus,
.btn.focus {
  color: #333;
  text-decoration: none;
}
.btn:active,
.btn.active {
  outline: 0;
  background-image: none;
  -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
  box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
}
.btn.disabled,
.btn[disabled],
fieldset[disabled] .btn {
  cursor: not-allowed;
  opacity: 0.65;
  filter: alpha(opacity=65);
  -webkit-box-shadow: none;
  box-shadow: none;
}
a.btn.disabled,
fieldset[disabled] a.btn {
  pointer-events: none;
}
.btn-default {
  color: #333;
  background-color: #fff;
  border-color: #ccc;
}
.btn-default:focus,
.btn-default.focus {
  color: #333;
  background-color: #e6e6e6;
  border-color: #8c8c8c;
}
.btn-default:hover {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
.btn-default:active,
.btn-default.active,
.open > .dropdown-toggle.btn-default {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
.btn-default:active:hover,
.btn-default.active:hover,
.open > .dropdown-toggle.btn-default:hover,
.btn-default:active:focus,
.btn-default.active:focus,
.open > .dropdown-toggle.btn-default:focus,
.btn-default:active.focus,
.btn-default.active.focus,
.open > .dropdown-toggle.btn-default.focus {
  color: #333;
  background-color: #d4d4d4;
  border-color: #8c8c8c;
}
.btn-default:active,
.btn-default.active,
.open > .dropdown-toggle.btn-default {
  background-image: none;
}
.btn-default.disabled:hover,
.btn-default[disabled]:hover,
fieldset[disabled] .btn-default:hover,
.btn-default.disabled:focus,
.btn-default[disabled]:focus,
fieldset[disabled] .btn-default:focus,
.btn-default.disabled.focus,
.btn-default[disabled].focus,
fieldset[disabled] .btn-default.focus {
  background-color: #fff;
  border-color: #ccc;
}
.btn-default .badge {
  color: #fff;
  background-color: #333;
}
.btn-primary {
  color: #fff;
  background-color: #337ab7;
  border-color: #2e6da4;
}
.btn-primary:focus,
.btn-primary.focus {
  color: #fff;
  background-color: #286090;
  border-color: #122b40;
}
.btn-primary:hover {
  color: #fff;
  background-color: #286090;
  border-color: #204d74;
}
.btn-primary:active,
.btn-primary.active,
.open > .dropdown-toggle.btn-primary {
  color: #fff;
  background-color: #286090;
  border-color: #204d74;
}
.btn-primary:active:hover,
.btn-primary.active:hover,
.open > .dropdown-toggle.btn-primary:hover,
.btn-primary:active:focus,
.btn-primary.active:focus,
.open > .dropdown-toggle.btn-primary:focus,
.btn-primary:active.focus,
.btn-primary.active.focus,
.open > .dropdown-toggle.btn-primary.focus {
  color: #fff;
  background-color: #204d74;
  border-color: #122b40;
}
.btn-primary:active,
.btn-primary.active,
.open > .dropdown-toggle.btn-primary {
  background-image: none;
}
.btn-primary.disabled:hover,
.btn-primary[disabled]:hover,
fieldset[disabled] .btn-primary:hover,
.btn-primary.disabled:focus,
.btn-primary[disabled]:focus,
fieldset[disabled] .btn-primary:focus,
.btn-primary.disabled.focus,
.btn-primary[disabled].focus,
fieldset[disabled] .btn-primary.focus {
  background-color: #337ab7;
  border-color: #2e6da4;
}
.btn-primary .badge {
  color: #337ab7;
  background-color: #fff;
}
.btn-success {
  color: #fff;
  background-color: #5cb85c;
  border-color: #4cae4c;
}
.btn-success:focus,
.btn-success.focus {
  color: #fff;
  background-color: #449d44;
  border-color: #255625;
}
.btn-success:hover {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}
.btn-success:active,
.btn-success.active,
.open > .dropdown-toggle.btn-success {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}
.btn-success:active:hover,
.btn-success.active:hover,
.open > .dropdown-toggle.btn-success:hover,
.btn-success:active:focus,
.btn-success.active:focus,
.open > .dropdown-toggle.btn-success:focus,
.btn-success:active.focus,
.btn-success.active.focus,
.open > .dropdown-toggle.btn-success.focus {
  color: #fff;
  background-color: #398439;
  border-color: #255625;
}
.btn-success:active,
.btn-success.active,
.open > .dropdown-toggle.btn-success {
  background-image: none;
}
.btn-success.disabled:hover,
.btn-success[disabled]:hover,
fieldset[disabled] .btn-success:hover,
.btn-success.disabled:focus,
.btn-success[disabled]:focus,
fieldset[disabled] .btn-success:focus,
.btn-success.disabled.focus,
.btn-success[disabled].focus,
fieldset[disabled] .btn-success.focus {
  background-color: #5cb85c;
  border-color: #4cae4c;
}
.btn-success .badge {
  color: #5cb85c;
  background-color: #fff;
}
.btn-info {
  color: #fff;
  background-color: #5bc0de;
  border-color: #46b8da;
}
.btn-info:focus,
.btn-info.focus {
  color: #fff;
  background-color: #31b0d5;
  border-color: #1b6d85;
}
.btn-info:hover {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}
.btn-info:active,
.btn-info.active,
.open > .dropdown-toggle.btn-info {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}
.btn-info:active:hover,
.btn-info.active:hover,
.open > .dropdown-toggle.btn-info:hover,
.btn-info:active:focus,
.btn-info.active:focus,
.open > .dropdown-toggle.btn-info:focus,
.btn-info:active.focus,
.btn-info.active.focus,
.open > .dropdown-toggle.btn-info.focus {
  color: #fff;
  background-color: #269abc;
  border-color: #1b6d85;
}
.btn-info:active,
.btn-info.active,
.open > .dropdown-toggle.btn-info {
  background-image: none;
}
.btn-info.disabled:hover,
.btn-info[disabled]:hover,
fieldset[disabled] .btn-info:hover,
.btn-info.disabled:focus,
.btn-info[disabled]:focus,
fieldset[disabled] .btn-info:focus,
.btn-info.disabled.focus,
.btn-info[disabled].focus,
fieldset[disabled] .btn-info.focus {
  background-color: #5bc0de;
  border-color: #46b8da;
}
.btn-info .badge {
  color: #5bc0de;
  background-color: #fff;
}
.btn-warning {
  color: #fff;
  background-color: #f0ad4e;
  border-color: #eea236;
}
.btn-warning:focus,
.btn-warning.focus {
  color: #fff;
  background-color: #ec971f;
  border-color: #985f0d;
}
.btn-warning:hover {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}
.btn-warning:active,
.btn-warning.active,
.open > .dropdown-toggle.btn-warning {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}
.btn-warning:active:hover,
.btn-warning.active:hover,
.open > .dropdown-toggle.btn-warning:hover,
.btn-warning:active:focus,
.btn-warning.active:focus,
.open > .dropdown-toggle.btn-warning:focus,
.btn-warning:active.focus,
.btn-warning.active.focus,
.open > .dropdown-toggle.btn-warning.focus {
  color: #fff;
  background-color: #d58512;
  border-color: #985f0d;
}
.btn-warning:active,
.btn-warning.active,
.open > .dropdown-toggle.btn-warning {
  background-image: none;
}
.btn-warning.disabled:hover,
.btn-warning[disabled]:hover,
fieldset[disabled] .btn-warning:hover,
.btn-warning.disabled:focus,
.btn-warning[disabled]:focus,
fieldset[disabled] .btn-warning:focus,
.btn-warning.disabled.focus,
.btn-warning[disabled].focus,
fieldset[disabled] .btn-warning.focus {
  background-color: #f0ad4e;
  border-color: #eea236;
}
.btn-warning .badge {
  color: #f0ad4e;
  background-color: #fff;
}
.btn-danger {
  color: #fff;
  background-color: #d9534f;
  border-color: #d43f3a;
}
.btn-danger:focus,
.btn-danger.focus {
  color: #fff;
  background-color: #c9302c;
  border-color: #761c19;
}
.btn-danger:hover {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}
.btn-danger:active,
.btn-danger.active,
.open > .dropdown-toggle.btn-danger {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}
.btn-danger:active:hover,
.btn-danger.active:hover,
.open > .dropdown-toggle.btn-danger:hover,
.btn-danger:active:focus,
.btn-danger.active:focus,
.open > .dropdown-toggle.btn-danger:focus,
.btn-danger:active.focus,
.btn-danger.active.focus,
.open > .dropdown-toggle.btn-danger.focus {
  color: #fff;
  background-color: #ac2925;
  border-color: #761c19;
}
.btn-danger:active,
.btn-danger.active,
.open > .dropdown-toggle.btn-danger {
  background-image: none;
}
.btn-danger.disabled:hover,
.btn-danger[disabled]:hover,
fieldset[disabled] .btn-danger:hover,
.btn-danger.disabled:focus,
.btn-danger[disabled]:focus,
fieldset[disabled] .btn-danger:focus,
.btn-danger.disabled.focus,
.btn-danger[disabled].focus,
fieldset[disabled] .btn-danger.focus {
  background-color: #d9534f;
  border-color: #d43f3a;
}
.btn-danger .badge {
  color: #d9534f;
  background-color: #fff;
}
.btn-link {
  color: #337ab7;
  font-weight: normal;
  border-radius: 0;
}
.btn-link,
.btn-link:active,
.btn-link.active,
.btn-link[disabled],
fieldset[disabled] .btn-link {
  background-color: transparent;
  -webkit-box-shadow: none;
  box-shadow: none;
}
.btn-link,
.btn-link:hover,
.btn-link:focus,
.btn-link:active {
  border-color: transparent;
}
.btn-link:hover,
.btn-link:focus {
  color: #23527c;
  text-decoration: underline;
  background-color: transparent;
}
.btn-link[disabled]:hover,
fieldset[disabled] .btn-link:hover,
.btn-link[disabled]:focus,
fieldset[disabled] .btn-link:focus {
  color: #777777;
  text-decoration: none;
}
.btn-lg,
.btn-group-lg > .btn {
  padding: 10px 16px;
  font-size: 17px;
  line-height: 1.3333333;
  border-radius: 3px;
}
.btn-sm,
.btn-group-sm > .btn {
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
}
.btn-xs,
.btn-group-xs > .btn {
  padding: 1px 5px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
}
.btn-block {
  display: block;
  width: 100%;
}
.btn-block + .btn-block {
  margin-top: 5px;
}
input[type="submit"].btn-block,
input[type="reset"].btn-block,
input[type="button"].btn-block {
  width: 100%;
}
.fade {
  opacity: 0;
  -webkit-transition: opacity 0.15s linear;
  -o-transition: opacity 0.15s linear;
  transition: opacity 0.15s linear;
}
.fade.in {
  opacity: 1;
}
.collapse {
  display: none;
}
.collapse.in {
  display: block;
}
tr.collapse.in {
  display: table-row;
}
tbody.collapse.in {
  display: table-row-group;
}
.collapsing {
  position: relative;
  height: 0;
  overflow: hidden;
  -webkit-transition-property: height, visibility;
  transition-property: height, visibility;
  -webkit-transition-duration: 0.35s;
  transition-duration: 0.35s;
  -webkit-transition-timing-function: ease;
  transition-timing-function: ease;
}
.caret {
  display: inline-block;
  width: 0;
  height: 0;
  margin-left: 2px;
  vertical-align: middle;
  border-top: 4px dashed;
  border-top: 4px solid \9;
  border-right: 4px solid transparent;
  border-left: 4px solid transparent;
}
.dropup,
.dropdown {
  position: relative;
}
.dropdown-toggle:focus {
  outline: 0;
}
.dropdown-menu {
  position: absolute;
  top: 100%;
  left: 0;
  z-index: 1000;
  display: none;
  float: left;
  min-width: 160px;
  padding: 5px 0;
  margin: 2px 0 0;
  list-style: none;
  font-size: 13px;
  text-align: left;
  background-color: #fff;
  border: 1px solid #ccc;
  border: 1px solid rgba(0, 0, 0, 0.15);
  border-radius: 2px;
  -webkit-box-shadow: 0 6px 12px rgba(0, 0, 0, 0.175);
  box-shadow: 0 6px 12px rgba(0, 0, 0, 0.175);
  background-clip: padding-box;
}
.dropdown-menu.pull-right {
  right: 0;
  left: auto;
}
.dropdown-menu .divider {
  height: 1px;
  margin: 8px 0;
  overflow: hidden;
  background-color: #e5e5e5;
}
.dropdown-menu > li > a {
  display: block;
  padding: 3px 20px;
  clear: both;
  font-weight: normal;
  line-height: 1.42857143;
  color: #333333;
  white-space: nowrap;
}
.dropdown-menu > li > a:hover,
.dropdown-menu > li > a:focus {
  text-decoration: none;
  color: #262626;
  background-color: #f5f5f5;
}
.dropdown-menu > .active > a,
.dropdown-menu > .active > a:hover,
.dropdown-menu > .active > a:focus {
  color: #fff;
  text-decoration: none;
  outline: 0;
  background-color: #337ab7;
}
.dropdown-menu > .disabled > a,
.dropdown-menu > .disabled > a:hover,
.dropdown-menu > .disabled > a:focus {
  color: #777777;
}
.dropdown-menu > .disabled > a:hover,
.dropdown-menu > .disabled > a:focus {
  text-decoration: none;
  background-color: transparent;
  background-image: none;
  filter: progid:DXImageTransform.Microsoft.gradient(enabled = false);
  cursor: not-allowed;
}
.open > .dropdown-menu {
  display: block;
}
.open > a {
  outline: 0;
}
.dropdown-menu-right {
  left: auto;
  right: 0;
}
.dropdown-menu-left {
  left: 0;
  right: auto;
}
.dropdown-header {
  display: block;
  padding: 3px 20px;
  font-size: 12px;
  line-height: 1.42857143;
  color: #777777;
  white-space: nowrap;
}
.dropdown-backdrop {
  position: fixed;
  left: 0;
  right: 0;
  bottom: 0;
  top: 0;
  z-index: 990;
}
.pull-right > .dropdown-menu {
  right: 0;
  left: auto;
}
.dropup .caret,
.navbar-fixed-bottom .dropdown .caret {
  border-top: 0;
  border-bottom: 4px dashed;
  border-bottom: 4px solid \9;
  content: "";
}
.dropup .dropdown-menu,
.navbar-fixed-bottom .dropdown .dropdown-menu {
  top: auto;
  bottom: 100%;
  margin-bottom: 2px;
}
@media (min-width: 541px) {
  .navbar-right .dropdown-menu {
    left: auto;
    right: 0;
  }
  .navbar-right .dropdown-menu-left {
    left: 0;
    right: auto;
  }
}
.btn-group,
.btn-group-vertical {
  position: relative;
  display: inline-block;
  vertical-align: middle;
}
.btn-group > .btn,
.btn-group-vertical > .btn {
  position: relative;
  float: left;
}
.btn-group > .btn:hover,
.btn-group-vertical > .btn:hover,
.btn-group > .btn:focus,
.btn-group-vertical > .btn:focus,
.btn-group > .btn:active,
.btn-group-vertical > .btn:active,
.btn-group > .btn.active,
.btn-group-vertical > .btn.active {
  z-index: 2;
}
.btn-group .btn + .btn,
.btn-group .btn + .btn-group,
.btn-group .btn-group + .btn,
.btn-group .btn-group + .btn-group {
  margin-left: -1px;
}
.btn-toolbar {
  margin-left: -5px;
}
.btn-toolbar .btn,
.btn-toolbar .btn-group,
.btn-toolbar .input-group {
  float: left;
}
.btn-toolbar > .btn,
.btn-toolbar > .btn-group,
.btn-toolbar > .input-group {
  margin-left: 5px;
}
.btn-group > .btn:not(:first-child):not(:last-child):not(.dropdown-toggle) {
  border-radius: 0;
}
.btn-group > .btn:first-child {
  margin-left: 0;
}
.btn-group > .btn:first-child:not(:last-child):not(.dropdown-toggle) {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.btn-group > .btn:last-child:not(:first-child),
.btn-group > .dropdown-toggle:not(:first-child) {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.btn-group > .btn-group {
  float: left;
}
.btn-group > .btn-group:not(:first-child):not(:last-child) > .btn {
  border-radius: 0;
}
.btn-group > .btn-group:first-child:not(:last-child) > .btn:last-child,
.btn-group > .btn-group:first-child:not(:last-child) > .dropdown-toggle {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.btn-group > .btn-group:last-child:not(:first-child) > .btn:first-child {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.btn-group .dropdown-toggle:active,
.btn-group.open .dropdown-toggle {
  outline: 0;
}
.btn-group > .btn + .dropdown-toggle {
  padding-left: 8px;
  padding-right: 8px;
}
.btn-group > .btn-lg + .dropdown-toggle {
  padding-left: 12px;
  padding-right: 12px;
}
.btn-group.open .dropdown-toggle {
  -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
  box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
}
.btn-group.open .dropdown-toggle.btn-link {
  -webkit-box-shadow: none;
  box-shadow: none;
}
.btn .caret {
  margin-left: 0;
}
.btn-lg .caret {
  border-width: 5px 5px 0;
  border-bottom-width: 0;
}
.dropup .btn-lg .caret {
  border-width: 0 5px 5px;
}
.btn-group-vertical > .btn,
.btn-group-vertical > .btn-group,
.btn-group-vertical > .btn-group > .btn {
  display: block;
  float: none;
  width: 100%;
  max-width: 100%;
}
.btn-group-vertical > .btn-group > .btn {
  float: none;
}
.btn-group-vertical > .btn + .btn,
.btn-group-vertical > .btn + .btn-group,
.btn-group-vertical > .btn-group + .btn,
.btn-group-vertical > .btn-group + .btn-group {
  margin-top: -1px;
  margin-left: 0;
}
.btn-group-vertical > .btn:not(:first-child):not(:last-child) {
  border-radius: 0;
}
.btn-group-vertical > .btn:first-child:not(:last-child) {
  border-top-right-radius: 2px;
  border-top-left-radius: 2px;
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}
.btn-group-vertical > .btn:last-child:not(:first-child) {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
  border-bottom-right-radius: 2px;
  border-bottom-left-radius: 2px;
}
.btn-group-vertical > .btn-group:not(:first-child):not(:last-child) > .btn {
  border-radius: 0;
}
.btn-group-vertical > .btn-group:first-child:not(:last-child) > .btn:last-child,
.btn-group-vertical > .btn-group:first-child:not(:last-child) > .dropdown-toggle {
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}
.btn-group-vertical > .btn-group:last-child:not(:first-child) > .btn:first-child {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}
.btn-group-justified {
  display: table;
  width: 100%;
  table-layout: fixed;
  border-collapse: separate;
}
.btn-group-justified > .btn,
.btn-group-justified > .btn-group {
  float: none;
  display: table-cell;
  width: 1%;
}
.btn-group-justified > .btn-group .btn {
  width: 100%;
}
.btn-group-justified > .btn-group .dropdown-menu {
  left: auto;
}
[data-toggle="buttons"] > .btn input[type="radio"],
[data-toggle="buttons"] > .btn-group > .btn input[type="radio"],
[data-toggle="buttons"] > .btn input[type="checkbox"],
[data-toggle="buttons"] > .btn-group > .btn input[type="checkbox"] {
  position: absolute;
  clip: rect(0, 0, 0, 0);
  pointer-events: none;
}
.input-group {
  position: relative;
  display: table;
  border-collapse: separate;
}
.input-group[class*="col-"] {
  float: none;
  padding-left: 0;
  padding-right: 0;
}
.input-group .form-control {
  position: relative;
  z-index: 2;
  float: left;
  width: 100%;
  margin-bottom: 0;
}
.input-group .form-control:focus {
  z-index: 3;
}
.input-group-lg > .form-control,
.input-group-lg > .input-group-addon,
.input-group-lg > .input-group-btn > .btn {
  height: 45px;
  padding: 10px 16px;
  font-size: 17px;
  line-height: 1.3333333;
  border-radius: 3px;
}
select.input-group-lg > .form-control,
select.input-group-lg > .input-group-addon,
select.input-group-lg > .input-group-btn > .btn {
  height: 45px;
  line-height: 45px;
}
textarea.input-group-lg > .form-control,
textarea.input-group-lg > .input-group-addon,
textarea.input-group-lg > .input-group-btn > .btn,
select[multiple].input-group-lg > .form-control,
select[multiple].input-group-lg > .input-group-addon,
select[multiple].input-group-lg > .input-group-btn > .btn {
  height: auto;
}
.input-group-sm > .form-control,
.input-group-sm > .input-group-addon,
.input-group-sm > .input-group-btn > .btn {
  height: 30px;
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
}
select.input-group-sm > .form-control,
select.input-group-sm > .input-group-addon,
select.input-group-sm > .input-group-btn > .btn {
  height: 30px;
  line-height: 30px;
}
textarea.input-group-sm > .form-control,
textarea.input-group-sm > .input-group-addon,
textarea.input-group-sm > .input-group-btn > .btn,
select[multiple].input-group-sm > .form-control,
select[multiple].input-group-sm > .input-group-addon,
select[multiple].input-group-sm > .input-group-btn > .btn {
  height: auto;
}
.input-group-addon,
.input-group-btn,
.input-group .form-control {
  display: table-cell;
}
.input-group-addon:not(:first-child):not(:last-child),
.input-group-btn:not(:first-child):not(:last-child),
.input-group .form-control:not(:first-child):not(:last-child) {
  border-radius: 0;
}
.input-group-addon,
.input-group-btn {
  width: 1%;
  white-space: nowrap;
  vertical-align: middle;
}
.input-group-addon {
  padding: 6px 12px;
  font-size: 13px;
  font-weight: normal;
  line-height: 1;
  color: #555555;
  text-align: center;
  background-color: #eeeeee;
  border: 1px solid #ccc;
  border-radius: 2px;
}
.input-group-addon.input-sm {
  padding: 5px 10px;
  font-size: 12px;
  border-radius: 1px;
}
.input-group-addon.input-lg {
  padding: 10px 16px;
  font-size: 17px;
  border-radius: 3px;
}
.input-group-addon input[type="radio"],
.input-group-addon input[type="checkbox"] {
  margin-top: 0;
}
.input-group .form-control:first-child,
.input-group-addon:first-child,
.input-group-btn:first-child > .btn,
.input-group-btn:first-child > .btn-group > .btn,
.input-group-btn:first-child > .dropdown-toggle,
.input-group-btn:last-child > .btn:not(:last-child):not(.dropdown-toggle),
.input-group-btn:last-child > .btn-group:not(:last-child) > .btn {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.input-group-addon:first-child {
  border-right: 0;
}
.input-group .form-control:last-child,
.input-group-addon:last-child,
.input-group-btn:last-child > .btn,
.input-group-btn:last-child > .btn-group > .btn,
.input-group-btn:last-child > .dropdown-toggle,
.input-group-btn:first-child > .btn:not(:first-child),
.input-group-btn:first-child > .btn-group:not(:first-child) > .btn {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.input-group-addon:last-child {
  border-left: 0;
}
.input-group-btn {
  position: relative;
  font-size: 0;
  white-space: nowrap;
}
.input-group-btn > .btn {
  position: relative;
}
.input-group-btn > .btn + .btn {
  margin-left: -1px;
}
.input-group-btn > .btn:hover,
.input-group-btn > .btn:focus,
.input-group-btn > .btn:active {
  z-index: 2;
}
.input-group-btn:first-child > .btn,
.input-group-btn:first-child > .btn-group {
  margin-right: -1px;
}
.input-group-btn:last-child > .btn,
.input-group-btn:last-child > .btn-group {
  z-index: 2;
  margin-left: -1px;
}
.nav {
  margin-bottom: 0;
  padding-left: 0;
  list-style: none;
}
.nav > li {
  position: relative;
  display: block;
}
.nav > li > a {
  position: relative;
  display: block;
  padding: 10px 15px;
}
.nav > li > a:hover,
.nav > li > a:focus {
  text-decoration: none;
  background-color: #eeeeee;
}
.nav > li.disabled > a {
  color: #777777;
}
.nav > li.disabled > a:hover,
.nav > li.disabled > a:focus {
  color: #777777;
  text-decoration: none;
  background-color: transparent;
  cursor: not-allowed;
}
.nav .open > a,
.nav .open > a:hover,
.nav .open > a:focus {
  background-color: #eeeeee;
  border-color: #337ab7;
}
.nav .nav-divider {
  height: 1px;
  margin: 8px 0;
  overflow: hidden;
  background-color: #e5e5e5;
}
.nav > li > a > img {
  max-width: none;
}
.nav-tabs {
  border-bottom: 1px solid #ddd;
}
.nav-tabs > li {
  float: left;
  margin-bottom: -1px;
}
.nav-tabs > li > a {
  margin-right: 2px;
  line-height: 1.42857143;
  border: 1px solid transparent;
  border-radius: 2px 2px 0 0;
}
.nav-tabs > li > a:hover {
  border-color: #eeeeee #eeeeee #ddd;
}
.nav-tabs > li.active > a,
.nav-tabs > li.active > a:hover,
.nav-tabs > li.active > a:focus {
  color: #555555;
  background-color: #fff;
  border: 1px solid #ddd;
  border-bottom-color: transparent;
  cursor: default;
}
.nav-tabs.nav-justified {
  width: 100%;
  border-bottom: 0;
}
.nav-tabs.nav-justified > li {
  float: none;
}
.nav-tabs.nav-justified > li > a {
  text-align: center;
  margin-bottom: 5px;
}
.nav-tabs.nav-justified > .dropdown .dropdown-menu {
  top: auto;
  left: auto;
}
@media (min-width: 768px) {
  .nav-tabs.nav-justified > li {
    display: table-cell;
    width: 1%;
  }
  .nav-tabs.nav-justified > li > a {
    margin-bottom: 0;
  }
}
.nav-tabs.nav-justified > li > a {
  margin-right: 0;
  border-radius: 2px;
}
.nav-tabs.nav-justified > .active > a,
.nav-tabs.nav-justified > .active > a:hover,
.nav-tabs.nav-justified > .active > a:focus {
  border: 1px solid #ddd;
}
@media (min-width: 768px) {
  .nav-tabs.nav-justified > li > a {
    border-bottom: 1px solid #ddd;
    border-radius: 2px 2px 0 0;
  }
  .nav-tabs.nav-justified > .active > a,
  .nav-tabs.nav-justified > .active > a:hover,
  .nav-tabs.nav-justified > .active > a:focus {
    border-bottom-color: #fff;
  }
}
.nav-pills > li {
  float: left;
}
.nav-pills > li > a {
  border-radius: 2px;
}
.nav-pills > li + li {
  margin-left: 2px;
}
.nav-pills > li.active > a,
.nav-pills > li.active > a:hover,
.nav-pills > li.active > a:focus {
  color: #fff;
  background-color: #337ab7;
}
.nav-stacked > li {
  float: none;
}
.nav-stacked > li + li {
  margin-top: 2px;
  margin-left: 0;
}
.nav-justified {
  width: 100%;
}
.nav-justified > li {
  float: none;
}
.nav-justified > li > a {
  text-align: center;
  margin-bottom: 5px;
}
.nav-justified > .dropdown .dropdown-menu {
  top: auto;
  left: auto;
}
@media (min-width: 768px) {
  .nav-justified > li {
    display: table-cell;
    width: 1%;
  }
  .nav-justified > li > a {
    margin-bottom: 0;
  }
}
.nav-tabs-justified {
  border-bottom: 0;
}
.nav-tabs-justified > li > a {
  margin-right: 0;
  border-radius: 2px;
}
.nav-tabs-justified > .active > a,
.nav-tabs-justified > .active > a:hover,
.nav-tabs-justified > .active > a:focus {
  border: 1px solid #ddd;
}
@media (min-width: 768px) {
  .nav-tabs-justified > li > a {
    border-bottom: 1px solid #ddd;
    border-radius: 2px 2px 0 0;
  }
  .nav-tabs-justified > .active > a,
  .nav-tabs-justified > .active > a:hover,
  .nav-tabs-justified > .active > a:focus {
    border-bottom-color: #fff;
  }
}
.tab-content > .tab-pane {
  display: none;
}
.tab-content > .active {
  display: block;
}
.nav-tabs .dropdown-menu {
  margin-top: -1px;
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}
.navbar {
  position: relative;
  min-height: 30px;
  margin-bottom: 18px;
  border: 1px solid transparent;
}
@media (min-width: 541px) {
  .navbar {
    border-radius: 2px;
  }
}
@media (min-width: 541px) {
  .navbar-header {
    float: left;
  }
}
.navbar-collapse {
  overflow-x: visible;
  padding-right: 0px;
  padding-left: 0px;
  border-top: 1px solid transparent;
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1);
  -webkit-overflow-scrolling: touch;
}
.navbar-collapse.in {
  overflow-y: auto;
}
@media (min-width: 541px) {
  .navbar-collapse {
    width: auto;
    border-top: 0;
    box-shadow: none;
  }
  .navbar-collapse.collapse {
    display: block !important;
    height: auto !important;
    padding-bottom: 0;
    overflow: visible !important;
  }
  .navbar-collapse.in {
    overflow-y: visible;
  }
  .navbar-fixed-top .navbar-collapse,
  .navbar-static-top .navbar-collapse,
  .navbar-fixed-bottom .navbar-collapse {
    padding-left: 0;
    padding-right: 0;
  }
}
.navbar-fixed-top .navbar-collapse,
.navbar-fixed-bottom .navbar-collapse {
  max-height: 340px;
}
@media (max-device-width: 540px) and (orientation: landscape) {
  .navbar-fixed-top .navbar-collapse,
  .navbar-fixed-bottom .navbar-collapse {
    max-height: 200px;
  }
}
.container > .navbar-header,
.container-fluid > .navbar-header,
.container > .navbar-collapse,
.container-fluid > .navbar-collapse {
  margin-right: 0px;
  margin-left: 0px;
}
@media (min-width: 541px) {
  .container > .navbar-header,
  .container-fluid > .navbar-header,
  .container > .navbar-collapse,
  .container-fluid > .navbar-collapse {
    margin-right: 0;
    margin-left: 0;
  }
}
.navbar-static-top {
  z-index: 1000;
  border-width: 0 0 1px;
}
@media (min-width: 541px) {
  .navbar-static-top {
    border-radius: 0;
  }
}
.navbar-fixed-top,
.navbar-fixed-bottom {
  position: fixed;
  right: 0;
  left: 0;
  z-index: 1030;
}
@media (min-width: 541px) {
  .navbar-fixed-top,
  .navbar-fixed-bottom {
    border-radius: 0;
  }
}
.navbar-fixed-top {
  top: 0;
  border-width: 0 0 1px;
}
.navbar-fixed-bottom {
  bottom: 0;
  margin-bottom: 0;
  border-width: 1px 0 0;
}
.navbar-brand {
  float: left;
  padding: 6px 0px;
  font-size: 17px;
  line-height: 18px;
  height: 30px;
}
.navbar-brand:hover,
.navbar-brand:focus {
  text-decoration: none;
}
.navbar-brand > img {
  display: block;
}
@media (min-width: 541px) {
  .navbar > .container .navbar-brand,
  .navbar > .container-fluid .navbar-brand {
    margin-left: 0px;
  }
}
.navbar-toggle {
  position: relative;
  float: right;
  margin-right: 0px;
  padding: 9px 10px;
  margin-top: -2px;
  margin-bottom: -2px;
  background-color: transparent;
  background-image: none;
  border: 1px solid transparent;
  border-radius: 2px;
}
.navbar-toggle:focus {
  outline: 0;
}
.navbar-toggle .icon-bar {
  display: block;
  width: 22px;
  height: 2px;
  border-radius: 1px;
}
.navbar-toggle .icon-bar + .icon-bar {
  margin-top: 4px;
}
@media (min-width: 541px) {
  .navbar-toggle {
    display: none;
  }
}
.navbar-nav {
  margin: 3px 0px;
}
.navbar-nav > li > a {
  padding-top: 10px;
  padding-bottom: 10px;
  line-height: 18px;
}
@media (max-width: 540px) {
  .navbar-nav .open .dropdown-menu {
    position: static;
    float: none;
    width: auto;
    margin-top: 0;
    background-color: transparent;
    border: 0;
    box-shadow: none;
  }
  .navbar-nav .open .dropdown-menu > li > a,
  .navbar-nav .open .dropdown-menu .dropdown-header {
    padding: 5px 15px 5px 25px;
  }
  .navbar-nav .open .dropdown-menu > li > a {
    line-height: 18px;
  }
  .navbar-nav .open .dropdown-menu > li > a:hover,
  .navbar-nav .open .dropdown-menu > li > a:focus {
    background-image: none;
  }
}
@media (min-width: 541px) {
  .navbar-nav {
    float: left;
    margin: 0;
  }
  .navbar-nav > li {
    float: left;
  }
  .navbar-nav > li > a {
    padding-top: 6px;
    padding-bottom: 6px;
  }
}
.navbar-form {
  margin-left: 0px;
  margin-right: 0px;
  padding: 10px 0px;
  border-top: 1px solid transparent;
  border-bottom: 1px solid transparent;
  -webkit-box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1), 0 1px 0 rgba(255, 255, 255, 0.1);
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1), 0 1px 0 rgba(255, 255, 255, 0.1);
  margin-top: -1px;
  margin-bottom: -1px;
}
@media (min-width: 768px) {
  .navbar-form .form-group {
    display: inline-block;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .form-control {
    display: inline-block;
    width: auto;
    vertical-align: middle;
  }
  .navbar-form .form-control-static {
    display: inline-block;
  }
  .navbar-form .input-group {
    display: inline-table;
    vertical-align: middle;
  }
  .navbar-form .input-group .input-group-addon,
  .navbar-form .input-group .input-group-btn,
  .navbar-form .input-group .form-control {
    width: auto;
  }
  .navbar-form .input-group > .form-control {
    width: 100%;
  }
  .navbar-form .control-label {
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .radio,
  .navbar-form .checkbox {
    display: inline-block;
    margin-top: 0;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .radio label,
  .navbar-form .checkbox label {
    padding-left: 0;
  }
  .navbar-form .radio input[type="radio"],
  .navbar-form .checkbox input[type="checkbox"] {
    position: relative;
    margin-left: 0;
  }
  .navbar-form .has-feedback .form-control-feedback {
    top: 0;
  }
}
@media (max-width: 540px) {
  .navbar-form .form-group {
    margin-bottom: 5px;
  }
  .navbar-form .form-group:last-child {
    margin-bottom: 0;
  }
}
@media (min-width: 541px) {
  .navbar-form {
    width: auto;
    border: 0;
    margin-left: 0;
    margin-right: 0;
    padding-top: 0;
    padding-bottom: 0;
    -webkit-box-shadow: none;
    box-shadow: none;
  }
}
.navbar-nav > li > .dropdown-menu {
  margin-top: 0;
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}
.navbar-fixed-bottom .navbar-nav > li > .dropdown-menu {
  margin-bottom: 0;
  border-top-right-radius: 2px;
  border-top-left-radius: 2px;
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}
.navbar-btn {
  margin-top: -1px;
  margin-bottom: -1px;
}
.navbar-btn.btn-sm {
  margin-top: 0px;
  margin-bottom: 0px;
}
.navbar-btn.btn-xs {
  margin-top: 4px;
  margin-bottom: 4px;
}
.navbar-text {
  margin-top: 6px;
  margin-bottom: 6px;
}
@media (min-width: 541px) {
  .navbar-text {
    float: left;
    margin-left: 0px;
    margin-right: 0px;
  }
}
@media (min-width: 541px) {
  .navbar-left {
    float: left !important;
    float: left;
  }
  .navbar-right {
    float: right !important;
    float: right;
    margin-right: 0px;
  }
  .navbar-right ~ .navbar-right {
    margin-right: 0;
  }
}
.navbar-default {
  background-color: #f8f8f8;
  border-color: #e7e7e7;
}
.navbar-default .navbar-brand {
  color: #777;
}
.navbar-default .navbar-brand:hover,
.navbar-default .navbar-brand:focus {
  color: #5e5e5e;
  background-color: transparent;
}
.navbar-default .navbar-text {
  color: #777;
}
.navbar-default .navbar-nav > li > a {
  color: #777;
}
.navbar-default .navbar-nav > li > a:hover,
.navbar-default .navbar-nav > li > a:focus {
  color: #333;
  background-color: transparent;
}
.navbar-default .navbar-nav > .active > a,
.navbar-default .navbar-nav > .active > a:hover,
.navbar-default .navbar-nav > .active > a:focus {
  color: #555;
  background-color: #e7e7e7;
}
.navbar-default .navbar-nav > .disabled > a,
.navbar-default .navbar-nav > .disabled > a:hover,
.navbar-default .navbar-nav > .disabled > a:focus {
  color: #ccc;
  background-color: transparent;
}
.navbar-default .navbar-toggle {
  border-color: #ddd;
}
.navbar-default .navbar-toggle:hover,
.navbar-default .navbar-toggle:focus {
  background-color: #ddd;
}
.navbar-default .navbar-toggle .icon-bar {
  background-color: #888;
}
.navbar-default .navbar-collapse,
.navbar-default .navbar-form {
  border-color: #e7e7e7;
}
.navbar-default .navbar-nav > .open > a,
.navbar-default .navbar-nav > .open > a:hover,
.navbar-default .navbar-nav > .open > a:focus {
  background-color: #e7e7e7;
  color: #555;
}
@media (max-width: 540px) {
  .navbar-default .navbar-nav .open .dropdown-menu > li > a {
    color: #777;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > li > a:hover,
  .navbar-default .navbar-nav .open .dropdown-menu > li > a:focus {
    color: #333;
    background-color: transparent;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a,
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover,
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a:focus {
    color: #555;
    background-color: #e7e7e7;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a,
  .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a:hover,
  .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a:focus {
    color: #ccc;
    background-color: transparent;
  }
}
.navbar-default .navbar-link {
  color: #777;
}
.navbar-default .navbar-link:hover {
  color: #333;
}
.navbar-default .btn-link {
  color: #777;
}
.navbar-default .btn-link:hover,
.navbar-default .btn-link:focus {
  color: #333;
}
.navbar-default .btn-link[disabled]:hover,
fieldset[disabled] .navbar-default .btn-link:hover,
.navbar-default .btn-link[disabled]:focus,
fieldset[disabled] .navbar-default .btn-link:focus {
  color: #ccc;
}
.navbar-inverse {
  background-color: #222;
  border-color: #080808;
}
.navbar-inverse .navbar-brand {
  color: #9d9d9d;
}
.navbar-inverse .navbar-brand:hover,
.navbar-inverse .navbar-brand:focus {
  color: #fff;
  background-color: transparent;
}
.navbar-inverse .navbar-text {
  color: #9d9d9d;
}
.navbar-inverse .navbar-nav > li > a {
  color: #9d9d9d;
}
.navbar-inverse .navbar-nav > li > a:hover,
.navbar-inverse .navbar-nav > li > a:focus {
  color: #fff;
  background-color: transparent;
}
.navbar-inverse .navbar-nav > .active > a,
.navbar-inverse .navbar-nav > .active > a:hover,
.navbar-inverse .navbar-nav > .active > a:focus {
  color: #fff;
  background-color: #080808;
}
.navbar-inverse .navbar-nav > .disabled > a,
.navbar-inverse .navbar-nav > .disabled > a:hover,
.navbar-inverse .navbar-nav > .disabled > a:focus {
  color: #444;
  background-color: transparent;
}
.navbar-inverse .navbar-toggle {
  border-color: #333;
}
.navbar-inverse .navbar-toggle:hover,
.navbar-inverse .navbar-toggle:focus {
  background-color: #333;
}
.navbar-inverse .navbar-toggle .icon-bar {
  background-color: #fff;
}
.navbar-inverse .navbar-collapse,
.navbar-inverse .navbar-form {
  border-color: #101010;
}
.navbar-inverse .navbar-nav > .open > a,
.navbar-inverse .navbar-nav > .open > a:hover,
.navbar-inverse .navbar-nav > .open > a:focus {
  background-color: #080808;
  color: #fff;
}
@media (max-width: 540px) {
  .navbar-inverse .navbar-nav .open .dropdown-menu > .dropdown-header {
    border-color: #080808;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu .divider {
    background-color: #080808;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > li > a {
    color: #9d9d9d;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > li > a:hover,
  .navbar-inverse .navbar-nav .open .dropdown-menu > li > a:focus {
    color: #fff;
    background-color: transparent;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a,
  .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a:hover,
  .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a:focus {
    color: #fff;
    background-color: #080808;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a,
  .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:hover,
  .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:focus {
    color: #444;
    background-color: transparent;
  }
}
.navbar-inverse .navbar-link {
  color: #9d9d9d;
}
.navbar-inverse .navbar-link:hover {
  color: #fff;
}
.navbar-inverse .btn-link {
  color: #9d9d9d;
}
.navbar-inverse .btn-link:hover,
.navbar-inverse .btn-link:focus {
  color: #fff;
}
.navbar-inverse .btn-link[disabled]:hover,
fieldset[disabled] .navbar-inverse .btn-link:hover,
.navbar-inverse .btn-link[disabled]:focus,
fieldset[disabled] .navbar-inverse .btn-link:focus {
  color: #444;
}
.breadcrumb {
  padding: 8px 15px;
  margin-bottom: 18px;
  list-style: none;
  background-color: #f5f5f5;
  border-radius: 2px;
}
.breadcrumb > li {
  display: inline-block;
}
.breadcrumb > li + li:before {
  content: "/\00a0";
  padding: 0 5px;
  color: #5e5e5e;
}
.breadcrumb > .active {
  color: #777777;
}
.pagination {
  display: inline-block;
  padding-left: 0;
  margin: 18px 0;
  border-radius: 2px;
}
.pagination > li {
  display: inline;
}
.pagination > li > a,
.pagination > li > span {
  position: relative;
  float: left;
  padding: 6px 12px;
  line-height: 1.42857143;
  text-decoration: none;
  color: #337ab7;
  background-color: #fff;
  border: 1px solid #ddd;
  margin-left: -1px;
}
.pagination > li:first-child > a,
.pagination > li:first-child > span {
  margin-left: 0;
  border-bottom-left-radius: 2px;
  border-top-left-radius: 2px;
}
.pagination > li:last-child > a,
.pagination > li:last-child > span {
  border-bottom-right-radius: 2px;
  border-top-right-radius: 2px;
}
.pagination > li > a:hover,
.pagination > li > span:hover,
.pagination > li > a:focus,
.pagination > li > span:focus {
  z-index: 2;
  color: #23527c;
  background-color: #eeeeee;
  border-color: #ddd;
}
.pagination > .active > a,
.pagination > .active > span,
.pagination > .active > a:hover,
.pagination > .active > span:hover,
.pagination > .active > a:focus,
.pagination > .active > span:focus {
  z-index: 3;
  color: #fff;
  background-color: #337ab7;
  border-color: #337ab7;
  cursor: default;
}
.pagination > .disabled > span,
.pagination > .disabled > span:hover,
.pagination > .disabled > span:focus,
.pagination > .disabled > a,
.pagination > .disabled > a:hover,
.pagination > .disabled > a:focus {
  color: #777777;
  background-color: #fff;
  border-color: #ddd;
  cursor: not-allowed;
}
.pagination-lg > li > a,
.pagination-lg > li > span {
  padding: 10px 16px;
  font-size: 17px;
  line-height: 1.3333333;
}
.pagination-lg > li:first-child > a,
.pagination-lg > li:first-child > span {
  border-bottom-left-radius: 3px;
  border-top-left-radius: 3px;
}
.pagination-lg > li:last-child > a,
.pagination-lg > li:last-child > span {
  border-bottom-right-radius: 3px;
  border-top-right-radius: 3px;
}
.pagination-sm > li > a,
.pagination-sm > li > span {
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
}
.pagination-sm > li:first-child > a,
.pagination-sm > li:first-child > span {
  border-bottom-left-radius: 1px;
  border-top-left-radius: 1px;
}
.pagination-sm > li:last-child > a,
.pagination-sm > li:last-child > span {
  border-bottom-right-radius: 1px;
  border-top-right-radius: 1px;
}
.pager {
  padding-left: 0;
  margin: 18px 0;
  list-style: none;
  text-align: center;
}
.pager li {
  display: inline;
}
.pager li > a,
.pager li > span {
  display: inline-block;
  padding: 5px 14px;
  background-color: #fff;
  border: 1px solid #ddd;
  border-radius: 15px;
}
.pager li > a:hover,
.pager li > a:focus {
  text-decoration: none;
  background-color: #eeeeee;
}
.pager .next > a,
.pager .next > span {
  float: right;
}
.pager .previous > a,
.pager .previous > span {
  float: left;
}
.pager .disabled > a,
.pager .disabled > a:hover,
.pager .disabled > a:focus,
.pager .disabled > span {
  color: #777777;
  background-color: #fff;
  cursor: not-allowed;
}
.label {
  display: inline;
  padding: .2em .6em .3em;
  font-size: 75%;
  font-weight: bold;
  line-height: 1;
  color: #fff;
  text-align: center;
  white-space: nowrap;
  vertical-align: baseline;
  border-radius: .25em;
}
a.label:hover,
a.label:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}
.label:empty {
  display: none;
}
.btn .label {
  position: relative;
  top: -1px;
}
.label-default {
  background-color: #777777;
}
.label-default[href]:hover,
.label-default[href]:focus {
  background-color: #5e5e5e;
}
.label-primary {
  background-color: #337ab7;
}
.label-primary[href]:hover,
.label-primary[href]:focus {
  background-color: #286090;
}
.label-success {
  background-color: #5cb85c;
}
.label-success[href]:hover,
.label-success[href]:focus {
  background-color: #449d44;
}
.label-info {
  background-color: #5bc0de;
}
.label-info[href]:hover,
.label-info[href]:focus {
  background-color: #31b0d5;
}
.label-warning {
  background-color: #f0ad4e;
}
.label-warning[href]:hover,
.label-warning[href]:focus {
  background-color: #ec971f;
}
.label-danger {
  background-color: #d9534f;
}
.label-danger[href]:hover,
.label-danger[href]:focus {
  background-color: #c9302c;
}
.badge {
  display: inline-block;
  min-width: 10px;
  padding: 3px 7px;
  font-size: 12px;
  font-weight: bold;
  color: #fff;
  line-height: 1;
  vertical-align: middle;
  white-space: nowrap;
  text-align: center;
  background-color: #777777;
  border-radius: 10px;
}
.badge:empty {
  display: none;
}
.btn .badge {
  position: relative;
  top: -1px;
}
.btn-xs .badge,
.btn-group-xs > .btn .badge {
  top: 0;
  padding: 1px 5px;
}
a.badge:hover,
a.badge:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}
.list-group-item.active > .badge,
.nav-pills > .active > a > .badge {
  color: #337ab7;
  background-color: #fff;
}
.list-group-item > .badge {
  float: right;
}
.list-group-item > .badge + .badge {
  margin-right: 5px;
}
.nav-pills > li > a > .badge {
  margin-left: 3px;
}
.jumbotron {
  padding-top: 30px;
  padding-bottom: 30px;
  margin-bottom: 30px;
  color: inherit;
  background-color: #eeeeee;
}
.jumbotron h1,
.jumbotron .h1 {
  color: inherit;
}
.jumbotron p {
  margin-bottom: 15px;
  font-size: 20px;
  font-weight: 200;
}
.jumbotron > hr {
  border-top-color: #d5d5d5;
}
.container .jumbotron,
.container-fluid .jumbotron {
  border-radius: 3px;
  padding-left: 0px;
  padding-right: 0px;
}
.jumbotron .container {
  max-width: 100%;
}
@media screen and (min-width: 768px) {
  .jumbotron {
    padding-top: 48px;
    padding-bottom: 48px;
  }
  .container .jumbotron,
  .container-fluid .jumbotron {
    padding-left: 60px;
    padding-right: 60px;
  }
  .jumbotron h1,
  .jumbotron .h1 {
    font-size: 59px;
  }
}
.thumbnail {
  display: block;
  padding: 4px;
  margin-bottom: 18px;
  line-height: 1.42857143;
  background-color: #fff;
  border: 1px solid #ddd;
  border-radius: 2px;
  -webkit-transition: border 0.2s ease-in-out;
  -o-transition: border 0.2s ease-in-out;
  transition: border 0.2s ease-in-out;
}
.thumbnail > img,
.thumbnail a > img {
  margin-left: auto;
  margin-right: auto;
}
a.thumbnail:hover,
a.thumbnail:focus,
a.thumbnail.active {
  border-color: #337ab7;
}
.thumbnail .caption {
  padding: 9px;
  color: #000;
}
.alert {
  padding: 15px;
  margin-bottom: 18px;
  border: 1px solid transparent;
  border-radius: 2px;
}
.alert h4 {
  margin-top: 0;
  color: inherit;
}
.alert .alert-link {
  font-weight: bold;
}
.alert > p,
.alert > ul {
  margin-bottom: 0;
}
.alert > p + p {
  margin-top: 5px;
}
.alert-dismissable,
.alert-dismissible {
  padding-right: 35px;
}
.alert-dismissable .close,
.alert-dismissible .close {
  position: relative;
  top: -2px;
  right: -21px;
  color: inherit;
}
.alert-success {
  background-color: #dff0d8;
  border-color: #d6e9c6;
  color: #3c763d;
}
.alert-success hr {
  border-top-color: #c9e2b3;
}
.alert-success .alert-link {
  color: #2b542c;
}
.alert-info {
  background-color: #d9edf7;
  border-color: #bce8f1;
  color: #31708f;
}
.alert-info hr {
  border-top-color: #a6e1ec;
}
.alert-info .alert-link {
  color: #245269;
}
.alert-warning {
  background-color: #fcf8e3;
  border-color: #faebcc;
  color: #8a6d3b;
}
.alert-warning hr {
  border-top-color: #f7e1b5;
}
.alert-warning .alert-link {
  color: #66512c;
}
.alert-danger {
  background-color: #f2dede;
  border-color: #ebccd1;
  color: #a94442;
}
.alert-danger hr {
  border-top-color: #e4b9c0;
}
.alert-danger .alert-link {
  color: #843534;
}
@-webkit-keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }
  to {
    background-position: 0 0;
  }
}
@keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }
  to {
    background-position: 0 0;
  }
}
.progress {
  overflow: hidden;
  height: 18px;
  margin-bottom: 18px;
  background-color: #f5f5f5;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
  box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
}
.progress-bar {
  float: left;
  width: 0%;
  height: 100%;
  font-size: 12px;
  line-height: 18px;
  color: #fff;
  text-align: center;
  background-color: #337ab7;
  -webkit-box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.15);
  box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.15);
  -webkit-transition: width 0.6s ease;
  -o-transition: width 0.6s ease;
  transition: width 0.6s ease;
}
.progress-striped .progress-bar,
.progress-bar-striped {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-size: 40px 40px;
}
.progress.active .progress-bar,
.progress-bar.active {
  -webkit-animation: progress-bar-stripes 2s linear infinite;
  -o-animation: progress-bar-stripes 2s linear infinite;
  animation: progress-bar-stripes 2s linear infinite;
}
.progress-bar-success {
  background-color: #5cb85c;
}
.progress-striped .progress-bar-success {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}
.progress-bar-info {
  background-color: #5bc0de;
}
.progress-striped .progress-bar-info {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}
.progress-bar-warning {
  background-color: #f0ad4e;
}
.progress-striped .progress-bar-warning {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}
.progress-bar-danger {
  background-color: #d9534f;
}
.progress-striped .progress-bar-danger {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}
.media {
  margin-top: 15px;
}
.media:first-child {
  margin-top: 0;
}
.media,
.media-body {
  zoom: 1;
  overflow: hidden;
}
.media-body {
  width: 10000px;
}
.media-object {
  display: block;
}
.media-object.img-thumbnail {
  max-width: none;
}
.media-right,
.media > .pull-right {
  padding-left: 10px;
}
.media-left,
.media > .pull-left {
  padding-right: 10px;
}
.media-left,
.media-right,
.media-body {
  display: table-cell;
  vertical-align: top;
}
.media-middle {
  vertical-align: middle;
}
.media-bottom {
  vertical-align: bottom;
}
.media-heading {
  margin-top: 0;
  margin-bottom: 5px;
}
.media-list {
  padding-left: 0;
  list-style: none;
}
.list-group {
  margin-bottom: 20px;
  padding-left: 0;
}
.list-group-item {
  position: relative;
  display: block;
  padding: 10px 15px;
  margin-bottom: -1px;
  background-color: #fff;
  border: 1px solid #ddd;
}
.list-group-item:first-child {
  border-top-right-radius: 2px;
  border-top-left-radius: 2px;
}
.list-group-item:last-child {
  margin-bottom: 0;
  border-bottom-right-radius: 2px;
  border-bottom-left-radius: 2px;
}
a.list-group-item,
button.list-group-item {
  color: #555;
}
a.list-group-item .list-group-item-heading,
button.list-group-item .list-group-item-heading {
  color: #333;
}
a.list-group-item:hover,
button.list-group-item:hover,
a.list-group-item:focus,
button.list-group-item:focus {
  text-decoration: none;
  color: #555;
  background-color: #f5f5f5;
}
button.list-group-item {
  width: 100%;
  text-align: left;
}
.list-group-item.disabled,
.list-group-item.disabled:hover,
.list-group-item.disabled:focus {
  background-color: #eeeeee;
  color: #777777;
  cursor: not-allowed;
}
.list-group-item.disabled .list-group-item-heading,
.list-group-item.disabled:hover .list-group-item-heading,
.list-group-item.disabled:focus .list-group-item-heading {
  color: inherit;
}
.list-group-item.disabled .list-group-item-text,
.list-group-item.disabled:hover .list-group-item-text,
.list-group-item.disabled:focus .list-group-item-text {
  color: #777777;
}
.list-group-item.active,
.list-group-item.active:hover,
.list-group-item.active:focus {
  z-index: 2;
  color: #fff;
  background-color: #337ab7;
  border-color: #337ab7;
}
.list-group-item.active .list-group-item-heading,
.list-group-item.active:hover .list-group-item-heading,
.list-group-item.active:focus .list-group-item-heading,
.list-group-item.active .list-group-item-heading > small,
.list-group-item.active:hover .list-group-item-heading > small,
.list-group-item.active:focus .list-group-item-heading > small,
.list-group-item.active .list-group-item-heading > .small,
.list-group-item.active:hover .list-group-item-heading > .small,
.list-group-item.active:focus .list-group-item-heading > .small {
  color: inherit;
}
.list-group-item.active .list-group-item-text,
.list-group-item.active:hover .list-group-item-text,
.list-group-item.active:focus .list-group-item-text {
  color: #c7ddef;
}
.list-group-item-success {
  color: #3c763d;
  background-color: #dff0d8;
}
a.list-group-item-success,
button.list-group-item-success {
  color: #3c763d;
}
a.list-group-item-success .list-group-item-heading,
button.list-group-item-success .list-group-item-heading {
  color: inherit;
}
a.list-group-item-success:hover,
button.list-group-item-success:hover,
a.list-group-item-success:focus,
button.list-group-item-success:focus {
  color: #3c763d;
  background-color: #d0e9c6;
}
a.list-group-item-success.active,
button.list-group-item-success.active,
a.list-group-item-success.active:hover,
button.list-group-item-success.active:hover,
a.list-group-item-success.active:focus,
button.list-group-item-success.active:focus {
  color: #fff;
  background-color: #3c763d;
  border-color: #3c763d;
}
.list-group-item-info {
  color: #31708f;
  background-color: #d9edf7;
}
a.list-group-item-info,
button.list-group-item-info {
  color: #31708f;
}
a.list-group-item-info .list-group-item-heading,
button.list-group-item-info .list-group-item-heading {
  color: inherit;
}
a.list-group-item-info:hover,
button.list-group-item-info:hover,
a.list-group-item-info:focus,
button.list-group-item-info:focus {
  color: #31708f;
  background-color: #c4e3f3;
}
a.list-group-item-info.active,
button.list-group-item-info.active,
a.list-group-item-info.active:hover,
button.list-group-item-info.active:hover,
a.list-group-item-info.active:focus,
button.list-group-item-info.active:focus {
  color: #fff;
  background-color: #31708f;
  border-color: #31708f;
}
.list-group-item-warning {
  color: #8a6d3b;
  background-color: #fcf8e3;
}
a.list-group-item-warning,
button.list-group-item-warning {
  color: #8a6d3b;
}
a.list-group-item-warning .list-group-item-heading,
button.list-group-item-warning .list-group-item-heading {
  color: inherit;
}
a.list-group-item-warning:hover,
button.list-group-item-warning:hover,
a.list-group-item-warning:focus,
button.list-group-item-warning:focus {
  color: #8a6d3b;
  background-color: #faf2cc;
}
a.list-group-item-warning.active,
button.list-group-item-warning.active,
a.list-group-item-warning.active:hover,
button.list-group-item-warning.active:hover,
a.list-group-item-warning.active:focus,
button.list-group-item-warning.active:focus {
  color: #fff;
  background-color: #8a6d3b;
  border-color: #8a6d3b;
}
.list-group-item-danger {
  color: #a94442;
  background-color: #f2dede;
}
a.list-group-item-danger,
button.list-group-item-danger {
  color: #a94442;
}
a.list-group-item-danger .list-group-item-heading,
button.list-group-item-danger .list-group-item-heading {
  color: inherit;
}
a.list-group-item-danger:hover,
button.list-group-item-danger:hover,
a.list-group-item-danger:focus,
button.list-group-item-danger:focus {
  color: #a94442;
  background-color: #ebcccc;
}
a.list-group-item-danger.active,
button.list-group-item-danger.active,
a.list-group-item-danger.active:hover,
button.list-group-item-danger.active:hover,
a.list-group-item-danger.active:focus,
button.list-group-item-danger.active:focus {
  color: #fff;
  background-color: #a94442;
  border-color: #a94442;
}
.list-group-item-heading {
  margin-top: 0;
  margin-bottom: 5px;
}
.list-group-item-text {
  margin-bottom: 0;
  line-height: 1.3;
}
.panel {
  margin-bottom: 18px;
  background-color: #fff;
  border: 1px solid transparent;
  border-radius: 2px;
  -webkit-box-shadow: 0 1px 1px rgba(0, 0, 0, 0.05);
  box-shadow: 0 1px 1px rgba(0, 0, 0, 0.05);
}
.panel-body {
  padding: 15px;
}
.panel-heading {
  padding: 10px 15px;
  border-bottom: 1px solid transparent;
  border-top-right-radius: 1px;
  border-top-left-radius: 1px;
}
.panel-heading > .dropdown .dropdown-toggle {
  color: inherit;
}
.panel-title {
  margin-top: 0;
  margin-bottom: 0;
  font-size: 15px;
  color: inherit;
}
.panel-title > a,
.panel-title > small,
.panel-title > .small,
.panel-title > small > a,
.panel-title > .small > a {
  color: inherit;
}
.panel-footer {
  padding: 10px 15px;
  background-color: #f5f5f5;
  border-top: 1px solid #ddd;
  border-bottom-right-radius: 1px;
  border-bottom-left-radius: 1px;
}
.panel > .list-group,
.panel > .panel-collapse > .list-group {
  margin-bottom: 0;
}
.panel > .list-group .list-group-item,
.panel > .panel-collapse > .list-group .list-group-item {
  border-width: 1px 0;
  border-radius: 0;
}
.panel > .list-group:first-child .list-group-item:first-child,
.panel > .panel-collapse > .list-group:first-child .list-group-item:first-child {
  border-top: 0;
  border-top-right-radius: 1px;
  border-top-left-radius: 1px;
}
.panel > .list-group:last-child .list-group-item:last-child,
.panel > .panel-collapse > .list-group:last-child .list-group-item:last-child {
  border-bottom: 0;
  border-bottom-right-radius: 1px;
  border-bottom-left-radius: 1px;
}
.panel > .panel-heading + .panel-collapse > .list-group .list-group-item:first-child {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}
.panel-heading + .list-group .list-group-item:first-child {
  border-top-width: 0;
}
.list-group + .panel-footer {
  border-top-width: 0;
}
.panel > .table,
.panel > .table-responsive > .table,
.panel > .panel-collapse > .table {
  margin-bottom: 0;
}
.panel > .table caption,
.panel > .table-responsive > .table caption,
.panel > .panel-collapse > .table caption {
  padding-left: 15px;
  padding-right: 15px;
}
.panel > .table:first-child,
.panel > .table-responsive:first-child > .table:first-child {
  border-top-right-radius: 1px;
  border-top-left-radius: 1px;
}
.panel > .table:first-child > thead:first-child > tr:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child {
  border-top-left-radius: 1px;
  border-top-right-radius: 1px;
}
.panel > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:first-child {
  border-top-left-radius: 1px;
}
.panel > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:last-child {
  border-top-right-radius: 1px;
}
.panel > .table:last-child,
.panel > .table-responsive:last-child > .table:last-child {
  border-bottom-right-radius: 1px;
  border-bottom-left-radius: 1px;
}
.panel > .table:last-child > tbody:last-child > tr:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child {
  border-bottom-left-radius: 1px;
  border-bottom-right-radius: 1px;
}
.panel > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:first-child {
  border-bottom-left-radius: 1px;
}
.panel > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:last-child {
  border-bottom-right-radius: 1px;
}
.panel > .panel-body + .table,
.panel > .panel-body + .table-responsive,
.panel > .table + .panel-body,
.panel > .table-responsive + .panel-body {
  border-top: 1px solid #ddd;
}
.panel > .table > tbody:first-child > tr:first-child th,
.panel > .table > tbody:first-child > tr:first-child td {
  border-top: 0;
}
.panel > .table-bordered,
.panel > .table-responsive > .table-bordered {
  border: 0;
}
.panel > .table-bordered > thead > tr > th:first-child,
.panel > .table-responsive > .table-bordered > thead > tr > th:first-child,
.panel > .table-bordered > tbody > tr > th:first-child,
.panel > .table-responsive > .table-bordered > tbody > tr > th:first-child,
.panel > .table-bordered > tfoot > tr > th:first-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > th:first-child,
.panel > .table-bordered > thead > tr > td:first-child,
.panel > .table-responsive > .table-bordered > thead > tr > td:first-child,
.panel > .table-bordered > tbody > tr > td:first-child,
.panel > .table-responsive > .table-bordered > tbody > tr > td:first-child,
.panel > .table-bordered > tfoot > tr > td:first-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > td:first-child {
  border-left: 0;
}
.panel > .table-bordered > thead > tr > th:last-child,
.panel > .table-responsive > .table-bordered > thead > tr > th:last-child,
.panel > .table-bordered > tbody > tr > th:last-child,
.panel > .table-responsive > .table-bordered > tbody > tr > th:last-child,
.panel > .table-bordered > tfoot > tr > th:last-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > th:last-child,
.panel > .table-bordered > thead > tr > td:last-child,
.panel > .table-responsive > .table-bordered > thead > tr > td:last-child,
.panel > .table-bordered > tbody > tr > td:last-child,
.panel > .table-responsive > .table-bordered > tbody > tr > td:last-child,
.panel > .table-bordered > tfoot > tr > td:last-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > td:last-child {
  border-right: 0;
}
.panel > .table-bordered > thead > tr:first-child > td,
.panel > .table-responsive > .table-bordered > thead > tr:first-child > td,
.panel > .table-bordered > tbody > tr:first-child > td,
.panel > .table-responsive > .table-bordered > tbody > tr:first-child > td,
.panel > .table-bordered > thead > tr:first-child > th,
.panel > .table-responsive > .table-bordered > thead > tr:first-child > th,
.panel > .table-bordered > tbody > tr:first-child > th,
.panel > .table-responsive > .table-bordered > tbody > tr:first-child > th {
  border-bottom: 0;
}
.panel > .table-bordered > tbody > tr:last-child > td,
.panel > .table-responsive > .table-bordered > tbody > tr:last-child > td,
.panel > .table-bordered > tfoot > tr:last-child > td,
.panel > .table-responsive > .table-bordered > tfoot > tr:last-child > td,
.panel > .table-bordered > tbody > tr:last-child > th,
.panel > .table-responsive > .table-bordered > tbody > tr:last-child > th,
.panel > .table-bordered > tfoot > tr:last-child > th,
.panel > .table-responsive > .table-bordered > tfoot > tr:last-child > th {
  border-bottom: 0;
}
.panel > .table-responsive {
  border: 0;
  margin-bottom: 0;
}
.panel-group {
  margin-bottom: 18px;
}
.panel-group .panel {
  margin-bottom: 0;
  border-radius: 2px;
}
.panel-group .panel + .panel {
  margin-top: 5px;
}
.panel-group .panel-heading {
  border-bottom: 0;
}
.panel-group .panel-heading + .panel-collapse > .panel-body,
.panel-group .panel-heading + .panel-collapse > .list-group {
  border-top: 1px solid #ddd;
}
.panel-group .panel-footer {
  border-top: 0;
}
.panel-group .panel-footer + .panel-collapse .panel-body {
  border-bottom: 1px solid #ddd;
}
.panel-default {
  border-color: #ddd;
}
.panel-default > .panel-heading {
  color: #333333;
  background-color: #f5f5f5;
  border-color: #ddd;
}
.panel-default > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #ddd;
}
.panel-default > .panel-heading .badge {
  color: #f5f5f5;
  background-color: #333333;
}
.panel-default > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #ddd;
}
.panel-primary {
  border-color: #337ab7;
}
.panel-primary > .panel-heading {
  color: #fff;
  background-color: #337ab7;
  border-color: #337ab7;
}
.panel-primary > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #337ab7;
}
.panel-primary > .panel-heading .badge {
  color: #337ab7;
  background-color: #fff;
}
.panel-primary > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #337ab7;
}
.panel-success {
  border-color: #d6e9c6;
}
.panel-success > .panel-heading {
  color: #3c763d;
  background-color: #dff0d8;
  border-color: #d6e9c6;
}
.panel-success > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #d6e9c6;
}
.panel-success > .panel-heading .badge {
  color: #dff0d8;
  background-color: #3c763d;
}
.panel-success > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #d6e9c6;
}
.panel-info {
  border-color: #bce8f1;
}
.panel-info > .panel-heading {
  color: #31708f;
  background-color: #d9edf7;
  border-color: #bce8f1;
}
.panel-info > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #bce8f1;
}
.panel-info > .panel-heading .badge {
  color: #d9edf7;
  background-color: #31708f;
}
.panel-info > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #bce8f1;
}
.panel-warning {
  border-color: #faebcc;
}
.panel-warning > .panel-heading {
  color: #8a6d3b;
  background-color: #fcf8e3;
  border-color: #faebcc;
}
.panel-warning > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #faebcc;
}
.panel-warning > .panel-heading .badge {
  color: #fcf8e3;
  background-color: #8a6d3b;
}
.panel-warning > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #faebcc;
}
.panel-danger {
  border-color: #ebccd1;
}
.panel-danger > .panel-heading {
  color: #a94442;
  background-color: #f2dede;
  border-color: #ebccd1;
}
.panel-danger > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #ebccd1;
}
.panel-danger > .panel-heading .badge {
  color: #f2dede;
  background-color: #a94442;
}
.panel-danger > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #ebccd1;
}
.embed-responsive {
  position: relative;
  display: block;
  height: 0;
  padding: 0;
  overflow: hidden;
}
.embed-responsive .embed-responsive-item,
.embed-responsive iframe,
.embed-responsive embed,
.embed-responsive object,
.embed-responsive video {
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  height: 100%;
  width: 100%;
  border: 0;
}
.embed-responsive-16by9 {
  padding-bottom: 56.25%;
}
.embed-responsive-4by3 {
  padding-bottom: 75%;
}
.well {
  min-height: 20px;
  padding: 19px;
  margin-bottom: 20px;
  background-color: #f5f5f5;
  border: 1px solid #e3e3e3;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.05);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.05);
}
.well blockquote {
  border-color: #ddd;
  border-color: rgba(0, 0, 0, 0.15);
}
.well-lg {
  padding: 24px;
  border-radius: 3px;
}
.well-sm {
  padding: 9px;
  border-radius: 1px;
}
.close {
  float: right;
  font-size: 19.5px;
  font-weight: bold;
  line-height: 1;
  color: #000;
  text-shadow: 0 1px 0 #fff;
  opacity: 0.2;
  filter: alpha(opacity=20);
}
.close:hover,
.close:focus {
  color: #000;
  text-decoration: none;
  cursor: pointer;
  opacity: 0.5;
  filter: alpha(opacity=50);
}
button.close {
  padding: 0;
  cursor: pointer;
  background: transparent;
  border: 0;
  -webkit-appearance: none;
}
.modal-open {
  overflow: hidden;
}
.modal {
  display: none;
  overflow: hidden;
  position: fixed;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1050;
  -webkit-overflow-scrolling: touch;
  outline: 0;
}
.modal.fade .modal-dialog {
  -webkit-transform: translate(0, -25%);
  -ms-transform: translate(0, -25%);
  -o-transform: translate(0, -25%);
  transform: translate(0, -25%);
  -webkit-transition: -webkit-transform 0.3s ease-out;
  -moz-transition: -moz-transform 0.3s ease-out;
  -o-transition: -o-transform 0.3s ease-out;
  transition: transform 0.3s ease-out;
}
.modal.in .modal-dialog {
  -webkit-transform: translate(0, 0);
  -ms-transform: translate(0, 0);
  -o-transform: translate(0, 0);
  transform: translate(0, 0);
}
.modal-open .modal {
  overflow-x: hidden;
  overflow-y: auto;
}
.modal-dialog {
  position: relative;
  width: auto;
  margin: 10px;
}
.modal-content {
  position: relative;
  background-color: #fff;
  border: 1px solid #999;
  border: 1px solid rgba(0, 0, 0, 0.2);
  border-radius: 3px;
  -webkit-box-shadow: 0 3px 9px rgba(0, 0, 0, 0.5);
  box-shadow: 0 3px 9px rgba(0, 0, 0, 0.5);
  background-clip: padding-box;
  outline: 0;
}
.modal-backdrop {
  position: fixed;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1040;
  background-color: #000;
}
.modal-backdrop.fade {
  opacity: 0;
  filter: alpha(opacity=0);
}
.modal-backdrop.in {
  opacity: 0.5;
  filter: alpha(opacity=50);
}
.modal-header {
  padding: 15px;
  border-bottom: 1px solid #e5e5e5;
}
.modal-header .close {
  margin-top: -2px;
}
.modal-title {
  margin: 0;
  line-height: 1.42857143;
}
.modal-body {
  position: relative;
  padding: 15px;
}
.modal-footer {
  padding: 15px;
  text-align: right;
  border-top: 1px solid #e5e5e5;
}
.modal-footer .btn + .btn {
  margin-left: 5px;
  margin-bottom: 0;
}
.modal-footer .btn-group .btn + .btn {
  margin-left: -1px;
}
.modal-footer .btn-block + .btn-block {
  margin-left: 0;
}
.modal-scrollbar-measure {
  position: absolute;
  top: -9999px;
  width: 50px;
  height: 50px;
  overflow: scroll;
}
@media (min-width: 768px) {
  .modal-dialog {
    width: 600px;
    margin: 30px auto;
  }
  .modal-content {
    -webkit-box-shadow: 0 5px 15px rgba(0, 0, 0, 0.5);
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.5);
  }
  .modal-sm {
    width: 300px;
  }
}
@media (min-width: 992px) {
  .modal-lg {
    width: 900px;
  }
}
.tooltip {
  position: absolute;
  z-index: 1070;
  display: block;
  font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
  font-style: normal;
  font-weight: normal;
  letter-spacing: normal;
  line-break: auto;
  line-height: 1.42857143;
  text-align: left;
  text-align: start;
  text-decoration: none;
  text-shadow: none;
  text-transform: none;
  white-space: normal;
  word-break: normal;
  word-spacing: normal;
  word-wrap: normal;
  font-size: 12px;
  opacity: 0;
  filter: alpha(opacity=0);
}
.tooltip.in {
  opacity: 0.9;
  filter: alpha(opacity=90);
}
.tooltip.top {
  margin-top: -3px;
  padding: 5px 0;
}
.tooltip.right {
  margin-left: 3px;
  padding: 0 5px;
}
.tooltip.bottom {
  margin-top: 3px;
  padding: 5px 0;
}
.tooltip.left {
  margin-left: -3px;
  padding: 0 5px;
}
.tooltip-inner {
  max-width: 200px;
  padding: 3px 8px;
  color: #fff;
  text-align: center;
  background-color: #000;
  border-radius: 2px;
}
.tooltip-arrow {
  position: absolute;
  width: 0;
  height: 0;
  border-color: transparent;
  border-style: solid;
}
.tooltip.top .tooltip-arrow {
  bottom: 0;
  left: 50%;
  margin-left: -5px;
  border-width: 5px 5px 0;
  border-top-color: #000;
}
.tooltip.top-left .tooltip-arrow {
  bottom: 0;
  right: 5px;
  margin-bottom: -5px;
  border-width: 5px 5px 0;
  border-top-color: #000;
}
.tooltip.top-right .tooltip-arrow {
  bottom: 0;
  left: 5px;
  margin-bottom: -5px;
  border-width: 5px 5px 0;
  border-top-color: #000;
}
.tooltip.right .tooltip-arrow {
  top: 50%;
  left: 0;
  margin-top: -5px;
  border-width: 5px 5px 5px 0;
  border-right-color: #000;
}
.tooltip.left .tooltip-arrow {
  top: 50%;
  right: 0;
  margin-top: -5px;
  border-width: 5px 0 5px 5px;
  border-left-color: #000;
}
.tooltip.bottom .tooltip-arrow {
  top: 0;
  left: 50%;
  margin-left: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #000;
}
.tooltip.bottom-left .tooltip-arrow {
  top: 0;
  right: 5px;
  margin-top: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #000;
}
.tooltip.bottom-right .tooltip-arrow {
  top: 0;
  left: 5px;
  margin-top: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #000;
}
.popover {
  position: absolute;
  top: 0;
  left: 0;
  z-index: 1060;
  display: none;
  max-width: 276px;
  padding: 1px;
  font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
  font-style: normal;
  font-weight: normal;
  letter-spacing: normal;
  line-break: auto;
  line-height: 1.42857143;
  text-align: left;
  text-align: start;
  text-decoration: none;
  text-shadow: none;
  text-transform: none;
  white-space: normal;
  word-break: normal;
  word-spacing: normal;
  word-wrap: normal;
  font-size: 13px;
  background-color: #fff;
  background-clip: padding-box;
  border: 1px solid #ccc;
  border: 1px solid rgba(0, 0, 0, 0.2);
  border-radius: 3px;
  -webkit-box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
}
.popover.top {
  margin-top: -10px;
}
.popover.right {
  margin-left: 10px;
}
.popover.bottom {
  margin-top: 10px;
}
.popover.left {
  margin-left: -10px;
}
.popover-title {
  margin: 0;
  padding: 8px 14px;
  font-size: 13px;
  background-color: #f7f7f7;
  border-bottom: 1px solid #ebebeb;
  border-radius: 2px 2px 0 0;
}
.popover-content {
  padding: 9px 14px;
}
.popover > .arrow,
.popover > .arrow:after {
  position: absolute;
  display: block;
  width: 0;
  height: 0;
  border-color: transparent;
  border-style: solid;
}
.popover > .arrow {
  border-width: 11px;
}
.popover > .arrow:after {
  border-width: 10px;
  content: "";
}
.popover.top > .arrow {
  left: 50%;
  margin-left: -11px;
  border-bottom-width: 0;
  border-top-color: #999999;
  border-top-color: rgba(0, 0, 0, 0.25);
  bottom: -11px;
}
.popover.top > .arrow:after {
  content: " ";
  bottom: 1px;
  margin-left: -10px;
  border-bottom-width: 0;
  border-top-color: #fff;
}
.popover.right > .arrow {
  top: 50%;
  left: -11px;
  margin-top: -11px;
  border-left-width: 0;
  border-right-color: #999999;
  border-right-color: rgba(0, 0, 0, 0.25);
}
.popover.right > .arrow:after {
  content: " ";
  left: 1px;
  bottom: -10px;
  border-left-width: 0;
  border-right-color: #fff;
}
.popover.bottom > .arrow {
  left: 50%;
  margin-left: -11px;
  border-top-width: 0;
  border-bottom-color: #999999;
  border-bottom-color: rgba(0, 0, 0, 0.25);
  top: -11px;
}
.popover.bottom > .arrow:after {
  content: " ";
  top: 1px;
  margin-left: -10px;
  border-top-width: 0;
  border-bottom-color: #fff;
}
.popover.left > .arrow {
  top: 50%;
  right: -11px;
  margin-top: -11px;
  border-right-width: 0;
  border-left-color: #999999;
  border-left-color: rgba(0, 0, 0, 0.25);
}
.popover.left > .arrow:after {
  content: " ";
  right: 1px;
  border-right-width: 0;
  border-left-color: #fff;
  bottom: -10px;
}
.carousel {
  position: relative;
}
.carousel-inner {
  position: relative;
  overflow: hidden;
  width: 100%;
}
.carousel-inner > .item {
  display: none;
  position: relative;
  -webkit-transition: 0.6s ease-in-out left;
  -o-transition: 0.6s ease-in-out left;
  transition: 0.6s ease-in-out left;
}
.carousel-inner > .item > img,
.carousel-inner > .item > a > img {
  line-height: 1;
}
@media all and (transform-3d), (-webkit-transform-3d) {
  .carousel-inner > .item {
    -webkit-transition: -webkit-transform 0.6s ease-in-out;
    -moz-transition: -moz-transform 0.6s ease-in-out;
    -o-transition: -o-transform 0.6s ease-in-out;
    transition: transform 0.6s ease-in-out;
    -webkit-backface-visibility: hidden;
    -moz-backface-visibility: hidden;
    backface-visibility: hidden;
    -webkit-perspective: 1000px;
    -moz-perspective: 1000px;
    perspective: 1000px;
  }
  .carousel-inner > .item.next,
  .carousel-inner > .item.active.right {
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
    left: 0;
  }
  .carousel-inner > .item.prev,
  .carousel-inner > .item.active.left {
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
    left: 0;
  }
  .carousel-inner > .item.next.left,
  .carousel-inner > .item.prev.right,
  .carousel-inner > .item.active {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
    left: 0;
  }
}
.carousel-inner > .active,
.carousel-inner > .next,
.carousel-inner > .prev {
  display: block;
}
.carousel-inner > .active {
  left: 0;
}
.carousel-inner > .next,
.carousel-inner > .prev {
  position: absolute;
  top: 0;
  width: 100%;
}
.carousel-inner > .next {
  left: 100%;
}
.carousel-inner > .prev {
  left: -100%;
}
.carousel-inner > .next.left,
.carousel-inner > .prev.right {
  left: 0;
}
.carousel-inner > .active.left {
  left: -100%;
}
.carousel-inner > .active.right {
  left: 100%;
}
.carousel-control {
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  width: 15%;
  opacity: 0.5;
  filter: alpha(opacity=50);
  font-size: 20px;
  color: #fff;
  text-align: center;
  text-shadow: 0 1px 2px rgba(0, 0, 0, 0.6);
  background-color: rgba(0, 0, 0, 0);
}
.carousel-control.left {
  background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-image: -o-linear-gradient(left, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-image: linear-gradient(to right, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-repeat: repeat-x;
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#80000000', endColorstr='#00000000', GradientType=1);
}
.carousel-control.right {
  left: auto;
  right: 0;
  background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-image: -o-linear-gradient(left, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-image: linear-gradient(to right, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-repeat: repeat-x;
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#00000000', endColorstr='#80000000', GradientType=1);
}
.carousel-control:hover,
.carousel-control:focus {
  outline: 0;
  color: #fff;
  text-decoration: none;
  opacity: 0.9;
  filter: alpha(opacity=90);
}
.carousel-control .icon-prev,
.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-left,
.carousel-control .glyphicon-chevron-right {
  position: absolute;
  top: 50%;
  margin-top: -10px;
  z-index: 5;
  display: inline-block;
}
.carousel-control .icon-prev,
.carousel-control .glyphicon-chevron-left {
  left: 50%;
  margin-left: -10px;
}
.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-right {
  right: 50%;
  margin-right: -10px;
}
.carousel-control .icon-prev,
.carousel-control .icon-next {
  width: 20px;
  height: 20px;
  line-height: 1;
  font-family: serif;
}
.carousel-control .icon-prev:before {
  content: '\2039';
}
.carousel-control .icon-next:before {
  content: '\203a';
}
.carousel-indicators {
  position: absolute;
  bottom: 10px;
  left: 50%;
  z-index: 15;
  width: 60%;
  margin-left: -30%;
  padding-left: 0;
  list-style: none;
  text-align: center;
}
.carousel-indicators li {
  display: inline-block;
  width: 10px;
  height: 10px;
  margin: 1px;
  text-indent: -999px;
  border: 1px solid #fff;
  border-radius: 10px;
  cursor: pointer;
  background-color: #000 \9;
  background-color: rgba(0, 0, 0, 0);
}
.carousel-indicators .active {
  margin: 0;
  width: 12px;
  height: 12px;
  background-color: #fff;
}
.carousel-caption {
  position: absolute;
  left: 15%;
  right: 15%;
  bottom: 20px;
  z-index: 10;
  padding-top: 20px;
  padding-bottom: 20px;
  color: #fff;
  text-align: center;
  text-shadow: 0 1px 2px rgba(0, 0, 0, 0.6);
}
.carousel-caption .btn {
  text-shadow: none;
}
@media screen and (min-width: 768px) {
  .carousel-control .glyphicon-chevron-left,
  .carousel-control .glyphicon-chevron-right,
  .carousel-control .icon-prev,
  .carousel-control .icon-next {
    width: 30px;
    height: 30px;
    margin-top: -10px;
    font-size: 30px;
  }
  .carousel-control .glyphicon-chevron-left,
  .carousel-control .icon-prev {
    margin-left: -10px;
  }
  .carousel-control .glyphicon-chevron-right,
  .carousel-control .icon-next {
    margin-right: -10px;
  }
  .carousel-caption {
    left: 20%;
    right: 20%;
    padding-bottom: 30px;
  }
  .carousel-indicators {
    bottom: 20px;
  }
}
.clearfix:before,
.clearfix:after,
.dl-horizontal dd:before,
.dl-horizontal dd:after,
.container:before,
.container:after,
.container-fluid:before,
.container-fluid:after,
.row:before,
.row:after,
.form-horizontal .form-group:before,
.form-horizontal .form-group:after,
.btn-toolbar:before,
.btn-toolbar:after,
.btn-group-vertical > .btn-group:before,
.btn-group-vertical > .btn-group:after,
.nav:before,
.nav:after,
.navbar:before,
.navbar:after,
.navbar-header:before,
.navbar-header:after,
.navbar-collapse:before,
.navbar-collapse:after,
.pager:before,
.pager:after,
.panel-body:before,
.panel-body:after,
.modal-header:before,
.modal-header:after,
.modal-footer:before,
.modal-footer:after,
.item_buttons:before,
.item_buttons:after {
  content: " ";
  display: table;
}
.clearfix:after,
.dl-horizontal dd:after,
.container:after,
.container-fluid:after,
.row:after,
.form-horizontal .form-group:after,
.btn-toolbar:after,
.btn-group-vertical > .btn-group:after,
.nav:after,
.navbar:after,
.navbar-header:after,
.navbar-collapse:after,
.pager:after,
.panel-body:after,
.modal-header:after,
.modal-footer:after,
.item_buttons:after {
  clear: both;
}
.center-block {
  display: block;
  margin-left: auto;
  margin-right: auto;
}
.pull-right {
  float: right !important;
}
.pull-left {
  float: left !important;
}
.hide {
  display: none !important;
}
.show {
  display: block !important;
}
.invisible {
  visibility: hidden;
}
.text-hide {
  font: 0/0 a;
  color: transparent;
  text-shadow: none;
  background-color: transparent;
  border: 0;
}
.hidden {
  display: none !important;
}
.affix {
  position: fixed;
}
@-ms-viewport {
  width: device-width;
}
.visible-xs,
.visible-sm,
.visible-md,
.visible-lg {
  display: none !important;
}
.visible-xs-block,
.visible-xs-inline,
.visible-xs-inline-block,
.visible-sm-block,
.visible-sm-inline,
.visible-sm-inline-block,
.visible-md-block,
.visible-md-inline,
.visible-md-inline-block,
.visible-lg-block,
.visible-lg-inline,
.visible-lg-inline-block {
  display: none !important;
}
@media (max-width: 767px) {
  .visible-xs {
    display: block !important;
  }
  table.visible-xs {
    display: table !important;
  }
  tr.visible-xs {
    display: table-row !important;
  }
  th.visible-xs,
  td.visible-xs {
    display: table-cell !important;
  }
}
@media (max-width: 767px) {
  .visible-xs-block {
    display: block !important;
  }
}
@media (max-width: 767px) {
  .visible-xs-inline {
    display: inline !important;
  }
}
@media (max-width: 767px) {
  .visible-xs-inline-block {
    display: inline-block !important;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm {
    display: block !important;
  }
  table.visible-sm {
    display: table !important;
  }
  tr.visible-sm {
    display: table-row !important;
  }
  th.visible-sm,
  td.visible-sm {
    display: table-cell !important;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-block {
    display: block !important;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-inline {
    display: inline !important;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-inline-block {
    display: inline-block !important;
  }
}
@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md {
    display: block !important;
  }
  table.visible-md {
    display: table !important;
  }
  tr.visible-md {
    display: table-row !important;
  }
  th.visible-md,
  td.visible-md {
    display: table-cell !important;
  }
}
@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-block {
    display: block !important;
  }
}
@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-inline {
    display: inline !important;
  }
}
@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-inline-block {
    display: inline-block !important;
  }
}
@media (min-width: 1200px) {
  .visible-lg {
    display: block !important;
  }
  table.visible-lg {
    display: table !important;
  }
  tr.visible-lg {
    display: table-row !important;
  }
  th.visible-lg,
  td.visible-lg {
    display: table-cell !important;
  }
}
@media (min-width: 1200px) {
  .visible-lg-block {
    display: block !important;
  }
}
@media (min-width: 1200px) {
  .visible-lg-inline {
    display: inline !important;
  }
}
@media (min-width: 1200px) {
  .visible-lg-inline-block {
    display: inline-block !important;
  }
}
@media (max-width: 767px) {
  .hidden-xs {
    display: none !important;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  .hidden-sm {
    display: none !important;
  }
}
@media (min-width: 992px) and (max-width: 1199px) {
  .hidden-md {
    display: none !important;
  }
}
@media (min-width: 1200px) {
  .hidden-lg {
    display: none !important;
  }
}
.visible-print {
  display: none !important;
}
@media print {
  .visible-print {
    display: block !important;
  }
  table.visible-print {
    display: table !important;
  }
  tr.visible-print {
    display: table-row !important;
  }
  th.visible-print,
  td.visible-print {
    display: table-cell !important;
  }
}
.visible-print-block {
  display: none !important;
}
@media print {
  .visible-print-block {
    display: block !important;
  }
}
.visible-print-inline {
  display: none !important;
}
@media print {
  .visible-print-inline {
    display: inline !important;
  }
}
.visible-print-inline-block {
  display: none !important;
}
@media print {
  .visible-print-inline-block {
    display: inline-block !important;
  }
}
@media print {
  .hidden-print {
    display: none !important;
  }
}
/*!
*
* Font Awesome
*
*/
/*!
 *  Font Awesome 4.7.0 by @davegandy - http://fontawesome.io - @fontawesome
 *  License - http://fontawesome.io/license (Font: SIL OFL 1.1, CSS: MIT License)
 */
/* FONT PATH
 * -------------------------- */
@font-face {
  font-family: 'FontAwesome';
  src: url('../components/font-awesome/fonts/fontawesome-webfont.eot?v=4.7.0');
  src: url('../components/font-awesome/fonts/fontawesome-webfont.eot?#iefix&v=4.7.0') format('embedded-opentype'), url('../components/font-awesome/fonts/fontawesome-webfont.woff2?v=4.7.0') format('woff2'), url('../components/font-awesome/fonts/fontawesome-webfont.woff?v=4.7.0') format('woff'), url('../components/font-awesome/fonts/fontawesome-webfont.ttf?v=4.7.0') format('truetype'), url('../components/font-awesome/fonts/fontawesome-webfont.svg?v=4.7.0#fontawesomeregular') format('svg');
  font-weight: normal;
  font-style: normal;
}
.fa {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
/* makes the font 33% larger relative to the icon container */
.fa-lg {
  font-size: 1.33333333em;
  line-height: 0.75em;
  vertical-align: -15%;
}
.fa-2x {
  font-size: 2em;
}
.fa-3x {
  font-size: 3em;
}
.fa-4x {
  font-size: 4em;
}
.fa-5x {
  font-size: 5em;
}
.fa-fw {
  width: 1.28571429em;
  text-align: center;
}
.fa-ul {
  padding-left: 0;
  margin-left: 2.14285714em;
  list-style-type: none;
}
.fa-ul > li {
  position: relative;
}
.fa-li {
  position: absolute;
  left: -2.14285714em;
  width: 2.14285714em;
  top: 0.14285714em;
  text-align: center;
}
.fa-li.fa-lg {
  left: -1.85714286em;
}
.fa-border {
  padding: .2em .25em .15em;
  border: solid 0.08em #eee;
  border-radius: .1em;
}
.fa-pull-left {
  float: left;
}
.fa-pull-right {
  float: right;
}
.fa.fa-pull-left {
  margin-right: .3em;
}
.fa.fa-pull-right {
  margin-left: .3em;
}
/* Deprecated as of 4.4.0 */
.pull-right {
  float: right;
}
.pull-left {
  float: left;
}
.fa.pull-left {
  margin-right: .3em;
}
.fa.pull-right {
  margin-left: .3em;
}
.fa-spin {
  -webkit-animation: fa-spin 2s infinite linear;
  animation: fa-spin 2s infinite linear;
}
.fa-pulse {
  -webkit-animation: fa-spin 1s infinite steps(8);
  animation: fa-spin 1s infinite steps(8);
}
@-webkit-keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}
@keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}
.fa-rotate-90 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=1)";
  -webkit-transform: rotate(90deg);
  -ms-transform: rotate(90deg);
  transform: rotate(90deg);
}
.fa-rotate-180 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2)";
  -webkit-transform: rotate(180deg);
  -ms-transform: rotate(180deg);
  transform: rotate(180deg);
}
.fa-rotate-270 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=3)";
  -webkit-transform: rotate(270deg);
  -ms-transform: rotate(270deg);
  transform: rotate(270deg);
}
.fa-flip-horizontal {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1)";
  -webkit-transform: scale(-1, 1);
  -ms-transform: scale(-1, 1);
  transform: scale(-1, 1);
}
.fa-flip-vertical {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1)";
  -webkit-transform: scale(1, -1);
  -ms-transform: scale(1, -1);
  transform: scale(1, -1);
}
:root .fa-rotate-90,
:root .fa-rotate-180,
:root .fa-rotate-270,
:root .fa-flip-horizontal,
:root .fa-flip-vertical {
  filter: none;
}
.fa-stack {
  position: relative;
  display: inline-block;
  width: 2em;
  height: 2em;
  line-height: 2em;
  vertical-align: middle;
}
.fa-stack-1x,
.fa-stack-2x {
  position: absolute;
  left: 0;
  width: 100%;
  text-align: center;
}
.fa-stack-1x {
  line-height: inherit;
}
.fa-stack-2x {
  font-size: 2em;
}
.fa-inverse {
  color: #fff;
}
/* Font Awesome uses the Unicode Private Use Area (PUA) to ensure screen
   readers do not read off random characters that represent icons */
.fa-glass:before {
  content: "\f000";
}
.fa-music:before {
  content: "\f001";
}
.fa-search:before {
  content: "\f002";
}
.fa-envelope-o:before {
  content: "\f003";
}
.fa-heart:before {
  content: "\f004";
}
.fa-star:before {
  content: "\f005";
}
.fa-star-o:before {
  content: "\f006";
}
.fa-user:before {
  content: "\f007";
}
.fa-film:before {
  content: "\f008";
}
.fa-th-large:before {
  content: "\f009";
}
.fa-th:before {
  content: "\f00a";
}
.fa-th-list:before {
  content: "\f00b";
}
.fa-check:before {
  content: "\f00c";
}
.fa-remove:before,
.fa-close:before,
.fa-times:before {
  content: "\f00d";
}
.fa-search-plus:before {
  content: "\f00e";
}
.fa-search-minus:before {
  content: "\f010";
}
.fa-power-off:before {
  content: "\f011";
}
.fa-signal:before {
  content: "\f012";
}
.fa-gear:before,
.fa-cog:before {
  content: "\f013";
}
.fa-trash-o:before {
  content: "\f014";
}
.fa-home:before {
  content: "\f015";
}
.fa-file-o:before {
  content: "\f016";
}
.fa-clock-o:before {
  content: "\f017";
}
.fa-road:before {
  content: "\f018";
}
.fa-download:before {
  content: "\f019";
}
.fa-arrow-circle-o-down:before {
  content: "\f01a";
}
.fa-arrow-circle-o-up:before {
  content: "\f01b";
}
.fa-inbox:before {
  content: "\f01c";
}
.fa-play-circle-o:before {
  content: "\f01d";
}
.fa-rotate-right:before,
.fa-repeat:before {
  content: "\f01e";
}
.fa-refresh:before {
  content: "\f021";
}
.fa-list-alt:before {
  content: "\f022";
}
.fa-lock:before {
  content: "\f023";
}
.fa-flag:before {
  content: "\f024";
}
.fa-headphones:before {
  content: "\f025";
}
.fa-volume-off:before {
  content: "\f026";
}
.fa-volume-down:before {
  content: "\f027";
}
.fa-volume-up:before {
  content: "\f028";
}
.fa-qrcode:before {
  content: "\f029";
}
.fa-barcode:before {
  content: "\f02a";
}
.fa-tag:before {
  content: "\f02b";
}
.fa-tags:before {
  content: "\f02c";
}
.fa-book:before {
  content: "\f02d";
}
.fa-bookmark:before {
  content: "\f02e";
}
.fa-print:before {
  content: "\f02f";
}
.fa-camera:before {
  content: "\f030";
}
.fa-font:before {
  content: "\f031";
}
.fa-bold:before {
  content: "\f032";
}
.fa-italic:before {
  content: "\f033";
}
.fa-text-height:before {
  content: "\f034";
}
.fa-text-width:before {
  content: "\f035";
}
.fa-align-left:before {
  content: "\f036";
}
.fa-align-center:before {
  content: "\f037";
}
.fa-align-right:before {
  content: "\f038";
}
.fa-align-justify:before {
  content: "\f039";
}
.fa-list:before {
  content: "\f03a";
}
.fa-dedent:before,
.fa-outdent:before {
  content: "\f03b";
}
.fa-indent:before {
  content: "\f03c";
}
.fa-video-camera:before {
  content: "\f03d";
}
.fa-photo:before,
.fa-image:before,
.fa-picture-o:before {
  content: "\f03e";
}
.fa-pencil:before {
  content: "\f040";
}
.fa-map-marker:before {
  content: "\f041";
}
.fa-adjust:before {
  content: "\f042";
}
.fa-tint:before {
  content: "\f043";
}
.fa-edit:before,
.fa-pencil-square-o:before {
  content: "\f044";
}
.fa-share-square-o:before {
  content: "\f045";
}
.fa-check-square-o:before {
  content: "\f046";
}
.fa-arrows:before {
  content: "\f047";
}
.fa-step-backward:before {
  content: "\f048";
}
.fa-fast-backward:before {
  content: "\f049";
}
.fa-backward:before {
  content: "\f04a";
}
.fa-play:before {
  content: "\f04b";
}
.fa-pause:before {
  content: "\f04c";
}
.fa-stop:before {
  content: "\f04d";
}
.fa-forward:before {
  content: "\f04e";
}
.fa-fast-forward:before {
  content: "\f050";
}
.fa-step-forward:before {
  content: "\f051";
}
.fa-eject:before {
  content: "\f052";
}
.fa-chevron-left:before {
  content: "\f053";
}
.fa-chevron-right:before {
  content: "\f054";
}
.fa-plus-circle:before {
  content: "\f055";
}
.fa-minus-circle:before {
  content: "\f056";
}
.fa-times-circle:before {
  content: "\f057";
}
.fa-check-circle:before {
  content: "\f058";
}
.fa-question-circle:before {
  content: "\f059";
}
.fa-info-circle:before {
  content: "\f05a";
}
.fa-crosshairs:before {
  content: "\f05b";
}
.fa-times-circle-o:before {
  content: "\f05c";
}
.fa-check-circle-o:before {
  content: "\f05d";
}
.fa-ban:before {
  content: "\f05e";
}
.fa-arrow-left:before {
  content: "\f060";
}
.fa-arrow-right:before {
  content: "\f061";
}
.fa-arrow-up:before {
  content: "\f062";
}
.fa-arrow-down:before {
  content: "\f063";
}
.fa-mail-forward:before,
.fa-share:before {
  content: "\f064";
}
.fa-expand:before {
  content: "\f065";
}
.fa-compress:before {
  content: "\f066";
}
.fa-plus:before {
  content: "\f067";
}
.fa-minus:before {
  content: "\f068";
}
.fa-asterisk:before {
  content: "\f069";
}
.fa-exclamation-circle:before {
  content: "\f06a";
}
.fa-gift:before {
  content: "\f06b";
}
.fa-leaf:before {
  content: "\f06c";
}
.fa-fire:before {
  content: "\f06d";
}
.fa-eye:before {
  content: "\f06e";
}
.fa-eye-slash:before {
  content: "\f070";
}
.fa-warning:before,
.fa-exclamation-triangle:before {
  content: "\f071";
}
.fa-plane:before {
  content: "\f072";
}
.fa-calendar:before {
  content: "\f073";
}
.fa-random:before {
  content: "\f074";
}
.fa-comment:before {
  content: "\f075";
}
.fa-magnet:before {
  content: "\f076";
}
.fa-chevron-up:before {
  content: "\f077";
}
.fa-chevron-down:before {
  content: "\f078";
}
.fa-retweet:before {
  content: "\f079";
}
.fa-shopping-cart:before {
  content: "\f07a";
}
.fa-folder:before {
  content: "\f07b";
}
.fa-folder-open:before {
  content: "\f07c";
}
.fa-arrows-v:before {
  content: "\f07d";
}
.fa-arrows-h:before {
  content: "\f07e";
}
.fa-bar-chart-o:before,
.fa-bar-chart:before {
  content: "\f080";
}
.fa-twitter-square:before {
  content: "\f081";
}
.fa-facebook-square:before {
  content: "\f082";
}
.fa-camera-retro:before {
  content: "\f083";
}
.fa-key:before {
  content: "\f084";
}
.fa-gears:before,
.fa-cogs:before {
  content: "\f085";
}
.fa-comments:before {
  content: "\f086";
}
.fa-thumbs-o-up:before {
  content: "\f087";
}
.fa-thumbs-o-down:before {
  content: "\f088";
}
.fa-star-half:before {
  content: "\f089";
}
.fa-heart-o:before {
  content: "\f08a";
}
.fa-sign-out:before {
  content: "\f08b";
}
.fa-linkedin-square:before {
  content: "\f08c";
}
.fa-thumb-tack:before {
  content: "\f08d";
}
.fa-external-link:before {
  content: "\f08e";
}
.fa-sign-in:before {
  content: "\f090";
}
.fa-trophy:before {
  content: "\f091";
}
.fa-github-square:before {
  content: "\f092";
}
.fa-upload:before {
  content: "\f093";
}
.fa-lemon-o:before {
  content: "\f094";
}
.fa-phone:before {
  content: "\f095";
}
.fa-square-o:before {
  content: "\f096";
}
.fa-bookmark-o:before {
  content: "\f097";
}
.fa-phone-square:before {
  content: "\f098";
}
.fa-twitter:before {
  content: "\f099";
}
.fa-facebook-f:before,
.fa-facebook:before {
  content: "\f09a";
}
.fa-github:before {
  content: "\f09b";
}
.fa-unlock:before {
  content: "\f09c";
}
.fa-credit-card:before {
  content: "\f09d";
}
.fa-feed:before,
.fa-rss:before {
  content: "\f09e";
}
.fa-hdd-o:before {
  content: "\f0a0";
}
.fa-bullhorn:before {
  content: "\f0a1";
}
.fa-bell:before {
  content: "\f0f3";
}
.fa-certificate:before {
  content: "\f0a3";
}
.fa-hand-o-right:before {
  content: "\f0a4";
}
.fa-hand-o-left:before {
  content: "\f0a5";
}
.fa-hand-o-up:before {
  content: "\f0a6";
}
.fa-hand-o-down:before {
  content: "\f0a7";
}
.fa-arrow-circle-left:before {
  content: "\f0a8";
}
.fa-arrow-circle-right:before {
  content: "\f0a9";
}
.fa-arrow-circle-up:before {
  content: "\f0aa";
}
.fa-arrow-circle-down:before {
  content: "\f0ab";
}
.fa-globe:before {
  content: "\f0ac";
}
.fa-wrench:before {
  content: "\f0ad";
}
.fa-tasks:before {
  content: "\f0ae";
}
.fa-filter:before {
  content: "\f0b0";
}
.fa-briefcase:before {
  content: "\f0b1";
}
.fa-arrows-alt:before {
  content: "\f0b2";
}
.fa-group:before,
.fa-users:before {
  content: "\f0c0";
}
.fa-chain:before,
.fa-link:before {
  content: "\f0c1";
}
.fa-cloud:before {
  content: "\f0c2";
}
.fa-flask:before {
  content: "\f0c3";
}
.fa-cut:before,
.fa-scissors:before {
  content: "\f0c4";
}
.fa-copy:before,
.fa-files-o:before {
  content: "\f0c5";
}
.fa-paperclip:before {
  content: "\f0c6";
}
.fa-save:before,
.fa-floppy-o:before {
  content: "\f0c7";
}
.fa-square:before {
  content: "\f0c8";
}
.fa-navicon:before,
.fa-reorder:before,
.fa-bars:before {
  content: "\f0c9";
}
.fa-list-ul:before {
  content: "\f0ca";
}
.fa-list-ol:before {
  content: "\f0cb";
}
.fa-strikethrough:before {
  content: "\f0cc";
}
.fa-underline:before {
  content: "\f0cd";
}
.fa-table:before {
  content: "\f0ce";
}
.fa-magic:before {
  content: "\f0d0";
}
.fa-truck:before {
  content: "\f0d1";
}
.fa-pinterest:before {
  content: "\f0d2";
}
.fa-pinterest-square:before {
  content: "\f0d3";
}
.fa-google-plus-square:before {
  content: "\f0d4";
}
.fa-google-plus:before {
  content: "\f0d5";
}
.fa-money:before {
  content: "\f0d6";
}
.fa-caret-down:before {
  content: "\f0d7";
}
.fa-caret-up:before {
  content: "\f0d8";
}
.fa-caret-left:before {
  content: "\f0d9";
}
.fa-caret-right:before {
  content: "\f0da";
}
.fa-columns:before {
  content: "\f0db";
}
.fa-unsorted:before,
.fa-sort:before {
  content: "\f0dc";
}
.fa-sort-down:before,
.fa-sort-desc:before {
  content: "\f0dd";
}
.fa-sort-up:before,
.fa-sort-asc:before {
  content: "\f0de";
}
.fa-envelope:before {
  content: "\f0e0";
}
.fa-linkedin:before {
  content: "\f0e1";
}
.fa-rotate-left:before,
.fa-undo:before {
  content: "\f0e2";
}
.fa-legal:before,
.fa-gavel:before {
  content: "\f0e3";
}
.fa-dashboard:before,
.fa-tachometer:before {
  content: "\f0e4";
}
.fa-comment-o:before {
  content: "\f0e5";
}
.fa-comments-o:before {
  content: "\f0e6";
}
.fa-flash:before,
.fa-bolt:before {
  content: "\f0e7";
}
.fa-sitemap:before {
  content: "\f0e8";
}
.fa-umbrella:before {
  content: "\f0e9";
}
.fa-paste:before,
.fa-clipboard:before {
  content: "\f0ea";
}
.fa-lightbulb-o:before {
  content: "\f0eb";
}
.fa-exchange:before {
  content: "\f0ec";
}
.fa-cloud-download:before {
  content: "\f0ed";
}
.fa-cloud-upload:before {
  content: "\f0ee";
}
.fa-user-md:before {
  content: "\f0f0";
}
.fa-stethoscope:before {
  content: "\f0f1";
}
.fa-suitcase:before {
  content: "\f0f2";
}
.fa-bell-o:before {
  content: "\f0a2";
}
.fa-coffee:before {
  content: "\f0f4";
}
.fa-cutlery:before {
  content: "\f0f5";
}
.fa-file-text-o:before {
  content: "\f0f6";
}
.fa-building-o:before {
  content: "\f0f7";
}
.fa-hospital-o:before {
  content: "\f0f8";
}
.fa-ambulance:before {
  content: "\f0f9";
}
.fa-medkit:before {
  content: "\f0fa";
}
.fa-fighter-jet:before {
  content: "\f0fb";
}
.fa-beer:before {
  content: "\f0fc";
}
.fa-h-square:before {
  content: "\f0fd";
}
.fa-plus-square:before {
  content: "\f0fe";
}
.fa-angle-double-left:before {
  content: "\f100";
}
.fa-angle-double-right:before {
  content: "\f101";
}
.fa-angle-double-up:before {
  content: "\f102";
}
.fa-angle-double-down:before {
  content: "\f103";
}
.fa-angle-left:before {
  content: "\f104";
}
.fa-angle-right:before {
  content: "\f105";
}
.fa-angle-up:before {
  content: "\f106";
}
.fa-angle-down:before {
  content: "\f107";
}
.fa-desktop:before {
  content: "\f108";
}
.fa-laptop:before {
  content: "\f109";
}
.fa-tablet:before {
  content: "\f10a";
}
.fa-mobile-phone:before,
.fa-mobile:before {
  content: "\f10b";
}
.fa-circle-o:before {
  content: "\f10c";
}
.fa-quote-left:before {
  content: "\f10d";
}
.fa-quote-right:before {
  content: "\f10e";
}
.fa-spinner:before {
  content: "\f110";
}
.fa-circle:before {
  content: "\f111";
}
.fa-mail-reply:before,
.fa-reply:before {
  content: "\f112";
}
.fa-github-alt:before {
  content: "\f113";
}
.fa-folder-o:before {
  content: "\f114";
}
.fa-folder-open-o:before {
  content: "\f115";
}
.fa-smile-o:before {
  content: "\f118";
}
.fa-frown-o:before {
  content: "\f119";
}
.fa-meh-o:before {
  content: "\f11a";
}
.fa-gamepad:before {
  content: "\f11b";
}
.fa-keyboard-o:before {
  content: "\f11c";
}
.fa-flag-o:before {
  content: "\f11d";
}
.fa-flag-checkered:before {
  content: "\f11e";
}
.fa-terminal:before {
  content: "\f120";
}
.fa-code:before {
  content: "\f121";
}
.fa-mail-reply-all:before,
.fa-reply-all:before {
  content: "\f122";
}
.fa-star-half-empty:before,
.fa-star-half-full:before,
.fa-star-half-o:before {
  content: "\f123";
}
.fa-location-arrow:before {
  content: "\f124";
}
.fa-crop:before {
  content: "\f125";
}
.fa-code-fork:before {
  content: "\f126";
}
.fa-unlink:before,
.fa-chain-broken:before {
  content: "\f127";
}
.fa-question:before {
  content: "\f128";
}
.fa-info:before {
  content: "\f129";
}
.fa-exclamation:before {
  content: "\f12a";
}
.fa-superscript:before {
  content: "\f12b";
}
.fa-subscript:before {
  content: "\f12c";
}
.fa-eraser:before {
  content: "\f12d";
}
.fa-puzzle-piece:before {
  content: "\f12e";
}
.fa-microphone:before {
  content: "\f130";
}
.fa-microphone-slash:before {
  content: "\f131";
}
.fa-shield:before {
  content: "\f132";
}
.fa-calendar-o:before {
  content: "\f133";
}
.fa-fire-extinguisher:before {
  content: "\f134";
}
.fa-rocket:before {
  content: "\f135";
}
.fa-maxcdn:before {
  content: "\f136";
}
.fa-chevron-circle-left:before {
  content: "\f137";
}
.fa-chevron-circle-right:before {
  content: "\f138";
}
.fa-chevron-circle-up:before {
  content: "\f139";
}
.fa-chevron-circle-down:before {
  content: "\f13a";
}
.fa-html5:before {
  content: "\f13b";
}
.fa-css3:before {
  content: "\f13c";
}
.fa-anchor:before {
  content: "\f13d";
}
.fa-unlock-alt:before {
  content: "\f13e";
}
.fa-bullseye:before {
  content: "\f140";
}
.fa-ellipsis-h:before {
  content: "\f141";
}
.fa-ellipsis-v:before {
  content: "\f142";
}
.fa-rss-square:before {
  content: "\f143";
}
.fa-play-circle:before {
  content: "\f144";
}
.fa-ticket:before {
  content: "\f145";
}
.fa-minus-square:before {
  content: "\f146";
}
.fa-minus-square-o:before {
  content: "\f147";
}
.fa-level-up:before {
  content: "\f148";
}
.fa-level-down:before {
  content: "\f149";
}
.fa-check-square:before {
  content: "\f14a";
}
.fa-pencil-square:before {
  content: "\f14b";
}
.fa-external-link-square:before {
  content: "\f14c";
}
.fa-share-square:before {
  content: "\f14d";
}
.fa-compass:before {
  content: "\f14e";
}
.fa-toggle-down:before,
.fa-caret-square-o-down:before {
  content: "\f150";
}
.fa-toggle-up:before,
.fa-caret-square-o-up:before {
  content: "\f151";
}
.fa-toggle-right:before,
.fa-caret-square-o-right:before {
  content: "\f152";
}
.fa-euro:before,
.fa-eur:before {
  content: "\f153";
}
.fa-gbp:before {
  content: "\f154";
}
.fa-dollar:before,
.fa-usd:before {
  content: "\f155";
}
.fa-rupee:before,
.fa-inr:before {
  content: "\f156";
}
.fa-cny:before,
.fa-rmb:before,
.fa-yen:before,
.fa-jpy:before {
  content: "\f157";
}
.fa-ruble:before,
.fa-rouble:before,
.fa-rub:before {
  content: "\f158";
}
.fa-won:before,
.fa-krw:before {
  content: "\f159";
}
.fa-bitcoin:before,
.fa-btc:before {
  content: "\f15a";
}
.fa-file:before {
  content: "\f15b";
}
.fa-file-text:before {
  content: "\f15c";
}
.fa-sort-alpha-asc:before {
  content: "\f15d";
}
.fa-sort-alpha-desc:before {
  content: "\f15e";
}
.fa-sort-amount-asc:before {
  content: "\f160";
}
.fa-sort-amount-desc:before {
  content: "\f161";
}
.fa-sort-numeric-asc:before {
  content: "\f162";
}
.fa-sort-numeric-desc:before {
  content: "\f163";
}
.fa-thumbs-up:before {
  content: "\f164";
}
.fa-thumbs-down:before {
  content: "\f165";
}
.fa-youtube-square:before {
  content: "\f166";
}
.fa-youtube:before {
  content: "\f167";
}
.fa-xing:before {
  content: "\f168";
}
.fa-xing-square:before {
  content: "\f169";
}
.fa-youtube-play:before {
  content: "\f16a";
}
.fa-dropbox:before {
  content: "\f16b";
}
.fa-stack-overflow:before {
  content: "\f16c";
}
.fa-instagram:before {
  content: "\f16d";
}
.fa-flickr:before {
  content: "\f16e";
}
.fa-adn:before {
  content: "\f170";
}
.fa-bitbucket:before {
  content: "\f171";
}
.fa-bitbucket-square:before {
  content: "\f172";
}
.fa-tumblr:before {
  content: "\f173";
}
.fa-tumblr-square:before {
  content: "\f174";
}
.fa-long-arrow-down:before {
  content: "\f175";
}
.fa-long-arrow-up:before {
  content: "\f176";
}
.fa-long-arrow-left:before {
  content: "\f177";
}
.fa-long-arrow-right:before {
  content: "\f178";
}
.fa-apple:before {
  content: "\f179";
}
.fa-windows:before {
  content: "\f17a";
}
.fa-android:before {
  content: "\f17b";
}
.fa-linux:before {
  content: "\f17c";
}
.fa-dribbble:before {
  content: "\f17d";
}
.fa-skype:before {
  content: "\f17e";
}
.fa-foursquare:before {
  content: "\f180";
}
.fa-trello:before {
  content: "\f181";
}
.fa-female:before {
  content: "\f182";
}
.fa-male:before {
  content: "\f183";
}
.fa-gittip:before,
.fa-gratipay:before {
  content: "\f184";
}
.fa-sun-o:before {
  content: "\f185";
}
.fa-moon-o:before {
  content: "\f186";
}
.fa-archive:before {
  content: "\f187";
}
.fa-bug:before {
  content: "\f188";
}
.fa-vk:before {
  content: "\f189";
}
.fa-weibo:before {
  content: "\f18a";
}
.fa-renren:before {
  content: "\f18b";
}
.fa-pagelines:before {
  content: "\f18c";
}
.fa-stack-exchange:before {
  content: "\f18d";
}
.fa-arrow-circle-o-right:before {
  content: "\f18e";
}
.fa-arrow-circle-o-left:before {
  content: "\f190";
}
.fa-toggle-left:before,
.fa-caret-square-o-left:before {
  content: "\f191";
}
.fa-dot-circle-o:before {
  content: "\f192";
}
.fa-wheelchair:before {
  content: "\f193";
}
.fa-vimeo-square:before {
  content: "\f194";
}
.fa-turkish-lira:before,
.fa-try:before {
  content: "\f195";
}
.fa-plus-square-o:before {
  content: "\f196";
}
.fa-space-shuttle:before {
  content: "\f197";
}
.fa-slack:before {
  content: "\f198";
}
.fa-envelope-square:before {
  content: "\f199";
}
.fa-wordpress:before {
  content: "\f19a";
}
.fa-openid:before {
  content: "\f19b";
}
.fa-institution:before,
.fa-bank:before,
.fa-university:before {
  content: "\f19c";
}
.fa-mortar-board:before,
.fa-graduation-cap:before {
  content: "\f19d";
}
.fa-yahoo:before {
  content: "\f19e";
}
.fa-google:before {
  content: "\f1a0";
}
.fa-reddit:before {
  content: "\f1a1";
}
.fa-reddit-square:before {
  content: "\f1a2";
}
.fa-stumbleupon-circle:before {
  content: "\f1a3";
}
.fa-stumbleupon:before {
  content: "\f1a4";
}
.fa-delicious:before {
  content: "\f1a5";
}
.fa-digg:before {
  content: "\f1a6";
}
.fa-pied-piper-pp:before {
  content: "\f1a7";
}
.fa-pied-piper-alt:before {
  content: "\f1a8";
}
.fa-drupal:before {
  content: "\f1a9";
}
.fa-joomla:before {
  content: "\f1aa";
}
.fa-language:before {
  content: "\f1ab";
}
.fa-fax:before {
  content: "\f1ac";
}
.fa-building:before {
  content: "\f1ad";
}
.fa-child:before {
  content: "\f1ae";
}
.fa-paw:before {
  content: "\f1b0";
}
.fa-spoon:before {
  content: "\f1b1";
}
.fa-cube:before {
  content: "\f1b2";
}
.fa-cubes:before {
  content: "\f1b3";
}
.fa-behance:before {
  content: "\f1b4";
}
.fa-behance-square:before {
  content: "\f1b5";
}
.fa-steam:before {
  content: "\f1b6";
}
.fa-steam-square:before {
  content: "\f1b7";
}
.fa-recycle:before {
  content: "\f1b8";
}
.fa-automobile:before,
.fa-car:before {
  content: "\f1b9";
}
.fa-cab:before,
.fa-taxi:before {
  content: "\f1ba";
}
.fa-tree:before {
  content: "\f1bb";
}
.fa-spotify:before {
  content: "\f1bc";
}
.fa-deviantart:before {
  content: "\f1bd";
}
.fa-soundcloud:before {
  content: "\f1be";
}
.fa-database:before {
  content: "\f1c0";
}
.fa-file-pdf-o:before {
  content: "\f1c1";
}
.fa-file-word-o:before {
  content: "\f1c2";
}
.fa-file-excel-o:before {
  content: "\f1c3";
}
.fa-file-powerpoint-o:before {
  content: "\f1c4";
}
.fa-file-photo-o:before,
.fa-file-picture-o:before,
.fa-file-image-o:before {
  content: "\f1c5";
}
.fa-file-zip-o:before,
.fa-file-archive-o:before {
  content: "\f1c6";
}
.fa-file-sound-o:before,
.fa-file-audio-o:before {
  content: "\f1c7";
}
.fa-file-movie-o:before,
.fa-file-video-o:before {
  content: "\f1c8";
}
.fa-file-code-o:before {
  content: "\f1c9";
}
.fa-vine:before {
  content: "\f1ca";
}
.fa-codepen:before {
  content: "\f1cb";
}
.fa-jsfiddle:before {
  content: "\f1cc";
}
.fa-life-bouy:before,
.fa-life-buoy:before,
.fa-life-saver:before,
.fa-support:before,
.fa-life-ring:before {
  content: "\f1cd";
}
.fa-circle-o-notch:before {
  content: "\f1ce";
}
.fa-ra:before,
.fa-resistance:before,
.fa-rebel:before {
  content: "\f1d0";
}
.fa-ge:before,
.fa-empire:before {
  content: "\f1d1";
}
.fa-git-square:before {
  content: "\f1d2";
}
.fa-git:before {
  content: "\f1d3";
}
.fa-y-combinator-square:before,
.fa-yc-square:before,
.fa-hacker-news:before {
  content: "\f1d4";
}
.fa-tencent-weibo:before {
  content: "\f1d5";
}
.fa-qq:before {
  content: "\f1d6";
}
.fa-wechat:before,
.fa-weixin:before {
  content: "\f1d7";
}
.fa-send:before,
.fa-paper-plane:before {
  content: "\f1d8";
}
.fa-send-o:before,
.fa-paper-plane-o:before {
  content: "\f1d9";
}
.fa-history:before {
  content: "\f1da";
}
.fa-circle-thin:before {
  content: "\f1db";
}
.fa-header:before {
  content: "\f1dc";
}
.fa-paragraph:before {
  content: "\f1dd";
}
.fa-sliders:before {
  content: "\f1de";
}
.fa-share-alt:before {
  content: "\f1e0";
}
.fa-share-alt-square:before {
  content: "\f1e1";
}
.fa-bomb:before {
  content: "\f1e2";
}
.fa-soccer-ball-o:before,
.fa-futbol-o:before {
  content: "\f1e3";
}
.fa-tty:before {
  content: "\f1e4";
}
.fa-binoculars:before {
  content: "\f1e5";
}
.fa-plug:before {
  content: "\f1e6";
}
.fa-slideshare:before {
  content: "\f1e7";
}
.fa-twitch:before {
  content: "\f1e8";
}
.fa-yelp:before {
  content: "\f1e9";
}
.fa-newspaper-o:before {
  content: "\f1ea";
}
.fa-wifi:before {
  content: "\f1eb";
}
.fa-calculator:before {
  content: "\f1ec";
}
.fa-paypal:before {
  content: "\f1ed";
}
.fa-google-wallet:before {
  content: "\f1ee";
}
.fa-cc-visa:before {
  content: "\f1f0";
}
.fa-cc-mastercard:before {
  content: "\f1f1";
}
.fa-cc-discover:before {
  content: "\f1f2";
}
.fa-cc-amex:before {
  content: "\f1f3";
}
.fa-cc-paypal:before {
  content: "\f1f4";
}
.fa-cc-stripe:before {
  content: "\f1f5";
}
.fa-bell-slash:before {
  content: "\f1f6";
}
.fa-bell-slash-o:before {
  content: "\f1f7";
}
.fa-trash:before {
  content: "\f1f8";
}
.fa-copyright:before {
  content: "\f1f9";
}
.fa-at:before {
  content: "\f1fa";
}
.fa-eyedropper:before {
  content: "\f1fb";
}
.fa-paint-brush:before {
  content: "\f1fc";
}
.fa-birthday-cake:before {
  content: "\f1fd";
}
.fa-area-chart:before {
  content: "\f1fe";
}
.fa-pie-chart:before {
  content: "\f200";
}
.fa-line-chart:before {
  content: "\f201";
}
.fa-lastfm:before {
  content: "\f202";
}
.fa-lastfm-square:before {
  content: "\f203";
}
.fa-toggle-off:before {
  content: "\f204";
}
.fa-toggle-on:before {
  content: "\f205";
}
.fa-bicycle:before {
  content: "\f206";
}
.fa-bus:before {
  content: "\f207";
}
.fa-ioxhost:before {
  content: "\f208";
}
.fa-angellist:before {
  content: "\f209";
}
.fa-cc:before {
  content: "\f20a";
}
.fa-shekel:before,
.fa-sheqel:before,
.fa-ils:before {
  content: "\f20b";
}
.fa-meanpath:before {
  content: "\f20c";
}
.fa-buysellads:before {
  content: "\f20d";
}
.fa-connectdevelop:before {
  content: "\f20e";
}
.fa-dashcube:before {
  content: "\f210";
}
.fa-forumbee:before {
  content: "\f211";
}
.fa-leanpub:before {
  content: "\f212";
}
.fa-sellsy:before {
  content: "\f213";
}
.fa-shirtsinbulk:before {
  content: "\f214";
}
.fa-simplybuilt:before {
  content: "\f215";
}
.fa-skyatlas:before {
  content: "\f216";
}
.fa-cart-plus:before {
  content: "\f217";
}
.fa-cart-arrow-down:before {
  content: "\f218";
}
.fa-diamond:before {
  content: "\f219";
}
.fa-ship:before {
  content: "\f21a";
}
.fa-user-secret:before {
  content: "\f21b";
}
.fa-motorcycle:before {
  content: "\f21c";
}
.fa-street-view:before {
  content: "\f21d";
}
.fa-heartbeat:before {
  content: "\f21e";
}
.fa-venus:before {
  content: "\f221";
}
.fa-mars:before {
  content: "\f222";
}
.fa-mercury:before {
  content: "\f223";
}
.fa-intersex:before,
.fa-transgender:before {
  content: "\f224";
}
.fa-transgender-alt:before {
  content: "\f225";
}
.fa-venus-double:before {
  content: "\f226";
}
.fa-mars-double:before {
  content: "\f227";
}
.fa-venus-mars:before {
  content: "\f228";
}
.fa-mars-stroke:before {
  content: "\f229";
}
.fa-mars-stroke-v:before {
  content: "\f22a";
}
.fa-mars-stroke-h:before {
  content: "\f22b";
}
.fa-neuter:before {
  content: "\f22c";
}
.fa-genderless:before {
  content: "\f22d";
}
.fa-facebook-official:before {
  content: "\f230";
}
.fa-pinterest-p:before {
  content: "\f231";
}
.fa-whatsapp:before {
  content: "\f232";
}
.fa-server:before {
  content: "\f233";
}
.fa-user-plus:before {
  content: "\f234";
}
.fa-user-times:before {
  content: "\f235";
}
.fa-hotel:before,
.fa-bed:before {
  content: "\f236";
}
.fa-viacoin:before {
  content: "\f237";
}
.fa-train:before {
  content: "\f238";
}
.fa-subway:before {
  content: "\f239";
}
.fa-medium:before {
  content: "\f23a";
}
.fa-yc:before,
.fa-y-combinator:before {
  content: "\f23b";
}
.fa-optin-monster:before {
  content: "\f23c";
}
.fa-opencart:before {
  content: "\f23d";
}
.fa-expeditedssl:before {
  content: "\f23e";
}
.fa-battery-4:before,
.fa-battery:before,
.fa-battery-full:before {
  content: "\f240";
}
.fa-battery-3:before,
.fa-battery-three-quarters:before {
  content: "\f241";
}
.fa-battery-2:before,
.fa-battery-half:before {
  content: "\f242";
}
.fa-battery-1:before,
.fa-battery-quarter:before {
  content: "\f243";
}
.fa-battery-0:before,
.fa-battery-empty:before {
  content: "\f244";
}
.fa-mouse-pointer:before {
  content: "\f245";
}
.fa-i-cursor:before {
  content: "\f246";
}
.fa-object-group:before {
  content: "\f247";
}
.fa-object-ungroup:before {
  content: "\f248";
}
.fa-sticky-note:before {
  content: "\f249";
}
.fa-sticky-note-o:before {
  content: "\f24a";
}
.fa-cc-jcb:before {
  content: "\f24b";
}
.fa-cc-diners-club:before {
  content: "\f24c";
}
.fa-clone:before {
  content: "\f24d";
}
.fa-balance-scale:before {
  content: "\f24e";
}
.fa-hourglass-o:before {
  content: "\f250";
}
.fa-hourglass-1:before,
.fa-hourglass-start:before {
  content: "\f251";
}
.fa-hourglass-2:before,
.fa-hourglass-half:before {
  content: "\f252";
}
.fa-hourglass-3:before,
.fa-hourglass-end:before {
  content: "\f253";
}
.fa-hourglass:before {
  content: "\f254";
}
.fa-hand-grab-o:before,
.fa-hand-rock-o:before {
  content: "\f255";
}
.fa-hand-stop-o:before,
.fa-hand-paper-o:before {
  content: "\f256";
}
.fa-hand-scissors-o:before {
  content: "\f257";
}
.fa-hand-lizard-o:before {
  content: "\f258";
}
.fa-hand-spock-o:before {
  content: "\f259";
}
.fa-hand-pointer-o:before {
  content: "\f25a";
}
.fa-hand-peace-o:before {
  content: "\f25b";
}
.fa-trademark:before {
  content: "\f25c";
}
.fa-registered:before {
  content: "\f25d";
}
.fa-creative-commons:before {
  content: "\f25e";
}
.fa-gg:before {
  content: "\f260";
}
.fa-gg-circle:before {
  content: "\f261";
}
.fa-tripadvisor:before {
  content: "\f262";
}
.fa-odnoklassniki:before {
  content: "\f263";
}
.fa-odnoklassniki-square:before {
  content: "\f264";
}
.fa-get-pocket:before {
  content: "\f265";
}
.fa-wikipedia-w:before {
  content: "\f266";
}
.fa-safari:before {
  content: "\f267";
}
.fa-chrome:before {
  content: "\f268";
}
.fa-firefox:before {
  content: "\f269";
}
.fa-opera:before {
  content: "\f26a";
}
.fa-internet-explorer:before {
  content: "\f26b";
}
.fa-tv:before,
.fa-television:before {
  content: "\f26c";
}
.fa-contao:before {
  content: "\f26d";
}
.fa-500px:before {
  content: "\f26e";
}
.fa-amazon:before {
  content: "\f270";
}
.fa-calendar-plus-o:before {
  content: "\f271";
}
.fa-calendar-minus-o:before {
  content: "\f272";
}
.fa-calendar-times-o:before {
  content: "\f273";
}
.fa-calendar-check-o:before {
  content: "\f274";
}
.fa-industry:before {
  content: "\f275";
}
.fa-map-pin:before {
  content: "\f276";
}
.fa-map-signs:before {
  content: "\f277";
}
.fa-map-o:before {
  content: "\f278";
}
.fa-map:before {
  content: "\f279";
}
.fa-commenting:before {
  content: "\f27a";
}
.fa-commenting-o:before {
  content: "\f27b";
}
.fa-houzz:before {
  content: "\f27c";
}
.fa-vimeo:before {
  content: "\f27d";
}
.fa-black-tie:before {
  content: "\f27e";
}
.fa-fonticons:before {
  content: "\f280";
}
.fa-reddit-alien:before {
  content: "\f281";
}
.fa-edge:before {
  content: "\f282";
}
.fa-credit-card-alt:before {
  content: "\f283";
}
.fa-codiepie:before {
  content: "\f284";
}
.fa-modx:before {
  content: "\f285";
}
.fa-fort-awesome:before {
  content: "\f286";
}
.fa-usb:before {
  content: "\f287";
}
.fa-product-hunt:before {
  content: "\f288";
}
.fa-mixcloud:before {
  content: "\f289";
}
.fa-scribd:before {
  content: "\f28a";
}
.fa-pause-circle:before {
  content: "\f28b";
}
.fa-pause-circle-o:before {
  content: "\f28c";
}
.fa-stop-circle:before {
  content: "\f28d";
}
.fa-stop-circle-o:before {
  content: "\f28e";
}
.fa-shopping-bag:before {
  content: "\f290";
}
.fa-shopping-basket:before {
  content: "\f291";
}
.fa-hashtag:before {
  content: "\f292";
}
.fa-bluetooth:before {
  content: "\f293";
}
.fa-bluetooth-b:before {
  content: "\f294";
}
.fa-percent:before {
  content: "\f295";
}
.fa-gitlab:before {
  content: "\f296";
}
.fa-wpbeginner:before {
  content: "\f297";
}
.fa-wpforms:before {
  content: "\f298";
}
.fa-envira:before {
  content: "\f299";
}
.fa-universal-access:before {
  content: "\f29a";
}
.fa-wheelchair-alt:before {
  content: "\f29b";
}
.fa-question-circle-o:before {
  content: "\f29c";
}
.fa-blind:before {
  content: "\f29d";
}
.fa-audio-description:before {
  content: "\f29e";
}
.fa-volume-control-phone:before {
  content: "\f2a0";
}
.fa-braille:before {
  content: "\f2a1";
}
.fa-assistive-listening-systems:before {
  content: "\f2a2";
}
.fa-asl-interpreting:before,
.fa-american-sign-language-interpreting:before {
  content: "\f2a3";
}
.fa-deafness:before,
.fa-hard-of-hearing:before,
.fa-deaf:before {
  content: "\f2a4";
}
.fa-glide:before {
  content: "\f2a5";
}
.fa-glide-g:before {
  content: "\f2a6";
}
.fa-signing:before,
.fa-sign-language:before {
  content: "\f2a7";
}
.fa-low-vision:before {
  content: "\f2a8";
}
.fa-viadeo:before {
  content: "\f2a9";
}
.fa-viadeo-square:before {
  content: "\f2aa";
}
.fa-snapchat:before {
  content: "\f2ab";
}
.fa-snapchat-ghost:before {
  content: "\f2ac";
}
.fa-snapchat-square:before {
  content: "\f2ad";
}
.fa-pied-piper:before {
  content: "\f2ae";
}
.fa-first-order:before {
  content: "\f2b0";
}
.fa-yoast:before {
  content: "\f2b1";
}
.fa-themeisle:before {
  content: "\f2b2";
}
.fa-google-plus-circle:before,
.fa-google-plus-official:before {
  content: "\f2b3";
}
.fa-fa:before,
.fa-font-awesome:before {
  content: "\f2b4";
}
.fa-handshake-o:before {
  content: "\f2b5";
}
.fa-envelope-open:before {
  content: "\f2b6";
}
.fa-envelope-open-o:before {
  content: "\f2b7";
}
.fa-linode:before {
  content: "\f2b8";
}
.fa-address-book:before {
  content: "\f2b9";
}
.fa-address-book-o:before {
  content: "\f2ba";
}
.fa-vcard:before,
.fa-address-card:before {
  content: "\f2bb";
}
.fa-vcard-o:before,
.fa-address-card-o:before {
  content: "\f2bc";
}
.fa-user-circle:before {
  content: "\f2bd";
}
.fa-user-circle-o:before {
  content: "\f2be";
}
.fa-user-o:before {
  content: "\f2c0";
}
.fa-id-badge:before {
  content: "\f2c1";
}
.fa-drivers-license:before,
.fa-id-card:before {
  content: "\f2c2";
}
.fa-drivers-license-o:before,
.fa-id-card-o:before {
  content: "\f2c3";
}
.fa-quora:before {
  content: "\f2c4";
}
.fa-free-code-camp:before {
  content: "\f2c5";
}
.fa-telegram:before {
  content: "\f2c6";
}
.fa-thermometer-4:before,
.fa-thermometer:before,
.fa-thermometer-full:before {
  content: "\f2c7";
}
.fa-thermometer-3:before,
.fa-thermometer-three-quarters:before {
  content: "\f2c8";
}
.fa-thermometer-2:before,
.fa-thermometer-half:before {
  content: "\f2c9";
}
.fa-thermometer-1:before,
.fa-thermometer-quarter:before {
  content: "\f2ca";
}
.fa-thermometer-0:before,
.fa-thermometer-empty:before {
  content: "\f2cb";
}
.fa-shower:before {
  content: "\f2cc";
}
.fa-bathtub:before,
.fa-s15:before,
.fa-bath:before {
  content: "\f2cd";
}
.fa-podcast:before {
  content: "\f2ce";
}
.fa-window-maximize:before {
  content: "\f2d0";
}
.fa-window-minimize:before {
  content: "\f2d1";
}
.fa-window-restore:before {
  content: "\f2d2";
}
.fa-times-rectangle:before,
.fa-window-close:before {
  content: "\f2d3";
}
.fa-times-rectangle-o:before,
.fa-window-close-o:before {
  content: "\f2d4";
}
.fa-bandcamp:before {
  content: "\f2d5";
}
.fa-grav:before {
  content: "\f2d6";
}
.fa-etsy:before {
  content: "\f2d7";
}
.fa-imdb:before {
  content: "\f2d8";
}
.fa-ravelry:before {
  content: "\f2d9";
}
.fa-eercast:before {
  content: "\f2da";
}
.fa-microchip:before {
  content: "\f2db";
}
.fa-snowflake-o:before {
  content: "\f2dc";
}
.fa-superpowers:before {
  content: "\f2dd";
}
.fa-wpexplorer:before {
  content: "\f2de";
}
.fa-meetup:before {
  content: "\f2e0";
}
.sr-only {
  position: absolute;
  width: 1px;
  height: 1px;
  padding: 0;
  margin: -1px;
  overflow: hidden;
  clip: rect(0, 0, 0, 0);
  border: 0;
}
.sr-only-focusable:active,
.sr-only-focusable:focus {
  position: static;
  width: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  clip: auto;
}
.sr-only-focusable:active,
.sr-only-focusable:focus {
  position: static;
  width: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  clip: auto;
}
/*!
*
* IPython base
*
*/
.modal.fade .modal-dialog {
  -webkit-transform: translate(0, 0);
  -ms-transform: translate(0, 0);
  -o-transform: translate(0, 0);
  transform: translate(0, 0);
}
code {
  color: #000;
}
pre {
  font-size: inherit;
  line-height: inherit;
}
label {
  font-weight: normal;
}
/* Make the page background atleast 100% the height of the view port */
/* Make the page itself atleast 70% the height of the view port */
.border-box-sizing {
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
}
.corner-all {
  border-radius: 2px;
}
.no-padding {
  padding: 0px;
}
/* Flexible box model classes */
/* Taken from Alex Russell http://infrequently.org/2009/08/css-3-progress/ */
/* This file is a compatability layer.  It allows the usage of flexible box 
model layouts accross multiple browsers, including older browsers.  The newest,
universal implementation of the flexible box model is used when available (see
`Modern browsers` comments below).  Browsers that are known to implement this 
new spec completely include:

    Firefox 28.0+
    Chrome 29.0+
    Internet Explorer 11+ 
    Opera 17.0+

Browsers not listed, including Safari, are supported via the styling under the
`Old browsers` comments below.
*/
.hbox {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
}
.hbox > * {
  /* Old browsers */
  -webkit-box-flex: 0;
  -moz-box-flex: 0;
  box-flex: 0;
  /* Modern browsers */
  flex: none;
}
.vbox {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
}
.vbox > * {
  /* Old browsers */
  -webkit-box-flex: 0;
  -moz-box-flex: 0;
  box-flex: 0;
  /* Modern browsers */
  flex: none;
}
.hbox.reverse,
.vbox.reverse,
.reverse {
  /* Old browsers */
  -webkit-box-direction: reverse;
  -moz-box-direction: reverse;
  box-direction: reverse;
  /* Modern browsers */
  flex-direction: row-reverse;
}
.hbox.box-flex0,
.vbox.box-flex0,
.box-flex0 {
  /* Old browsers */
  -webkit-box-flex: 0;
  -moz-box-flex: 0;
  box-flex: 0;
  /* Modern browsers */
  flex: none;
  width: auto;
}
.hbox.box-flex1,
.vbox.box-flex1,
.box-flex1 {
  /* Old browsers */
  -webkit-box-flex: 1;
  -moz-box-flex: 1;
  box-flex: 1;
  /* Modern browsers */
  flex: 1;
}
.hbox.box-flex,
.vbox.box-flex,
.box-flex {
  /* Old browsers */
  /* Old browsers */
  -webkit-box-flex: 1;
  -moz-box-flex: 1;
  box-flex: 1;
  /* Modern browsers */
  flex: 1;
}
.hbox.box-flex2,
.vbox.box-flex2,
.box-flex2 {
  /* Old browsers */
  -webkit-box-flex: 2;
  -moz-box-flex: 2;
  box-flex: 2;
  /* Modern browsers */
  flex: 2;
}
.box-group1 {
  /*  Deprecated */
  -webkit-box-flex-group: 1;
  -moz-box-flex-group: 1;
  box-flex-group: 1;
}
.box-group2 {
  /* Deprecated */
  -webkit-box-flex-group: 2;
  -moz-box-flex-group: 2;
  box-flex-group: 2;
}
.hbox.start,
.vbox.start,
.start {
  /* Old browsers */
  -webkit-box-pack: start;
  -moz-box-pack: start;
  box-pack: start;
  /* Modern browsers */
  justify-content: flex-start;
}
.hbox.end,
.vbox.end,
.end {
  /* Old browsers */
  -webkit-box-pack: end;
  -moz-box-pack: end;
  box-pack: end;
  /* Modern browsers */
  justify-content: flex-end;
}
.hbox.center,
.vbox.center,
.center {
  /* Old browsers */
  -webkit-box-pack: center;
  -moz-box-pack: center;
  box-pack: center;
  /* Modern browsers */
  justify-content: center;
}
.hbox.baseline,
.vbox.baseline,
.baseline {
  /* Old browsers */
  -webkit-box-pack: baseline;
  -moz-box-pack: baseline;
  box-pack: baseline;
  /* Modern browsers */
  justify-content: baseline;
}
.hbox.stretch,
.vbox.stretch,
.stretch {
  /* Old browsers */
  -webkit-box-pack: stretch;
  -moz-box-pack: stretch;
  box-pack: stretch;
  /* Modern browsers */
  justify-content: stretch;
}
.hbox.align-start,
.vbox.align-start,
.align-start {
  /* Old browsers */
  -webkit-box-align: start;
  -moz-box-align: start;
  box-align: start;
  /* Modern browsers */
  align-items: flex-start;
}
.hbox.align-end,
.vbox.align-end,
.align-end {
  /* Old browsers */
  -webkit-box-align: end;
  -moz-box-align: end;
  box-align: end;
  /* Modern browsers */
  align-items: flex-end;
}
.hbox.align-center,
.vbox.align-center,
.align-center {
  /* Old browsers */
  -webkit-box-align: center;
  -moz-box-align: center;
  box-align: center;
  /* Modern browsers */
  align-items: center;
}
.hbox.align-baseline,
.vbox.align-baseline,
.align-baseline {
  /* Old browsers */
  -webkit-box-align: baseline;
  -moz-box-align: baseline;
  box-align: baseline;
  /* Modern browsers */
  align-items: baseline;
}
.hbox.align-stretch,
.vbox.align-stretch,
.align-stretch {
  /* Old browsers */
  -webkit-box-align: stretch;
  -moz-box-align: stretch;
  box-align: stretch;
  /* Modern browsers */
  align-items: stretch;
}
div.error {
  margin: 2em;
  text-align: center;
}
div.error > h1 {
  font-size: 500%;
  line-height: normal;
}
div.error > p {
  font-size: 200%;
  line-height: normal;
}
div.traceback-wrapper {
  text-align: left;
  max-width: 800px;
  margin: auto;
}
div.traceback-wrapper pre.traceback {
  max-height: 600px;
  overflow: auto;
}
/**
 * Primary styles
 *
 * Author: Jupyter Development Team
 */
body {
  background-color: #fff;
  /* This makes sure that the body covers the entire window and needs to
       be in a different element than the display: box in wrapper below */
  position: absolute;
  left: 0px;
  right: 0px;
  top: 0px;
  bottom: 0px;
  overflow: visible;
}
body > #header {
  /* Initially hidden to prevent FLOUC */
  display: none;
  background-color: #fff;
  /* Display over codemirror */
  position: relative;
  z-index: 100;
}
body > #header #header-container {
  display: flex;
  flex-direction: row;
  justify-content: space-between;
  padding: 5px;
  padding-bottom: 5px;
  padding-top: 5px;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
}
body > #header .header-bar {
  width: 100%;
  height: 1px;
  background: #e7e7e7;
  margin-bottom: -1px;
}
@media print {
  body > #header {
    display: none !important;
  }
}
#header-spacer {
  width: 100%;
  visibility: hidden;
}
@media print {
  #header-spacer {
    display: none;
  }
}
#ipython_notebook {
  padding-left: 0px;
  padding-top: 1px;
  padding-bottom: 1px;
}
[dir="rtl"] #ipython_notebook {
  margin-right: 10px;
  margin-left: 0;
}
[dir="rtl"] #ipython_notebook.pull-left {
  float: right !important;
  float: right;
}
.flex-spacer {
  flex: 1;
}
#noscript {
  width: auto;
  padding-top: 16px;
  padding-bottom: 16px;
  text-align: center;
  font-size: 22px;
  color: red;
  font-weight: bold;
}
#ipython_notebook img {
  height: 28px;
}
#site {
  width: 100%;
  display: none;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  overflow: auto;
}
@media print {
  #site {
    height: auto !important;
  }
}
/* Smaller buttons */
.ui-button .ui-button-text {
  padding: 0.2em 0.8em;
  font-size: 77%;
}
input.ui-button {
  padding: 0.3em 0.9em;
}
span#kernel_logo_widget {
  margin: 0 10px;
}
span#login_widget {
  float: right;
}
[dir="rtl"] span#login_widget {
  float: left;
}
span#login_widget > .button,
#logout {
  color: #333;
  background-color: #fff;
  border-color: #ccc;
}
span#login_widget > .button:focus,
#logout:focus,
span#login_widget > .button.focus,
#logout.focus {
  color: #333;
  background-color: #e6e6e6;
  border-color: #8c8c8c;
}
span#login_widget > .button:hover,
#logout:hover {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
span#login_widget > .button:active,
#logout:active,
span#login_widget > .button.active,
#logout.active,
.open > .dropdown-togglespan#login_widget > .button,
.open > .dropdown-toggle#logout {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
span#login_widget > .button:active:hover,
#logout:active:hover,
span#login_widget > .button.active:hover,
#logout.active:hover,
.open > .dropdown-togglespan#login_widget > .button:hover,
.open > .dropdown-toggle#logout:hover,
span#login_widget > .button:active:focus,
#logout:active:focus,
span#login_widget > .button.active:focus,
#logout.active:focus,
.open > .dropdown-togglespan#login_widget > .button:focus,
.open > .dropdown-toggle#logout:focus,
span#login_widget > .button:active.focus,
#logout:active.focus,
span#login_widget > .button.active.focus,
#logout.active.focus,
.open > .dropdown-togglespan#login_widget > .button.focus,
.open > .dropdown-toggle#logout.focus {
  color: #333;
  background-color: #d4d4d4;
  border-color: #8c8c8c;
}
span#login_widget > .button:active,
#logout:active,
span#login_widget > .button.active,
#logout.active,
.open > .dropdown-togglespan#login_widget > .button,
.open > .dropdown-toggle#logout {
  background-image: none;
}
span#login_widget > .button.disabled:hover,
#logout.disabled:hover,
span#login_widget > .button[disabled]:hover,
#logout[disabled]:hover,
fieldset[disabled] span#login_widget > .button:hover,
fieldset[disabled] #logout:hover,
span#login_widget > .button.disabled:focus,
#logout.disabled:focus,
span#login_widget > .button[disabled]:focus,
#logout[disabled]:focus,
fieldset[disabled] span#login_widget > .button:focus,
fieldset[disabled] #logout:focus,
span#login_widget > .button.disabled.focus,
#logout.disabled.focus,
span#login_widget > .button[disabled].focus,
#logout[disabled].focus,
fieldset[disabled] span#login_widget > .button.focus,
fieldset[disabled] #logout.focus {
  background-color: #fff;
  border-color: #ccc;
}
span#login_widget > .button .badge,
#logout .badge {
  color: #fff;
  background-color: #333;
}
.nav-header {
  text-transform: none;
}
#header > span {
  margin-top: 10px;
}
.modal_stretch .modal-dialog {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
  min-height: 80vh;
}
.modal_stretch .modal-dialog .modal-body {
  max-height: calc(100vh - 200px);
  overflow: auto;
  flex: 1;
}
.modal-header {
  cursor: move;
}
@media (min-width: 768px) {
  .modal .modal-dialog {
    width: 700px;
  }
}
@media (min-width: 768px) {
  select.form-control {
    margin-left: 12px;
    margin-right: 12px;
  }
}
/*!
*
* IPython auth
*
*/
.center-nav {
  display: inline-block;
  margin-bottom: -4px;
}
[dir="rtl"] .center-nav form.pull-left {
  float: right !important;
  float: right;
}
[dir="rtl"] .center-nav .navbar-text {
  float: right;
}
[dir="rtl"] .navbar-inner {
  text-align: right;
}
[dir="rtl"] div.text-left {
  text-align: right;
}
/*!
*
* IPython tree view
*
*/
/* We need an invisible input field on top of the sentense*/
/* "Drag file onto the list ..." */
.alternate_upload {
  background-color: none;
  display: inline;
}
.alternate_upload.form {
  padding: 0;
  margin: 0;
}
.alternate_upload input.fileinput {
  position: absolute;
  display: block;
  width: 100%;
  height: 100%;
  overflow: hidden;
  cursor: pointer;
  opacity: 0;
  z-index: 2;
}
.alternate_upload .btn-xs > input.fileinput {
  margin: -1px -5px;
}
.alternate_upload .btn-upload {
  position: relative;
  height: 22px;
}
::-webkit-file-upload-button {
  cursor: pointer;
}
/**
 * Primary styles
 *
 * Author: Jupyter Development Team
 */
ul#tabs {
  margin-bottom: 4px;
}
ul#tabs a {
  padding-top: 6px;
  padding-bottom: 4px;
}
[dir="rtl"] ul#tabs.nav-tabs > li {
  float: right;
}
[dir="rtl"] ul#tabs.nav.nav-tabs {
  padding-right: 0;
}
ul.breadcrumb a:focus,
ul.breadcrumb a:hover {
  text-decoration: none;
}
ul.breadcrumb i.icon-home {
  font-size: 16px;
  margin-right: 4px;
}
ul.breadcrumb span {
  color: #5e5e5e;
}
.list_toolbar {
  padding: 4px 0 4px 0;
  vertical-align: middle;
}
.list_toolbar .tree-buttons {
  padding-top: 1px;
}
[dir="rtl"] .list_toolbar .tree-buttons .pull-right {
  float: left !important;
  float: left;
}
[dir="rtl"] .list_toolbar .col-sm-4,
[dir="rtl"] .list_toolbar .col-sm-8 {
  float: right;
}
.dynamic-buttons {
  padding-top: 3px;
  display: inline-block;
}
.list_toolbar [class*="span"] {
  min-height: 24px;
}
.list_header {
  font-weight: bold;
  background-color: #EEE;
}
.list_placeholder {
  font-weight: bold;
  padding-top: 4px;
  padding-bottom: 4px;
  padding-left: 7px;
  padding-right: 7px;
}
.list_container {
  margin-top: 4px;
  margin-bottom: 20px;
  border: 1px solid #ddd;
  border-radius: 2px;
}
.list_container > div {
  border-bottom: 1px solid #ddd;
}
.list_container > div:hover .list-item {
  background-color: red;
}
.list_container > div:last-child {
  border: none;
}
.list_item:hover .list_item {
  background-color: #ddd;
}
.list_item a {
  text-decoration: none;
}
.list_item:hover {
  background-color: #fafafa;
}
.list_header > div,
.list_item > div {
  padding-top: 4px;
  padding-bottom: 4px;
  padding-left: 7px;
  padding-right: 7px;
  line-height: 22px;
}
.list_header > div input,
.list_item > div input {
  margin-right: 7px;
  margin-left: 14px;
  vertical-align: text-bottom;
  line-height: 22px;
  position: relative;
  top: -1px;
}
.list_header > div .item_link,
.list_item > div .item_link {
  margin-left: -1px;
  vertical-align: baseline;
  line-height: 22px;
}
[dir="rtl"] .list_item > div input {
  margin-right: 0;
}
.new-file input[type=checkbox] {
  visibility: hidden;
}
.item_name {
  line-height: 22px;
  height: 24px;
}
.item_icon {
  font-size: 14px;
  color: #5e5e5e;
  margin-right: 7px;
  margin-left: 7px;
  line-height: 22px;
  vertical-align: baseline;
}
.item_modified {
  margin-right: 7px;
  margin-left: 7px;
}
[dir="rtl"] .item_modified.pull-right {
  float: left !important;
  float: left;
}
.item_buttons {
  line-height: 1em;
  margin-left: -5px;
}
.item_buttons .btn,
.item_buttons .btn-group,
.item_buttons .input-group {
  float: left;
}
.item_buttons > .btn,
.item_buttons > .btn-group,
.item_buttons > .input-group {
  margin-left: 5px;
}
.item_buttons .btn {
  min-width: 13ex;
}
.item_buttons .running-indicator {
  padding-top: 4px;
  color: #5cb85c;
}
.item_buttons .kernel-name {
  padding-top: 4px;
  color: #5bc0de;
  margin-right: 7px;
  float: left;
}
[dir="rtl"] .item_buttons.pull-right {
  float: left !important;
  float: left;
}
[dir="rtl"] .item_buttons .kernel-name {
  margin-left: 7px;
  float: right;
}
.toolbar_info {
  height: 24px;
  line-height: 24px;
}
.list_item input:not([type=checkbox]) {
  padding-top: 3px;
  padding-bottom: 3px;
  height: 22px;
  line-height: 14px;
  margin: 0px;
}
.highlight_text {
  color: blue;
}
#project_name {
  display: inline-block;
  padding-left: 7px;
  margin-left: -2px;
}
#project_name > .breadcrumb {
  padding: 0px;
  margin-bottom: 0px;
  background-color: transparent;
  font-weight: bold;
}
.sort_button {
  display: inline-block;
  padding-left: 7px;
}
[dir="rtl"] .sort_button.pull-right {
  float: left !important;
  float: left;
}
#tree-selector {
  padding-right: 0px;
}
#button-select-all {
  min-width: 50px;
}
[dir="rtl"] #button-select-all.btn {
  float: right ;
}
#select-all {
  margin-left: 7px;
  margin-right: 2px;
  margin-top: 2px;
  height: 16px;
}
[dir="rtl"] #select-all.pull-left {
  float: right !important;
  float: right;
}
.menu_icon {
  margin-right: 2px;
}
.tab-content .row {
  margin-left: 0px;
  margin-right: 0px;
}
.folder_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f114";
}
.folder_icon:before.fa-pull-left {
  margin-right: .3em;
}
.folder_icon:before.fa-pull-right {
  margin-left: .3em;
}
.folder_icon:before.pull-left {
  margin-right: .3em;
}
.folder_icon:before.pull-right {
  margin-left: .3em;
}
.notebook_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f02d";
  position: relative;
  top: -1px;
}
.notebook_icon:before.fa-pull-left {
  margin-right: .3em;
}
.notebook_icon:before.fa-pull-right {
  margin-left: .3em;
}
.notebook_icon:before.pull-left {
  margin-right: .3em;
}
.notebook_icon:before.pull-right {
  margin-left: .3em;
}
.running_notebook_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f02d";
  position: relative;
  top: -1px;
  color: #5cb85c;
}
.running_notebook_icon:before.fa-pull-left {
  margin-right: .3em;
}
.running_notebook_icon:before.fa-pull-right {
  margin-left: .3em;
}
.running_notebook_icon:before.pull-left {
  margin-right: .3em;
}
.running_notebook_icon:before.pull-right {
  margin-left: .3em;
}
.file_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f016";
  position: relative;
  top: -2px;
}
.file_icon:before.fa-pull-left {
  margin-right: .3em;
}
.file_icon:before.fa-pull-right {
  margin-left: .3em;
}
.file_icon:before.pull-left {
  margin-right: .3em;
}
.file_icon:before.pull-right {
  margin-left: .3em;
}
#notebook_toolbar .pull-right {
  padding-top: 0px;
  margin-right: -1px;
}
ul#new-menu {
  left: auto;
  right: 0;
}
#new-menu .dropdown-header {
  font-size: 10px;
  border-bottom: 1px solid #e5e5e5;
  padding: 0 0 3px;
  margin: -3px 20px 0;
}
.kernel-menu-icon {
  padding-right: 12px;
  width: 24px;
  content: "\f096";
}
.kernel-menu-icon:before {
  content: "\f096";
}
.kernel-menu-icon-current:before {
  content: "\f00c";
}
#tab_content {
  padding-top: 20px;
}
#running .panel-group .panel {
  margin-top: 3px;
  margin-bottom: 1em;
}
#running .panel-group .panel .panel-heading {
  background-color: #EEE;
  padding-top: 4px;
  padding-bottom: 4px;
  padding-left: 7px;
  padding-right: 7px;
  line-height: 22px;
}
#running .panel-group .panel .panel-heading a:focus,
#running .panel-group .panel .panel-heading a:hover {
  text-decoration: none;
}
#running .panel-group .panel .panel-body {
  padding: 0px;
}
#running .panel-group .panel .panel-body .list_container {
  margin-top: 0px;
  margin-bottom: 0px;
  border: 0px;
  border-radius: 0px;
}
#running .panel-group .panel .panel-body .list_container .list_item {
  border-bottom: 1px solid #ddd;
}
#running .panel-group .panel .panel-body .list_container .list_item:last-child {
  border-bottom: 0px;
}
.delete-button {
  display: none;
}
.duplicate-button {
  display: none;
}
.rename-button {
  display: none;
}
.move-button {
  display: none;
}
.download-button {
  display: none;
}
.shutdown-button {
  display: none;
}
.dynamic-instructions {
  display: inline-block;
  padding-top: 4px;
}
/*!
*
* IPython text editor webapp
*
*/
.selected-keymap i.fa {
  padding: 0px 5px;
}
.selected-keymap i.fa:before {
  content: "\f00c";
}
#mode-menu {
  overflow: auto;
  max-height: 20em;
}
.edit_app #header {
  -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
}
.edit_app #menubar .navbar {
  /* Use a negative 1 bottom margin, so the border overlaps the border of the
    header */
  margin-bottom: -1px;
}
.dirty-indicator {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  width: 20px;
}
.dirty-indicator.fa-pull-left {
  margin-right: .3em;
}
.dirty-indicator.fa-pull-right {
  margin-left: .3em;
}
.dirty-indicator.pull-left {
  margin-right: .3em;
}
.dirty-indicator.pull-right {
  margin-left: .3em;
}
.dirty-indicator-dirty {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  width: 20px;
}
.dirty-indicator-dirty.fa-pull-left {
  margin-right: .3em;
}
.dirty-indicator-dirty.fa-pull-right {
  margin-left: .3em;
}
.dirty-indicator-dirty.pull-left {
  margin-right: .3em;
}
.dirty-indicator-dirty.pull-right {
  margin-left: .3em;
}
.dirty-indicator-clean {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  width: 20px;
}
.dirty-indicator-clean.fa-pull-left {
  margin-right: .3em;
}
.dirty-indicator-clean.fa-pull-right {
  margin-left: .3em;
}
.dirty-indicator-clean.pull-left {
  margin-right: .3em;
}
.dirty-indicator-clean.pull-right {
  margin-left: .3em;
}
.dirty-indicator-clean:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f00c";
}
.dirty-indicator-clean:before.fa-pull-left {
  margin-right: .3em;
}
.dirty-indicator-clean:before.fa-pull-right {
  margin-left: .3em;
}
.dirty-indicator-clean:before.pull-left {
  margin-right: .3em;
}
.dirty-indicator-clean:before.pull-right {
  margin-left: .3em;
}
#filename {
  font-size: 16pt;
  display: table;
  padding: 0px 5px;
}
#current-mode {
  padding-left: 5px;
  padding-right: 5px;
}
#texteditor-backdrop {
  padding-top: 20px;
  padding-bottom: 20px;
}
@media not print {
  #texteditor-backdrop {
    background-color: #EEE;
  }
}
@media print {
  #texteditor-backdrop #texteditor-container .CodeMirror-gutter,
  #texteditor-backdrop #texteditor-container .CodeMirror-gutters {
    background-color: #fff;
  }
}
@media not print {
  #texteditor-backdrop #texteditor-container .CodeMirror-gutter,
  #texteditor-backdrop #texteditor-container .CodeMirror-gutters {
    background-color: #fff;
  }
}
@media not print {
  #texteditor-backdrop #texteditor-container {
    padding: 0px;
    background-color: #fff;
    -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
    box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  }
}
.CodeMirror-dialog {
  background-color: #fff;
}
/*!
*
* IPython notebook
*
*/
/* CSS font colors for translated ANSI escape sequences */
/* The color values are a mix of
   http://www.xcolors.net/dl/baskerville-ivorylight and
   http://www.xcolors.net/dl/euphrasia */
.ansi-black-fg {
  color: #3E424D;
}
.ansi-black-bg {
  background-color: #3E424D;
}
.ansi-black-intense-fg {
  color: #282C36;
}
.ansi-black-intense-bg {
  background-color: #282C36;
}
.ansi-red-fg {
  color: #E75C58;
}
.ansi-red-bg {
  background-color: #E75C58;
}
.ansi-red-intense-fg {
  color: #B22B31;
}
.ansi-red-intense-bg {
  background-color: #B22B31;
}
.ansi-green-fg {
  color: #00A250;
}
.ansi-green-bg {
  background-color: #00A250;
}
.ansi-green-intense-fg {
  color: #007427;
}
.ansi-green-intense-bg {
  background-color: #007427;
}
.ansi-yellow-fg {
  color: #DDB62B;
}
.ansi-yellow-bg {
  background-color: #DDB62B;
}
.ansi-yellow-intense-fg {
  color: #B27D12;
}
.ansi-yellow-intense-bg {
  background-color: #B27D12;
}
.ansi-blue-fg {
  color: #208FFB;
}
.ansi-blue-bg {
  background-color: #208FFB;
}
.ansi-blue-intense-fg {
  color: #0065CA;
}
.ansi-blue-intense-bg {
  background-color: #0065CA;
}
.ansi-magenta-fg {
  color: #D160C4;
}
.ansi-magenta-bg {
  background-color: #D160C4;
}
.ansi-magenta-intense-fg {
  color: #A03196;
}
.ansi-magenta-intense-bg {
  background-color: #A03196;
}
.ansi-cyan-fg {
  color: #60C6C8;
}
.ansi-cyan-bg {
  background-color: #60C6C8;
}
.ansi-cyan-intense-fg {
  color: #258F8F;
}
.ansi-cyan-intense-bg {
  background-color: #258F8F;
}
.ansi-white-fg {
  color: #C5C1B4;
}
.ansi-white-bg {
  background-color: #C5C1B4;
}
.ansi-white-intense-fg {
  color: #A1A6B2;
}
.ansi-white-intense-bg {
  background-color: #A1A6B2;
}
.ansi-default-inverse-fg {
  color: #FFFFFF;
}
.ansi-default-inverse-bg {
  background-color: #000000;
}
.ansi-bold {
  font-weight: bold;
}
.ansi-underline {
  text-decoration: underline;
}
/* The following styles are deprecated an will be removed in a future version */
.ansibold {
  font-weight: bold;
}
.ansi-inverse {
  outline: 0.5px dotted;
}
/* use dark versions for foreground, to improve visibility */
.ansiblack {
  color: black;
}
.ansired {
  color: darkred;
}
.ansigreen {
  color: darkgreen;
}
.ansiyellow {
  color: #c4a000;
}
.ansiblue {
  color: darkblue;
}
.ansipurple {
  color: darkviolet;
}
.ansicyan {
  color: steelblue;
}
.ansigray {
  color: gray;
}
/* and light for background, for the same reason */
.ansibgblack {
  background-color: black;
}
.ansibgred {
  background-color: red;
}
.ansibggreen {
  background-color: green;
}
.ansibgyellow {
  background-color: yellow;
}
.ansibgblue {
  background-color: blue;
}
.ansibgpurple {
  background-color: magenta;
}
.ansibgcyan {
  background-color: cyan;
}
.ansibggray {
  background-color: gray;
}
div.cell {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
  border-radius: 2px;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  border-width: 1px;
  border-style: solid;
  border-color: transparent;
  width: 100%;
  padding: 5px;
  /* This acts as a spacer between cells, that is outside the border */
  margin: 0px;
  outline: none;
  position: relative;
  overflow: visible;
}
div.cell:before {
  position: absolute;
  display: block;
  top: -1px;
  left: -1px;
  width: 5px;
  height: calc(100% +  2px);
  content: '';
  background: transparent;
}
div.cell.jupyter-soft-selected {
  border-left-color: #E3F2FD;
  border-left-width: 1px;
  padding-left: 5px;
  border-right-color: #E3F2FD;
  border-right-width: 1px;
  background: #E3F2FD;
}
@media print {
  div.cell.jupyter-soft-selected {
    border-color: transparent;
  }
}
div.cell.selected,
div.cell.selected.jupyter-soft-selected {
  border-color: #ababab;
}
div.cell.selected:before,
div.cell.selected.jupyter-soft-selected:before {
  position: absolute;
  display: block;
  top: -1px;
  left: -1px;
  width: 5px;
  height: calc(100% +  2px);
  content: '';
  background: #42A5F5;
}
@media print {
  div.cell.selected,
  div.cell.selected.jupyter-soft-selected {
    border-color: transparent;
  }
}
.edit_mode div.cell.selected {
  border-color: #66BB6A;
}
.edit_mode div.cell.selected:before {
  position: absolute;
  display: block;
  top: -1px;
  left: -1px;
  width: 5px;
  height: calc(100% +  2px);
  content: '';
  background: #66BB6A;
}
@media print {
  .edit_mode div.cell.selected {
    border-color: transparent;
  }
}
.prompt {
  /* This needs to be wide enough for 3 digit prompt numbers: In[100]: */
  min-width: 14ex;
  /* This padding is tuned to match the padding on the CodeMirror editor. */
  padding: 0.4em;
  margin: 0px;
  font-family: monospace;
  text-align: right;
  /* This has to match that of the the CodeMirror class line-height below */
  line-height: 1.21429em;
  /* Don't highlight prompt number selection */
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -khtml-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  /* Use default cursor */
  cursor: default;
}
@media (max-width: 540px) {
  .prompt {
    text-align: left;
  }
}
div.inner_cell {
  min-width: 0;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
  /* Old browsers */
  -webkit-box-flex: 1;
  -moz-box-flex: 1;
  box-flex: 1;
  /* Modern browsers */
  flex: 1;
}
/* input_area and input_prompt must match in top border and margin for alignment */
div.input_area {
  border: 1px solid #cfcfcf;
  border-radius: 2px;
  background: #f7f7f7;
  line-height: 1.21429em;
}
/* This is needed so that empty prompt areas can collapse to zero height when there
   is no content in the output_subarea and the prompt. The main purpose of this is
   to make sure that empty JavaScript output_subareas have no height. */
div.prompt:empty {
  padding-top: 0;
  padding-bottom: 0;
}
div.unrecognized_cell {
  padding: 5px 5px 5px 0px;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
}
div.unrecognized_cell .inner_cell {
  border-radius: 2px;
  padding: 5px;
  font-weight: bold;
  color: red;
  border: 1px solid #cfcfcf;
  background: #eaeaea;
}
div.unrecognized_cell .inner_cell a {
  color: inherit;
  text-decoration: none;
}
div.unrecognized_cell .inner_cell a:hover {
  color: inherit;
  text-decoration: none;
}
@media (max-width: 540px) {
  div.unrecognized_cell > div.prompt {
    display: none;
  }
}
div.code_cell {
  /* avoid page breaking on code cells when printing */
}
@media print {
  div.code_cell {
    page-break-inside: avoid;
  }
}
/* any special styling for code cells that are currently running goes here */
div.input {
  page-break-inside: avoid;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
}
@media (max-width: 540px) {
  div.input {
    /* Old browsers */
    display: -webkit-box;
    -webkit-box-orient: vertical;
    -webkit-box-align: stretch;
    display: -moz-box;
    -moz-box-orient: vertical;
    -moz-box-align: stretch;
    display: box;
    box-orient: vertical;
    box-align: stretch;
    /* Modern browsers */
    display: flex;
    flex-direction: column;
    align-items: stretch;
  }
}
/* input_area and input_prompt must match in top border and margin for alignment */
div.input_prompt {
  color: #303F9F;
  border-top: 1px solid transparent;
}
div.input_area > div.highlight {
  margin: 0.4em;
  border: none;
  padding: 0px;
  background-color: transparent;
}
div.input_area > div.highlight > pre {
  margin: 0px;
  border: none;
  padding: 0px;
  background-color: transparent;
}
/* The following gets added to the <head> if it is detected that the user has a
 * monospace font with inconsistent normal/bold/italic height.  See
 * notebookmain.js.  Such fonts will have keywords vertically offset with
 * respect to the rest of the text.  The user should select a better font.
 * See: https://github.com/ipython/ipython/issues/1503
 *
 * .CodeMirror span {
 *      vertical-align: bottom;
 * }
 */
.CodeMirror {
  line-height: 1.21429em;
  /* Changed from 1em to our global default */
  font-size: 14px;
  height: auto;
  /* Changed to auto to autogrow */
  background: none;
  /* Changed from white to allow our bg to show through */
}
.CodeMirror-scroll {
  /*  The CodeMirror docs are a bit fuzzy on if overflow-y should be hidden or visible.*/
  /*  We have found that if it is visible, vertical scrollbars appear with font size changes.*/
  overflow-y: hidden;
  overflow-x: auto;
}
.CodeMirror-lines {
  /* In CM2, this used to be 0.4em, but in CM3 it went to 4px. We need the em value because */
  /* we have set a different line-height and want this to scale with that. */
  /* Note that this should set vertical padding only, since CodeMirror assumes
       that horizontal padding will be set on CodeMirror pre */
  padding: 0.4em 0;
}
.CodeMirror-linenumber {
  padding: 0 8px 0 4px;
}
.CodeMirror-gutters {
  border-bottom-left-radius: 2px;
  border-top-left-radius: 2px;
}
.CodeMirror pre {
  /* In CM3 this went to 4px from 0 in CM2. This sets horizontal padding only,
    use .CodeMirror-lines for vertical */
  padding: 0 0.4em;
  border: 0;
  border-radius: 0;
}
.CodeMirror-cursor {
  border-left: 1.4px solid black;
}
@media screen and (min-width: 2138px) and (max-width: 4319px) {
  .CodeMirror-cursor {
    border-left: 2px solid black;
  }
}
@media screen and (min-width: 4320px) {
  .CodeMirror-cursor {
    border-left: 4px solid black;
  }
}
/*

Original style from softwaremaniacs.org (c) Ivan Sagalaev <Maniac@SoftwareManiacs.Org>
Adapted from GitHub theme

*/
.highlight-base {
  color: #000;
}
.highlight-variable {
  color: #000;
}
.highlight-variable-2 {
  color: #1a1a1a;
}
.highlight-variable-3 {
  color: #333333;
}
.highlight-string {
  color: #BA2121;
}
.highlight-comment {
  color: #408080;
  font-style: italic;
}
.highlight-number {
  color: #080;
}
.highlight-atom {
  color: #88F;
}
.highlight-keyword {
  color: #008000;
  font-weight: bold;
}
.highlight-builtin {
  color: #008000;
}
.highlight-error {
  color: #f00;
}
.highlight-operator {
  color: #AA22FF;
  font-weight: bold;
}
.highlight-meta {
  color: #AA22FF;
}
/* previously not defined, copying from default codemirror */
.highlight-def {
  color: #00f;
}
.highlight-string-2 {
  color: #f50;
}
.highlight-qualifier {
  color: #555;
}
.highlight-bracket {
  color: #997;
}
.highlight-tag {
  color: #170;
}
.highlight-attribute {
  color: #00c;
}
.highlight-header {
  color: blue;
}
.highlight-quote {
  color: #090;
}
.highlight-link {
  color: #00c;
}
/* apply the same style to codemirror */
.cm-s-ipython span.cm-keyword {
  color: #008000;
  font-weight: bold;
}
.cm-s-ipython span.cm-atom {
  color: #88F;
}
.cm-s-ipython span.cm-number {
  color: #080;
}
.cm-s-ipython span.cm-def {
  color: #00f;
}
.cm-s-ipython span.cm-variable {
  color: #000;
}
.cm-s-ipython span.cm-operator {
  color: #AA22FF;
  font-weight: bold;
}
.cm-s-ipython span.cm-variable-2 {
  color: #1a1a1a;
}
.cm-s-ipython span.cm-variable-3 {
  color: #333333;
}
.cm-s-ipython span.cm-comment {
  color: #408080;
  font-style: italic;
}
.cm-s-ipython span.cm-string {
  color: #BA2121;
}
.cm-s-ipython span.cm-string-2 {
  color: #f50;
}
.cm-s-ipython span.cm-meta {
  color: #AA22FF;
}
.cm-s-ipython span.cm-qualifier {
  color: #555;
}
.cm-s-ipython span.cm-builtin {
  color: #008000;
}
.cm-s-ipython span.cm-bracket {
  color: #997;
}
.cm-s-ipython span.cm-tag {
  color: #170;
}
.cm-s-ipython span.cm-attribute {
  color: #00c;
}
.cm-s-ipython span.cm-header {
  color: blue;
}
.cm-s-ipython span.cm-quote {
  color: #090;
}
.cm-s-ipython span.cm-link {
  color: #00c;
}
.cm-s-ipython span.cm-error {
  color: #f00;
}
.cm-s-ipython span.cm-tab {
  background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAMCAYAAAAkuj5RAAAAAXNSR0IArs4c6QAAAGFJREFUSMft1LsRQFAQheHPowAKoACx3IgEKtaEHujDjORSgWTH/ZOdnZOcM/sgk/kFFWY0qV8foQwS4MKBCS3qR6ixBJvElOobYAtivseIE120FaowJPN75GMu8j/LfMwNjh4HUpwg4LUAAAAASUVORK5CYII=);
  background-position: right;
  background-repeat: no-repeat;
}
div.output_wrapper {
  /* this position must be relative to enable descendents to be absolute within it */
  position: relative;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
  z-index: 1;
}
/* class for the output area when it should be height-limited */
div.output_scroll {
  /* ideally, this would be max-height, but FF barfs all over that */
  height: 24em;
  /* FF needs this *and the wrapper* to specify full width, or it will shrinkwrap */
  width: 100%;
  overflow: auto;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 2px 8px rgba(0, 0, 0, 0.8);
  box-shadow: inset 0 2px 8px rgba(0, 0, 0, 0.8);
  display: block;
}
/* output div while it is collapsed */
div.output_collapsed {
  margin: 0px;
  padding: 0px;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
}
div.out_prompt_overlay {
  height: 100%;
  padding: 0px 0.4em;
  position: absolute;
  border-radius: 2px;
}
div.out_prompt_overlay:hover {
  /* use inner shadow to get border that is computed the same on WebKit/FF */
  -webkit-box-shadow: inset 0 0 1px #000;
  box-shadow: inset 0 0 1px #000;
  background: rgba(240, 240, 240, 0.5);
}
div.output_prompt {
  color: #D84315;
}
/* This class is the outer container of all output sections. */
div.output_area {
  padding: 0px;
  page-break-inside: avoid;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
}
div.output_area .MathJax_Display {
  text-align: left !important;
}
div.output_area .rendered_html table {
  margin-left: 0;
  margin-right: 0;
}
div.output_area .rendered_html img {
  margin-left: 0;
  margin-right: 0;
}
div.output_area img,
div.output_area svg {
  max-width: 100%;
  height: auto;
}
div.output_area img.unconfined,
div.output_area svg.unconfined {
  max-width: none;
}
div.output_area .mglyph > img {
  max-width: none;
}
/* This is needed to protect the pre formating from global settings such
   as that of bootstrap */
.output {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: vertical;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: vertical;
  -moz-box-align: stretch;
  display: box;
  box-orient: vertical;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: column;
  align-items: stretch;
}
@media (max-width: 540px) {
  div.output_area {
    /* Old browsers */
    display: -webkit-box;
    -webkit-box-orient: vertical;
    -webkit-box-align: stretch;
    display: -moz-box;
    -moz-box-orient: vertical;
    -moz-box-align: stretch;
    display: box;
    box-orient: vertical;
    box-align: stretch;
    /* Modern browsers */
    display: flex;
    flex-direction: column;
    align-items: stretch;
  }
}
div.output_area pre {
  margin: 0;
  padding: 1px 0 1px 0;
  border: 0;
  vertical-align: baseline;
  color: black;
  background-color: transparent;
  border-radius: 0;
}
/* This class is for the output subarea inside the output_area and after
   the prompt div. */
div.output_subarea {
  overflow-x: auto;
  padding: 0.4em;
  /* Old browsers */
  -webkit-box-flex: 1;
  -moz-box-flex: 1;
  box-flex: 1;
  /* Modern browsers */
  flex: 1;
  max-width: calc(100% - 14ex);
}
div.output_scroll div.output_subarea {
  overflow-x: visible;
}
/* The rest of the output_* classes are for special styling of the different
   output types */
/* all text output has this class: */
div.output_text {
  text-align: left;
  color: #000;
  /* This has to match that of the the CodeMirror class line-height below */
  line-height: 1.21429em;
}
/* stdout/stderr are 'text' as well as 'stream', but execute_result/error are *not* streams */
div.output_stderr {
  background: #fdd;
  /* very light red background for stderr */
}
div.output_latex {
  text-align: left;
}
/* Empty output_javascript divs should have no height */
div.output_javascript:empty {
  padding: 0;
}
.js-error {
  color: darkred;
}
/* raw_input styles */
div.raw_input_container {
  line-height: 1.21429em;
  padding-top: 5px;
}
pre.raw_input_prompt {
  /* nothing needed here. */
}
input.raw_input {
  font-family: monospace;
  font-size: inherit;
  color: inherit;
  width: auto;
  /* make sure input baseline aligns with prompt */
  vertical-align: baseline;
  /* padding + margin = 0.5em between prompt and cursor */
  padding: 0em 0.25em;
  margin: 0em 0.25em;
}
input.raw_input:focus {
  box-shadow: none;
}
p.p-space {
  margin-bottom: 10px;
}
div.output_unrecognized {
  padding: 5px;
  font-weight: bold;
  color: red;
}
div.output_unrecognized a {
  color: inherit;
  text-decoration: none;
}
div.output_unrecognized a:hover {
  color: inherit;
  text-decoration: none;
}
.rendered_html {
  color: #000;
  /* any extras will just be numbers: */
}
.rendered_html em {
  font-style: italic;
}
.rendered_html strong {
  font-weight: bold;
}
.rendered_html u {
  text-decoration: underline;
}
.rendered_html :link {
  text-decoration: underline;
}
.rendered_html :visited {
  text-decoration: underline;
}
.rendered_html h1 {
  font-size: 185.7%;
  margin: 1.08em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
}
.rendered_html h2 {
  font-size: 157.1%;
  margin: 1.27em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
}
.rendered_html h3 {
  font-size: 128.6%;
  margin: 1.55em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
}
.rendered_html h4 {
  font-size: 100%;
  margin: 2em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
}
.rendered_html h5 {
  font-size: 100%;
  margin: 2em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
  font-style: italic;
}
.rendered_html h6 {
  font-size: 100%;
  margin: 2em 0 0 0;
  font-weight: bold;
  line-height: 1.0;
  font-style: italic;
}
.rendered_html h1:first-child {
  margin-top: 0.538em;
}
.rendered_html h2:first-child {
  margin-top: 0.636em;
}
.rendered_html h3:first-child {
  margin-top: 0.777em;
}
.rendered_html h4:first-child {
  margin-top: 1em;
}
.rendered_html h5:first-child {
  margin-top: 1em;
}
.rendered_html h6:first-child {
  margin-top: 1em;
}
.rendered_html ul:not(.list-inline),
.rendered_html ol:not(.list-inline) {
  padding-left: 2em;
}
.rendered_html ul {
  list-style: disc;
}
.rendered_html ul ul {
  list-style: square;
  margin-top: 0;
}
.rendered_html ul ul ul {
  list-style: circle;
}
.rendered_html ol {
  list-style: decimal;
}
.rendered_html ol ol {
  list-style: upper-alpha;
  margin-top: 0;
}
.rendered_html ol ol ol {
  list-style: lower-alpha;
}
.rendered_html ol ol ol ol {
  list-style: lower-roman;
}
.rendered_html ol ol ol ol ol {
  list-style: decimal;
}
.rendered_html * + ul {
  margin-top: 1em;
}
.rendered_html * + ol {
  margin-top: 1em;
}
.rendered_html hr {
  color: black;
  background-color: black;
}
.rendered_html pre {
  margin: 1em 2em;
  padding: 0px;
  background-color: #fff;
}
.rendered_html code {
  background-color: #eff0f1;
}
.rendered_html p code {
  padding: 1px 5px;
}
.rendered_html pre code {
  background-color: #fff;
}
.rendered_html pre,
.rendered_html code {
  border: 0;
  color: #000;
  font-size: 100%;
}
.rendered_html blockquote {
  margin: 1em 2em;
}
.rendered_html table {
  margin-left: auto;
  margin-right: auto;
  border: none;
  border-collapse: collapse;
  border-spacing: 0;
  color: black;
  font-size: 12px;
  table-layout: fixed;
}
.rendered_html thead {
  border-bottom: 1px solid black;
  vertical-align: bottom;
}
.rendered_html tr,
.rendered_html th,
.rendered_html td {
  text-align: right;
  vertical-align: middle;
  padding: 0.5em 0.5em;
  line-height: normal;
  white-space: normal;
  max-width: none;
  border: none;
}
.rendered_html th {
  font-weight: bold;
}
.rendered_html tbody tr:nth-child(odd) {
  background: #f5f5f5;
}
.rendered_html tbody tr:hover {
  background: rgba(66, 165, 245, 0.2);
}
.rendered_html * + table {
  margin-top: 1em;
}
.rendered_html p {
  text-align: left;
}
.rendered_html * + p {
  margin-top: 1em;
}
.rendered_html img {
  display: block;
  margin-left: auto;
  margin-right: auto;
}
.rendered_html * + img {
  margin-top: 1em;
}
.rendered_html img,
.rendered_html svg {
  max-width: 100%;
  height: auto;
}
.rendered_html img.unconfined,
.rendered_html svg.unconfined {
  max-width: none;
}
.rendered_html .alert {
  margin-bottom: initial;
}
.rendered_html * + .alert {
  margin-top: 1em;
}
[dir="rtl"] .rendered_html p {
  text-align: right;
}
div.text_cell {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
}
@media (max-width: 540px) {
  div.text_cell > div.prompt {
    display: none;
  }
}
div.text_cell_render {
  /*font-family: "Helvetica Neue", Arial, Helvetica, Geneva, sans-serif;*/
  outline: none;
  resize: none;
  width: inherit;
  border-style: none;
  padding: 0.5em 0.5em 0.5em 0.4em;
  color: #000;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
}
a.anchor-link:link {
  text-decoration: none;
  padding: 0px 20px;
  visibility: hidden;
}
h1:hover .anchor-link,
h2:hover .anchor-link,
h3:hover .anchor-link,
h4:hover .anchor-link,
h5:hover .anchor-link,
h6:hover .anchor-link {
  visibility: visible;
}
.text_cell.rendered .input_area {
  display: none;
}
.text_cell.rendered .rendered_html {
  overflow-x: auto;
  overflow-y: hidden;
}
.text_cell.rendered .rendered_html tr,
.text_cell.rendered .rendered_html th,
.text_cell.rendered .rendered_html td {
  max-width: none;
}
.text_cell.unrendered .text_cell_render {
  display: none;
}
.text_cell .dropzone .input_area {
  border: 2px dashed #bababa;
  margin: -1px;
}
.cm-header-1,
.cm-header-2,
.cm-header-3,
.cm-header-4,
.cm-header-5,
.cm-header-6 {
  font-weight: bold;
  font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
}
.cm-header-1 {
  font-size: 185.7%;
}
.cm-header-2 {
  font-size: 157.1%;
}
.cm-header-3 {
  font-size: 128.6%;
}
.cm-header-4 {
  font-size: 110%;
}
.cm-header-5 {
  font-size: 100%;
  font-style: italic;
}
.cm-header-6 {
  font-size: 100%;
  font-style: italic;
}
/*!
*
* IPython notebook webapp
*
*/
@media (max-width: 767px) {
  .notebook_app {
    padding-left: 0px;
    padding-right: 0px;
  }
}
#ipython-main-app {
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  height: 100%;
}
div#notebook_panel {
  margin: 0px;
  padding: 0px;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  height: 100%;
}
div#notebook {
  font-size: 14px;
  line-height: 20px;
  overflow-y: hidden;
  overflow-x: auto;
  width: 100%;
  /* This spaces the page away from the edge of the notebook area */
  padding-top: 20px;
  margin: 0px;
  outline: none;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  min-height: 100%;
}
@media not print {
  #notebook-container {
    padding: 15px;
    background-color: #fff;
    min-height: 0;
    -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
    box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  }
}
@media print {
  #notebook-container {
    width: 100%;
  }
}
div.ui-widget-content {
  border: 1px solid #ababab;
  outline: none;
}
pre.dialog {
  background-color: #f7f7f7;
  border: 1px solid #ddd;
  border-radius: 2px;
  padding: 0.4em;
  padding-left: 2em;
}
p.dialog {
  padding: 0.2em;
}
/* Word-wrap output correctly.  This is the CSS3 spelling, though Firefox seems
   to not honor it correctly.  Webkit browsers (Chrome, rekonq, Safari) do.
 */
pre,
code,
kbd,
samp {
  white-space: pre-wrap;
}
#fonttest {
  font-family: monospace;
}
p {
  margin-bottom: 0;
}
.end_space {
  min-height: 100px;
  transition: height .2s ease;
}
.notebook_app > #header {
  -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
}
@media not print {
  .notebook_app {
    background-color: #EEE;
  }
}
kbd {
  border-style: solid;
  border-width: 1px;
  box-shadow: none;
  margin: 2px;
  padding-left: 2px;
  padding-right: 2px;
  padding-top: 1px;
  padding-bottom: 1px;
}
.jupyter-keybindings {
  padding: 1px;
  line-height: 24px;
  border-bottom: 1px solid gray;
}
.jupyter-keybindings input {
  margin: 0;
  padding: 0;
  border: none;
}
.jupyter-keybindings i {
  padding: 6px;
}
.well code {
  background-color: #ffffff;
  border-color: #ababab;
  border-width: 1px;
  border-style: solid;
  padding: 2px;
  padding-top: 1px;
  padding-bottom: 1px;
}
/* CSS for the cell toolbar */
.celltoolbar {
  border: thin solid #CFCFCF;
  border-bottom: none;
  background: #EEE;
  border-radius: 2px 2px 0px 0px;
  width: 100%;
  height: 29px;
  padding-right: 4px;
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
  /* Old browsers */
  -webkit-box-pack: end;
  -moz-box-pack: end;
  box-pack: end;
  /* Modern browsers */
  justify-content: flex-end;
  display: -webkit-flex;
}
@media print {
  .celltoolbar {
    display: none;
  }
}
.ctb_hideshow {
  display: none;
  vertical-align: bottom;
}
/* ctb_show is added to the ctb_hideshow div to show the cell toolbar.
   Cell toolbars are only shown when the ctb_global_show class is also set.
*/
.ctb_global_show .ctb_show.ctb_hideshow {
  display: block;
}
.ctb_global_show .ctb_show + .input_area,
.ctb_global_show .ctb_show + div.text_cell_input,
.ctb_global_show .ctb_show ~ div.text_cell_render {
  border-top-right-radius: 0px;
  border-top-left-radius: 0px;
}
.ctb_global_show .ctb_show ~ div.text_cell_render {
  border: 1px solid #cfcfcf;
}
.celltoolbar {
  font-size: 87%;
  padding-top: 3px;
}
.celltoolbar select {
  display: block;
  width: 100%;
  height: 32px;
  padding: 6px 12px;
  font-size: 13px;
  line-height: 1.42857143;
  color: #555555;
  background-color: #fff;
  background-image: none;
  border: 1px solid #ccc;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  -webkit-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  -o-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  height: 30px;
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
  width: inherit;
  font-size: inherit;
  height: 22px;
  padding: 0px;
  display: inline-block;
}
.celltoolbar select:focus {
  border-color: #66afe9;
  outline: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
  box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
}
.celltoolbar select::-moz-placeholder {
  color: #999;
  opacity: 1;
}
.celltoolbar select:-ms-input-placeholder {
  color: #999;
}
.celltoolbar select::-webkit-input-placeholder {
  color: #999;
}
.celltoolbar select::-ms-expand {
  border: 0;
  background-color: transparent;
}
.celltoolbar select[disabled],
.celltoolbar select[readonly],
fieldset[disabled] .celltoolbar select {
  background-color: #eeeeee;
  opacity: 1;
}
.celltoolbar select[disabled],
fieldset[disabled] .celltoolbar select {
  cursor: not-allowed;
}
textarea.celltoolbar select {
  height: auto;
}
select.celltoolbar select {
  height: 30px;
  line-height: 30px;
}
textarea.celltoolbar select,
select[multiple].celltoolbar select {
  height: auto;
}
.celltoolbar label {
  margin-left: 5px;
  margin-right: 5px;
}
.tags_button_container {
  width: 100%;
  display: flex;
}
.tag-container {
  display: flex;
  flex-direction: row;
  flex-grow: 1;
  overflow: hidden;
  position: relative;
}
.tag-container > * {
  margin: 0 4px;
}
.remove-tag-btn {
  margin-left: 4px;
}
.tags-input {
  display: flex;
}
.cell-tag:last-child:after {
  content: "";
  position: absolute;
  right: 0;
  width: 40px;
  height: 100%;
  /* Fade to background color of cell toolbar */
  background: linear-gradient(to right, rgba(0, 0, 0, 0), #EEE);
}
.tags-input > * {
  margin-left: 4px;
}
.cell-tag,
.tags-input input,
.tags-input button {
  display: block;
  width: 100%;
  height: 32px;
  padding: 6px 12px;
  font-size: 13px;
  line-height: 1.42857143;
  color: #555555;
  background-color: #fff;
  background-image: none;
  border: 1px solid #ccc;
  border-radius: 2px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  -webkit-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  -o-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  height: 30px;
  padding: 5px 10px;
  font-size: 12px;
  line-height: 1.5;
  border-radius: 1px;
  box-shadow: none;
  width: inherit;
  font-size: inherit;
  height: 22px;
  line-height: 22px;
  padding: 0px 4px;
  display: inline-block;
}
.cell-tag:focus,
.tags-input input:focus,
.tags-input button:focus {
  border-color: #66afe9;
  outline: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
  box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, 0.6);
}
.cell-tag::-moz-placeholder,
.tags-input input::-moz-placeholder,
.tags-input button::-moz-placeholder {
  color: #999;
  opacity: 1;
}
.cell-tag:-ms-input-placeholder,
.tags-input input:-ms-input-placeholder,
.tags-input button:-ms-input-placeholder {
  color: #999;
}
.cell-tag::-webkit-input-placeholder,
.tags-input input::-webkit-input-placeholder,
.tags-input button::-webkit-input-placeholder {
  color: #999;
}
.cell-tag::-ms-expand,
.tags-input input::-ms-expand,
.tags-input button::-ms-expand {
  border: 0;
  background-color: transparent;
}
.cell-tag[disabled],
.tags-input input[disabled],
.tags-input button[disabled],
.cell-tag[readonly],
.tags-input input[readonly],
.tags-input button[readonly],
fieldset[disabled] .cell-tag,
fieldset[disabled] .tags-input input,
fieldset[disabled] .tags-input button {
  background-color: #eeeeee;
  opacity: 1;
}
.cell-tag[disabled],
.tags-input input[disabled],
.tags-input button[disabled],
fieldset[disabled] .cell-tag,
fieldset[disabled] .tags-input input,
fieldset[disabled] .tags-input button {
  cursor: not-allowed;
}
textarea.cell-tag,
textarea.tags-input input,
textarea.tags-input button {
  height: auto;
}
select.cell-tag,
select.tags-input input,
select.tags-input button {
  height: 30px;
  line-height: 30px;
}
textarea.cell-tag,
textarea.tags-input input,
textarea.tags-input button,
select[multiple].cell-tag,
select[multiple].tags-input input,
select[multiple].tags-input button {
  height: auto;
}
.cell-tag,
.tags-input button {
  padding: 0px 4px;
}
.cell-tag {
  background-color: #fff;
  white-space: nowrap;
}
.tags-input input[type=text]:focus {
  outline: none;
  box-shadow: none;
  border-color: #ccc;
}
.completions {
  position: absolute;
  z-index: 110;
  overflow: hidden;
  border: 1px solid #ababab;
  border-radius: 2px;
  -webkit-box-shadow: 0px 6px 10px -1px #adadad;
  box-shadow: 0px 6px 10px -1px #adadad;
  line-height: 1;
}
.completions select {
  background: white;
  outline: none;
  border: none;
  padding: 0px;
  margin: 0px;
  overflow: auto;
  font-family: monospace;
  font-size: 110%;
  color: #000;
  width: auto;
}
.completions select option.context {
  color: #286090;
}
#kernel_logo_widget .current_kernel_logo {
  display: none;
  margin-top: -1px;
  margin-bottom: -1px;
  width: 32px;
  height: 32px;
}
[dir="rtl"] #kernel_logo_widget {
  float: left !important;
  float: left;
}
.modal .modal-body .move-path {
  display: flex;
  flex-direction: row;
  justify-content: space;
  align-items: center;
}
.modal .modal-body .move-path .server-root {
  padding-right: 20px;
}
.modal .modal-body .move-path .path-input {
  flex: 1;
}
#menubar {
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  margin-top: 1px;
}
#menubar .navbar {
  border-top: 1px;
  border-radius: 0px 0px 2px 2px;
  margin-bottom: 0px;
}
#menubar .navbar-toggle {
  float: left;
  padding-top: 7px;
  padding-bottom: 7px;
  border: none;
}
#menubar .navbar-collapse {
  clear: left;
}
[dir="rtl"] #menubar .navbar-toggle {
  float: right;
}
[dir="rtl"] #menubar .navbar-collapse {
  clear: right;
}
[dir="rtl"] #menubar .navbar-nav {
  float: right;
}
[dir="rtl"] #menubar .nav {
  padding-right: 0px;
}
[dir="rtl"] #menubar .navbar-nav > li {
  float: right;
}
[dir="rtl"] #menubar .navbar-right {
  float: left !important;
}
[dir="rtl"] ul.dropdown-menu {
  text-align: right;
  left: auto;
}
[dir="rtl"] ul#new-menu.dropdown-menu {
  right: auto;
  left: 0;
}
.nav-wrapper {
  border-bottom: 1px solid #e7e7e7;
}
i.menu-icon {
  padding-top: 4px;
}
[dir="rtl"] i.menu-icon.pull-right {
  float: left !important;
  float: left;
}
ul#help_menu li a {
  overflow: hidden;
  padding-right: 2.2em;
}
ul#help_menu li a i {
  margin-right: -1.2em;
}
[dir="rtl"] ul#help_menu li a {
  padding-left: 2.2em;
}
[dir="rtl"] ul#help_menu li a i {
  margin-right: 0;
  margin-left: -1.2em;
}
[dir="rtl"] ul#help_menu li a i.pull-right {
  float: left !important;
  float: left;
}
.dropdown-submenu {
  position: relative;
}
.dropdown-submenu > .dropdown-menu {
  top: 0;
  left: 100%;
  margin-top: -6px;
  margin-left: -1px;
}
[dir="rtl"] .dropdown-submenu > .dropdown-menu {
  right: 100%;
  margin-right: -1px;
}
.dropdown-submenu:hover > .dropdown-menu {
  display: block;
}
.dropdown-submenu > a:after {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  display: block;
  content: "\f0da";
  float: right;
  color: #333333;
  margin-top: 2px;
  margin-right: -10px;
}
.dropdown-submenu > a:after.fa-pull-left {
  margin-right: .3em;
}
.dropdown-submenu > a:after.fa-pull-right {
  margin-left: .3em;
}
.dropdown-submenu > a:after.pull-left {
  margin-right: .3em;
}
.dropdown-submenu > a:after.pull-right {
  margin-left: .3em;
}
[dir="rtl"] .dropdown-submenu > a:after {
  float: left;
  content: "\f0d9";
  margin-right: 0;
  margin-left: -10px;
}
.dropdown-submenu:hover > a:after {
  color: #262626;
}
.dropdown-submenu.pull-left {
  float: none;
}
.dropdown-submenu.pull-left > .dropdown-menu {
  left: -100%;
  margin-left: 10px;
}
#notification_area {
  float: right !important;
  float: right;
  z-index: 10;
}
[dir="rtl"] #notification_area {
  float: left !important;
  float: left;
}
.indicator_area {
  float: right !important;
  float: right;
  color: #777;
  margin-left: 5px;
  margin-right: 5px;
  width: 11px;
  z-index: 10;
  text-align: center;
  width: auto;
}
[dir="rtl"] .indicator_area {
  float: left !important;
  float: left;
}
#kernel_indicator {
  float: right !important;
  float: right;
  color: #777;
  margin-left: 5px;
  margin-right: 5px;
  width: 11px;
  z-index: 10;
  text-align: center;
  width: auto;
  border-left: 1px solid;
}
#kernel_indicator .kernel_indicator_name {
  padding-left: 5px;
  padding-right: 5px;
}
[dir="rtl"] #kernel_indicator {
  float: left !important;
  float: left;
  border-left: 0;
  border-right: 1px solid;
}
#modal_indicator {
  float: right !important;
  float: right;
  color: #777;
  margin-left: 5px;
  margin-right: 5px;
  width: 11px;
  z-index: 10;
  text-align: center;
  width: auto;
}
[dir="rtl"] #modal_indicator {
  float: left !important;
  float: left;
}
#readonly-indicator {
  float: right !important;
  float: right;
  color: #777;
  margin-left: 5px;
  margin-right: 5px;
  width: 11px;
  z-index: 10;
  text-align: center;
  width: auto;
  margin-top: 2px;
  margin-bottom: 0px;
  margin-left: 0px;
  margin-right: 0px;
  display: none;
}
.modal_indicator:before {
  width: 1.28571429em;
  text-align: center;
}
.edit_mode .modal_indicator:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f040";
}
.edit_mode .modal_indicator:before.fa-pull-left {
  margin-right: .3em;
}
.edit_mode .modal_indicator:before.fa-pull-right {
  margin-left: .3em;
}
.edit_mode .modal_indicator:before.pull-left {
  margin-right: .3em;
}
.edit_mode .modal_indicator:before.pull-right {
  margin-left: .3em;
}
.command_mode .modal_indicator:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: ' ';
}
.command_mode .modal_indicator:before.fa-pull-left {
  margin-right: .3em;
}
.command_mode .modal_indicator:before.fa-pull-right {
  margin-left: .3em;
}
.command_mode .modal_indicator:before.pull-left {
  margin-right: .3em;
}
.command_mode .modal_indicator:before.pull-right {
  margin-left: .3em;
}
.kernel_idle_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f10c";
}
.kernel_idle_icon:before.fa-pull-left {
  margin-right: .3em;
}
.kernel_idle_icon:before.fa-pull-right {
  margin-left: .3em;
}
.kernel_idle_icon:before.pull-left {
  margin-right: .3em;
}
.kernel_idle_icon:before.pull-right {
  margin-left: .3em;
}
.kernel_busy_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f111";
}
.kernel_busy_icon:before.fa-pull-left {
  margin-right: .3em;
}
.kernel_busy_icon:before.fa-pull-right {
  margin-left: .3em;
}
.kernel_busy_icon:before.pull-left {
  margin-right: .3em;
}
.kernel_busy_icon:before.pull-right {
  margin-left: .3em;
}
.kernel_dead_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f1e2";
}
.kernel_dead_icon:before.fa-pull-left {
  margin-right: .3em;
}
.kernel_dead_icon:before.fa-pull-right {
  margin-left: .3em;
}
.kernel_dead_icon:before.pull-left {
  margin-right: .3em;
}
.kernel_dead_icon:before.pull-right {
  margin-left: .3em;
}
.kernel_disconnected_icon:before {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  content: "\f127";
}
.kernel_disconnected_icon:before.fa-pull-left {
  margin-right: .3em;
}
.kernel_disconnected_icon:before.fa-pull-right {
  margin-left: .3em;
}
.kernel_disconnected_icon:before.pull-left {
  margin-right: .3em;
}
.kernel_disconnected_icon:before.pull-right {
  margin-left: .3em;
}
.notification_widget {
  color: #777;
  z-index: 10;
  background: rgba(240, 240, 240, 0.5);
  margin-right: 4px;
  color: #333;
  background-color: #fff;
  border-color: #ccc;
}
.notification_widget:focus,
.notification_widget.focus {
  color: #333;
  background-color: #e6e6e6;
  border-color: #8c8c8c;
}
.notification_widget:hover {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
.notification_widget:active,
.notification_widget.active,
.open > .dropdown-toggle.notification_widget {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}
.notification_widget:active:hover,
.notification_widget.active:hover,
.open > .dropdown-toggle.notification_widget:hover,
.notification_widget:active:focus,
.notification_widget.active:focus,
.open > .dropdown-toggle.notification_widget:focus,
.notification_widget:active.focus,
.notification_widget.active.focus,
.open > .dropdown-toggle.notification_widget.focus {
  color: #333;
  background-color: #d4d4d4;
  border-color: #8c8c8c;
}
.notification_widget:active,
.notification_widget.active,
.open > .dropdown-toggle.notification_widget {
  background-image: none;
}
.notification_widget.disabled:hover,
.notification_widget[disabled]:hover,
fieldset[disabled] .notification_widget:hover,
.notification_widget.disabled:focus,
.notification_widget[disabled]:focus,
fieldset[disabled] .notification_widget:focus,
.notification_widget.disabled.focus,
.notification_widget[disabled].focus,
fieldset[disabled] .notification_widget.focus {
  background-color: #fff;
  border-color: #ccc;
}
.notification_widget .badge {
  color: #fff;
  background-color: #333;
}
.notification_widget.warning {
  color: #fff;
  background-color: #f0ad4e;
  border-color: #eea236;
}
.notification_widget.warning:focus,
.notification_widget.warning.focus {
  color: #fff;
  background-color: #ec971f;
  border-color: #985f0d;
}
.notification_widget.warning:hover {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}
.notification_widget.warning:active,
.notification_widget.warning.active,
.open > .dropdown-toggle.notification_widget.warning {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}
.notification_widget.warning:active:hover,
.notification_widget.warning.active:hover,
.open > .dropdown-toggle.notification_widget.warning:hover,
.notification_widget.warning:active:focus,
.notification_widget.warning.active:focus,
.open > .dropdown-toggle.notification_widget.warning:focus,
.notification_widget.warning:active.focus,
.notification_widget.warning.active.focus,
.open > .dropdown-toggle.notification_widget.warning.focus {
  color: #fff;
  background-color: #d58512;
  border-color: #985f0d;
}
.notification_widget.warning:active,
.notification_widget.warning.active,
.open > .dropdown-toggle.notification_widget.warning {
  background-image: none;
}
.notification_widget.warning.disabled:hover,
.notification_widget.warning[disabled]:hover,
fieldset[disabled] .notification_widget.warning:hover,
.notification_widget.warning.disabled:focus,
.notification_widget.warning[disabled]:focus,
fieldset[disabled] .notification_widget.warning:focus,
.notification_widget.warning.disabled.focus,
.notification_widget.warning[disabled].focus,
fieldset[disabled] .notification_widget.warning.focus {
  background-color: #f0ad4e;
  border-color: #eea236;
}
.notification_widget.warning .badge {
  color: #f0ad4e;
  background-color: #fff;
}
.notification_widget.success {
  color: #fff;
  background-color: #5cb85c;
  border-color: #4cae4c;
}
.notification_widget.success:focus,
.notification_widget.success.focus {
  color: #fff;
  background-color: #449d44;
  border-color: #255625;
}
.notification_widget.success:hover {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}
.notification_widget.success:active,
.notification_widget.success.active,
.open > .dropdown-toggle.notification_widget.success {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}
.notification_widget.success:active:hover,
.notification_widget.success.active:hover,
.open > .dropdown-toggle.notification_widget.success:hover,
.notification_widget.success:active:focus,
.notification_widget.success.active:focus,
.open > .dropdown-toggle.notification_widget.success:focus,
.notification_widget.success:active.focus,
.notification_widget.success.active.focus,
.open > .dropdown-toggle.notification_widget.success.focus {
  color: #fff;
  background-color: #398439;
  border-color: #255625;
}
.notification_widget.success:active,
.notification_widget.success.active,
.open > .dropdown-toggle.notification_widget.success {
  background-image: none;
}
.notification_widget.success.disabled:hover,
.notification_widget.success[disabled]:hover,
fieldset[disabled] .notification_widget.success:hover,
.notification_widget.success.disabled:focus,
.notification_widget.success[disabled]:focus,
fieldset[disabled] .notification_widget.success:focus,
.notification_widget.success.disabled.focus,
.notification_widget.success[disabled].focus,
fieldset[disabled] .notification_widget.success.focus {
  background-color: #5cb85c;
  border-color: #4cae4c;
}
.notification_widget.success .badge {
  color: #5cb85c;
  background-color: #fff;
}
.notification_widget.info {
  color: #fff;
  background-color: #5bc0de;
  border-color: #46b8da;
}
.notification_widget.info:focus,
.notification_widget.info.focus {
  color: #fff;
  background-color: #31b0d5;
  border-color: #1b6d85;
}
.notification_widget.info:hover {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}
.notification_widget.info:active,
.notification_widget.info.active,
.open > .dropdown-toggle.notification_widget.info {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}
.notification_widget.info:active:hover,
.notification_widget.info.active:hover,
.open > .dropdown-toggle.notification_widget.info:hover,
.notification_widget.info:active:focus,
.notification_widget.info.active:focus,
.open > .dropdown-toggle.notification_widget.info:focus,
.notification_widget.info:active.focus,
.notification_widget.info.active.focus,
.open > .dropdown-toggle.notification_widget.info.focus {
  color: #fff;
  background-color: #269abc;
  border-color: #1b6d85;
}
.notification_widget.info:active,
.notification_widget.info.active,
.open > .dropdown-toggle.notification_widget.info {
  background-image: none;
}
.notification_widget.info.disabled:hover,
.notification_widget.info[disabled]:hover,
fieldset[disabled] .notification_widget.info:hover,
.notification_widget.info.disabled:focus,
.notification_widget.info[disabled]:focus,
fieldset[disabled] .notification_widget.info:focus,
.notification_widget.info.disabled.focus,
.notification_widget.info[disabled].focus,
fieldset[disabled] .notification_widget.info.focus {
  background-color: #5bc0de;
  border-color: #46b8da;
}
.notification_widget.info .badge {
  color: #5bc0de;
  background-color: #fff;
}
.notification_widget.danger {
  color: #fff;
  background-color: #d9534f;
  border-color: #d43f3a;
}
.notification_widget.danger:focus,
.notification_widget.danger.focus {
  color: #fff;
  background-color: #c9302c;
  border-color: #761c19;
}
.notification_widget.danger:hover {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}
.notification_widget.danger:active,
.notification_widget.danger.active,
.open > .dropdown-toggle.notification_widget.danger {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}
.notification_widget.danger:active:hover,
.notification_widget.danger.active:hover,
.open > .dropdown-toggle.notification_widget.danger:hover,
.notification_widget.danger:active:focus,
.notification_widget.danger.active:focus,
.open > .dropdown-toggle.notification_widget.danger:focus,
.notification_widget.danger:active.focus,
.notification_widget.danger.active.focus,
.open > .dropdown-toggle.notification_widget.danger.focus {
  color: #fff;
  background-color: #ac2925;
  border-color: #761c19;
}
.notification_widget.danger:active,
.notification_widget.danger.active,
.open > .dropdown-toggle.notification_widget.danger {
  background-image: none;
}
.notification_widget.danger.disabled:hover,
.notification_widget.danger[disabled]:hover,
fieldset[disabled] .notification_widget.danger:hover,
.notification_widget.danger.disabled:focus,
.notification_widget.danger[disabled]:focus,
fieldset[disabled] .notification_widget.danger:focus,
.notification_widget.danger.disabled.focus,
.notification_widget.danger[disabled].focus,
fieldset[disabled] .notification_widget.danger.focus {
  background-color: #d9534f;
  border-color: #d43f3a;
}
.notification_widget.danger .badge {
  color: #d9534f;
  background-color: #fff;
}
div#pager {
  background-color: #fff;
  font-size: 14px;
  line-height: 20px;
  overflow: hidden;
  display: none;
  position: fixed;
  bottom: 0px;
  width: 100%;
  max-height: 50%;
  padding-top: 8px;
  -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  /* Display over codemirror */
  z-index: 100;
  /* Hack which prevents jquery ui resizable from changing top. */
  top: auto !important;
}
div#pager pre {
  line-height: 1.21429em;
  color: #000;
  background-color: #f7f7f7;
  padding: 0.4em;
}
div#pager #pager-button-area {
  position: absolute;
  top: 8px;
  right: 20px;
}
div#pager #pager-contents {
  position: relative;
  overflow: auto;
  width: 100%;
  height: 100%;
}
div#pager #pager-contents #pager-container {
  position: relative;
  padding: 15px 0px;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
}
div#pager .ui-resizable-handle {
  top: 0px;
  height: 8px;
  background: #f7f7f7;
  border-top: 1px solid #cfcfcf;
  border-bottom: 1px solid #cfcfcf;
  /* This injects handle bars (a short, wide = symbol) for 
        the resize handle. */
}
div#pager .ui-resizable-handle::after {
  content: '';
  top: 2px;
  left: 50%;
  height: 3px;
  width: 30px;
  margin-left: -15px;
  position: absolute;
  border-top: 1px solid #cfcfcf;
}
.quickhelp {
  /* Old browsers */
  display: -webkit-box;
  -webkit-box-orient: horizontal;
  -webkit-box-align: stretch;
  display: -moz-box;
  -moz-box-orient: horizontal;
  -moz-box-align: stretch;
  display: box;
  box-orient: horizontal;
  box-align: stretch;
  /* Modern browsers */
  display: flex;
  flex-direction: row;
  align-items: stretch;
  line-height: 1.8em;
}
.shortcut_key {
  display: inline-block;
  width: 21ex;
  text-align: right;
  font-family: monospace;
}
.shortcut_descr {
  display: inline-block;
  /* Old browsers */
  -webkit-box-flex: 1;
  -moz-box-flex: 1;
  box-flex: 1;
  /* Modern browsers */
  flex: 1;
}
span.save_widget {
  height: 30px;
  margin-top: 4px;
  display: flex;
  justify-content: flex-start;
  align-items: baseline;
  width: 50%;
  flex: 1;
}
span.save_widget span.filename {
  height: 100%;
  line-height: 1em;
  margin-left: 16px;
  border: none;
  font-size: 146.5%;
  text-overflow: ellipsis;
  overflow: hidden;
  white-space: nowrap;
  border-radius: 2px;
}
span.save_widget span.filename:hover {
  background-color: #e6e6e6;
}
[dir="rtl"] span.save_widget.pull-left {
  float: right !important;
  float: right;
}
[dir="rtl"] span.save_widget span.filename {
  margin-left: 0;
  margin-right: 16px;
}
span.checkpoint_status,
span.autosave_status {
  font-size: small;
  white-space: nowrap;
  padding: 0 5px;
}
@media (max-width: 767px) {
  span.save_widget {
    font-size: small;
    padding: 0 0 0 5px;
  }
  span.checkpoint_status,
  span.autosave_status {
    display: none;
  }
}
@media (min-width: 768px) and (max-width: 991px) {
  span.checkpoint_status {
    display: none;
  }
  span.autosave_status {
    font-size: x-small;
  }
}
.toolbar {
  padding: 0px;
  margin-left: -5px;
  margin-top: 2px;
  margin-bottom: 5px;
  box-sizing: border-box;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
}
.toolbar select,
.toolbar label {
  width: auto;
  vertical-align: middle;
  margin-right: 2px;
  margin-bottom: 0px;
  display: inline;
  font-size: 92%;
  margin-left: 0.3em;
  margin-right: 0.3em;
  padding: 0px;
  padding-top: 3px;
}
.toolbar .btn {
  padding: 2px 8px;
}
.toolbar .btn-group {
  margin-top: 0px;
  margin-left: 5px;
}
.toolbar-btn-label {
  margin-left: 6px;
}
#maintoolbar {
  margin-bottom: -3px;
  margin-top: -8px;
  border: 0px;
  min-height: 27px;
  margin-left: 0px;
  padding-top: 11px;
  padding-bottom: 3px;
}
#maintoolbar .navbar-text {
  float: none;
  vertical-align: middle;
  text-align: right;
  margin-left: 5px;
  margin-right: 0px;
  margin-top: 0px;
}
.select-xs {
  height: 24px;
}
[dir="rtl"] .btn-group > .btn,
.btn-group-vertical > .btn {
  float: right;
}
.pulse,
.dropdown-menu > li > a.pulse,
li.pulse > a.dropdown-toggle,
li.pulse.open > a.dropdown-toggle {
  background-color: #F37626;
  color: white;
}
/**
 * Primary styles
 *
 * Author: Jupyter Development Team
 */
/** WARNING IF YOU ARE EDITTING THIS FILE, if this is a .css file, It has a lot
 * of chance of beeing generated from the ../less/[samename].less file, you can
 * try to get back the less file by reverting somme commit in history
 **/
/*
 * We'll try to get something pretty, so we
 * have some strange css to have the scroll bar on
 * the left with fix button on the top right of the tooltip
 */
@-moz-keyframes fadeOut {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
  }
}
@-webkit-keyframes fadeOut {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
  }
}
@-moz-keyframes fadeIn {
  from {
    opacity: 0;
  }
  to {
    opacity: 1;
  }
}
@-webkit-keyframes fadeIn {
  from {
    opacity: 0;
  }
  to {
    opacity: 1;
  }
}
/*properties of tooltip after "expand"*/
.bigtooltip {
  overflow: auto;
  height: 200px;
  -webkit-transition-property: height;
  -webkit-transition-duration: 500ms;
  -moz-transition-property: height;
  -moz-transition-duration: 500ms;
  transition-property: height;
  transition-duration: 500ms;
}
/*properties of tooltip before "expand"*/
.smalltooltip {
  -webkit-transition-property: height;
  -webkit-transition-duration: 500ms;
  -moz-transition-property: height;
  -moz-transition-duration: 500ms;
  transition-property: height;
  transition-duration: 500ms;
  text-overflow: ellipsis;
  overflow: hidden;
  height: 80px;
}
.tooltipbuttons {
  position: absolute;
  padding-right: 15px;
  top: 0px;
  right: 0px;
}
.tooltiptext {
  /*avoid the button to overlap on some docstring*/
  padding-right: 30px;
}
.ipython_tooltip {
  max-width: 700px;
  /*fade-in animation when inserted*/
  -webkit-animation: fadeOut 400ms;
  -moz-animation: fadeOut 400ms;
  animation: fadeOut 400ms;
  -webkit-animation: fadeIn 400ms;
  -moz-animation: fadeIn 400ms;
  animation: fadeIn 400ms;
  vertical-align: middle;
  background-color: #f7f7f7;
  overflow: visible;
  border: #ababab 1px solid;
  outline: none;
  padding: 3px;
  margin: 0px;
  padding-left: 7px;
  font-family: monospace;
  min-height: 50px;
  -moz-box-shadow: 0px 6px 10px -1px #adadad;
  -webkit-box-shadow: 0px 6px 10px -1px #adadad;
  box-shadow: 0px 6px 10px -1px #adadad;
  border-radius: 2px;
  position: absolute;
  z-index: 1000;
}
.ipython_tooltip a {
  float: right;
}
.ipython_tooltip .tooltiptext pre {
  border: 0;
  border-radius: 0;
  font-size: 100%;
  background-color: #f7f7f7;
}
.pretooltiparrow {
  left: 0px;
  margin: 0px;
  top: -16px;
  width: 40px;
  height: 16px;
  overflow: hidden;
  position: absolute;
}
.pretooltiparrow:before {
  background-color: #f7f7f7;
  border: 1px #ababab solid;
  z-index: 11;
  content: "";
  position: absolute;
  left: 15px;
  top: 10px;
  width: 25px;
  height: 25px;
  -webkit-transform: rotate(45deg);
  -moz-transform: rotate(45deg);
  -ms-transform: rotate(45deg);
  -o-transform: rotate(45deg);
}
ul.typeahead-list i {
  margin-left: -10px;
  width: 18px;
}
[dir="rtl"] ul.typeahead-list i {
  margin-left: 0;
  margin-right: -10px;
}
ul.typeahead-list {
  max-height: 80vh;
  overflow: auto;
}
ul.typeahead-list > li > a {
  /** Firefox bug **/
  /* see https://github.com/jupyter/notebook/issues/559 */
  white-space: normal;
}
ul.typeahead-list  > li > a.pull-right {
  float: left !important;
  float: left;
}
[dir="rtl"] .typeahead-list {
  text-align: right;
}
.cmd-palette .modal-body {
  padding: 7px;
}
.cmd-palette form {
  background: white;
}
.cmd-palette input {
  outline: none;
}
.no-shortcut {
  min-width: 20px;
  color: transparent;
}
[dir="rtl"] .no-shortcut.pull-right {
  float: left !important;
  float: left;
}
[dir="rtl"] .command-shortcut.pull-right {
  float: left !important;
  float: left;
}
.command-shortcut:before {
  content: "(command mode)";
  padding-right: 3px;
  color: #777777;
}
.edit-shortcut:before {
  content: "(edit)";
  padding-right: 3px;
  color: #777777;
}
[dir="rtl"] .edit-shortcut.pull-right {
  float: left !important;
  float: left;
}
#find-and-replace #replace-preview .match,
#find-and-replace #replace-preview .insert {
  background-color: #BBDEFB;
  border-color: #90CAF9;
  border-style: solid;
  border-width: 1px;
  border-radius: 0px;
}
[dir="ltr"] #find-and-replace .input-group-btn + .form-control {
  border-left: none;
}
[dir="rtl"] #find-and-replace .input-group-btn + .form-control {
  border-right: none;
}
#find-and-replace #replace-preview .replace .match {
  background-color: #FFCDD2;
  border-color: #EF9A9A;
  border-radius: 0px;
}
#find-and-replace #replace-preview .replace .insert {
  background-color: #C8E6C9;
  border-color: #A5D6A7;
  border-radius: 0px;
}
#find-and-replace #replace-preview {
  max-height: 60vh;
  overflow: auto;
}
#find-and-replace #replace-preview pre {
  padding: 5px 10px;
}
.terminal-app {
  background: #EEE;
}
.terminal-app #header {
  background: #fff;
  -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
  box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.2);
}
.terminal-app .terminal {
  width: 100%;
  float: left;
  font-family: monospace;
  color: white;
  background: black;
  padding: 0.4em;
  border-radius: 2px;
  -webkit-box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.4);
  box-shadow: 0px 0px 12px 1px rgba(87, 87, 87, 0.4);
}
.terminal-app .terminal,
.terminal-app .terminal dummy-screen {
  line-height: 1em;
  font-size: 14px;
}
.terminal-app .terminal .xterm-rows {
  padding: 10px;
}
.terminal-app .terminal-cursor {
  color: black;
  background: white;
}
.terminal-app #terminado-container {
  margin-top: 20px;
}
/*# sourceMappingURL=style.min.css.map */
    </style>
<style type="text/css">
    .highlight .hll { background-color: #ffffcc }
.highlight  { background: #f8f8f8; }
.highlight .c { color: #408080; font-style: italic } /* Comment */
.highlight .err { border: 1px solid #FF0000 } /* Error */
.highlight .k { color: #008000; font-weight: bold } /* Keyword */
.highlight .o { color: #666666 } /* Operator */
.highlight .ch { color: #408080; font-style: italic } /* Comment.Hashbang */
.highlight .cm { color: #408080; font-style: italic } /* Comment.Multiline */
.highlight .cp { color: #BC7A00 } /* Comment.Preproc */
.highlight .cpf { color: #408080; font-style: italic } /* Comment.PreprocFile */
.highlight .c1 { color: #408080; font-style: italic } /* Comment.Single */
.highlight .cs { color: #408080; font-style: italic } /* Comment.Special */
.highlight .gd { color: #A00000 } /* Generic.Deleted */
.highlight .ge { font-style: italic } /* Generic.Emph */
.highlight .gr { color: #FF0000 } /* Generic.Error */
.highlight .gh { color: #000080; font-weight: bold } /* Generic.Heading */
.highlight .gi { color: #00A000 } /* Generic.Inserted */
.highlight .go { color: #888888 } /* Generic.Output */
.highlight .gp { color: #000080; font-weight: bold } /* Generic.Prompt */
.highlight .gs { font-weight: bold } /* Generic.Strong */
.highlight .gu { color: #800080; font-weight: bold } /* Generic.Subheading */
.highlight .gt { color: #0044DD } /* Generic.Traceback */
.highlight .kc { color: #008000; font-weight: bold } /* Keyword.Constant */
.highlight .kd { color: #008000; font-weight: bold } /* Keyword.Declaration */
.highlight .kn { color: #008000; font-weight: bold } /* Keyword.Namespace */
.highlight .kp { color: #008000 } /* Keyword.Pseudo */
.highlight .kr { color: #008000; font-weight: bold } /* Keyword.Reserved */
.highlight .kt { color: #B00040 } /* Keyword.Type */
.highlight .m { color: #666666 } /* Literal.Number */
.highlight .s { color: #BA2121 } /* Literal.String */
.highlight .na { color: #7D9029 } /* Name.Attribute */
.highlight .nb { color: #008000 } /* Name.Builtin */
.highlight .nc { color: #0000FF; font-weight: bold } /* Name.Class */
.highlight .no { color: #880000 } /* Name.Constant */
.highlight .nd { color: #AA22FF } /* Name.Decorator */
.highlight .ni { color: #999999; font-weight: bold } /* Name.Entity */
.highlight .ne { color: #D2413A; font-weight: bold } /* Name.Exception */
.highlight .nf { color: #0000FF } /* Name.Function */
.highlight .nl { color: #A0A000 } /* Name.Label */
.highlight .nn { color: #0000FF; font-weight: bold } /* Name.Namespace */
.highlight .nt { color: #008000; font-weight: bold } /* Name.Tag */
.highlight .nv { color: #19177C } /* Name.Variable */
.highlight .ow { color: #AA22FF; font-weight: bold } /* Operator.Word */
.highlight .w { color: #bbbbbb } /* Text.Whitespace */
.highlight .mb { color: #666666 } /* Literal.Number.Bin */
.highlight .mf { color: #666666 } /* Literal.Number.Float */
.highlight .mh { color: #666666 } /* Literal.Number.Hex */
.highlight .mi { color: #666666 } /* Literal.Number.Integer */
.highlight .mo { color: #666666 } /* Literal.Number.Oct */
.highlight .sa { color: #BA2121 } /* Literal.String.Affix */
.highlight .sb { color: #BA2121 } /* Literal.String.Backtick */
.highlight .sc { color: #BA2121 } /* Literal.String.Char */
.highlight .dl { color: #BA2121 } /* Literal.String.Delimiter */
.highlight .sd { color: #BA2121; font-style: italic } /* Literal.String.Doc */
.highlight .s2 { color: #BA2121 } /* Literal.String.Double */
.highlight .se { color: #BB6622; font-weight: bold } /* Literal.String.Escape */
.highlight .sh { color: #BA2121 } /* Literal.String.Heredoc */
.highlight .si { color: #BB6688; font-weight: bold } /* Literal.String.Interpol */
.highlight .sx { color: #008000 } /* Literal.String.Other */
.highlight .sr { color: #BB6688 } /* Literal.String.Regex */
.highlight .s1 { color: #BA2121 } /* Literal.String.Single */
.highlight .ss { color: #19177C } /* Literal.String.Symbol */
.highlight .bp { color: #008000 } /* Name.Builtin.Pseudo */
.highlight .fm { color: #0000FF } /* Name.Function.Magic */
.highlight .vc { color: #19177C } /* Name.Variable.Class */
.highlight .vg { color: #19177C } /* Name.Variable.Global */
.highlight .vi { color: #19177C } /* Name.Variable.Instance */
.highlight .vm { color: #19177C } /* Name.Variable.Magic */
.highlight .il { color: #666666 } /* Literal.Number.Integer.Long */
    </style>
<style type="text/css">
    
/* Temporary definitions which will become obsolete with Notebook release 5.0 */
.ansi-black-fg { color: #3E424D; }
.ansi-black-bg { background-color: #3E424D; }
.ansi-black-intense-fg { color: #282C36; }
.ansi-black-intense-bg { background-color: #282C36; }
.ansi-red-fg { color: #E75C58; }
.ansi-red-bg { background-color: #E75C58; }
.ansi-red-intense-fg { color: #B22B31; }
.ansi-red-intense-bg { background-color: #B22B31; }
.ansi-green-fg { color: #00A250; }
.ansi-green-bg { background-color: #00A250; }
.ansi-green-intense-fg { color: #007427; }
.ansi-green-intense-bg { background-color: #007427; }
.ansi-yellow-fg { color: #DDB62B; }
.ansi-yellow-bg { background-color: #DDB62B; }
.ansi-yellow-intense-fg { color: #B27D12; }
.ansi-yellow-intense-bg { background-color: #B27D12; }
.ansi-blue-fg { color: #208FFB; }
.ansi-blue-bg { background-color: #208FFB; }
.ansi-blue-intense-fg { color: #0065CA; }
.ansi-blue-intense-bg { background-color: #0065CA; }
.ansi-magenta-fg { color: #D160C4; }
.ansi-magenta-bg { background-color: #D160C4; }
.ansi-magenta-intense-fg { color: #A03196; }
.ansi-magenta-intense-bg { background-color: #A03196; }
.ansi-cyan-fg { color: #60C6C8; }
.ansi-cyan-bg { background-color: #60C6C8; }
.ansi-cyan-intense-fg { color: #258F8F; }
.ansi-cyan-intense-bg { background-color: #258F8F; }
.ansi-white-fg { color: #C5C1B4; }
.ansi-white-bg { background-color: #C5C1B4; }
.ansi-white-intense-fg { color: #A1A6B2; }
.ansi-white-intense-bg { background-color: #A1A6B2; }

.ansi-bold { font-weight: bold; }

    </style>


<style type="text/css">
/* Overrides of notebook CSS for static HTML export */
body {
  overflow: visible;
  padding: 8px;
}

div#notebook {
  overflow: visible;
  border-top: none;
}@media print {
  div.cell {
    display: block;
    page-break-inside: avoid;
  } 
  div.output_wrapper { 
    display: block;
    page-break-inside: avoid; 
  }
  div.output { 
    display: block;
    page-break-inside: avoid; 
  }
}
</style>

<!-- Custom stylesheet, it must be in the same directory as the html file -->
<link rel="stylesheet" href="coursework_2_files/custom.css">

<!-- Loading mathjax macro -->
<!-- Load mathjax -->
    <script src="coursework_2_files/MathJax.js"></script>
    <!-- MathJax configuration -->
    <script type="text/x-mathjax-config;executed=true">
    MathJax.Hub.Config({
        tex2jax: {
            inlineMath: [ ['$','$'], ["\\(","\\)"] ],
            displayMath: [ ['$$','$$'], ["\\[","\\]"] ],
            processEscapes: true,
            processEnvironments: true
        },
        // Center justify equations in code and markdown cells. Elsewhere
        // we use CSS to left justify single line equations in code cells.
        displayAlign: 'center',
        "HTML-CSS": {
            styles: {'.MathJax_Display': {"margin": 0}},
            linebreaks: { automatic: true }
        }
    });
    </script>
    <!-- End of mathjax configuration --><style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 5px 0px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 5px; -webkit-border-radius: 5px; -moz-border-radius: 5px; -khtml-border-radius: 5px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 1px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: .7em}
.MathJax_MenuRadioCheck.RTL {right: .7em; left: auto}
.MathJax_MenuLabel {padding: 1px 2em 3px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #DDDDDD; margin: 4px 3px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: #606872; color: white}
.MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color: #E8E8E8}
.MathJax_ContextMenu:focus {outline: none}
.MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
#MathJax_AboutClose {top: .2em; right: .2em}
.MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
.MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_MenuClose:hover span {background-color: #CCC!important}
.MathJax_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX_Assistive_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
</style><style type="text/css">#MathJax_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax_Preview {color: #888}
#MathJax_Message {position: fixed; left: 1px; bottom: 2px; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax_Error {color: #CC0000; font-style: italic}
</style><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
.MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style></head>
<body><div id="MathJax_Message" style="display: none;"></div>
  <div tabindex="-1" id="notebook" class="border-box-sizing">
    <div class="container" id="notebook-container">

<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h1 id="Coursework-2:-Neural-Networks">Coursework 2: Neural Networks<a class="anchor-link" href="#Coursework-2:-Neural-Networks">¶</a></h1><p>This coursework covers the topics covered in class regarding neural networks for image classification.</p>
<p>This coursework includes both coding questions as well as written 
ones. Please upload the notebook, which contains your code, results and 
answers as a pdf file onto Cate.</p>
<p>Dependencies: If you work on a college computer in the Computing Lab,
 where Ubuntu 18.04 is installed by default, you can use the following 
virtual environment for your work, where relevant Python packages are 
already installed.</p>
<p><code>source /vol/bitbucket/wbai/virt/computer_vision_ubuntu18.04/bin/activate</code></p>
<p>Alternatively, you can use pip, pip3 or anaconda etc to install Python packages.</p>
<p><strong>Note 1:</strong> please read the both the text and code comment in this notebook to get an idea what you are supposed to implement.</p>
<p><strong>Note 2:</strong> If you are using the virtual environment in 
the Computing Lab, please run the following command in the command line 
before opening jupyter-notebook and importing tensorflow. This will tell
 tensorflow where the Nvidia CUDA libariries are.</p>
<p><code>export LD_LIBRARY_PATH=/vol/cuda/9.0.176/lib64/:"${LD_LIBRARY_PATH}}"</code></p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[1]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># Import libraries</span>
<span class="kn">import</span> <span class="nn">numpy</span> <span class="k">as</span> <span class="nn">np</span> 
<span class="kn">import</span> <span class="nn">matplotlib.pyplot</span> <span class="k">as</span> <span class="nn">plt</span>
<span class="o">%</span><span class="k">matplotlib</span> inline
<span class="kn">import</span> <span class="nn">tensorflow</span> <span class="k">as</span> <span class="nn">tf</span> 
<span class="kn">import</span> <span class="nn">keras</span>
<span class="kn">from</span> <span class="nn">keras.models</span> <span class="k">import</span> <span class="n">Sequential</span>
<span class="kn">from</span> <span class="nn">keras.layers</span> <span class="k">import</span> <span class="n">Dense</span><span class="p">,</span> <span class="n">Dropout</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stderr output_text">
<pre>Using TensorFlow backend.
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h2 id="Question-1-(20-points)">Question 1 (20 points)<a class="anchor-link" href="#Question-1-(20-points)">¶</a></h2><p>Throughout
 this coursework you will be working with the Fashion-MNIST dataset. If 
you are interested, you may find relevant information regarding the 
dataset in this paper.</p>
<p>[1] Fashion-MNIST: A novel image dataset for benchmarking machine learning algorithms. Han Xiao, Kashif Rasul, Roland Vollgraf. <a href="https://arxiv.org/abs/1708.07747">arXiv:1708.07747</a></p>
<p>Be sure that you have the following files in your working directory: 
data.tar.gz and reader.py. Loading the data can be done as follows:</p>
<p><code>from reader import get_images
(x_train, y_train), (x_test, y_test) = get_images()</code></p>
<p>The dataset is already split into a set of 60,000 training images and
 a set of 10,000 test images. The images are of size 28x28 pixels and 
stored as 784-D vector. So if you would like to visualise the images, 
you need to reshape the array.</p>
<p>There are in total 10 label classes, which are:</p>
<ul>
<li>0: T-shirt/top</li>
<li>1: Trousers</li>
<li>2: Pullover</li>
<li>3: Dress</li>
<li>4: Coat</li>
<li>5: Sandal</li>
<li>6: Shirt</li>
<li>7: Sneaker</li>
<li>8: Bag</li>
<li>9: Ankle boot</li>
</ul>

</div>
</div>
</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="1.1-Load-data-(6-points)">1.1 Load data (6 points)<a class="anchor-link" href="#1.1-Load-data-(6-points)">¶</a></h3><p>Load the dataset and print the dimensions of the training set and the test set.</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[12]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="kn">from</span> <span class="nn">reader</span> <span class="k">import</span> <span class="n">get_images</span>
<span class="p">(</span><span class="n">x_train</span><span class="p">,</span> <span class="n">y_train</span><span class="p">),</span> <span class="p">(</span><span class="n">x_test</span><span class="p">,</span> <span class="n">y_test</span><span class="p">)</span> <span class="o">=</span> <span class="n">get_images</span><span class="p">()</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'dimension of x_train_set:'</span> <span class="o">+</span> <span class="nb">str</span><span class="p">(</span><span class="n">x_train</span><span class="o">.</span><span class="n">shape</span><span class="p">)</span> <span class="o">+</span> <span class="s1">'</span><span class="se">\n</span><span class="s1">dimension of y_train_set:'</span> <span class="o">+</span> <span class="nb">str</span><span class="p">(</span><span class="n">y_train</span><span class="o">.</span><span class="n">shape</span><span class="p">))</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'</span><span class="se">\n</span><span class="s1">dimension of x_test_set:'</span> <span class="o">+</span> <span class="nb">str</span><span class="p">(</span><span class="n">x_test</span><span class="o">.</span><span class="n">shape</span><span class="p">)</span> <span class="o">+</span> <span class="s1">'</span><span class="se">\n</span><span class="s1">dimension of y_test_set:'</span> <span class="o">+</span> <span class="nb">str</span><span class="p">(</span><span class="n">y_test</span><span class="o">.</span><span class="n">shape</span><span class="p">))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>dimension of x_train_set:(60000, 784)
dimension of y_train_set:(60000,)

dimension of x_test_set:(10000, 784)
dimension of y_test_set:(10000,)
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="1.2-Visualize-data-(6-points)">1.2 Visualize data (6 points)<a class="anchor-link" href="#1.2-Visualize-data-(6-points)">¶</a></h3><p>Visualise 3 training images (T-shirt, trousers and pullover) and 3 test images (dress, coat and sandal).</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[6]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">imgplot_train1</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">x_train</span><span class="p">[</span><span class="mi">1</span><span class="p">],(</span><span class="mi">28</span><span class="p">,</span><span class="mi">28</span><span class="p">)))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[7]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">imgplot_train2</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">x_train</span><span class="p">[</span><span class="mi">16</span><span class="p">],(</span><span class="mi">28</span><span class="p">,</span><span class="mi">28</span><span class="p">)))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[8]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">imgplot_test1</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">x_test</span><span class="p">[</span><span class="mi">13</span><span class="p">],(</span><span class="mi">28</span><span class="p">,</span><span class="mi">28</span><span class="p">)))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[9]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">imgplot_test2</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">x_test</span><span class="p">[</span><span class="mi">6</span><span class="p">],(</span><span class="mi">28</span><span class="p">,</span><span class="mi">28</span><span class="p">)))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[10]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">imgplot_test3</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">x_test</span><span class="p">[</span><span class="mi">21</span><span class="p">],(</span><span class="mi">28</span><span class="p">,</span><span class="mi">28</span><span class="p">)))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="1.3-Data-balance-(4-points)">1.3 Data balance (4 points)<a class="anchor-link" href="#1.3-Data-balance-(4-points)">¶</a></h3><p>Print out the number of training samples for each class.</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[13]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">unique</span><span class="p">,</span> <span class="n">counts</span> <span class="o">=</span> <span class="n">np</span><span class="o">.</span><span class="n">unique</span><span class="p">(</span><span class="n">y_train</span><span class="p">,</span> <span class="n">return_counts</span><span class="o">=</span><span class="kc">True</span><span class="p">)</span>
<span class="nb">dict</span><span class="p">(</span><span class="nb">zip</span><span class="p">(</span><span class="n">unique</span><span class="p">,</span> <span class="n">counts</span><span class="p">))</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt output_prompt">Out[13]:</div>




<div class="output_text output_subarea output_execute_result">
<pre>{0: 6000,
 1: 6000,
 2: 6000,
 3: 6000,
 4: 6000,
 5: 6000,
 6: 6000,
 7: 6000,
 8: 6000,
 9: 6000}</pre>
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="1.4-Discussion-(4-points)">1.4 Discussion (4 points)<a class="anchor-link" href="#1.4-Discussion-(4-points)">¶</a></h3><p>Is the dataset balanced? What would happen if the dataset is not balanced in the context of image classification?</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[&nbsp;]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># Yes, this dataset is balanced, because the number of each class is same.</span>
<span class="c1">#</span>
<span class="c1"># If the dataset is not balanced, and assume that our training set has 1000 samples for dress and only 20 samples for</span>
<span class="c1"># trousers, then in this case, our algorithm will tends to classify all new examples as dress.</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h2 id="Question-2-(40-points)">Question 2 (40 points)<a class="anchor-link" href="#Question-2-(40-points)">¶</a></h2><p>Build
 a neural network and train it with the Fashion-MNIST dataset. Here, we 
use the keras library, which is a high-level neural network library 
built upon tensorflow.</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[16]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># Convert the label class into a one-hot representation</span>
<span class="n">num_classes</span> <span class="o">=</span> <span class="mi">10</span>
<span class="n">y_train</span> <span class="o">=</span> <span class="n">keras</span><span class="o">.</span><span class="n">utils</span><span class="o">.</span><span class="n">to_categorical</span><span class="p">(</span><span class="n">y_train</span><span class="p">,</span> <span class="n">num_classes</span><span class="p">)</span>
<span class="n">y_test</span> <span class="o">=</span> <span class="n">keras</span><span class="o">.</span><span class="n">utils</span><span class="o">.</span><span class="n">to_categorical</span><span class="p">(</span><span class="n">y_test</span><span class="p">,</span> <span class="n">num_classes</span><span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="2.1-Build-a-multi-layer-perceptron,-also-known-as-multi-layer-fully-connected-network.-You-need-to-define-the-layers,-the-loss-function,-the-optimiser-and-evaluation-metric.-(30-points)">2.1
 Build a multi-layer perceptron, also known as multi-layer fully 
connected network. You need to define the layers, the loss function, the
 optimiser and evaluation metric. (30 points)<a class="anchor-link" href="#2.1-Build-a-multi-layer-perceptron,-also-known-as-multi-layer-fully-connected-network.-You-need-to-define-the-layers,-the-loss-function,-the-optimiser-and-evaluation-metric.-(30-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[4]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="kn">from</span> <span class="nn">keras.optimizers</span> <span class="k">import</span> <span class="n">SGD</span>
<span class="n">opt</span> <span class="o">=</span> <span class="n">SGD</span><span class="p">(</span><span class="n">lr</span><span class="o">=</span><span class="mf">0.01</span><span class="p">)</span>
<span class="n">model</span> <span class="o">=</span> <span class="n">keras</span><span class="o">.</span><span class="n">models</span><span class="o">.</span><span class="n">Sequential</span><span class="p">()</span>
<span class="n">M</span> <span class="o">=</span> <span class="mi">128</span> <span class="c1"># hidden units</span>
<span class="n">K</span> <span class="o">=</span> <span class="mi">10</span> <span class="c1"># outputs</span>

<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dense</span><span class="p">(</span><span class="mi">784</span><span class="p">,</span> <span class="n">input_dim</span> <span class="o">=</span> <span class="mi">784</span><span class="p">,</span><span class="n">kernel_initializer</span><span class="o">=</span> <span class="s2">"uniform"</span><span class="p">,</span> 
  <span class="n">bias_initializer</span><span class="o">=</span> <span class="s2">"zeros"</span><span class="p">,</span><span class="n">activation</span><span class="o">=</span> <span class="s2">"relu"</span><span class="p">))</span>
<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dropout</span><span class="p">(</span><span class="mf">0.3</span><span class="p">))</span>

<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dense</span><span class="p">(</span><span class="mi">500</span><span class="p">,</span><span class="n">kernel_initializer</span><span class="o">=</span> <span class="s2">"uniform"</span><span class="p">,</span> <span class="n">bias_initializer</span><span class="o">=</span> 
  <span class="s2">"zeros"</span><span class="p">,</span><span class="n">activation</span><span class="o">=</span> <span class="s2">"relu"</span><span class="p">))</span>
<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dropout</span><span class="p">(</span><span class="mf">0.3</span><span class="p">))</span>

<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dense</span><span class="p">(</span><span class="mi">200</span><span class="p">,</span><span class="n">kernel_initializer</span><span class="o">=</span> <span class="s2">"uniform"</span><span class="p">,</span> <span class="n">bias_initializer</span><span class="o">=</span> 
  <span class="s2">"zeros"</span><span class="p">,</span><span class="n">activation</span><span class="o">=</span> <span class="s2">"relu"</span><span class="p">))</span>
<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dropout</span><span class="p">(</span><span class="mf">0.3</span><span class="p">))</span>

<span class="n">model</span><span class="o">.</span><span class="n">add</span><span class="p">(</span><span class="n">Dense</span><span class="p">(</span><span class="n">K</span><span class="p">,</span><span class="n">kernel_initializer</span><span class="o">=</span> <span class="s2">"uniform"</span><span class="p">,</span> <span class="n">bias_initializer</span><span class="o">=</span> 
   <span class="s2">"zeros"</span><span class="p">,</span><span class="n">activation</span><span class="o">=</span> <span class="s2">"softmax"</span><span class="p">))</span>

<span class="n">model</span><span class="o">.</span><span class="n">compile</span><span class="p">(</span><span class="n">loss</span><span class="o">=</span><span class="s1">'categorical_crossentropy'</span><span class="p">,</span> <span class="n">optimizer</span><span class="o">=</span><span class="n">opt</span><span class="p">,</span> <span class="n">metrics</span><span class="o">=</span><span class="p">[</span><span class="s1">'accuracy'</span><span class="p">])</span>
<span class="nb">print</span><span class="p">(</span><span class="n">model</span><span class="o">.</span><span class="n">summary</span><span class="p">())</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>_________________________________________________________________
Layer (type)                 Output Shape              Param #   
=================================================================
dense_1 (Dense)              (None, 784)               615440    
_________________________________________________________________
dropout_1 (Dropout)          (None, 784)               0         
_________________________________________________________________
dense_2 (Dense)              (None, 500)               392500    
_________________________________________________________________
dropout_2 (Dropout)          (None, 500)               0         
_________________________________________________________________
dense_3 (Dense)              (None, 200)               100200    
_________________________________________________________________
dropout_3 (Dropout)          (None, 200)               0         
_________________________________________________________________
dense_4 (Dense)              (None, 10)                2010      
=================================================================
Total params: 1,110,150
Trainable params: 1,110,150
Non-trainable params: 0
_________________________________________________________________
None
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="2.2-Define-the-optimisation-parameters-including-the-batch-size-and-the-number-of-epochs-and-then-run-the-optimiser.-(10-points)">2.2 Define the optimisation parameters including the batch size and the number of epochs and then run the optimiser. (10 points)<a class="anchor-link" href="#2.2-Define-the-optimisation-parameters-including-the-batch-size-and-the-number-of-epochs-and-then-run-the-optimiser.-(10-points)">¶</a></h3><p>We
 have tested that for an appropriate network architecture, on a personal
 laptop and with only CPU, it takes about a few seconds per epoch to 
train the network. For 100 epochs, it takes about a coffee break's time 
to finish the training. If you run it on a powerful GPU, it would be 
even much faster.</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[5]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">batch_size</span> <span class="o">=</span> <span class="mi">200</span>
<span class="n">epochs</span> <span class="o">=</span> <span class="mi">100</span>
<span class="n">model</span><span class="o">.</span><span class="n">fit</span><span class="p">(</span><span class="n">x_train</span><span class="p">,</span> <span class="n">y_train</span><span class="p">,</span> <span class="n">batch_size</span><span class="p">,</span> <span class="n">epochs</span> <span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>Epoch 1/100
60000/60000 [==============================] - 9s 153us/step - loss: 2.0073 - acc: 0.6497
Epoch 2/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.5815 - acc: 0.7884
Epoch 3/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.5099 - acc: 0.8168
Epoch 4/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.4773 - acc: 0.8274
Epoch 5/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.4491 - acc: 0.8373
Epoch 6/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.4310 - acc: 0.8443
Epoch 7/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.4143 - acc: 0.8496
Epoch 8/100
60000/60000 [==============================] - 6s 94us/step - loss: 0.4002 - acc: 0.8552
Epoch 9/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3937 - acc: 0.8553
Epoch 10/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.3814 - acc: 0.8600
Epoch 11/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.3717 - acc: 0.8635
Epoch 12/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.3668 - acc: 0.8660
Epoch 13/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3560 - acc: 0.8697
Epoch 14/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3532 - acc: 0.8705
Epoch 15/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.3458 - acc: 0.8742
Epoch 16/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3417 - acc: 0.8757
Epoch 17/100
60000/60000 [==============================] - 6s 93us/step - loss: 0.3360 - acc: 0.8771
Epoch 18/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.3295 - acc: 0.8796
Epoch 19/100
60000/60000 [==============================] - 5s 86us/step - loss: 0.3229 - acc: 0.8808
Epoch 20/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3210 - acc: 0.8811
Epoch 21/100
60000/60000 [==============================] - 6s 94us/step - loss: 0.3128 - acc: 0.8834
Epoch 22/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.3114 - acc: 0.8849
Epoch 23/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.3047 - acc: 0.8871
Epoch 24/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3009 - acc: 0.8886
Epoch 25/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.3001 - acc: 0.8885
Epoch 26/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.2957 - acc: 0.8907
Epoch 27/100
60000/60000 [==============================] - 6s 93us/step - loss: 0.2917 - acc: 0.8912
Epoch 28/100
60000/60000 [==============================] - 6s 94us/step - loss: 0.2872 - acc: 0.8934
Epoch 29/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2863 - acc: 0.8939
Epoch 30/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2798 - acc: 0.8950
Epoch 31/100
60000/60000 [==============================] - 6s 93us/step - loss: 0.2787 - acc: 0.8963
Epoch 32/100
60000/60000 [==============================] - 6s 95us/step - loss: 0.2741 - acc: 0.8968
Epoch 33/100
60000/60000 [==============================] - 6s 96us/step - loss: 0.2710 - acc: 0.8993
Epoch 34/100
60000/60000 [==============================] - 6s 100us/step - loss: 0.2707 - acc: 0.8994
Epoch 35/100
60000/60000 [==============================] - 6s 95us/step - loss: 0.2663 - acc: 0.8996
Epoch 36/100
60000/60000 [==============================] - 6s 98us/step - loss: 0.2657 - acc: 0.8992
Epoch 37/100
60000/60000 [==============================] - 6s 99us/step - loss: 0.2609 - acc: 0.9020
Epoch 38/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2602 - acc: 0.9016
Epoch 39/100
60000/60000 [==============================] - 6s 93us/step - loss: 0.2565 - acc: 0.9033
Epoch 40/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2541 - acc: 0.9043
Epoch 41/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.2525 - acc: 0.9046
Epoch 42/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.2501 - acc: 0.9056
Epoch 43/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2483 - acc: 0.9060
Epoch 44/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2443 - acc: 0.9079
Epoch 45/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2414 - acc: 0.9080
Epoch 46/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2384 - acc: 0.9093
Epoch 47/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2382 - acc: 0.9090
Epoch 48/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2348 - acc: 0.9114
Epoch 49/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2331 - acc: 0.9116
Epoch 50/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.2352 - acc: 0.9100
Epoch 51/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2297 - acc: 0.9115
Epoch 52/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.2272 - acc: 0.9131
Epoch 53/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2241 - acc: 0.9149
Epoch 54/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2231 - acc: 0.9149
Epoch 55/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2228 - acc: 0.9150
Epoch 56/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2211 - acc: 0.9158
Epoch 57/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2174 - acc: 0.9164
Epoch 58/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2184 - acc: 0.9178
Epoch 59/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2153 - acc: 0.9178
Epoch 60/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2142 - acc: 0.9185
Epoch 61/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2130 - acc: 0.9199
Epoch 62/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.2131 - acc: 0.9189
Epoch 63/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2077 - acc: 0.9204
Epoch 64/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2059 - acc: 0.9217
Epoch 65/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2062 - acc: 0.9217
Epoch 66/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2052 - acc: 0.9213
Epoch 67/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.2056 - acc: 0.9213
Epoch 68/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.2031 - acc: 0.9229
Epoch 69/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1998 - acc: 0.9235
Epoch 70/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.2005 - acc: 0.9226
Epoch 71/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1963 - acc: 0.9258
Epoch 72/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1970 - acc: 0.9239
Epoch 73/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.1920 - acc: 0.9266
Epoch 74/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.1941 - acc: 0.9249
Epoch 75/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.1916 - acc: 0.9262
Epoch 76/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.1909 - acc: 0.9263
Epoch 77/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.1912 - acc: 0.9268
Epoch 78/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.1868 - acc: 0.9279
Epoch 79/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.1869 - acc: 0.9274
Epoch 80/100
60000/60000 [==============================] - 6s 92us/step - loss: 0.1846 - acc: 0.9285
Epoch 81/100
60000/60000 [==============================] - 6s 93us/step - loss: 0.1837 - acc: 0.9300
Epoch 82/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1835 - acc: 0.9292
Epoch 83/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.1801 - acc: 0.9312
Epoch 84/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.1788 - acc: 0.9314
Epoch 85/100
60000/60000 [==============================] - 5s 91us/step - loss: 0.1798 - acc: 0.9308
Epoch 86/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.1769 - acc: 0.9325
Epoch 87/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1728 - acc: 0.9336
Epoch 88/100
60000/60000 [==============================] - 5s 89us/step - loss: 0.1757 - acc: 0.9322
Epoch 89/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1717 - acc: 0.9329
Epoch 90/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1702 - acc: 0.9346
Epoch 91/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.1724 - acc: 0.9331
Epoch 92/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1710 - acc: 0.9339
Epoch 93/100
60000/60000 [==============================] - 5s 92us/step - loss: 0.1690 - acc: 0.9353
Epoch 94/100
60000/60000 [==============================] - 6s 98us/step - loss: 0.1701 - acc: 0.9337
Epoch 95/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1657 - acc: 0.9376
Epoch 96/100
60000/60000 [==============================] - 5s 88us/step - loss: 0.1656 - acc: 0.9366
Epoch 97/100
60000/60000 [==============================] - 5s 90us/step - loss: 0.1650 - acc: 0.9366
Epoch 98/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1646 - acc: 0.9369
Epoch 99/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1643 - acc: 0.9360
Epoch 100/100
60000/60000 [==============================] - 5s 87us/step - loss: 0.1610 - acc: 0.9376
</pre>
</div>
</div>

<div class="output_area">

    <div class="prompt output_prompt">Out[5]:</div>




<div class="output_text output_subarea output_execute_result">
<pre>&lt;keras.callbacks.History at 0x7f09c81af128&gt;</pre>
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h2 id="Question-3-(20-points)">Question 3 (20 points)<a class="anchor-link" href="#Question-3-(20-points)">¶</a></h2><p>Evaluate the performance of your network with the test data. 
Visualize the performance using appropriate metrics and graphs (eg. confusion matrix). 
Comment on your per class performance and how it could be better.</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[14]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># This function is provided for you to display the confusion matrix.</span>
<span class="c1"># For more information about the confusion matrix, you can read at</span>
<span class="c1"># https://en.wikipedia.org/wiki/Confusion_matrix</span>
<span class="k">def</span> <span class="nf">plot_confusion_matrix</span><span class="p">(</span><span class="n">cm</span><span class="p">,</span> <span class="n">classes</span><span class="p">,</span> <span class="n">normalize</span><span class="o">=</span><span class="kc">False</span><span class="p">,</span> <span class="n">title</span><span class="o">=</span><span class="s1">'Confusion matrix'</span><span class="p">,</span> <span class="n">cmap</span><span class="o">=</span><span class="n">plt</span><span class="o">.</span><span class="n">cm</span><span class="o">.</span><span class="n">Blues</span><span class="p">):</span>
    <span class="sd">"""</span>
<span class="sd">        This function prints and plots the confusion matrix.</span>
<span class="sd">        </span>
<span class="sd">        cm: confusion matrix, default to be np.int32 data type</span>
<span class="sd">        classes: a list of the class labels or class names</span>
<span class="sd">        normalize: normalize the matrix so that each row amounts to one</span>
<span class="sd">        cmap: color map</span>
<span class="sd">    """</span>
    <span class="k">if</span> <span class="n">normalize</span><span class="p">:</span>
        <span class="n">cm</span> <span class="o">=</span> <span class="n">cm</span><span class="o">.</span><span class="n">astype</span><span class="p">(</span><span class="s1">'float'</span><span class="p">)</span> <span class="o">/</span> <span class="n">cm</span><span class="o">.</span><span class="n">sum</span><span class="p">(</span><span class="n">axis</span><span class="o">=</span><span class="mi">1</span><span class="p">)[:,</span> <span class="n">np</span><span class="o">.</span><span class="n">newaxis</span><span class="p">]</span>
        <span class="nb">print</span><span class="p">(</span><span class="s2">"Normalized confusion matrix"</span><span class="p">)</span>
    <span class="k">else</span><span class="p">:</span>
        <span class="nb">print</span><span class="p">(</span><span class="s1">'Confusion matrix, without normalization'</span><span class="p">)</span>
    <span class="nb">print</span><span class="p">(</span><span class="n">cm</span><span class="p">)</span>

    <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">cm</span><span class="p">,</span> <span class="n">interpolation</span><span class="o">=</span><span class="s1">'nearest'</span><span class="p">,</span> <span class="n">cmap</span><span class="o">=</span><span class="n">cmap</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">title</span><span class="p">(</span><span class="n">title</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">colorbar</span><span class="p">()</span>
    <span class="n">tick_marks</span> <span class="o">=</span> <span class="n">np</span><span class="o">.</span><span class="n">arange</span><span class="p">(</span><span class="nb">len</span><span class="p">(</span><span class="n">classes</span><span class="p">))</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">xticks</span><span class="p">(</span><span class="n">tick_marks</span><span class="p">,</span> <span class="n">classes</span><span class="p">,</span> <span class="n">rotation</span><span class="o">=</span><span class="mi">45</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">yticks</span><span class="p">(</span><span class="n">tick_marks</span><span class="p">,</span> <span class="n">classes</span><span class="p">)</span>

    <span class="n">fmt</span> <span class="o">=</span> <span class="s1">'.2f'</span> <span class="k">if</span> <span class="n">normalize</span> <span class="k">else</span> <span class="s1">'d'</span>
    <span class="n">thresh</span> <span class="o">=</span> <span class="n">cm</span><span class="o">.</span><span class="n">max</span><span class="p">()</span> <span class="o">/</span> <span class="mf">2.</span>
    <span class="k">for</span> <span class="n">i</span><span class="p">,</span> <span class="n">j</span> <span class="ow">in</span> <span class="n">itertools</span><span class="o">.</span><span class="n">product</span><span class="p">(</span><span class="nb">range</span><span class="p">(</span><span class="n">cm</span><span class="o">.</span><span class="n">shape</span><span class="p">[</span><span class="mi">0</span><span class="p">]),</span> <span class="nb">range</span><span class="p">(</span><span class="n">cm</span><span class="o">.</span><span class="n">shape</span><span class="p">[</span><span class="mi">1</span><span class="p">])):</span>
        <span class="n">plt</span><span class="o">.</span><span class="n">text</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="nb">format</span><span class="p">(</span><span class="n">cm</span><span class="p">[</span><span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">],</span> <span class="n">fmt</span><span class="p">),</span>
                 <span class="n">horizontalalignment</span><span class="o">=</span><span class="s2">"center"</span><span class="p">,</span>
                 <span class="n">color</span><span class="o">=</span><span class="s2">"white"</span> <span class="k">if</span> <span class="n">cm</span><span class="p">[</span><span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">]</span> <span class="o">&gt;</span> <span class="n">thresh</span> <span class="k">else</span> <span class="s2">"black"</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">ylabel</span><span class="p">(</span><span class="s1">'True label'</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">xlabel</span><span class="p">(</span><span class="s1">'Predicted label'</span><span class="p">)</span>
    <span class="n">plt</span><span class="o">.</span><span class="n">tight_layout</span><span class="p">()</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="3.1-Evaluate-the-classification-accuracy-on-the-test-set-(10-points)">3.1 Evaluate the classification accuracy on the test set (10 points)<a class="anchor-link" href="#3.1-Evaluate-the-classification-accuracy-on-the-test-set-(10-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[18]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">scores</span> <span class="o">=</span> <span class="n">model</span><span class="o">.</span><span class="n">evaluate</span><span class="p">(</span><span class="n">x_test</span><span class="p">,</span> <span class="n">y_test</span><span class="p">)</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'Test loss:'</span><span class="p">,</span> <span class="n">scores</span><span class="p">[</span><span class="mi">0</span><span class="p">])</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'Test accuracy:'</span><span class="p">,</span> <span class="n">scores</span><span class="p">[</span><span class="mi">1</span><span class="p">])</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>10000/10000 [==============================] - 0s 47us/step
Test loss: 0.32695946246385577
Test accuracy: 0.8948
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="3.2-Calculate-and-plot-the-confusion-matrix-(10-points)">3.2 Calculate and plot the confusion matrix (10 points)<a class="anchor-link" href="#3.2-Calculate-and-plot-the-confusion-matrix-(10-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[19]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="kn">from</span> <span class="nn">sklearn.metrics</span> <span class="k">import</span> <span class="n">confusion_matrix</span>
<span class="p">(</span><span class="n">Y_train</span><span class="p">,</span> <span class="n">Y_train</span><span class="p">),</span> <span class="p">(</span><span class="n">X_test</span><span class="p">,</span> <span class="n">Y_test</span><span class="p">)</span> <span class="o">=</span> <span class="n">get_images</span><span class="p">()</span>
<span class="n">Y_pred</span> <span class="o">=</span> <span class="n">model</span><span class="o">.</span><span class="n">predict_classes</span><span class="p">(</span><span class="n">x_test</span><span class="p">,</span> <span class="n">batch_size</span><span class="o">=</span><span class="mi">128</span><span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[20]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="kn">import</span> <span class="nn">itertools</span>
<span class="n">cm</span> <span class="o">=</span> <span class="n">confusion_matrix</span><span class="p">(</span><span class="n">Y_test</span><span class="p">,</span> <span class="n">Y_pred</span><span class="p">)</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'cm is:'</span> <span class="o">+</span> <span class="nb">str</span><span class="p">(</span><span class="n">cm</span><span class="p">))</span>
<span class="n">classes</span> <span class="o">=</span> <span class="p">[</span><span class="s2">"T-shirt/top"</span><span class="p">,</span><span class="s2">"Trousers"</span><span class="p">,</span><span class="s2">"Pullover"</span><span class="p">,</span><span class="s2">"Dress"</span><span class="p">,</span><span class="s2">"Coat"</span><span class="p">,</span><span class="s2">"Sandal"</span><span class="p">,</span><span class="s2">"Shirt"</span><span class="p">,</span><span class="s2">"Sneaker"</span><span class="p">,</span><span class="s2">"Bag"</span><span class="p">,</span><span class="s2">"Ankle boot"</span><span class="p">]</span>
<span class="n">plot_confusion_matrix</span><span class="p">(</span><span class="n">cm</span><span class="p">,</span> <span class="n">classes</span><span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>cm is:[[827   2  17  23   4   0 121   0   6   0]
 [  3 980   0  12   2   0   2   0   1   0]
 [ 11   2 811  13  87   1  74   0   1   0]
 [ 15   4   7 917  29   1  22   0   5   0]
 [  0   0  90  34 815   0  58   0   3   0]
 [  0   0   0   1   0 976   0  15   0   8]
 [ 93   0  72  32  66   0 728   0   9   0]
 [  0   0   0   0   0  16   0 938   1  45]
 [  3   0   4   4   1   2   5   6 975   0]
 [  0   0   0   0   0   3   1  15   0 981]]
Confusion matrix, without normalization
[[827   2  17  23   4   0 121   0   6   0]
 [  3 980   0  12   2   0   2   0   1   0]
 [ 11   2 811  13  87   1  74   0   1   0]
 [ 15   4   7 917  29   1  22   0   5   0]
 [  0   0  90  34 815   0  58   0   3   0]
 [  0   0   0   1   0 976   0  15   0   8]
 [ 93   0  72  32  66   0 728   0   9   0]
 [  0   0   0   0   0  16   0 938   1  45]
 [  3   0   4   4   1   2   5   6 975   0]
 [  0   0   0   0   0   3   1  15   0 981]]
</pre>
</div>
</div>

<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h2 id="Question-4-(20-points)">Question 4 (20 points)<a class="anchor-link" href="#Question-4-(20-points)">¶</a></h2><p>Take two photos, one of your clothes or shoes that belongs to one of 10 classes, the other that does not belong to any class.</p>
<p>Use either Python or other software (Photoshop, Gimp, or any image 
editer) to convert the photos into grayscale, crop the region of 
interest and reshape into the size of 28x28.</p>
<h3 id="4.1-Load-and-visualise-your-own-images-(6-points)">4.1 Load and visualise your own images (6 points)<a class="anchor-link" href="#4.1-Load-and-visualise-your-own-images-(6-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[31]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="kn">import</span> <span class="nn">matplotlib.image</span> <span class="k">as</span> <span class="nn">mpimg</span>
<span class="n">img1</span><span class="o">=</span><span class="n">mpimg</span><span class="o">.</span><span class="n">imread</span><span class="p">(</span><span class="s1">'T-shirt.jpg'</span><span class="p">)</span>
<span class="nb">print</span><span class="p">(</span><span class="n">img1</span><span class="o">.</span><span class="n">shape</span><span class="p">)</span>
<span class="n">imgplot</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">img1</span><span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>(28, 28)
</pre>
</div>
</div>

<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,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
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[22]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">img2</span><span class="o">=</span><span class="n">mpimg</span><span class="o">.</span><span class="n">imread</span><span class="p">(</span><span class="s1">'flower.jpg'</span><span class="p">)</span>
<span class="n">imgplot</span> <span class="o">=</span> <span class="n">plt</span><span class="o">.</span><span class="n">imshow</span><span class="p">(</span><span class="n">img2</span><span class="p">)</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>




<div class="output_png output_subarea ">
<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAP8AAAD8CAYAAAC4nHJkAAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAALEgAACxIB0t1+/AAAADl0RVh0U29mdHdhcmUAbWF0cGxvdGxpYiB2ZXJzaW9uIDMuMC4wLCBodHRwOi8vbWF0cGxvdGxpYi5vcmcvqOYd8AAAGRNJREFUeJztnXuMnGd1xp8zt72v9+Zdb2LHm0BISI0IsEoRRDRVASUIKUSVIiJEU4liVIEEFX8UhUqN+ldUFRBSK1RTLAKiQCtIE9FQLlHVFERpHGScGyE3O7G93vVtrzOzczv9Yyd0nfh93vVeZjZ5n59keXfOvN/3zvd9z3w787znHHN3CCHSI9PuCQgh2oPEL0SiSPxCJIrEL0SiSPxCJIrEL0SiSPxCJIrEL0SiSPxCJEqulTvL9vZ4bngwGLeq0fHeQVYjGl+pWDjDt41IuJELP6GRj4ztbtD4SNcSjcfWYJ5d7AvGcoUaHVsrb+wSyFTXP7bRubHVpfn5yPVCwh657TUKPB4bj2zktWXC8Y48P2eFTD0YW5xaRHm2HLmaV9jQmTezmwF8GUAWwD+5+z10Z8OD2PX5TwfjnVN8OuWJ5WAsk+cCmzjIz5YTcQNAcTQ8t+Io33Zpskjjd+77HxqvepbGv/nfNwZjwxPn6djZJ4dpvJHjF3H3FH/tFr5OsXBdhY6l6gVw+Y/4vmsd4fG1br7thStoGI0OHq/t4ALO9ITjV42foWMnes8FY/f/yQ/4xFbPYc3PfAVmlgXwDwBuAXAdgDvM7Lr1bk8I0Vo28pn/BgDPuvvz7l4B8B0At27OtIQQW81GxH85gJdW/X68+dgFmNl+MztkZofqi/yzrRCidWz5t/3ufsDdJ919Mtvbs9W7E0KskY2I/wSAPat+3918TAjxGmAj4n8EwNVmdqWZFQB8GMADmzMtIcRWs26rz91rZvYpAD/CitV30N2fYGOyJcPg4bBtVRzn+xwaWQjGzp3cQccWx7hd1v8c/z6i0BV+n5zfy99D8xGv/QfH99H49ItDNG694e3PPc6tPJvgr7txrpPGe07SMIq7wsfGivyc5IoRe9a4vVsnVt/CXjoUtV5ucXbO8Lk1xvk5byyFpffcS6N07PGegWBssRLxIFexIZ/f3R8E8OBGtiGEaA9a3itEokj8QiSKxC9Eokj8QiSKxC9Eokj8QiRKS/P5rQFkw1m5WB7j3mgfycLsPsaT6pciawh6T/JDwfL5l68t0bE37T5K40fOXEbjmV6eNP97e6aCsZM/v5KOPTvAffyOEf7aFneHawkAwNKV4XOan+U+f6yQwclbSL4wAFTCG4jVjshG1hhU+/nkfI4XBOg+EX7tkeULqAyQbS+v/X6uO78QiSLxC5EoEr8QiSLxC5EoEr8QiSLxC5EoLbX66p3A3JvC8bErwlVJAWDmTH8wtmOO73vxCm7NlHZya6bnxXAFXnduMw7kefXepTLf93ve+CyNj3aEU52fvHaCju1+kV8CNsp9p8qOSOrrcNgqLGci6cIj/Lj91XU/ovGDL4arGh87upOOzczy+2KdTx1W4VYiqb6NeiQrtzoctk89Um35gjms+ZlCiNcVEr8QiSLxC5EoEr8QiSLxC5EoEr8QiSLxC5EoLfX5PeuoDoYNzs5cpLPpdNgArYSXAAAA6pE22ayjKwDgfx8Lhrp+8y46dOIdZ2l8pI+Xz57o4uN/v+e5YOy22x6lY//8sY/QeGeBpxOfyfEDXz7bFYwNjM/TsW8emabxF5Z5ievpuXC6cWwNQbHcS+O9R3k6cpkvI6ANiGvd3KvPsRRv0vr7VU9d8zOFEK8rJH4hEkXiFyJRJH4hEkXiFyJRJH4hEkXiFyJRNuTzm9lRAAsA6gBq7j65ke2dPMvbbBdmw+aoR97G8nP8CbVuPj531UQwVu3j3uof9DxN4+960zM0/l9L19J4XyacM//OTu5H/9nVP6fxfz3+DhpvXFamcRTDl9jiEk+Kf9x30fjzc7z9eDYbXtvRkefrF5Y6+LoQz/Hjmonk87Py3Bk+NSzPkvoP9ch6lVVsxiKfP3T3M5uwHSFEC9Gf/UIkykbF7wB+bGaPmtn+zZiQEKI1bPTP/hvd/YSZjQL4iZn9xt0fXv2E5pvCfgDIDg1scHdCiM1iQ3d+dz/R/H8GwH0AbrjIcw64+6S7T2Z7ezayOyHEJrJu8ZtZj5n1vfwzgPcDeHyzJiaE2Fo28mf/GID7zOzl7fyzu//HpsxKCLHlrFv87v48gLde0qCsI9tfCYarc7xgeaYj7KfnF7m/GauzvrCXx5f/ONxGuzrCjdlvnX8njf/N6CM0/sMFXtf/4Mx7grF/jCyAyBpfo8By4gGgUY743d3hGg21Mr/8liKetffy+L6xcOvyp8/wWgA04R7A8uDa8+YvRq07vP3YtbpZyOoTIlEkfiESReIXIlEkfiESReIXIlEkfiESpaWlu3PZBgb7wyWTz57lVt/yznDZb6vxl1IZ5WXBrYv0TAZQIampXUd5i+77erkjekv/ERofyYVbcAPAD2evC8aGu3iJ6t3dszQ+0MvHn3+Kl7iuDIatwMG9fN+7+vjrfnZ6hMa7smELtq9zmY6d7eDXQ26RX2+sBTeAlayYAA1+OSFTIffsiEV5wXbW/EwhxOsKiV+IRJH4hUgUiV+IRJH4hUgUiV+IRJH4hUiUlvr8DTeUKsTEjGVJ5sP1jpdHuLHaHfHil9/C03LrhfC+J/6Nt9A+1uAlpk+8fZDGnyyG04ljvHBuiMa7c+EUawDoLfD49BU87uScltm1AGBumee27t15nsanS+F05EwkldmyPF7viowvcr+9vDN8PeXn+T2ZLfuw2PqCVejOL0SiSPxCJIrEL0SiSPxCJIrEL0SiSPxCJIrEL0SitNbnbxhKxXAZaqtF2hovhKfb6OEGZ+kans8/PjRP492kpfNTfzFGx162+xSNz9Z5f/Ca8/LYc8WuYGyoh+fjn1rq5/FZXro7d4qXFa/2h89LOcvHzpMW2wBQb/B7V7Uejs8t8GOemea1JQpzkbLi/JQhWwqPz/FThnoH2fclVBTXnV+IRJH4hUgUiV+IRJH4hUgUiV+IRJH4hUgUiV+IRIn6/GZ2EMAHAcy4+77mY0MAvgtgAsBRALe7O0+uBmCVDLLHwznatV7u66I/7LWPjXCf/s1D03zbEZZqYU/6vW95io59Zm4njf/9EzfR+I6eEo0vzYWP6c6+RTq2UueGdHcnz9ef3cXjuULY549Z0qUSXwcQizcq4dfmJf66rYtfi4tX8tn3vMilVZhfv8/Puq5HyhRcwFru/F8HcPMrHvscgIfc/WoADzV/F0K8hoiK390fBnDuFQ/fCuDe5s/3AvjQJs9LCLHFrPcz/5i7TzV/PgWAr28VQmw7NvyFn7s7yMc3M9tvZofM7FB9aWmjuxNCbBLrFf+0mY0DQPP/mdAT3f2Au0+6+2S2p2eduxNCbDbrFf8DAO5s/nwngPs3ZzpCiFYRFb+ZfRvALwBcY2bHzexjAO4B8D4zewbAe5u/CyFeQ0R9fne/IxD6o0vdWaYKdJ8M+5tz13KTctfOuWBsrJv72aU6rxGfuZRE6FcwXeY57wMd3Kc/WdtB40Nd3Pid7Qnn8584M0DHNiL93OuLsWbx/Lhlu8M+f7USufwipyRWW5/1DIjN2/p4H4fhAf791dw879WQWwof9wZfvkDjkdN5AVrhJ0SiSPxCJIrEL0SiSPxCJIrEL0SiSPxCJEpLS3cDoPZN5yk+nbnRsKU12MnttOdP81bVA11lGt83NBWMnSKtoAGgN79M47siZcNzGZ5e2tcd3v7Zo7z9N3p5SfOOyDlpRJzAKiu33sFfV4akcANAVxdPJy4j7InVIim9fp77bWdIujAAYIzPrXEufOBqPdyva5Bdx0qGr0Z3fiESReIXIlEkfiESReIXIlEkfiESReIXIlEkfiESpaU+vxvgZI9dp3ma5fn5cInqy/eE032BeDvncyXesvlkMZx22wD3ZV9c4GsMzpMW2wDw0gu89DdIamumEsnxzHGv3ep8fI4vYUCDnG/LR9pc1/g5Ky7yNtoNko6cn48Y4pEq8o0yn1tjjB8Y5sfXY2nS5fBx2+zS3UKI1yESvxCJIvELkSgSvxCJIvELkSgSvxCJIvELkSgt9fmtAWSI/Vnti3jSlfB7Vax89jU7eIvuZzPcSz+xEPb5c9lweWoA2NnNyzyfi/j8XSfWf5qWh7hhnX0pvHYCALK8zAEs4od7Pmw8ez4yuBq5N5FaAQCQK4bHszbXAFDv5nNjrwsAsMTnll0mpbsj2y7MEZ+fX4oXoDu/EIki8QuRKBK/EIki8QuRKBK/EIki8QuRKBK/EIkSNZDN7CCADwKYcfd9zcfuBvBxAKebT7vL3R+M7s2BbDXsYc6Pc38zQ3zbx3+9l499K9/2G/tO03ipFs4N7yvw3O3ZMvfxy2Ve/L4j4rVnSIn40l5el7/rFK9PvzzMj1ttILL9l8KvbZmXOUCjl5vWMa+91kfGx3z6SPtv1PiaFIvk+1MiQ9n5vpRO82uZ4dcB3HyRx7/k7tc3/8WFL4TYVkTF7+4PAzjXgrkIIVrIRj7zf8rMjpjZQTOL9IQSQmw31iv+rwB4A4DrAUwB+ELoiWa238wOmdmhWpmvcRdCtI51id/dp9297u4NAF8FcAN57gF3n3T3yVxnz3rnKYTYZNYlfjMbX/XrbQAe35zpCCFaxVqsvm8DuAnAiJkdB/DXAG4ys+uxYiwcBfCJLZyjEGILiIrf3e+4yMNfW8/OGnmgOBr2R3ORrwRYDnasvvyRIxM0fuwK/p3lm0fC9QB6crwXey3SMwDeT8PF8UhOPskNz8/wNQQ13q4AeZI7vhLn22d15DvO8eNS6uKvOz/AF0BU50ld/8j1giqPd5zm0ql3csO9USB1DiJ1+5d2h49Lg5+OC9AKPyESReIXIlEkfiESReIXIlEkfiESReIXIlFaXro7XwzHM5E0SdbWmMUAALP8fW6+PkDjh0rh1Ndrx2fo2I9c9ksa/0XvG2n8x7iWxjPPhP26/CI/ppU+biuVd0VKWBciLb5J+W2LnO9Y+/BMxBLL94Ut2OoS98Syc5HS25E06zqviM6JHBaayhwZuxrd+YVIFIlfiESR+IVIFIlfiESR+IVIFIlfiESR+IVIlJb6/HAAxLqNeadOZluNFAnKVrgB2nmMx4uV8A6Wd/LDeK7WS+NXdfGy4VeNjdD4M9N7grFckb+uTCR1NbfA7w/ZZb7AoryHpDtH1ghkN+jz53LhsuLVWZLuCyA/z183uxYBYPgxPjfPkBbdufWvd5kp0aEXoDu/EIki8QuRKBK/EIki8QuRKBK/EIki8QuRKBK/EInSUp/fs0BlRziei3iURmzfenfEV43kORdm+RPYGoTBTlKkAMC/T++j8dGuBRrvzPI22PnLwjXPlwq8PXi2FPHxI+sEYmszWIns7l7e2rwjX6VxYpUDABrkkog1jmvk+PVUHeRrENDg6x8ypHs4u84BXsI+tv7ggjms/alCiNcTEr8QiSLxC5EoEr8QiSLxC5EoEr8QiSLxC5EoUVfQzPYA+AaAMaxk5B9w9y+b2RCA7wKYAHAUwO3ufp5tyzNArSfsn8Zyy/Mxc5ZQ20GMVQC18/xQsHUChQz34bsjLbzPlHm+fzXiGe8Zng3Giv38oC2UeV57tcqPSyXS6toq4fG9ndznN9bfG4BHFm/0knUCC4OR9t51vj7CO/n1tDwSqZNA+inkSpF8fhKOrWdZzVru/DUAn3X36wC8E8Anzew6AJ8D8JC7Xw3goebvQojXCFHxu/uUu/+q+fMCgKcAXA7gVgD3Np92L4APbdUkhRCbzyV95jezCQBvA/BLAGPuPtUMncLKxwIhxGuENYvfzHoBfA/AZ9x9fnXM3R0r3wdcbNx+MztkZocaSxv40C6E2FTWJH4zy2NF+N9y9+83H542s/FmfBzARbtVuvsBd59098lMT6TKphCiZUTFb2YG4GsAnnL3L64KPQDgzubPdwK4f/OnJ4TYKtaSAPhuAB8F8JiZHW4+dheAewD8i5l9DMAxALfHNmQOZEiWJktzBIDCfNj6qXVzj6NKUokBoB7uwA2Atw+fKvKNX93PS3OfjIyPMVAgudCRVtFT2X4aP7sUbv8NANls5P5BvKfFiM1YWY7YrxFfq683fFx6urj9OpvjB64wxVt8R1N+WS9t7nBeUhtuRlT87v4zsrs/2pxpCCFajVb4CZEoEr8QiSLxC5EoEr8QiSLxC5EoEr8QidLS0t3WAArzYZOSrQEAgPxS2DvtmuHvY+VhnhYbyR5FhtjCU3PcK+/L8/TRTKRWcy5So/psObxycrHKFzCcX+Q+fuksT23NzfJLqNYfXrxR7eRjLRtJ6S3y8bPnwusIvJsvKslESpp3T/Fzslzm11sHSX7PVvjrZmtaYmtlLnju2p8qhHg9IfELkSgSvxCJIvELkSgSvxCJIvELkSgSvxCJ0lqfvw7kSCWvRiSnntnh+SXujWbLsX7O6993scgnvlTlees7Onhv8oVlnlt+bGYoGKuWeN55Jh8xhiOHLbY+omMmfIktR6o+do/ysm9LJe6ld50M77vaz+97jXzkhUWOS8xvNw9vn7XgBoAqKYgVG7sa3fmFSBSJX4hEkfiFSBSJX4hEkfiFSBSJX4hEkfiFSJSW+vww7kP2nORme3E0PLgcaYnsEd+2HimWztom517gPvyzZ3bTeOEcfw+Oeekgbc9zkbf3Wi9/Qn6Qt9HuHF2k8dJvB8LBHD/fsRbdXcN8fUSRxAqn+aVfWODHZZm8LADonuFzb5DdL+7h267sChe+aHTELpb/R3d+IRJF4hciUSR+IRJF4hciUSR+IRJF4hciUSR+IRIl6vOb2R4A3wAwhpXO4Qfc/ctmdjeAjwN4ufn8Xe7+INuWG+Bkj6UR/l5UGo3NNkxhlq8DiPUMMJKf7TxlHjue5vvOlrk3uzzEx9dIfneWtwxAtsQvgeVI3nouUg9geN/pYGyxzOscLM3xngFY4HPPE68+V4ydE77r2PVS6efbZz5/rYevf8j2kJ1n1u7zr2WRTw3AZ939V2bWB+BRM/tJM/Yld/+7Ne9NCLFtiIrf3acATDV/XjCzpwBcvtUTE0JsLZf0md/MJgC8DcAvmw99ysyOmNlBMxsMjNlvZofM7FC9yMsyCSFax5rFb2a9AL4H4DPuPg/gKwDeAOB6rPxl8IWLjXP3A+4+6e6T2W7y4VQI0VLWJH4zy2NF+N9y9+8DgLtPu3vd3RsAvgrghq2bphBis4mK38wMwNcAPOXuX1z1+Piqp90G4PHNn54QYqtYy7f97wbwUQCPmdnh5mN3AbjDzK7Hiv13FMAnolsyoMbcm4izw9IV83MR64ZnpqIeKRvO3iUt1lqcZ70iW+X2TDnSorteICm9kdTUwgINo7qDj798cI7GBzvCibWH53iqc+4kPyn5xYgF2hU+LpUdkVLvHXzbhXkaRp27mJzILdkbEf91jazl2/6f4eJVyqmnL4TY3miFnxCJIvELkSgSvxCJIvELkSgSvxCJIvELkSgtLd3tWaDaR7z6hYi3StJyC3Pct42lWJZ28TTKwmz4fbIjki5cHKdhdJzn8UYkZZi9hWdqfGh+gR83z/H4u0aep/GfTl0TjFXPczO8N3Jco62sB8PnNDPEF34sz8f6xfP24NGW8OSwsvRxAKhXyL597WsAdOcXIlEkfiESReIXIlEkfiESReIXIlEkfiESReIXIlHMfe2lfje8M7PTAI6temgEwJmWTeDS2K5z267zAjS39bKZc9vr7jvX8sSWiv9VOzc75O6TbZsAYbvObbvOC9Dc1ku75qY/+4VIFIlfiERpt/gPtHn/jO06t+06L0BzWy9tmVtbP/MLIdpHu+/8Qog20Rbxm9nNZva0mT1rZp9rxxxCmNlRM3vMzA6b2aE2z+Wgmc2Y2eOrHhsys5+Y2TPN/y/aJq1Nc7vbzE40j91hM/tAm+a2x8z+08yeNLMnzOzTzcfbeuzIvNpy3Fr+Z7+ZZQH8FsD7ABwH8AiAO9z9yZZOJICZHQUw6e5t94TN7D0AFgF8w933NR/7WwDn3P2e5hvnoLv/5TaZ290AFtvdubnZUGZ8dWdpAB8C8Kdo47Ej87odbThu7bjz3wDgWXd/3t0rAL4D4NY2zGPb4+4PAzj3iodvBXBv8+d7sXLxtJzA3LYF7j7l7r9q/rwA4OXO0m09dmRebaEd4r8cwEurfj+O7dXy2wH82MweNbP97Z7MRRhrtk0HgFMAxto5mYsQ7dzcSl7RWXrbHLv1dLzebPSF36u50d3fDuAWAJ9s/nm7LfGVz2zbya5ZU+fmVnGRztK/o53Hbr0drzebdoj/BIA9q37f3XxsW+DuJ5r/zwC4D9uv+/D0y01Sm//PtHk+v2M7dW6+WGdpbINjt506XrdD/I8AuNrMrjSzAoAPA3igDfN4FWbW0/wiBmbWA+D92H7dhx8AcGfz5zsB3N/GuVzAduncHOosjTYfu23X8drdW/4PwAew8o3/cwA+3445BOZ1FYBfN/890e65Afg2Vv4MrGLlu5GPARgG8BCAZwD8FMDQNprbNwE8BuAIVoQ23qa53YiVP+mPADjc/PeBdh87Mq+2HDet8BMiUfSFnxCJIvELkSgSvxCJIvELkSgSvxCJIvELkSgSvxCJIvELkSj/B7oGtQnGitdmAAAAAElFTkSuQmCC
">
</div>

</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="4.2-Test-your-network-on-the-two-images-and-show-the-classification-results-(10-points)">4.2 Test your network on the two images and show the classification results (10 points)<a class="anchor-link" href="#4.2-Test-your-network-on-the-two-images-and-show-the-classification-results-(10-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[33]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">img11</span> <span class="o">=</span> <span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">img1</span><span class="p">,(</span><span class="mi">1</span><span class="p">,</span><span class="mi">784</span><span class="p">))</span>
<span class="n">image1_pred</span> <span class="o">=</span> <span class="n">model</span><span class="o">.</span><span class="n">predict_classes</span><span class="p">(</span><span class="n">img11</span><span class="p">,</span> <span class="n">batch_size</span><span class="o">=</span><span class="mi">128</span><span class="p">)</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'predicted result of T-shirt is:'</span> <span class="o">+</span> <span class="n">classes</span><span class="p">[</span><span class="nb">int</span><span class="p">(</span><span class="n">image1_pred</span><span class="p">)])</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>predicted result of T-shirt is:T-shirt/top
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[25]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="n">img22</span> <span class="o">=</span> <span class="n">np</span><span class="o">.</span><span class="n">reshape</span><span class="p">(</span><span class="n">img2</span><span class="p">,(</span><span class="mi">1</span><span class="p">,</span><span class="mi">784</span><span class="p">))</span>
<span class="n">image2_pred</span> <span class="o">=</span> <span class="n">model</span><span class="o">.</span><span class="n">predict_classes</span><span class="p">(</span><span class="n">img22</span><span class="p">,</span> <span class="n">batch_size</span><span class="o">=</span><span class="mi">128</span><span class="p">)</span>
<span class="nb">print</span><span class="p">(</span><span class="s1">'predicted result of flower is:'</span> <span class="o">+</span> <span class="n">classes</span><span class="p">[</span><span class="nb">int</span><span class="p">(</span><span class="n">image2_pred</span><span class="p">)])</span>
</pre></div>

    </div>
</div>
</div>

<div class="output_wrapper">
<div class="output">


<div class="output_area">

    <div class="prompt"></div>


<div class="output_subarea output_stream output_stdout output_text">
<pre>predicted result of flower is:Bag
</pre>
</div>
</div>

</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h3 id="4.3-Discuss-the-classification-results-and-provide-one-method-to-improve-real-life-performance-of-the-network-(4-points)">4.3 Discuss the classification results and provide one method to improve real life performance of the network (4 points)<a class="anchor-link" href="#4.3-Discuss-the-classification-results-and-provide-one-method-to-improve-real-life-performance-of-the-network-(4-points)">¶</a></h3>
</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[&nbsp;]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># In our real life, there are lots of ways to improve the performance</span>
<span class="c1">#</span>
<span class="c1"># 1. Data:The first thing we can do to improve real life performance is to increase the size of training sets, </span>
<span class="c1"># we can simplely get more data, or we can invent more data, which is called data augmentation; also, we </span>
<span class="c1"># can rescale or transform our data, or maybe we can do the feature selection before training it, which makes it faster.</span>
<span class="c1"># 2. Algorithm:We can improve our algorithms, a better algorithm may improve our network's performance. And we can also </span>
<span class="c1"># simply tune our algotiyhms.</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">
<h2 id="5.-Survey">5. Survey<a class="anchor-link" href="#5.-Survey">¶</a></h2><p>How long did the coursework take you to solve?</p>

</div>
</div>
</div>
<div class="cell border-box-sizing code_cell rendered">
<div class="input">
<div class="prompt input_prompt">In&nbsp;[&nbsp;]:</div>
<div class="inner_cell">
    <div class="input_area">
<div class=" highlight hl-ipython3"><pre><span></span><span class="c1"># 4-5 hours.</span>
</pre></div>

    </div>
</div>
</div>

</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">

</div>
</div>
</div>
<div class="cell border-box-sizing text_cell rendered"><div class="prompt input_prompt">
</div><div class="inner_cell">
<div class="text_cell_render border-box-sizing rendered_html">

</div>
</div>
</div>
    </div>
  </div>


 



</body></html>