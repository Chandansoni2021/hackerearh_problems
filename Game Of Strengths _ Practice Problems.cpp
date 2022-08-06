<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<!-- saved from url=(0115)https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/ -->
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <meta name="theme-color" content="#323754">
        
        <meta name="description" content=" 
Prepare for your technical interviews by solving questions that are asked in interviews of various companies.
 HackerEarth is a global hub of 5M+ developers. We help companies accurately assess, interview, and hire top developers for a myriad of roles.">
        <link rel="canonical" href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/">
        <meta name="msvalidate.01" content="1BF418E510B5A17A2D71685C571BF4EB">
        <meta name="viewport" content="width=device-width,initial-scale=1.0">

        
        <meta name="referrer" content="strict-origin-when-cross-origin">
        

        
        <iframe src="javascript:false" title="" role="presentation" style="width: 0px; height: 0px; border: 0px; display: none;" src="./Game Of Strengths _ Practice Problems_files/saved_resource.html"></iframe><script src="./Game Of Strengths _ Practice Problems_files/cb=gapi.loaded_0" async=""></script><script type="text/javascript" async="" src="./Game Of Strengths _ Practice Problems_files/plusone.js.download" gapi_processed="true"></script><script id="twitter-wjs" src="./Game Of Strengths _ Practice Problems_files/widgets.js.download"></script><script id="facebook-jssdk" src="./Game Of Strengths _ Practice Problems_files/all.js.download"></script><script type="text/javascript" async="" src="./Game Of Strengths _ Practice Problems_files/mixpanel-2-latest.min.js.download"></script><script type="text/javascript" async="" src="./Game Of Strengths _ Practice Problems_files/recaptcha__en.js.download" crossorigin="anonymous" integrity="sha384-1wfFouIowz8xmYjnJHnuHaS4y6fPKPrEu0nXZ4uRY6zQtwT5smuDgKWM+oieiZaf"></script><script async="" src="./Game Of Strengths _ Practice Problems_files/gtm.js.download"></script><script async="" src="./Game Of Strengths _ Practice Problems_files/analytics.js.download"></script><script>
          (function() {
              if (window.BOOMR && window.BOOMR.version) {
                  return;
              }
              var dom, doc, where, iframe = document.createElement("iframe"),
                  win = window;

              function boomerangSaveLoadTime(e) {
                  win.BOOMR_onload = (e && e.timeStamp) || new Date().getTime();
              }
              if (win.addEventListener) {
                  win.addEventListener("load", boomerangSaveLoadTime, false);
              } else if (win.attachEvent) {
                  win.attachEvent("onload", boomerangSaveLoadTime);
              }

              iframe.src = "javascript:false";
              iframe.title = "";
              iframe.role = "presentation";
              (iframe.frameElement || iframe).style.cssText = "width:0;height:0;border:0;display: none;";
              where = document.getElementsByTagName("script")[0];
              where.parentNode.insertBefore(iframe, where);

              try {
                  doc = iframe.contentWindow.document;
              } catch (e) {
                  dom = document.domain;
                  iframe.src = "javascript:var d=document.open();d.domain='" + dom + "';void(0);";
                  doc = iframe.contentWindow.document;
              }
              doc.open()._l = function() {
                  var js = this.createElement("script");
                  if (dom) this.domain = dom;
                  js.id = "boomr-if-as";
                  js.src = "https://s.go-mpulse.net/boomerang/" +
                      "QKZWA-3BVYP-7W6XK-6HKWZ-EFFZ4";
                  BOOMR_lstart = new Date().getTime();
                  this.body.appendChild(js);
              };
              doc.write('<body onload="document._l();">');
              doc.close();
          })();
        </script>
        


        
<meta name="google-site-verification" content="ozqyeStBcz4eehbY9Ohb_IUQcA4y8BKzzDCT-H1QPPc">


        
        
        <!-- google analytics start -->
        <script>
            (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
            (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
            m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
            })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

            ga('create', 'UA-34729975-1', 'auto');
            ga('require', 'displayfeatures');
            
            ga('set', '&uid', 8007132);
            
            ga('send', 'pageview');
        </script>
        <!-- google analytics end -->
        
        

        
        
        <!-- Google Tag Manager -->
        <script>
            (function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
            new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
            j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
            'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
            })(window,document,'script','dataLayer','GTM-PBHB3B9');
        </script>
        <!-- End Google Tag Manager -->
        
        

        <title>  Game Of Strengths | Practice Problems </title>

        
<meta property="og:title" content="Game Of Strengths | Practice Problems">
<meta property="og:image" content="https://static-fastly.hackerearth.com/static/hackerearth/images/logo/HE_cover.jpg">
<meta property="og:description" content="">
<meta property="og:url" content="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/">
<meta property="og:site_name" content="HackerEarth">
<meta property="og:type" content="hackerearth:problem">

<meta name="twitter:card" content="summary">
<meta name="twitter:site" content="@HackerEarth">
<meta name="twitter:url" content="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/">
<meta name="twitter:title" content="Game Of Strengths | Practice Problems">

        
        <link rel="shortcut icon" href="https://static-fastly.hackerearth.com/static/hackerearth/images/logo/HE_identity.png" type="image/x-icon">
        

        

        
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/base_common_combined.5ecd205819b2.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/marketing_footer.d4e680a6c44d.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/tipTip.4cc4f68d44b4.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/offline-theme-slide.12bc3d4c96b4.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/font-awesome.min.269550530cc1.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/opensans.06e0aa7529dc.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/hack.8b30169f8a8b.css">
            <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/unicons.9eda5fc182c1.css">
        

        


        

        <!-- Make the static variable available for all js files -->
        <script>
            var STATIC_URL = "https://static-fastly.hackerearth.com/static/";
            var RECAPTCHA_V3_SITE_KEY = "6LeyqcIZAAAAAOcy_5WJORJsuu9zmbZZxIRp4-em";
            var ssEnabled = false;
        </script>

        <!-- Store CSRF_COOKIE -->
        <script>
            var CSRF_COOKIE_USED = "True";
            var CSRF_COOKIE = "e2scRmRX41KmXdkylEOfQJf7tzj9XuYQbEsEjJXAgoEcMMaUaGxR56zvRihhUdr1";
        </script>

        
        
        <script src="./Game Of Strengths _ Practice Problems_files/api.js.download"></script>
        

        

    
<script>(window.BOOMR_mq=window.BOOMR_mq||[]).push(["addVar",{"rua.upush":"true","rua.cpush":"false","rua.upre":"true","rua.cpre":"false","rua.uprl":"false","rua.cprl":"false","rua.cprf":"false","rua.trans":"SJ-97080763-12de-44b7-a59f-a057441bd4e2","rua.cook":"true","rua.ims":"false","rua.ufprl":"false","rua.cfprl":"false","rua.isuxp":"false","rua.texp":"norulematch"}]);</script>
                              <script>!function(e){var n="https://s.go-mpulse.net/boomerang/";if("False"=="True")e.BOOMR_config=e.BOOMR_config||{},e.BOOMR_config.PageParams=e.BOOMR_config.PageParams||{},e.BOOMR_config.PageParams.pci=!0,n="https://s2.go-mpulse.net/boomerang/";if(window.BOOMR_API_key="QKZWA-3BVYP-7W6XK-6HKWZ-EFFZ4",function(){function e(){if(!o){var e=document.createElement("script");e.id="boomr-scr-as",e.src=window.BOOMR.url,e.async=!0,i.parentNode.appendChild(e),o=!0}}function t(e){o=!0;var n,t,a,r,d=document,O=window;if(window.BOOMR.snippetMethod=e?"if":"i",t=function(e,n){var t=d.createElement("script");t.id=n||"boomr-if-as",t.src=window.BOOMR.url,BOOMR_lstart=(new Date).getTime(),e=e||d.body,e.appendChild(t)},!window.addEventListener&&window.attachEvent&&navigator.userAgent.match(/MSIE [67]\./))return window.BOOMR.snippetMethod="s",void t(i.parentNode,"boomr-async");a=document.createElement("IFRAME"),a.src="about:blank",a.title="",a.role="presentation",a.loading="eager",r=(a.frameElement||a).style,r.width=0,r.height=0,r.border=0,r.display="none",i.parentNode.appendChild(a);try{O=a.contentWindow,d=O.document.open()}catch(_){n=document.domain,a.src="javascript:var d=document.open();d.domain='"+n+"';void(0);",O=a.contentWindow,d=O.document.open()}if(n)d._boomrl=function(){this.domain=n,t()},d.write("<bo"+"dy onload='document._boomrl();'>");else if(O._boomrl=function(){t()},O.addEventListener)O.addEventListener("load",O._boomrl,!1);else if(O.attachEvent)O.attachEvent("onload",O._boomrl);d.close()}function a(e){window.BOOMR_onload=e&&e.timeStamp||(new Date).getTime()}if(!window.BOOMR||!window.BOOMR.version&&!window.BOOMR.snippetExecuted){window.BOOMR=window.BOOMR||{},window.BOOMR.snippetStart=(new Date).getTime(),window.BOOMR.snippetExecuted=!0,window.BOOMR.snippetVersion=12,window.BOOMR.url=n+"QKZWA-3BVYP-7W6XK-6HKWZ-EFFZ4";var i=document.currentScript||document.getElementsByTagName("script")[0],o=!1,r=document.createElement("link");if(r.relList&&"function"==typeof r.relList.supports&&r.relList.supports("preload")&&"as"in r)window.BOOMR.snippetMethod="p",r.href=window.BOOMR.url,r.rel="preload",r.as="script",r.addEventListener("load",e),r.addEventListener("error",function(){t(!0)}),setTimeout(function(){if(!o)t(!0)},3e3),BOOMR_lstart=(new Date).getTime(),i.parentNode.appendChild(r);else t(!1);if(window.addEventListener)window.addEventListener("load",a,!1);else if(window.attachEvent)window.attachEvent("onload",a)}}(),"".length>0)if(e&&"performance"in e&&e.performance&&"function"==typeof e.performance.setResourceTimingBufferSize)e.performance.setResourceTimingBufferSize();!function(){if(BOOMR=e.BOOMR||{},BOOMR.plugins=BOOMR.plugins||{},!BOOMR.plugins.AK){var n="true"=="true"?1:0,t="cookiepresent",a="eqbdvaa7j2q32jqacqhs4aaaabro5ibr-f-ef19c946c-clienttons-s.akamaihd.net",i="false"=="true"?2:1,o={"ak.v":"32","ak.cp":"755788","ak.ai":parseInt("678462",10),"ak.ol":"0","ak.cr":181,"ak.ipv":6,"ak.proto":"h2","ak.rid":"110f893f","ak.r":40772,"ak.a2":n,"ak.m":"dsca","ak.n":"essl","ak.bpcip":"2402:3a80:1f4e:a1bd::","ak.cport":52947,"ak.gh":"104.90.5.223","ak.quicv":"","ak.tlsv":"tls1.3","ak.0rtt":"","ak.csrc":"-","ak.acc":"","ak.t":"1659805745","ak.ak":"hOBiQwZUYzCg5VSAfCLimQ==jbFiW2d1t1QT20vY8fpIHesDwsXhrRBT6iqKT7WYI30Egk5bzwJs+5+oRjbCAeQVUrbNSHc+ub5TJYrzQKT3/if729WcVuzJY3qRczcrmmLUYuSZOFLtDpa5Xfqd44GqdrT/cd/zYRKLj4LEBUNwn05jmuHRrPgcyrpChS36OXGhOgzrmI8fYuiPs2XkYDsrJwA7CdX6jku+CWPa4tK0BULOcjJPfgVNKKWL4/512450e8qQwm92NdZnztAs1R/bhKg/IsDnNKoflTvKaz1abIaHejxzR4aQH0yjKw/T7EqNbLf7LBA9NMM9ksqPjAQd7qEJ5w9FA2KHjBYZ7o5i+1pi5buMdRazNBuxcTaKJmRahJE+5gEi8/CIcw20BkuB6u0p/y086dAwa2bGFxOH1gmvCXLnOqyHVw1lv4U/vLs=","ak.pv":"22","ak.dpoabenc":"","ak.tf":i};if(""!==t)o["ak.ruds"]=t;var r={i:!1,av:function(n){var t="http.initiator";if(n&&(!n[t]||"spa_hard"===n[t]))o["ak.feo"]=void 0!==e.aFeoApplied?1:0,BOOMR.addVar(o)},rv:function(){var e=["ak.bpcip","ak.cport","ak.cr","ak.csrc","ak.gh","ak.ipv","ak.m","ak.n","ak.ol","ak.proto","ak.quicv","ak.tlsv","ak.0rtt","ak.r","ak.acc","ak.t","ak.tf"];BOOMR.removeVar(e)}};BOOMR.plugins.AK={akVars:o,akDNSPreFetchDomain:a,init:function(){if(!r.i){var e=BOOMR.subscribe;e("before_beacon",r.av,null,null),e("onbeacon",r.rv,null,null),r.i=!0}return this},is_complete:function(){return!0}}}}()}(window);</script><link href="https://s.go-mpulse.net/boomerang/QKZWA-3BVYP-7W6XK-6HKWZ-EFFZ4" rel="preload" as="script"><iframe src="./Game Of Strengths _ Practice Problems_files/saved_resource(1).html" title="" role="presentation" loading="eager" style="width: 0px; height: 0px; border: 0px; display: none;"></iframe><style data-emotion="css"></style><style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 2px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 2px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: 1em}
.MathJax_MenuRadioCheck.RTL {right: 1em; left: auto}
.MathJax_MenuLabel {padding: 2px 2em 4px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #CCCCCC; margin: 4px 1px 0px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: Highlight; color: HighlightText}
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
#MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
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
.MJXp-munderover, .MJXp-munder {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > *, .MJXp-munder > * {display: table-row!important}
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
</style><style type="text/css" media="screen" class="monaco-colors">.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #1e1e1e; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #d4d4d4; }
.monaco-editor .margin { background-color: #1e1e1e; }
.monaco-editor .rangeHighlight { background-color: rgba(255, 255, 255, 0.04); }
.vs-whitespace { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .line-numbers { color: #858585; }
.monaco-editor .current-line ~ .line-numbers { color: #c6c6c6; }
.monaco-editor .view-overlays .current-line { border: 2px solid #282828; }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid #282828; }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #404040 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #707070 inset; }
.monaco-editor .minimap-slider, .monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(121, 121, 121, 0.2); }
.monaco-editor .minimap-slider:hover, .monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active, .monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(191, 191, 191, 0.2); }
.monaco-editor .minimap-shadow-visible { box-shadow: #000000 -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #5a5a5a inset; }
.monaco-editor .scroll-decoration { box-shadow: #000000 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #264f78; }
.monaco-editor .selected-text { background-color: #3a3d41; }
.monaco-editor .cursor { background-color: #aeafad; border-color: #aeafad; color: #515052; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23ea4646'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%234d9e4d'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23008000'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22rgba(238%2C%20238%2C%20238%2C%200.7)%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.showUnused .monaco-editor .squiggly-inline-unnecessary { opacity: 0.667; will-change: opacity; }
.monaco-diff-editor .diff-review-line-number { color: #858585; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #000000 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #000000; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #888888; }
.monaco-editor .monaco-editor-overlaymessage .anchor { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #063b49; }
.monaco-editor .codelens-decoration { color: #999999; }
.monaco-editor .codelens-decoration > a:hover { color: #4e94ce !important; }
.monaco-editor .findOptionsWidget { background-color: #252526; }
.monaco-editor .findOptionsWidget { box-shadow: 0 2px 8px #000000; }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #515c6a; }
.monaco-editor .findScope { background-color: rgba(58, 61, 65, 0.4); }
.monaco-editor .find-widget { background-color: #252526; }
.monaco-editor .find-widget { box-shadow: 0 2px 8px #000000; }
.monaco-editor .find-widget.no-results .matchesCount { color: #f48771; }
.monaco-editor .find-widget .monaco-sash { background-color: #454545; width: 3px !important; margin-left: -4px;}
.monaco-editor .find-widget .monaco-checkbox .checkbox:checked + .label { border: 1px solid #007acc; }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(255, 143, 0, 0.6); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #252526; }
.monaco-editor .reference-zone-widget .ref-tree { color: #bbbbbb; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #ffffff; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { color: #ffffff !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #001f33;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #001f33;}
.monaco-editor .goto-definition-link { color: #4e94ce !important; }
.monaco-editor .hoverHighlight { background-color: rgba(38, 79, 120, 0.25); }
.monaco-editor .monaco-editor-hover { background-color: #252526; }
.monaco-editor .monaco-editor-hover { border: 1px solid #454545; }
.monaco-editor .monaco-editor-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .monaco-editor-hover a { color: #3794ff; }
.monaco-editor .monaco-editor-hover code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #888888; }
.monaco-editor .detected-link-active { color: #4e94ce !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #454545; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #252526; }
.monaco-editor .parameter-hints-widget a { color: #3794ff; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .snippet-placeholder { background-color: rgba(124, 124, 124, 0.3); outline-color: transparent; }
.monaco-editor .finish-snippet-placeholder { background-color: transparent; outline-color: #525252; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #0097fb; }
.monaco-editor .suggest-widget { color: #d4d4d4; }
.monaco-editor .suggest-widget a { color: #3794ff; }
.monaco-editor .suggest-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.07); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.72); }
.monaco-editor .wordHighlightStrong { background-color: rgba(0, 73, 114, 0.72); }
.monaco-editor .accessibilityHelpWidget { background-color: #252526; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px #000000; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #454545; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #454545; }
.monaco-editor .tokens-inspect-widget { background-color: #252526; }

.mtk1 { color: #d4d4d4; }
.mtk2 { color: #1e1e1e; }
.mtk3 { color: #cc6666; }
.mtk4 { color: #9cdcfe; }
.mtk5 { color: #ce9178; }
.mtk6 { color: #b5cea8; }
.mtk7 { color: #608b4e; }
.mtk8 { color: #569cd6; }
.mtk9 { color: #dcdcdc; }
.mtk10 { color: #808080; }
.mtk11 { color: #f44747; }
.mtk12 { color: #c586c0; }
.mtk13 { color: #a79873; }
.mtk14 { color: #dd6a6f; }
.mtk15 { color: #5bb498; }
.mtk16 { color: #909090; }
.mtk17 { color: #778899; }
.mtk18 { color: #ff00ff; }
.mtk19 { color: #b46695; }
.mtk20 { color: #ff0000; }
.mtk21 { color: #4f76ac; }
.mtk22 { color: #3dc9b0; }
.mtk23 { color: #74b0df; }
.mtk24 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><style type="text/css" media="screen"></style></head>

    <body><div id="MathJax_Message" style="display: none;"></div>
        
            
            
<link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/notification_toast.8d9bf9c8e14b.css">
<div class="notification-toast-container notification-top-center regular">
    <div class="notification-errors">
        <p id="notification-auth-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>Ensure that you are logged in and have the required permissions to access the test.
        </p>
        <p id="notification-server-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>A server error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>An error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-custom-error" class="error-item hidden no-margin"></p>
        
    </div>
</div>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/notification-toast.4ef32e7f16a7.js.download" crossorigin="anonymous" defer=""></script>

        
        
        
        <!-- Google Tag Manager (noscript) -->
        <noscript>
            <iframe src="https://www.googletagmanager.com/ns.html?id=GTM-PBHB3B9"
            height="0" width="0" style="display:none;visibility:hidden"></iframe>
        </noscript>
        <!-- End Google Tag Manager (noscript) -->
        
        

        <!-- Placeholder for any alert message on the site -->
        
        <div id="alert-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            
        <div class="alert-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div></div> <!-- end alert-message-holder -->

        <!-- Placeholder for any error message on the site -->
        
        <div id="error-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            <div class="error-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div>
        </div> <!-- end error-message-holder -->
        
        

        
    
    
        
        <header class="header community-header new-layout-header">
            <i class="fa fa-bars mobile-menu-btn"></i>
            <nav class="navigation">
                
                <a href="https://www.hackerearth.com/" class="logo logo-h-terminal  no-underline float-left track-header-logo"></a>
                

                
                <ul class="nav-bar no-padding float-left tablet-hide">
                    <!-- practice page -->
                    <li id="problems" class="nav-bar-menu selected"><a class="track-header-problems" href="https://www.hackerearth.com/practice/">PRACTICE</a></li>
                    <!-- challenges page -->
                    <li id="challenges" class="nav-bar-menu "><a class="track-header-challenges" href="https://www.hackerearth.com/challenges/">COMPETE</a></li>
                    <!--Jobs-->
                    <li id="jobs" class="nav-bar-menu "><a class="track-header-jobs" href="https://www.hackerearth.com/jobs/">JOBS</a></li>
                    <!--Leaderboard page-->
                    <li id="leaderboard" class="nav-bar-menu "><a class="track-header-leaderboard" href="https://www.hackerearth.com/leaderboard/contests/rated/">LEADERBOARD
                    </a></li>
                </ul>
                <ul class="nav-bar right-nav-bar no-padding float-right tablet-hide">
                    
                    
                    <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/search.e1ef7070302d.css">
                    <li id="searchbar">
                        <div id="search-icon-container" class="float-right">
                            <i class="fa fa-search"></i>
                        </div>
                        <input id="searchbar-input" class="float-left" type="text" value="" name="q" autocomplete="off" spellcheck="false" placeholder="Search developers, problems, etc" ajax1="/search/AJAX/search/" ajax2="/search/search-results/">
                        <div id="search-dropdown" style="display: none;"></div>
                    </li>
                    
                    

                    
                    <li id="header-notif-icon" class="">
<a class="track-header-notifs tool-tip notification-icon tablet-hide" title="Notifications">
    <span id="notif-icon" expand="notifications-box" class="nav-bar-menu nav-menu pagelet-hover" ajax="/notifications/pagelets/new-notifications/" target="notifications-container">
        <i class="fa fa-bell"></i>
        
    </span>
</a>
<a class="track-header-notifs tool-tip notification-icon tablet-show" title="Notifications" href="https://www.hackerearth.com/notifications/">
    <span id="notif-icon-mob" class="nav-bar-menu">Notifications
</span></a>

</li>
                    

                    
                        
                        <li id="user-name" class="nav-bar-menu tablet-hide"><a class="track-header-profile-box" href="https://www.hackerearth.com/@Chandansoni2021"><img src="./Game Of Strengths _ Practice Problems_files/90852214" alt="Chandansoni2021" width="30" height="30" onerror="if(typeof handle_avatar_error==&#39;function&#39;){handle_avatar_error(this);}"></a></li>
                        
                    

                    
                    <li id="hacker-dd-icon" expand="hacker-box" class="nav-bar-menu nav-menu"><a><div class="caret-icon"><i class="fa fa-caret-down"></i></div></a></li>
                    

                    

                    <div class="clear"></div>
                </ul> <!-- nav-bar -->
                <div class="clear"></div>
                
            </nav> <!-- navigation -->

            <i class="fa fa-filter challenge-filter-btn hidden"></i>

        </header> <!-- header -->
        
    
     <style>
  #gdpr-modal {
    position: absolute;
    bottom: 0;
  }
</style>
<div id="gdpr-modal" class="modal-window smaller-modal hidden">
  

<style>
  #gdpr-modal-content {
    font-family: 'Open Sans', sans-serif;
  }

  #gdpr-modal-content .modal-header {
    padding: 50px 55px 35px 55px;
    font-size: 24px;
    font-weight: 400;
  }

  #gdpr-modal-content .modal-footer {
    padding: 25px 55px 90px;
  }

  #gdpr-modal-content .modal-content {
    padding: 0 55px 5px;
    font-size: 16px;
    line-height: 22px;
  }

  #gdpr-modal-content .modal-footer .checkbox-row {
    font-size: 16px;
    display: inline-flex;
  }

  #gdpr-modal-content a {
    color: #0099ff;
  }
  
  #gdpr-modal-content .button.disabled {
    background: #f5f6f6 !important;
  }
</style>

<div id="gdpr-modal-content">
  
<div class="modal-header">HackerEarth’s Privacy Policy and Terms of Service</div>
  <div class="modal-content">
      We care about your data privacy. HackerEarth uses the information that you provide to contact you about relevant content, products, and services. <br> <br>

      Our <a href="https://www.hackerearth.com/privacy/" target="_blank">Privacy Policy</a> and <a href="https://www.hackerearth.com/terms-of-service/" target="_blank">Terms of Service</a> will help you understand that you are in control of your data at HackerEarth.
  </div>
  <div class="modal-footer">
    <div class="margin-bottom-15 regular checkbox-row">
      <input type="checkbox" name="gdpr-tnc">
      I have read and I agree.
    </div>
    <div class="">
      <input type="submit" name="submit" value="Proceed" class="button btn-blue fontawesome btn-largest disabled large" id="gdpr-submit">
    </div>
  </div>
</div>

</div>


    

    
    
    

    

    <div id="comment-share-modal" class="modal-window small-modal">
        <div class="modal-header">
            Comment permalink
        </div>
        <div class="modal-content">
            <div class="comment-share-wrapper align-center">
                <textarea class="comment-share-text" type="textbox" rows="4" readonly="readonly" onclick="this.select();"></textarea>
            </div>
        </div>
    </div>

    
        
            



    <div id="badge-win-modal-root"><div class="badge-win-modal-wrapper"></div></div>

    <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/vendors.css">
    <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/badges.921361c6f0b9.css">
    <link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/nuskha-vendors.eae6f6be9be8.css">

    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/vendors.7d38460872fa.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/badges.1a8a8b4f39d7.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/nuskha-vendors.5a2b1a043d64.js.download" crossorigin="anonymous"></script>

    <script>
        function loadBadgeWinModal() {
            const additionalData = {
                userId: "8007132",
                username: "Chandansoni2021",
            };
            if (window.renderBadgeWinModal) {
                window.renderBadgeWinModal("badge-win-modal-root", additionalData);
            } else {
                typeof addAlert !== "undefined" && addAlert("An error has occurred. Refresh the page or try after sometime.");
            }
        }

        window.addEventListener("load", loadBadgeWinModal);
    </script>


        
    

    
    

    <!-- This is the center page which has a fixed width of 1100px -->
    
<script type="text/javascript" async="" src="./Game Of Strengths _ Practice Problems_files/MathJax.js.download"></script>


<script type="text/x-mathjax-config;executed=true">
    var options = {
      messageStyle: "none",
      jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
      tex2jax: {
        inlineMath: [['$$','$$'], ['\\(', '\\)']],
        displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
        preview: "none"
      },
      SVG: {
        useGlobalCache: false
      }
    };

    // modify the options only in case of assessments, since for proxima-nova mathjax renders very small
    // text in chrome
    if (window.isProximaNova) {
      options = {
        messageStyle: "none",
        jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
        tex2jax: {
          inlineMath: [['$$','$$'], ['\\(', '\\)']],
          displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
          preview: "none"
        },
        SVG: {
          useGlobalCache: false,
          scale: MathJax.Hub.Browser.isChrome ? 175 : 100,
          minScaleAdjust: 100
        },
        "HTML-CSS": {
          minScaleAdjust: 100
        },
        "CommonHTML": {
          minScaleAdjust: 100
        }
      }
    }

    MathJax.Hub.Config(options);
</script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/mathjax.3489d4a1e549.js.download" crossorigin="anonymous"></script>
<script type="text/javascript">
    window.addEventListener("load", function() {
        MathJax.Hub.Queue(["Typeset", MathJax.Hub]);
    });
</script>
<div class="layout-container">
    <div class="gray-wide-container">
        <div id="practice-problem-app-root" class="padding-bottom-20"><div class="practice-problem-container"><div class="problem-header"><div class="breadcrumb dark small no-margin"><a class="no-underline" href="https://www.hackerearth.com/practice">All Tracks</a><span class="icon">&gt;</span><a class="no-underline" href="https://www.hackerearth.com/practice/algorithms/">Algorithms</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/algorithms/sorting/">Sorting</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/">Merge Sort</a><span class="icon">&gt;</span> <span class="color-gray">Problem</span></div><div class="title-panel"><div class="title">Game Of Strengths</div><span class="bookmark-icon" role="presentation"><div class="he-tooltip inline-block he-tooltip-bottom" aria-label="Bookmark"><i class="fa fa-bookmark-o"></i></div></span></div><div class="problem-meta"><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Attempted by"><div class="icon ui-user-check"></div><div class="label">16775</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Success Rate"><div class="icon ui-target"></div><div class="label">50%</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Points"><div class="icon ui-task-s"></div><div class="label">20</div></div><div class="item"><div class="ratings-container"><div class="ratings"><div class="react-stars-wrapper-06722390887861214" style="display: flex;"><div aria-label="add rating by typing an integer from 0 to 5 or pressing arrow keys" class="star-icon react-stars" style="overflow: hidden; position: relative;"><style>
    .react-stars-06722390887861214:before {
      position: absolute;
      overflow: hidden;
      display: block;
      z-index: 1;
      top: 0; left: 0;
      width: 50%;
      content: attr(data-forhalf);
      color: #ffd700;
  }</style><span class="" data-index="0" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="1" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="2" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="3" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="react-stars-06722390887861214" data-index="4" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: gray; font-size: 18px;">★</span><p role="status" style="position: absolute; left: -200rem;">4.5</p></div></div></div><div class="votes">22 votes</div></div></div><div class="item"><div class="icon ui-tag"></div><div class="label">Approved, Easy, Math, Open, Sorting</div></div><div class="share-container"><div class="item share-item"><div class="icon ui-share"></div><div class="label">Share</div></div></div></div></div><div class="problem-tabs"><div class="tab active" role="presentation">Details</div><a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/submissions/"><div class="tab" role="presentation">Submissions</div></a><a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/discussion/"><div class="tab" role="presentation">Discussion</div></a><a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/similar_problems/"><div class="tab" role="presentation">Similar Problems</div></a><a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/editorial/"><div class="tab" role="presentation">Editorial</div></a></div><div><div class="split-view"><div class="split-pane css-5t7w8y-SplitPane"><div class="pane-left" style="width: 527px;"><div class="problem-details"><div class=""><div class="title">Problem</div><div class="description"><p>Andrew is very fond of Maths.He has <strong>N</strong> boxes with him,in each box there is some value which represents the <strong>Strength of the Box</strong>.The <strong>ith</strong> box has strength <strong>A[i]</strong>.
He wants to calculate the <strong>Overall Power</strong> of the all <strong>N</strong> Boxes.</p>
<p><strong>Overall Power</strong> here means Sum of Absolute Difference of the strengths of the boxes(between each pair of boxes) multiplied by the Maximum strength among N boxes.
Since the Overall Power could be a very large number,output the number modulus 10^9+7(1000000007).</p>
<p><strong>Input</strong></p>
<p>First line of the input contains the number of test cases <strong>T</strong>.  It is followed by <strong>T</strong> test cases.
Each test case has 2 lines. First line contains the number of boxes <strong>N</strong>. It is followed by a line containing <strong>N</strong> elements where <strong>ith</strong> element is the strength of Andrew's <strong>ith</strong> box.</p>
<p><strong>Output</strong></p>
<p>For each test case, output a single number, which is the <strong>Overall Power</strong> for that testcase.</p>
<p><strong>Constraints</strong></p>
<p>1&lt;=<strong>T</strong>&lt;= 10</p>
<p>2&lt;=<strong>N</strong>&lt;=10^5</p>
<p>0&lt;=<strong>A[i]</strong>&lt;=10^9</p></div></div><div class="less-margin-2 input-output-container"><div class="input-output right-border"><div class="form-label"><div class="weight-600 less-margin-right light float-left small">Sample Input</div><div class="input-output-opt float-right"><a href="https://he-s3.s3.amazonaws.com/media/hackathon/anonymous-event/problems/game-of-strengths/input.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA6I2ISGOYH7WWS3G5%2F20220806%2Fap-southeast-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20220806T170909Z&amp;X-Amz-Expires=3600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=5350f320d62e668901f16bd2de38184f3cdd3ff5e6995ddbb6f688fee99691cd" class="track-problem-sample-input tool-tip" title="Download" rel="noopener noreferrer" target="_blank"><i class="fa fa-link"></i></a></div><div class="clear"></div></div><div class="dark"><pre class="word-spacing-0">2
2
1 2
5
4 5 3 1 2</pre></div></div><div class="input-output"><div class="form-label"><div class="weight-600 float-left less-margin-right light small">Sample Output</div><div class="input-output-opt float-right"><a href="https://he-s3.s3.amazonaws.com/media/hackathon/anonymous-event/problems/game-of-strengths/Output.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA6I2ISGOYH7WWS3G5%2F20220806%2Fap-southeast-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20220806T170909Z&amp;X-Amz-Expires=3600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=54978801bfd5d8c42a3c7e199affd301fc1af07b2634e63c2d161e42e20266ac" class="track-problem-sample-output tool-tip" title="Download" rel="noopener noreferrer" target="_blank"><i class="fa fa-link"></i></a></div><div class="clear"></div></div><div class="dark"><pre class="word-spacing-0">2
100</pre></div></div><div class="clear"></div></div><div class="less-margin-2 light small problem-solution-limits"><div class="less-margin">Time Limit: 3</div><div class="less-margin">Memory Limit: 256</div><div class="less-margin">Source Limit: </div></div><div class="explanation"><div class="title">Explanation</div><div class="description"><p><em>For 1st test case sum of absolute difference between strength  is 1.So Overall Power would be 2.</em></p>
<p><em>For 2nd test case sum of absolute difference between each pair of boxes is 20.So Overall Power is 100.</em></p></div></div><div class="contributors-panel"><div class="title">Contributers: </div><a class="user-profile" href="https://www.hackerearth.com/@aniruddha.manit"><div class="avatar"><img src="./Game Of Strengths _ Practice Problems_files/photo.jpg" alt="avatar"></div><div class="description name">Aniruddha Sharma</div></a><a class="user-profile" href="https://www.hackerearth.com/@deepankarak"><div class="avatar"><img src="./Game Of Strengths _ Practice Problems_files/61329581329079262844.png" alt="avtar"></div><div class="description name">Deepankar Anil</div></a></div></div></div><div class="resizer"><img src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0b3I6IEFkb2JlIElsbHVzdHJhdG9yIDI1LjEuMCwgU1ZHIEV4cG9ydCBQbHVnLUluIC4gU1ZHIFZlcnNpb246IDYuMDAgQnVpbGQgMCkgIC0tPgo8c3ZnIHZlcnNpb249IjEuMSIgaWQ9IkxheWVyXzEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHg9IjBweCIgeT0iMHB4IgoJIHZpZXdCb3g9IjAgMCAyOSAyOSIgc3R5bGU9ImVuYWJsZS1iYWNrZ3JvdW5kOm5ldyAwIDAgMjkgMjk7IiB4bWw6c3BhY2U9InByZXNlcnZlIj4KPHN0eWxlIHR5cGU9InRleHQvY3NzIj4KCS5zdDB7Y2xpcC1wYXRoOnVybCgjU1ZHSURfMl8pO30KCS5zdDF7Y2xpcC1wYXRoOnVybCgjU1ZHSURfNF8pO30KCS5zdDJ7ZmlsbDojRkZGRkZGO30KCS5zdDN7ZmlsbDojRDhEREU2O30KCS5zdDR7ZmlsbDojOTk5OTk5O30KPC9zdHlsZT4KPGc+Cgk8ZGVmcz4KCQk8Y2lyY2xlIGlkPSJTVkdJRF8xXyIgY3g9IjE0LjUiIGN5PSIxNC41IiByPSIxNCIvPgoJPC9kZWZzPgoJPGNsaXBQYXRoIGlkPSJTVkdJRF8yXyI+CgkJPHVzZSB4bGluazpocmVmPSIjU1ZHSURfMV8iICBzdHlsZT0ib3ZlcmZsb3c6dmlzaWJsZTsiLz4KCTwvY2xpcFBhdGg+Cgk8ZyBjbGFzcz0ic3QwIj4KCQk8ZGVmcz4KCQkJPHJlY3QgaWQ9IlNWR0lEXzNfIiB4PSItNTU1LjUiIHk9Ii00NjIuNSIgd2lkdGg9IjE0NDAiIGhlaWdodD0iNzkyIi8+CgkJPC9kZWZzPgoJCTxjbGlwUGF0aCBpZD0iU1ZHSURfNF8iPgoJCQk8dXNlIHhsaW5rOmhyZWY9IiNTVkdJRF8zXyIgIHN0eWxlPSJvdmVyZmxvdzp2aXNpYmxlOyIvPgoJCTwvY2xpcFBhdGg+CgkJPGcgY2xhc3M9InN0MSI+CgkJCTxyZWN0IHg9Ii00LjUiIHk9Ii00LjUiIGNsYXNzPSJzdDIiIHdpZHRoPSIzOCIgaGVpZ2h0PSIzOCIvPgoJCTwvZz4KCTwvZz4KPC9nPgo8Zz4KCTxnPgoJCTxwYXRoIGNsYXNzPSJzdDMiIGQ9Ik0xNC41LDI5QzYuNSwyOSwwLDIyLjUsMCwxNC41UzYuNSwwLDE0LjUsMFMyOSw2LjUsMjksMTQuNVMyMi41LDI5LDE0LjUsMjl6IE0xNC41LDFDNy4xLDEsMSw3LjEsMSwxNC41CgkJCVM3LjEsMjgsMTQuNSwyOFMyOCwyMS45LDI4LDE0LjVTMjEuOSwxLDE0LjUsMXoiLz4KCTwvZz4KCTxnPgoJCTxwYXRoIGNsYXNzPSJzdDQiIGQ9Ik0xMC4zLDE1LjlsLTAuOCwwLjhsLTEuOC0xLjhjLTAuMS0wLjEtMC4yLTAuMi0wLjItMC40czAuMS0wLjMsMC4yLTAuNGwxLjgtMS44bDAuOCwwLjhsLTAuOCwwLjhoMi4xdjEuMgoJCQlIOS41TDEwLjMsMTUuOXogTTEyLjcsMjEuNWgxLjJ2LTE0aC0xLjJWMjEuNXogTTE1LDIxLjVoMS4xdi0xNEgxNVYyMS41eiBNMTguNywxMy4xbDAuOC0wLjhsMS44LDEuOGMwLjMsMC4zLDAuMywwLjUsMCwwLjgKCQkJbC0xLjgsMS44bC0wLjgtMC44bDAuOC0wLjhoLTIuMXYtMS4yaDIuMUwxOC43LDEzLjF6Ii8+Cgk8L2c+CjwvZz4KPC9zdmc+Cg=="></div><div class="pane-right" style="width: 647px;"><div class="editor-split-pane"><div class="sub-editor new-submission-container-8d9646ec9da1cc6226f906eb36c7e583"><div id="code-editor-8d9646ec9da1cc6226f906eb36c7e583" class="code-editor"><div class="editor-header"><span role="button" class="file-upload-text light regular">Enter your code or <a> <i classname="fa fa-upload"></i> Upload your code</a> as file.</span><div class="hidden"><input type="file" id="codeFile"></div><div class="hidden"><div class="react-modal-overlay"><div class="react-modal-container small-modal"><a class="modal-close no-underline" title="Close" role="presentation"></a><div class="modal-header"><h4 class="dark large less-margin">Select Language</h4></div><div class="modal-content"><div class="light regular less-margin">Just one more thing to do</div><select class=" float-left nice-select"><option value="BASH">Bash (GNU bash v5.0.17)</option><option value="C">C (gcc 10.3)</option><option value="CPP">C++ (g++ 10.3.0)</option><option value="CPP14">C++14 (g++ 10.3.0)</option><option value="CPP17">C++17 (g++ 10.3.0)</option><option value="CLOJURE">Clojure (clojure 1.10.1)</option><option value="CSHARP">C# (mcs 6.12)</option><option value="D">D (dmd 2.097.0)</option><option value="ERLANG">Erlang (erts 12.0.2)</option><option value="FSHARP">F# (fsharp 5.0)</option><option value="GO">Go (go 1.16.6)</option><option value="GROOVY">Groovy (groovy 2.4.21)</option><option value="HASKELL">Haskell (ghc 9.0.1)</option><option value="JAVA">Java (openjdk 1.7.0_95)</option><option value="JAVA8">Java 8 (openjdk 1.8.0_241)</option><option value="JAVA14">Java 14 (oracle 14)</option><option value="JAVASCRIPT">JavaScript (Rhino 1.7)</option><option value="JAVASCRIPT_NODE">JavaScript (Node.js v16.4)</option><option value="JULIA">Julia (julia 1.6.2)</option><option value="KOTLIN">Kotlin (1.5.21)</option><option value="LISP">Lisp (csc 4.12.0)</option><option value="LISP_SBCL">Lisp (sbcl 2.1.6)</option><option value="LUA">Lua (lua 5.4.3)</option><option value="OBJECTIVEC">Objective-C (clang 12.0.1)</option><option value="OCAML">OCaml (ocaml 4.12.0)</option><option value="OCTAVE">Octave (gnu octave 5.2)</option><option value="PASCAL">Pascal (fpc 3.2.2)</option><option value="PERL">Perl (perl 5.30.0)</option><option value="PHP">PHP (php 7.4.3)</option><option value="PYTHON">Python (python 2.7.18)</option><option value="PYTHON3">Python 3 (python 3.9.5)</option><option value="PYTHON3_8">Python 3.8 (python 3.8.2)</option><option value="R">R (RScript 4.1.0)</option><option value="RACKET">Racket (racket 8.1)</option><option value="RUBY">Ruby (ruby 3.0.1)</option><option value="RUST">Rust (rustc 1.53.0)</option><option value="SCALA">Scala (scalac 2.12.14)</option><option value="SWIFT_4_1">Swift (swift 4.1)</option><option value="SWIFT">Swift (swift 5.4.2)</option><option value="TYPESCRIPT">TypeScript (Version 4.3.2) (Node)</option><option value="VB">Visual Basic (mono 6.12, vbnc 0.0.0.5943)</option></select></div><div class="modal-footer"><a class="button btn-blue float-right close-modal-window edit-code">Edit</a><a role="presentation" class="float-right button btn-blue close-modal-window submit-code medium-margin-right">Submit</a><div class="clear"></div></div></div></div></div><div class="mobile-clear"></div><div class="editor-settings-button-container float-right"><div class="editor-settings-button" role="button"><i class="fa fa-cog"></i></div><div class="clear"></div><div class="setting-expand-box less-margin hidden"><div class="down-arrow"></div><ul class="no-margin"><div class="medium-margin-left editor-options"><p class="smaller weight-600 no-margin">Theme</p><a role="presentation" class="float-left width-100 small" data-value="L"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Light</span></a><a role="presentation" class="float-left width-100 small active" data-value="D"><i class="fa fa-dot-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Dark</span></a><a role="presentation" class="float-left width-100 small" data-value="HC"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">High Contrast</span></a></div><div class="clear"></div><div class="editor-divider"></div><div class="medium-margin-left editor-options"><p class="smaller weight-600 no-margin">Editor Mode</p><a role="presentation" class="float-left width-100 small active" data-value="VS"><i class="fa fa-dot-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Visual Studio</span></a><a role="presentation" class="float-left width-100 small" data-value="V"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Vim</span></a><a role="presentation" class="float-left width-100 small" data-value="E"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Emacs</span></a></div><div class="clear"></div><div class="editor-divider"></div><div class="medium-margin-left editor-options"><p class="smaller weight-600 no-margin">Font</p><a role="presentation" class="float-left width-100 small active" data-value="S"><i class="fa fa-dot-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Small</span></a><a role="presentation" class="float-left width-100 small" data-value="M"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Medium</span></a><a role="presentation" class="float-left width-100 small" data-value="L"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">Large</span></a></div><div class="clear"></div><div class="editor-divider"></div><div class="medium-margin-left editor-options"><p class="smaller weight-600 no-margin">Tab Space</p><a role="presentation" class="float-left width-100 small" data-value="2S"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">2 Spaces</span></a><a role="presentation" class="float-left width-100 small active" data-value="4S"><i class="fa fa-dot-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">4 Spaces</span></a><a role="presentation" class="float-left width-100 small" data-value="8S"><i class="fa fa-circle-o" aria-hidden="true"></i><span class="less-margin-left margin-left-5">8 Spaces</span></a></div><div class="clear"></div><div class="editor-divider"></div><a class="set-favorite-lang" role="presentation"><li>Set C++ as favorite</li></a><a class="set-favorite-code" role="presentation"><li>Set as default template</li></a></ul></div></div><a id="confirm-set-favorite-code" class="show-modal hidden" target="confirm-set-favorite-code-modal"></a><div id="confirm-set-favorite-code-modal" class="modal-window small-modal"><div class="modal-header">Update default template</div><div class="modal-content"><div class="dark regular">Your existing template will be over-written. Are you sure you want to update?</div></div><div class="modal-footer"><a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/#" class="link-3 float-left close-modal-window link-near-button">Nope take me back</a><a role="presentation" class="float-right button btn-blue close-modal-window set-favorite-code" id="set-favorite-code">Yes</a><div class="clear"></div></div></div><a role="presentation" class="go-full-screen editor-settings-button float-right less-margin-left margin-left-5" title="Go full screen"><i class="fa fa-expand"></i></a><select id="editor-lang-select-8d9646ec9da1cc6226f906eb36c7e583" class="editor-lang-select nice-select"><option value="BASH">Bash (GNU bash v5.0.17)</option><option value="C">C (gcc 10.3)</option><option value="CPP">C++ (g++ 10.3.0)</option><option value="CPP14">C++14 (g++ 10.3.0)</option><option value="CPP17">C++17 (g++ 10.3.0)</option><option value="CLOJURE">Clojure (clojure 1.10.1)</option><option value="CSHARP">C# (mcs 6.12)</option><option value="D">D (dmd 2.097.0)</option><option value="ERLANG">Erlang (erts 12.0.2)</option><option value="FSHARP">F# (fsharp 5.0)</option><option value="GO">Go (go 1.16.6)</option><option value="GROOVY">Groovy (groovy 2.4.21)</option><option value="HASKELL">Haskell (ghc 9.0.1)</option><option value="JAVA">Java (openjdk 1.7.0_95)</option><option value="JAVA8">Java 8 (openjdk 1.8.0_241)</option><option value="JAVA14">Java 14 (oracle 14)</option><option value="JAVASCRIPT">JavaScript (Rhino 1.7)</option><option value="JAVASCRIPT_NODE">JavaScript (Node.js v16.4)</option><option value="JULIA">Julia (julia 1.6.2)</option><option value="KOTLIN">Kotlin (1.5.21)</option><option value="LISP">Lisp (csc 4.12.0)</option><option value="LISP_SBCL">Lisp (sbcl 2.1.6)</option><option value="LUA">Lua (lua 5.4.3)</option><option value="OBJECTIVEC">Objective-C (clang 12.0.1)</option><option value="OCAML">OCaml (ocaml 4.12.0)</option><option value="OCTAVE">Octave (gnu octave 5.2)</option><option value="PASCAL">Pascal (fpc 3.2.2)</option><option value="PERL">Perl (perl 5.30.0)</option><option value="PHP">PHP (php 7.4.3)</option><option value="PYTHON">Python (python 2.7.18)</option><option value="PYTHON3">Python 3 (python 3.9.5)</option><option value="PYTHON3_8">Python 3.8 (python 3.8.2)</option><option value="R">R (RScript 4.1.0)</option><option value="RACKET">Racket (racket 8.1)</option><option value="RUBY">Ruby (ruby 3.0.1)</option><option value="RUST">Rust (rustc 1.53.0)</option><option value="SCALA">Scala (scalac 2.12.14)</option><option value="SWIFT_4_1">Swift (swift 4.1)</option><option value="SWIFT">Swift (swift 5.4.2)</option><option value="TYPESCRIPT">TypeScript (Version 4.3.2) (Node)</option><option value="VB">Visual Basic (mono 6.12, vbnc 0.0.0.5943)</option></select><a role="presentation" id="editor-save-trigger-8d9646ec9da1cc6226f906eb36c7e583" class="editor-save-trigger float-right regular undefined">Save</a></div><div class="editor-container-wrapper"><div id="editor-container-8d9646ec9da1cc6226f906eb36c7e583" class="editor-container" data-keybinding-context="1" data-mode-id="cpp" style="width: 100%; height: 60vh;"><div class="monaco-editor vs-dark" data-uri="inmemory://model/1" style="width: 647px; height: 350px;"><div data-mprt="3" class="overflow-guard" style="width: 647px; height: 350px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; will-change: transform; top: 0px; height: 608px; width: 64px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 608px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays" role="presentation" aria-hidden="true" style="position: absolute; width: 64px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 14px; line-height: 19px; letter-spacing: 0px; height: 608px;"><div style="position:absolute;top:247px;width:100%;height:19px;"><div class="cldr folding alwaysShowFoldIcons" style="left:38px;width:26px;"></div><div class="line-numbers" style="left:0px;width:38px;">14</div></div><div style="position:absolute;top:266px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">15</div></div><div style="position:absolute;top:285px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">16</div></div><div style="position:absolute;top:304px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">17</div></div><div style="position:absolute;top:323px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">18</div></div><div style="position:absolute;top:342px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">19</div></div><div style="position:absolute;top:228px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">13</div></div><div style="position:absolute;top:209px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">12</div></div><div style="position:absolute;top:190px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">11</div></div><div style="position:absolute;top:152px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">9</div></div><div style="position:absolute;top:171px;width:100%;height:19px;"><div class="cldr folding alwaysShowFoldIcons" style="left:38px;width:26px;"></div><div class="line-numbers" style="left:0px;width:38px;">10</div></div><div style="position:absolute;top:133px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">8</div></div><div style="position:absolute;top:114px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">7</div></div><div style="position:absolute;top:95px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">6</div></div><div style="position:absolute;top:76px;width:100%;height:19px;"><div class="cldr folding alwaysShowFoldIcons" style="left:38px;width:26px;"></div><div class="line-numbers" style="left:0px;width:38px;">5</div></div><div style="position:absolute;top:57px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">4</div></div><div style="position:absolute;top:38px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">3</div></div><div style="position:absolute;top:19px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">2</div></div><div style="position:absolute;top:0px;width:100%;height:19px;"><div class="line-numbers" style="left:0px;width:38px;">1</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs-dark" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 64px; width: 583px; height: 350px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; will-change: transform; top: 0px; left: 0px;"><div class="view-overlays" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 540px;"><div style="position:absolute;top:247px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:266px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div><div class="cigr" style="left:69.5625px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:285px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:304px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:323px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:342px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:228px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:209px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:190px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div><div class="cigra" style="left:34.78125px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:152px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:171px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:133px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:114px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:95px;width:100%;height:19px;"><div class="cigr" style="left:0px;height:19px;width:34.78125px"></div></div><div style="position:absolute;top:76px;width:100%;height:19px;"></div><div style="position:absolute;top:57px;width:100%;height:19px;"></div><div style="position:absolute;top:38px;width:100%;height:19px;"></div><div style="position:absolute;top:19px;width:100%;height:19px;"></div><div style="position:absolute;top:0px;width:100%;height:19px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 14px; line-height: 19px; letter-spacing: 0px; width: 540px; height: 608px;"><div style="top:247px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk9">{</span></span></div><div style="top:266px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">arr</span><span class="mtk9">[</span><span class="mtk1">i</span><span class="mtk9">];</span></span></div><div style="top:285px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk9">}</span></span></div><div style="top:304px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;sort</span><span class="mtk9">(</span><span class="mtk1">arr</span><span class="mtk9">,</span><span class="mtk1">arr</span><span class="mtk9">+</span><span class="mtk1">n</span><span class="mtk9">,</span><span class="mtk1">greater</span><span class="mtk9">&lt;</span><span class="mtk8">long</span><span class="mtk1">&nbsp;</span><span class="mtk8">long</span><span class="mtk9">&gt;());</span></span></div><div style="top:323px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">long</span><span class="mtk1">&nbsp;</span><span class="mtk8">long</span><span class="mtk1">&nbsp;ans</span><span class="mtk9">=</span><span class="mtk6">0</span><span class="mtk9">,</span><span class="mtk1">temp</span><span class="mtk9">;</span></span></div><div style="top:342px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">for</span><span class="mtk9">(</span><span class="mtk1">i</span><span class="mtk9">=</span><span class="mtk6">0</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">&lt;</span><span class="mtk1">n</span><span class="mtk9">-</span><span class="mtk6">1</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">++)</span></span></div><div style="top:228px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">for</span><span class="mtk9">(</span><span class="mtk1">i</span><span class="mtk9">=</span><span class="mtk6">0</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">&lt;</span><span class="mtk1">n</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">++)</span></span></div><div style="top:209px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">int</span><span class="mtk1">&nbsp;arr</span><span class="mtk9">[</span><span class="mtk1">n</span><span class="mtk9">];</span></span></div><div style="top:190px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">n</span><span class="mtk9">;</span></span></div><div style="top:152px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">while</span><span class="mtk9">(</span><span class="mtk1">t</span><span class="mtk9">--)</span></span></div><div style="top:171px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk9">{</span></span></div><div style="top:133px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">t</span><span class="mtk9">;</span></span></div><div style="top:114px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:95px;height:19px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">int</span><span class="mtk1">&nbsp;i</span><span class="mtk9">,</span><span class="mtk1">n</span><span class="mtk9">,</span><span class="mtk1">t</span><span class="mtk9">;</span></span></div><div style="top:76px;height:19px;" class="view-line"><span><span class="mtk8">int</span><span class="mtk1">&nbsp;main</span><span class="mtk9">()</span><span class="mtk1">&nbsp;</span><span class="mtk9">{</span></span></div><div style="top:57px;height:19px;" class="view-line"><span><span class="mtk8">using</span><span class="mtk1">&nbsp;</span><span class="mtk8">namespace</span><span class="mtk1">&nbsp;std</span><span class="mtk9">;</span></span></div><div style="top:38px;height:19px;" class="view-line"><span><span class="mtk8">#define</span><span class="mtk1">&nbsp;MOD&nbsp;</span><span class="mtk6">1000000007</span></span></div><div style="top:19px;height:19px;" class="view-line"><span><span class="mtk8">#include</span><span class="mtk1">&nbsp;</span><span class="mtk8">&lt;</span><span class="mtk5">algorithm</span><span class="mtk8">&gt;</span></span></div><div style="top:0px;height:19px;" class="view-line"><span><span class="mtk8">#include</span><span class="mtk1">&nbsp;</span><span class="mtk8">&lt;</span><span class="mtk5">iostream</span><span class="mtk8">&gt;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"><div class="lightbulb-glyph" title="Show Fixes (Ctrl+.)" widgetid="LightBulbWidget" style="position: absolute; visibility: hidden; max-width: 540px;"></div></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor " style="height: 19px; top: 456px; left: 77px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 14px; line-height: 19px; letter-spacing: 0px; display: none; visibility: hidden; width: 1.92px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 526px; height: 0px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform; width: 526px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="21" height="546" style="position: absolute; will-change: transform; top: 0px; right: 0px; width: 14px; height: 350px;"></canvas><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 14px; height: 350px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; will-change: transform; height: 201px;"></div></div></div><div role="presentation" aria-hidden="true" class="" style="width: 590px;"></div><textarea data-mprt="6" class="inputarea" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." role="textbox" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-size: 14px; line-height: 19px; top: 0px; left: 0px; width: 1px; height: 1px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; letter-spacing: 0px;"></textarea><div style="position: absolute; top: 0px; left: 0px; width: 1px; height: 1px;" class="monaco-editor-background textAreaCover line-numbers"></div><div data-mprt="4" class="overlayWidgets" style="width: 647px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div class="monaco-editor-hover hidden" aria-hidden="true" role="presentation" widgetid="editor.contrib.modesGlyphHoverWidget" style="position: absolute;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 590px; width: 43px; height: 350px;"><div class="minimap-shadow-hidden" style="height: 350px;"></div><canvas width="67" height="546" style="position: absolute; left: 0px; width: 42.88px; height: 349.44px;"></canvas><div class="minimap-slider" style="position: absolute; will-change: transform; width: 43px; top: 0px; height: 23px;"><div class="minimap-slider-horizontal" style="position: absolute; left: 0px; width: 43px; top: 0px; height: 23px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="height: 19px; box-shadow: rgb(0, 0, 0) 0px 2px 8px; position: absolute; visibility: hidden; max-width: 1229px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 14px; background-color: rgb(60, 60, 60); color: rgb(204, 204, 204); border-width: 0px; border-style: none;"></div><div class="monaco-editor-hover hidden" tabindex="0" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1229px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-editor-hover-content" style="overflow: hidden; font-size: 14px; line-height: 19px; max-height: 250px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow top-left-corner"></div></div></div></div><div class="context-view" aria-hidden="true" style="display: none;"></div></div></div><div id="editor-status-bar-container" class="editor-status-bar-container"><div id="editor-status-bar" class="editor-status-bar"></div><div class="statusbar-position">25:4 vscode</div></div></div></div><div class="sub-editor-footer"><div class="custom-input-container "><div class="custom-input-header"><div class="test-case-container"><div class="custom-input-icon margin-right-12 cursor-pointer"><div class="vertical-align-middle inline-block file-code-icon"><i class="icon ui-file-code" style="font-size: 18px;"></i></div></div><div class="custom-input-wrapper"><div id="custom-input-trigger-8d9646ec9da1cc6226f906eb36c7e583" class="provide-custom-input-trigger semi-bold no-select cursor-pointer"><span class="margin-right-8">Test against custom input</span><div class="vertical-align-middle inline-block dropdown"><i class="icon ui-drop-down" style="font-size: 12px;"></i></div></div></div></div><div class="sub-editor-buttons-container" private-url-hash="8d9646ec9da1cc6226f906eb36c7e583"><button type="button" class="btn btn-outline-blue btn-large margin-right-16 compile-test-button">Compile &amp; Test code</button><div class="he-tooltip inline-block he-tooltip-bottom he-tooltip-multiline" aria-label="Code can be submitted multiple times. Only your best submission will be considered."><button type="button" class="btn btn-blue btn-large">Submit code</button></div></div></div></div><div class="clear"></div><div class="clear"></div></div></div></div></div></div></div></div></div></div>
    </div>
</div>








<script type="text/javascript">
    var CodeEditorText = {
        fullScreen: "Full Screen",
        minimise: "Minimise",
        submit : "Submit code",
        submitTooltip : "Code can be submitted multiple times. Only your best submission will be considered.",
        compileSubmit : "Compile & Test code",
        compileSubmitForSQL : "Execute & Test",
        provideCustomInput : "Test against custom input",
        copyCustomInput: "Click to copy input to test against custom input",
        customInputPopulated : "Custom input populated",
        resetCustomInput : "Reset custom input",
        disabledCustomInputTooltip: "This test case is very large and you cannot edit it further. Reset the custom input to enable editing again.",
        largeCustomInput: "Large custom input are not editable",
        customInputPopulating : "Custom input getting populated",
        keybindingNormal : "Normal",
        keybindingVim : "Vim",
        keybindingEmacs : "Emacs",
        intellisense: "Auto-complete",
        writeOrUploadCode : "Enter your code or <a> <i className='fa fa-upload'></i> Upload your code</a> as file.",
        overWriteExistingTemplate : "Your existing template will be over-written. Are you sure you want to update?",
        updateDefaultTemplate : "Update default template",
        takeMeBack: "Nope take me back",
        yes: "Yes",
        selectLanguage: "Language",
        save : "Save",
        loading: "Loading",
        autoCompleteInfo: "Press Ctrl-space for autocomplete suggestions.",
        autoCompleteServerInfo: "Press Ctrl-space for autocomplete suggestions (accuracy dependent on connection stability).",
        goFullScreen: "Go full screen",
        exitFullScreen: "Exit full screen",
        goFullScreenTooltip: "Fullscreen mode for split view",
        verticalView: "Vertical view",
        splitView: "Split view",
        changeToVerticalView: "Change to vertical view",
        changeToSplitView: "Change to split view",
        lightTheme: "Light",
        darkTheme: "Dark",
        unsavedCodeWarning: "You may loose all the unsaved changes!",
        savedText: "Saved",
        errorInSavingText: "Error in saving",
        saveText: "Save",
        setFavoriteLangText: "Set {0} as favorite",
        setDefaultTemplateText: "Set as default template",
        selectLanguageText: "Select Language",
        themeHeader: "Theme",
        helpText: "Just one more thing to do",
        editorModeHeader: "Editor Mode",
        editorFontHeader: "Font",
        editorTabSpaceHeader: "Tab Space",
        editText: "Edit",
        submitText: "Submit",
        playText: "Play",
        defaultBot: "Default Bot",
        fetchFailure: "A server error has occurred. You can continue writing code or attempt any other question and try again after a while.",
        fetchTimedout: "We have received your submission and it is being evaluated.",
        multiEditModeIndicator: "Multiline editing is enabled. Press esc to turn it off.",
        favLangMsg: "has been set as your preferred language.",
        defaultCodeMsg: "code template has been updated.",
        visibility: "Visibility",
        notAvailableText: "-",
        visibleTestCase: "Visible test case",
        hiddenTestCase: "Hidden test case",
        errorHeader: "Error",
        errorContent: "There was an error while loading the editor. Click Reload to refresh the editor.",
        reload: "Reload",
        reconnectText: "Reconnect",
        resetCodeStub: "Reset to default code",
        resetCodeStubDisable: "No default code stub available",
        resetCodeStubModelHeader: "Are you sure you want to reset the code stubs to the default code?",
        resetCodeStubModelContent: "After you reset the code, all your progress will be lost.",
        resetCodeStubBtn: "Reset code stubs",
        cancelBtn: "Cancel",
        lspConnectionText: {
            SETTING_UP: "Setting up auto-complete...",
            OPEN: "Auto-complete ready!",
            CLOSED: "Auto-complete connection failed.",
        },
        submitResponseText: {
            header: {
                RESULT: "RESULT",
                EVALUATING_SOLUTION: "Evaluating solution...",
                SUBMISSION_ID : "Submission ID",
                REFER_JUDGE_ENVIRONMENT : "Refer judge environment",
                VIEW_MORE_TEXT : "View more"
            },
            table: {
                inputCol: {
                    DISPLAY_NAME: "Input",
                },
                outputCol: {
                    DISPLAY_NAME: "Output",
                },
                yourOutput: {
                    HEADING_TOOLTIP: "Your output for given input",
                },
                correctOutput: {
                    HEADING_TOOLTIP: "Correct output for given input",
                },
                log: {
                    HEADING_TOOLTIP: "Standard error stream for given input",
                    ERROR_TOOLTIP: "Error log for given testcase",
                },
                diff: {
                    HEADING_TOOLTIP: "Diff between your output and correct output",
                }
            },
            footer: {
                COMPILATION_LOG: "Compilation log",
            },
            common: {
                SCORE: "Score",
                TIME: "Time (sec)",
                MEMORY: "Memory (KiB)",
                LANGUAGE: "Language",
                INPUT: "Input",
                RESULT: "Result",
                YOUR_OUTPUT: "Your output",
                CORRECT_OUTPUT: "Correct output",
                LOG: "Log",
                DIFF: "Diff",
                AC_TITLE: "Solution accepted",
                PAC_TITLE: "Partially solved",
                SECONDS: "seconds",
                SEC_S: "sec(s)",
                KIB: "KiB",
            },
            resultMapping: {
                RE: "Runtime error",
                CE: "Compilation error",
                TLE: "Time limit exceeded",
                OLE: "Output limit exceeded",
                MLE: "Memory limit exceeded",
                WA: "Wrong answer",
                AC: "Accepted",
                PAC: "Partially accepted",
                IFME: "Input File Missing",
            },
            typeDescriptionMapping: {
                SIGSEGV: 
                    '<span class="bold">Segmentation fault:</span> This error has occurred because your program is trying to read or write outside the allocated memory or your program is trying to write a read-only memory. For example, this error is thrown when you are accessing a[-1] in a programming language that does not support negative indices for an array.<div>The SIGSEGV error can also occur when an out-of-scope array index causes a buffer overflow or an incorrectly-initialized pointer.</div>'
                ,
                SIGXFSZ: 
                    '<span class="bold">Output limit exceeded:</span> This error has occurred because your program is printing an excessive amount of data.'
                ,
                SIGFPE: 
                    '<span class="bold">Floating point error:</span> This error has occurred because you are dividing a number by 0 or trying to take the square root of a negative number.'
                ,
                SIGABRT: 
                    '<span class="bold">Signal abort error:</span> This error has occurred because the compiler aborted your program in while executing the same. It can also occur because of allocation of insufficient memory.'
                ,
                NZEC: 
                    '<span class="bold">Non-zero exit code:</span> This error has occurred because the program has exited after returning a different value from 0 to the shell.<div>In C or C++, the error represents (but not limited to) that you forgot to add <span class="bold">return 0</span> at the end of your program, your program throws an exception that has not been caught, or the program has allocated a large amount of memory in vector.</div><div>For languages such as Python, this error represents that your program has crashed or raised an uncaught exception.</div>'
                ,
                MLE: 
                    '<span class="bold">Memory limit exceeded:</span> This error has occurred because your program is trying to allocate some memory beyond the allowed limit. It can also occur if the program has a very large array or if a data structure in your program is too large.'
                ,
            }
        },
        backend: {
            CAN_SHOW_VISIBLE_TEST_CASES: false,
        },
        warningMessageAndFailure: {
            WARNING_MESSAGE: "Evaluating your code. Sorry it's taking longer than usual.",
            modal: {
                COMPILATION_HEADING: "Compilation failed",
                SUBMISSION_HEADING: "Submission failed",
                FAILURE_MESSAGE: "Code evaluation failed. This could be due to an internal error. Try again.",
                PRIMARY_BUTTON: "Retry",
                SECONDARY_BUTTON: "Cancel",
            }
        },
    };

    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }

</script>



<script type="text/javascript">
    // Following global variables are used to carry translated strings from HTML pages to 'bluebook' React templates
    var QUESTION_TEXT = "Question";
    var LOAD_QUESTION_TEXT = "Load Question";
    var FLOW_HELP_TEXT = "See how to attempt this question.";
    var MAX_MARKS_TEXT = "Max. score";
    var LOADING_ERR_MSG_TEXT = "Oops! There seems to be some issue. Please refresh the page.";
    var LOAD_CODE_EDITOR_TEXT = "Load Code Editor";
    var LOADING_TEXT = "Loading Code Editor...";
    var CODE_SUBMIT_HELP_TEXT = "You can submit code after loading editor";
    var NEW_SUBMISSION_TEXT = "New Submission";
    var ALL_SUBMISSIONS_TEXT = "All Submissions";
    var REFRESHING_TEXT = "Refreshing...";
    var REFRESH_ALL_SUBMISSIONS_TEXT = "Refresh All Submissions List";
    var EXPLAINATION_TEXT = "Explanation";
    var SAMPLE_INPUT_TEXT = "Sample Input";
    var SAMPLE_OUTPUT_TEXT = "Sample Output";
    var PLAINTEXT_LINK_TEXT = "Plaintext Link";
    var TIME_LIMIT_TEXT = "Time Limit";
    var MEMORY_LIMIT_TEXT = "Memory Limit";
    var SOURCE_LIMIT_TEXT = "Source Limit";
    var FILE_SIZE_LIMIT_TEXT = "File size limit is {fileSizeLimit} MB";
    var MARKING_SCHEME_TEXT = "Marking Scheme";
    var ALLOWED_LANGUAGES_TEXT = "Allowed Languages";
    var SUBMITTING_TEXT = "Submitting..";
    var ATTEMPTED_TEXT = "Attempted";
    var SUBMIT_TEXT = "Submit";
    var ALERT_TEXT_1 = "Please attach a file to your answer";
    var UPLOAD_FILE_TEXT = "Upload File";
    var UPLOAD_PREDICTION_FILE_TEXT = "Upload File";
    var UPLOAD_SOURCE_CODE_TEXT = "Upload Source Code";
    var UPLOAD_APK_TEXT = "Upload Android Application (.apk)";
    var ALERT_TEXT_2 = "Your time for this question is over. You cannot change your answer now.";
    var NOT_ATTEMPTED_TEXT = "Not Attempted";
    var ALERT_TEXT_3 = "Answer was reset successfully!";
    var ALERT_TEXT_4 = "You cannot reset the answer now!";
    var ALERT_TEXT_5 = "Your time for this question is over. You cannot reset your answer now.";
    var ALERT_TEXT_6 = "Your time for this question is over. You cannot change your answer now.";
    var RESET_ANSWER_TEXT = "Reset Answer";
    var ANSWER_SAVED_TEXT = "Answer Saved";
    var ANSWER_UNSAVED_TEXT = "Do not forget to submit your answer.";
    var NEXT_QUESTION_TEXT = "Next Question";
    var WRITE_ANSWER_TEXT = "Write your answer here";
    var WARNING_TEXT = "Select at least one option.";
    var CHANGE_FILE_TEXT = "Change File";
    var DISABLE_ERROR_MESSAGE = "Please upload APK file first!";
    var YOUR_ANSWER_TEXT = "Your Answer";
    var ADDITIONAL_COMMENTS = "Additional Comments";
    var YOUR_SOLUTION = "Your Solution";
    var PREVIEW_TEXT = "Preview";
    var WEBCAM_NOT_ACCESSIBLE_MESSAGE = "Could not access webcam. Enable webcam or use latest version of chrome/firefox browser.";
    var TIME_COMPLETED_MESSAGE = "The time has completed!";
    var LEAVE_CONFIRM_MESSAGE_1 = "Are you sure you want to leave?";
    var WEBCAM_ACCESS_INFO_1 = "This test requires webcam access. Give webcam permission.";
    var WEBCAM_ACCESS_INFO_2 = "You can not take test without giving access to webcam.";
    var TIME_UP_MESSAGE = "Time Up!";
    var TIME_OVER_MESSAGE_1 = "Your time for this question is over. You cannot change your answer now.";
    var PLEASE_WAIT_MESSAGE_1 = "Please wait, your answer is being submitted.";
    var ATTEMPTED_MESSAGE = "Attempted";
    var NOTE_TEXT = "Note";
    var NOT_ATTEMPTED_MESSAGE = "Not Attempted";
    var PROCTOR_ALERT_1 = "You are a superuser. I will let you cheat.";
    var PROCTOR_ALERT_2 = "You will be logged out if you leave this page!";
    var SAMPLE_IO_NOTE = "Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.";
    var PREDICTION_ERROR_TEXT = "Please upload your prediction file";
    var FILE_SIZE_ERROR_TEXT = "Please upload a file with size less than {fileSizeLimit} MB";
    var SOURCE_CODE_ERROR_TEXT = "Please upload your source code file";
    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }
</script>

<script type="text/javascript" charset="utf-8">
    var DOWNLOAD_DATASET_TEXT = "Download dataset";
    window.PRACTICE_PAGE = {
        CONSTANT: {
            USER_ID: '8007132',
            isAuthenticated: true,
            STATIC_URL: 'https://static-fastly.hackerearth.com/static/',
            RENDER_ISSUE_ALERT: "An error has occurred. Please refresh the page or try after sometime.", 
            DETAILS: "Details",
            SUBMISSIONS: "Submissions",
            DISCUSSIONS: "Discussion",
            SIMILAR_PROBLEMS: "Similar Problems",
            EDITORIAL: "Editorial",
            AUTHOR_SOLUTION: "Author's Solution",
            TESTER_SOLUTION: "Tester's Solution",
            ALL_TRACKS: "All Tracks",
            PROBLEM: "Problem",
            SHARE: "Share",
            PREDICTION_FILE_TITLE: "Upload prediction file",
            PREDICTION_FILE_DESC: "Please upload the prediction file in the format as stated in the problem.",
            ADD_FILES:  '<span class="highlight">Add files</span> or drop files here' ,
            UPLOADED_AND_SUBMIT: "Your file has been uploaded successfully and submit now.",
            SUBMIT_AND_EVALUATE: "Submit & Evaluate",
            SUCCESS_MESSAGE: "Your submission has been received. Check your submissions tab for more",
            ERROR_MESSAGE: "Something went wrong, try again.",
            SRC_FILE_TITLE: "Upload Source Files",
            SRC_FILE_DESC: "You need to submit a zip or tar archive consisting of a text file explaining your approach, details about feature engineering, tools you used and the relevant source files.",
            UPLOAD: "Upload",
            EXPLANATION: "Explanation",
            CONTRIBUTORS: "Contributers",
            VOTES: "votes",
            AVG_RATING: "Average Rating",
            YOU_RATED: "You Rated",
            RATE_HERE: "Rate Here",
            ATTEMPTED_BY: "Attempted by",
            SUCCESS_RATE: "Success Rate",
            POINTS: "Points",
            TAGS: "Tags",
            MY_SUBMISSION: "My Submissions",
            BEST_SUBMISSION: "Best Submissions",
            TD_RESULT: "Result",
            TD_RESULT_DETAILS: "Result Details",
            TD_TIME: "Time (Sec)",
            TD_MEMORY: "Memory (kb)",
            TD_LANG: "Language",
            TD_DETAIL: "Detail",
            TD_DATE: "Date",
            NO_SUBMISSION: "No code submissions done yet",
            SUBMISSION: "Submission",
            NO_BEST_SOLUTION: "There is no solution for this language",
            EDITORIAL_LOCK_INFO: "The Editorial is locked. In order to qualify for points, you need to solve the problem without unlocking the editorial.",
            EDITORIAL_LOCK_MSG: "Are you sure you want to unlock the tab?",
            EDITORIAL_UNLOCK_TEXT: "Unlock it"
        }
    }
</script>




<script type="text/javascript" charset="utf-8">
    window.DISCUSSION_FORUM = {
        CONFIG: JSON.parse("{\"avatarUrl\": \"https://he-s3.s3.amazonaws.com/media/avatars/Chandansoni2021/resized/120/90852214\", \"displayName\": \"Chandan Soni\", \"isAuthenticated\": true, \"profileId\": 8007132, \"profileUrl\": \"/@Chandansoni2021\", \"canPin\": false, \"identifier\": \"MTgzOjM1Mzg=\", \"parentTitle\": \"Game Of Strengths\", \"parentUrl\": \"/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/\", \"showBreadcrumb\": false, \"showBackbutton\": true}"),
        CONSTANT: {
           BACK_STR : "Back",
           EDIT_STR: "Edit",
           DELETE_STR: "Delete",
           EDIT_TITLE: "Edit this topic",
           DELETE_TITLE: "Delete this topic",
           CANCEL_STR: "Cancel",
           UPDATE_TOPIC: "Update topic",
           PUBLISH_TOPIC: "Publish topic",
           ADD_REPLY_STR: "Reply",
           LOGIN_TO_LIKE: "Login to like",
           LIKE_TOPIC: "Like this topic",
           UNLIKE_TOPIC: "Unlike this topic",
           LIKE_COMMENT: "Like this comment",
           UNLIKE_COMMENT: "Unlike this comment",
           DELETE_COMMENT: "Delete",
           DELETE_COMMENT_TITLE: "Delete this comment?",
           DELETE_COMMENT_MESSAGE: "All the replies within this comment will also get deleted",
           PIN: "Pin",
           UNPIN: "Unpin",
           PIN_STR: "Pin this topic to the discussion board",
           UNPIN_STR: "Unpin this topic from the discussion board",
           PINNED: "Pinned",
           TOPIC_UPDATE_ALERT: "The topic has been updated",
           TOPIC_DUPLICATE_ALERT: "The topic has been posted to the discussion forum",
           PINNED_ALERT: "Topic has been pinned",
           UNPINNED_ALERT: "Topic has been unpinned",
           PIN_ERROR: "There was some error while trying to pin topic",
           TOPIC_DELETE_ALERT: "Some error occured while trying to delete this topic. Please contact support if problem persists.",
           TOPIC_DELETE_SUCCESS: "The topic has been deleted",
           TOPIC_404: "Topic not found. The URL might be incorrect or the topic has been deleted",
           PAGE_REFRESH: "Some error occured while loading this page. Please try refreshing this page once",
           CREATE_NEW_TOPIC: "Create new Topic",
           THATS_ALL_FOLKS: "That's all folks!",
           UNACCEPTABLE_CONTENT: "This content is not acceptable.",
        }
    }
</script>


<link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/practice.91df1407e24a.css">
<link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/vendors.f1a8a791db04.css">

<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/vendors.dde76ec4017a.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/nuskha-vendors.2174639533c3.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/practice.fc8d4313587c.js.download" crossorigin="anonymous"></script>

<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/util.350eec762462.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/controller.590595221715.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/code_player.1487cb2419f4.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/loginmodal.57b6963e19ee.js.download" crossorigin="anonymous"></script>


<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>






<script type="text/javascript">
    var worker_url = "https://static-fastly.hackerearth.com/static/monaco-worker/monaco-worker.64ccee05b193.js"
    window.MonacoEnvironment = {
      getWorkerUrl: () => "data:text/javascript;charset=utf-8,"+encodeURIComponent(`
                  importScripts('${worker_url}')`)
    }
</script>

<script type="text/javascript">
    var initial_state = {
        pType: "algorithm",
        slug: "game-of-strengths-4",
        title: "Game Of Strengths",
        topicTree: {"track": {"url": "/practice/algorithms/", "title": "Algorithms"}, "topic": {"url": "/practice/algorithms/sorting/", "title": "Sorting"}, "sub_topic": {"url": "/practice/algorithms/sorting/merge-sort/", "title": "Merge Sort"}},
        problemData: {"id": 3538, "title": "Game Of Strengths", "description": "<p>Andrew is very fond of Maths.He has <strong>N</strong> boxes with him,in each box there is some value which represents the <strong>Strength of the Box</strong>.The <strong>ith</strong> box has strength <strong>A[i]</strong>.\nHe wants to calculate the <strong>Overall Power</strong> of the all <strong>N</strong> Boxes.</p>\n<p><strong>Overall Power</strong> here means Sum of Absolute Difference of the strengths of the boxes(between each pair of boxes) multiplied by the Maximum strength among N boxes.\nSince the Overall Power could be a very large number,output the number modulus 10^9+7(1000000007).</p>\n<p><strong>Input</strong></p>\n<p>First line of the input contains the number of test cases <strong>T</strong>.  It is followed by <strong>T</strong> test cases.\nEach test case has 2 lines. First line contains the number of boxes <strong>N</strong>. It is followed by a line containing <strong>N</strong> elements where <strong>ith</strong> element is the strength of Andrew's <strong>ith</strong> box.</p>\n<p><strong>Output</strong></p>\n<p>For each test case, output a single number, which is the <strong>Overall Power</strong> for that testcase.</p>\n<p><strong>Constraints</strong></p>\n<p>1&lt;=<strong>T</strong>&lt;= 10</p>\n<p>2&lt;=<strong>N</strong>&lt;=10^5</p>\n<p>0&lt;=<strong>A[i]</strong>&lt;=10^9</p>", "sample_explanation": "<p><em>For 1st test case sum of absolute difference between strength  is 1.So Overall Power would be 2.</em></p>\n<p><em>For 2nd test case sum of absolute difference between each pair of boxes is 20.So Overall Power is 100.</em></p>", "tags": "Approved,Easy,Math,Open,Sorting", "level": "E", "private_url_hash": "8d9646ec9da1cc6226f906eb36c7e583", "ratings": {"score": 4.5, "votes": 22}, "success_rate": 50, "points": 20, "attempted_by": 16775, "bookmarked": false, "time_limit": 3.0, "memory_limit": 256, "max_code_size": 1024, "editorial": {"state": "locked"}},
        activeTab: "description",
        baseURL: "/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/",
        isSourceList: false,
        shareURL: "https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/"
    }
    
    function loadPracticePage() {
        if (window.renderPracticePage) {
            window.renderPracticePage("practice-problem-app-root", initial_state);
        } else {
            typeof addAlert !== "undefined" && addAlert(PRACTICE_PAGE.CONSTANT.RENDER_ISSUE_ALERT);
        }
    }

    try {
        window.loadPracticePage();
    } catch (e) {
        window.addEventListener("load", loadPracticePage);
    }
</script>

<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>




    <!-- include modal window for login/signup -->
    

    <!-- override this block where we do not want the footer -->
    
    
        
                





<footer class="marketing-footer footer-large">
    <div class="fixed-container">
        <div class="primary-footer">
            <div class="standard-margin-bottom contact-wrapper">
                <div class="standard-margin-bottom">
                    <img src="./Game Of Strengths _ Practice Problems_files/he-footer-logo.svg">
                </div>
                <ul class="no-style">
                    <li>+1-650-461-4192</li>
                    <li>
                        <a href="mailto:contact@hackerearth.com" target="_blank">
                            contact@hackerearth.com
                        </a>
                    </li>
                </ul>
                <ul class="social-links-container no-style">
                    <li>
                        <a href="https://www.facebook.com/HackerEarth/" target="_blank">
                            <img src="./Game Of Strengths _ Practice Problems_files/facebook-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://twitter.com/HackerEarth?ref_src=twsrc%5Egoogle%7Ctwcamp%5Eserp%7Ctwgr%5Eauthor" target="_blank">
                            <img src="./Game Of Strengths _ Practice Problems_files/twitter-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://www.linkedin.com/company/hackerearth/?originalSubdomain=in" target="_blank">
                            <img src="./Game Of Strengths _ Practice Problems_files/linkedin-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://www.youtube.com/channel/UCYU6nvKyRYnE5kiG9JXkXpA" target="_blank">
                            <img src="./Game Of Strengths _ Practice Problems_files/youtube-logo.svg">
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">For Developers</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/challenges/hackathon/" target="_blank">
                            Hackathons
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/challenges" target="_blank">
                            Challenges
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/jobs/" target="_blank">
                            Jobs
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/" target="_blank">
                            Practice
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">For Businesses</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/community-hackathons/" target="_blank">
                            Hackathons
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/recruit/" target="_blank">
                            Assessments
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/recruit/facecode/" target="_blank">
                            FaceCode
                        </a>
                    </li>
                    <li>
                        <a href="http://www.hackerearth.com/recruit/learning-and-development/" target="_blank">
                            Learning and Development
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">Knowledge</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/practice/" target="_blank">
                            Practice
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/interviews/" target="_blank">
                            Interview Prep
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/codemonk/" target="_blank">
                            Codemonk
                        </a>
                    </li>
                    <li>
                        <a href="http://engineering.hackerearth.com/" target="_blank">
                            Engineering Blog
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">Company</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/team/" target="_blank">
                            About us
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/companies/hackerearth/jobs/" target="_blank">
                            Careers
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/press/" target="_blank">
                            Press
                        </a>
                    </li>
                    <li>
                        <a href="https://help.hackerearth.com/hc/en-us" target="_blank">
                            Support
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/reach-us/" target="_blank">
                            Contact
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/privacy/" target="_blank">
                            Privacy Policy
                        </a>
                    </li>
                </ul>
            </div>
        </div>
    </div>
    <ul class="secondary-footer no-style">
        <li>
            
            
                © 2022 HackerEarth All rights reserved
            
        </li>
        <li>
            <a href="https://www.hackerearth.com/terms-of-service/" target="_blank">
                Terms of Service
            </a>
        </li>
        <li>
            <a href="https://www.hackerearth.com/privacy/" target="_blank">
                Privacy Policy
            </a>
        </li>
    </ul>
</footer>

        
    
    

    <div class="expand-box" id="recruiter-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            
            
            <a href="https://www.hackerearth.com/logout/?next=/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/"><li>Logout</li></a>
        </ul>
    </div>

    
    <div class="expand-box" id="hacker-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            <a class="track-header-profile-box-profile" href="https://www.hackerearth.com/@Chandansoni2021">
                <li>
                    Profile (40%)
                    <div class="profile-complete-bar-head">
                        <span class="profile-complete-bar"></span>
                        <span class="profile-complete-bar-done" style="width: 40%; background-color: rgb(230, 126, 34);"></span>
                    </div>
                </li>
            </a>

            

            <a class="track-header-profile-box-bookmark" href="https://www.hackerearth.com/bookmark/problems/"><li>Bookmarks</li></a>
            <a class="track-header-profile-box-settings" href="https://www.hackerearth.com/users/profile-settings/"><li>Settings</li></a>
            <hr class="hr">

            
            <a class="track-header-profile-box-user-ratings tablet-hide" href="https://www.hackerearth.com/leaderboard/contests/rated/"><li>Ratings</li></a>
            
            <a class="track-header-profile-box-docs" href="https://www.hackerearth.com/docs/wiki/developers/"><li>Documentation</li></a>
            <a class="track-header-profile-box-docs" href="https://www.hackerearth.com/docs/wiki/developers/points-and-badges-on-hackerearth/"><li>Badges</li></a>

            <hr class="hr">

            

            

            
            

            
            <a class="track-header-profile-box-logout" href="https://www.hackerearth.com/logout/?next=/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/"><li>Logout</li></a>
        </ul>
    </div> <!-- hacker-box -->
    

    <!-- Include notifications box -->
    



<div class="expand-box" id="notifications-box" style="display: none;">
    <div class="down-arrow"></div>
    <div class="notifications-title-container">
        <div class="float-left weight-600">Notifications</div>
        <div class="float-right">
            <a href="https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/#" ajax="https://www.hackerearth.com/notifications/AJAX/mark-all-read/" class="notif-mark-all-read link smaller clicky-ajax">Mark All as Read</a>
        </div>
        <div class="clear"></div>
    </div> <!-- notifications-title-container -->

    <div class="notifications-container nice-scrollbar" id="notifications-container" tabindex="0" style="overflow: hidden; outline: none;">
    </div> <!-- notifications-container -->

    <div class="smaller caps weight-600 align-center less-margin-2 less-margin-2-bottom">
        <a class="link" href="https://www.hackerearth.com/notifications/">View All Notifications</a>
    </div>
<div id="ascrail2000" class="nicescroll-rails nicescroll-rails-vr" style="width: 7px; z-index: 10; background: rgb(238, 238, 238); cursor: default; position: absolute; top: 1px; left: -7px; height: 0px; opacity: 1; display: none;"><div class="nicescroll-cursors" style="position: relative; top: 0px; float: right; width: 7px; height: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div><div id="ascrail2000-hr" class="nicescroll-rails nicescroll-rails-hr" style="height: 7px; z-index: 10; background: rgb(238, 238, 238); top: -6px; left: 0px; position: absolute; opacity: 1; cursor: default; display: none;"><div class="nicescroll-cursors" style="position: absolute; top: 0px; height: 7px; width: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div></div> <!-- notifications-box -->


    <!-- Load notification icon with unread count -->
    <div id="header-notif-icon-trigger" class="load-pagelet hidden" target="header-notif-icon" ajax="/notifications/pagelets/header-notif-icon-count/" show-loader="false"></div>

    

    

    
    

        
        

        <!-- Store any json returned for bigpipe -->
        <div id="bigpipe-json" class="hidden">
            
        </div>

        <!-- Store any html returned for feedback popup -->
        <div id="user-feedback-popup" class="hidden"></div>

        
            <div id="common-notification">
            </div>
        

        
        

        
        <div id="external-link-modal" class="modal-window very-large-modal">
            <div class="modal-content large dark align-left">
                <div id="external-link-content-wrapper">
                    <pre></pre>
                </div>
            </div>
        </div>
        

        <!-- All the scripts go here -->
        <script>
            
            var CURRENT_PATH = "https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/";
            var HISTORY = '';
            var DEFAULT_REAL_NUMBER_PRECISION = 2;
            var DECIMAL_PRECISION_ERROR_TEXT = "Only {decimal_limit} decimal places allowed";
            var SOMETHING_WENT_WRONG_ERROR_TEXT = "Something went wrong. Please try again later.";

            // Make code constants available globally in JS
            var MAP_LANG_TO_NAME = {"BASH": "Bash", "BEFUNGE": "Befunge", "C": "C", "CLOJURE": "Clojure", "CPP11": "C++11", "CPP": "C++", "CPP14": "C++14", "CPP17": "C++17", "CSHARP": "C#", "CSS": "CSS", "D": "D", "ERLANG": "Erlang", "FSHARP": "F#", "GO": "Go", "GROOVY": "Groovy", "HASKELL": "Haskell", "HTML": "HTML", "JAVA": "Java", "JAVA8": "Java 8", "JAVA14": "Java 14", "JAVASCRIPT": "JavaScript(Rhino)", "JAVASCRIPT_NODE": "JavaScript(Node.js)", "JAVASCRIPT_UI": "JavaScript", "JULIA": "Julia", "LISP": "Lisp", "LISP_SBCL": "Lisp (SBCL)", "LUA": "Lua", "LOLCODE": "LOLCODE", "MSSQL": "MSSQL", "MYSQL": "MySQL", "OBJECTIVEC": "Objective-C", "OCAML": "OCaml", "OCTAVE": "Octave", "PASCAL": "Pascal", "PERL": "Perl", "PHP": "PHP", "POSTGRESQL": "PostgreSQL", "PYTHON3": "Python 3", "PYTHON3_8": "Python 3.8", "PYTHON": "Python", "R": "R(RScript)", "RACKET": "Racket", "RUBY": "Ruby", "RUST": "Rust", "SCALA": "Scala", "SCALA_2118": "Scala 2.11.8", "SWIFT_4_1": "Swift-4.1", "SWIFT": "Swift", "TEXTFILE": "Text", "Text": "Text", "TYPESCRIPT": "TypeScript", "vp": "N/A", "VB": "Visual Basic", "WHENEVER": "Whenever", "ORACLE_DB": "Oracle_Db", "KOTLIN": "Kotlin"};
            var MAP_NAME_TO_LANG = {"Bash": "BASH", "Befunge": "BEFUNGE", "C": "C", "Clojure": "CLOJURE", "C++11": "CPP11", "C++": "CPP", "C++14": "CPP14", "C++17": "CPP17", "C#": "CSHARP", "CSS": "CSS", "D": "D", "Erlang": "ERLANG", "F#": "FSHARP", "Go": "GO", "Groovy": "GROOVY", "Haskell": "HASKELL", "HTML": "HTML", "Java": "JAVA", "Java 8": "JAVA8", "Java 14": "JAVA14", "JavaScript(Rhino)": "JAVASCRIPT", "JavaScript(Node.js)": "JAVASCRIPT_NODE", "JavaScript": "JAVASCRIPT_UI", "Julia": "JULIA", "Lisp": "LISP", "Lisp (SBCL)": "LISP_SBCL", "Lua": "LUA", "LOLCODE": "LOLCODE", "MSSQL": "MSSQL", "MySQL": "MYSQL", "Objective-C": "OBJECTIVEC", "OCaml": "OCAML", "Octave": "OCTAVE", "Pascal": "PASCAL", "Perl": "PERL", "PHP": "PHP", "PostgreSQL": "POSTGRESQL", "Python 3": "PYTHON3", "Python 3.8": "PYTHON3_8", "Python": "PYTHON", "R(RScript)": "R", "Racket": "RACKET", "Ruby": "RUBY", "Rust": "RUST", "Scala": "SCALA", "Scala 2.11.8": "SCALA_2118", "Swift-4.1": "SWIFT_4_1", "Swift": "SWIFT", "Text": "Text", "TypeScript": "TYPESCRIPT", "N/A": "vp", "Visual Basic": "VB", "Whenever": "WHENEVER", "Oracle_Db": "ORACLE_DB", "Kotlin": "KOTLIN"};
        </script>

        

        <!-- alljs: static_media/js/jquery-1.7.min.patched.js static_media/js/jquery.color.js static_media/js/jquery.elastic.js static_media/js/ajaxSend.js  static_media/js/jquery.inview.js  static_media/js/tooltip/jquery.tipTip.modified.js  static_media/offline/offline.min.js  static_media/js/watermark.min.js  static_media/history.js?v=0.1/scripts/bundled/html4html5/jquery.history.js  static_media/js/jquery.nicescroll.js  static_media/simplemodal/simplemodal.js static_media/js/jquery.sticky.js static_media/js/pusher.min.js static_media/js/ifvisible.min.js static_media/feeds/feeds.js static_media/base/progress_bar.js -->
        


<script>
    UPLOADING_TEXT = "Uploading";
    UPLOADED_TEXT = "Uploaded";
    SAVING_TEXT = "Saving..";
    UPLOAD_SUCCESS_MESSAGE = "File saved successfully.";
    UPLOAD_ERROR_MESSAGE = "An error occured while saving, please try again in sometime.";
</script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/alljs.e5bc5432d816.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/base1.0.1.dccda20e81a0.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/bigpipe.c6f19f153efc.js.download" crossorigin="anonymous"></script>
        


<script type="text/javascript">
var CONFIRM_COMMENT_DELETE = "Are you sure, you want to delete comment?";
var COMMENT_NOT_DELETED = "Comment could not be deleted!";
var CONFORM_COMMENT_MARK_SPAM = "Are you sure, you want to mark this comment as spam?";
var COMMENT_NOT_MARKED_SPAM = "Comment could not be marked as spam!";
var ENTER_15_CHARS = "Enter at least 15 characters";
var JUST_X_MORE = "Just {count} more to go";
</script>
        <script>
            var MAP_MARKER_SIGNUP_IMAGE = 'https://static-fastly.hackerearth.com/static/metrics/map-marker.png';
            var MAP_MARKER_LOGIN_IMAGE = 'https://static-fastly.hackerearth.com/static/metrics/map-marker-login.png';
            var AJAX_URL = '';
        </script>
        
<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>


        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/history.9f9bce34e5c7.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/commentUtils.dadb11872038.js.download" crossorigin="anonymous"></script>


        
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/offline.min.7ce195ae7071.js.download" crossorigin="anonymous"></script>

        <script type="text/javascript" async="" src="./Game Of Strengths _ Practice Problems_files/MathJax.js.download"></script>


<script type="text/x-mathjax-config;executed=true">
    var options = {
      messageStyle: "none",
      jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
      tex2jax: {
        inlineMath: [['$$','$$'], ['\\(', '\\)']],
        displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
        preview: "none"
      },
      SVG: {
        useGlobalCache: false
      }
    };

    // modify the options only in case of assessments, since for proxima-nova mathjax renders very small
    // text in chrome
    if (window.isProximaNova) {
      options = {
        messageStyle: "none",
        jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
        tex2jax: {
          inlineMath: [['$$','$$'], ['\\(', '\\)']],
          displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
          preview: "none"
        },
        SVG: {
          useGlobalCache: false,
          scale: MathJax.Hub.Browser.isChrome ? 175 : 100,
          minScaleAdjust: 100
        },
        "HTML-CSS": {
          minScaleAdjust: 100
        },
        "CommonHTML": {
          minScaleAdjust: 100
        }
      }
    }

    MathJax.Hub.Config(options);
</script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/mathjax.3489d4a1e549.js.download" crossorigin="anonymous"></script>
<script type="text/javascript">
    window.addEventListener("load", function() {
        MathJax.Hub.Queue(["Typeset", MathJax.Hub]);
    });
</script>

        <script>
            Offline.options = {
                interceptRequests: false,
                requests: false,
            };
        </script>

        

        

<script>
    var profile_completeness_percentage = 40;
</script>


<script>

$(document).ready(function (){
    $('#header-notif-icon-trigger').click();

    

    
    

    

    // show kone ge widget if not visited
    

});
</script>

<script type="text/javascript">
$(document).ready(function() {
    
    var m_links = {};
    var m_elements = {
        '#modal-login-form input[type=submit]': 'Modal Email Login',
        '#modal-signup-form input[type=submit]': 'Modal Email Signup',
        '.modal-social-login .btn-facebook': 'Modal Facebook Login',
        '.modal-social-login .btn-google': 'Modal Google Login',
        '.modal-social-signup .btn-facebook': 'Modal Facebook Signup',
        '.modal-social-signup .btn-google': 'Modal Google Signup',
        '.top-banner .login-banner a': 'Signup after banner click',
    };
    
    for (var key in m_elements) {
        $(key).live('click', {'key': key }, function(e) {
            var key = e.data.key;
            mixpanel.track('Click', {'name': m_elements[key]});
        });
    }
    for (var key in m_links) {
        mixpanel.track_links(key, 'Click', {'name': m_links[key]});
    }
});
</script>




<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/search.1.0.f3e89277dbfc.js.download" crossorigin="anonymous" defer=""></script>

<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/gdpr-modal.e3306212a68a.js.download" crossorigin="anonymous"></script>



        <script>
            // Used in search
            var is_user_logged_in = true;
        </script>

        
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/detect_timezone.12f6ba68823f.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/mapped_tz.97a5c55af78d.js.download" crossorigin="anonymous"></script>
        <script>

            function setTimezoneCookie(detected_user_tz) {
                /* Sets the detected user timezone as a cookie in the browser.
                   If someone changes it or removes it, a sanity check is
                   performed and the cookie is reset.

                   This cookie is set for ready availability of user timezone
                   in the backend.
                */

                const USER_TIMEZONE_COOKIE = 'user_tz';
                // Try to get the existing user timezone cookie stored
                // in the browser.
                user_tz = readCookie(USER_TIMEZONE_COOKIE);

                // Flag to determine whether a new cookie has to be created.
                create_cookie = false;

                if(user_tz) {
                    if(user_tz !== detected_user_tz) {
                        // If someone has changed the cookie in some way, we
                        // set a new cookie.
                        eraseCookie(USER_TIMEZONE_COOKIE);
                        create_cookie = true;
                    }
                } else {
                    create_cookie = true;
                }

                // Create a new cookie if create_cookie flag is set.
                createCookie(USER_TIMEZONE_COOKIE, detected_user_tz, 1);

            }
            $(document).ready(function(){
                if (Intl && Intl.DateTimeFormat){
                    var timezone = Intl.DateTimeFormat().resolvedOptions().timeZone;
                    // Map timezone name to a name that is familiar to our backend
                    if (mapped_tz[timezone]) {
                        timezone = mapped_tz[timezone] 
                    }
                } else {
                    var timezone = jstz.determine_timezone();
                    timezone = timezone.name();
                }
                // Set as a cookie in browser for easy access in backend.
                setTimezoneCookie(timezone);

                // Set as a js variable for easy access across frontend.
                USER_TIMEZONE = timezone

                

                

                
                
                
                
                

                
                    var profile_timezone = "Asia/Kolkata";
                    if (timezone !== profile_timezone) {
                        $.ajax({
                            type: "POST",
                            url:"/users/AJAX/set-timezone/",
                            data: {
                            'timezone': timezone,
                            },
                        });
                    }
                

                
            });
        </script>
        

        
            

            
            
        

        <script type="text/javascript">
            
            $(document).ready(function(){
                //mixpanel delegate links custom method
                mixpanel.delegate_links = function (parent, selector, event_name, properties) {
                    properties = properties || {};
                    parent = parent || document.body;
                    parent = $(parent);
                    parent.on('click', selector, function (event) {
                        var new_tab = event.which === 2 || event.metaKey || event.target.target === '_blank' || this.target === '_blank';
                        properties.url = event.target.href || this.href;
                        function callback() {
                            if (new_tab) {
                                return;
                            }
                            window.location = properties.url;
                        }
                        if (!new_tab) {
                            event.preventDefault();
                            setTimeout(callback, 300);
                        }
                        mixpanel.track(event_name, properties, callback);
                    });
                };
            });
            
        </script>

         

        
        <!-- mixpanel analytics start -->
        <script type="text/javascript">(function(e,a){if(!a.__SV){var b=window;try{var c,l,i,j=b.location,g=j.hash;c=function(a,b){return(l=a.match(RegExp(b+"=([^&]*)")))?l[1]:null};g&&c(g,"state")&&(i=JSON.parse(decodeURIComponent(c(g,"state"))),"mpeditor"===i.action&&(b.sessionStorage.setItem("_mpcehash",g),history.replaceState(i.desiredHash||"",e.title,j.pathname+j.search)))}catch(m){}var k,h;window.mixpanel=a;a._i=[];a.init=function(b,c,f){function e(b,a){var c=a.split(".");2==c.length&&(b=b[c[0]],a=c[1]);b[a]=function(){b.push([a].concat(Array.prototype.slice.call(arguments,0)))}}var d=a;"undefined"!==typeof f?d=a[f]=[]:f="mixpanel";d.people=d.people||[];d.toString=function(b){var a="mixpanel";"mixpanel"!==f&&(a+="."+f);b||(a+=" (stub)");return a};d.people.toString=function(){return d.toString(1)+".people (stub)"};k="disable time_event track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config reset people.set people.set_once people.unset people.increment people.append people.union people.track_charge people.clear_charges people.delete_user".split(" ");for(h=0;h<k.length;h++)e(d,k[h]);a._i.push([b,c,f])};a.__SV=1.2;b=e.createElement("script");b.type="text/javascript";b.async=!0;b.src="undefined"!==typeof MIXPANEL_CUSTOM_LIB_URL?MIXPANEL_CUSTOM_LIB_URL:"file:"===e.location.protocol&&"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js".match(/^\/\//)?"https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js":"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js";c=e.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c)}})(document,window.mixpanel||[]);mixpanel.init("4c30b8635363027dfb780d5a61785112");
        </script>
        <!-- mixpanel analytics end -->
        <script type="text/javascript">
            
                
                    mixpanel.register({
                        "url_path": "/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/",
                        "username": "Chandansoni2021",
                        "email": "chandan0107soni@gmail.com",
                        "date_of_joining": "Aug 01, 2022 04:41 PM",
                        "user_bucket": "101"
                    });
                    
                
            
        </script>
        

        
        
        <div id="fb-root"></div>
        <script>
            <!-- facebook button -->
            (function(d, s, id) {
                var js, fjs = d.getElementsByTagName(s)[0];
                if (d.getElementById(id)) return;
                js = d.createElement(s); js.id = id;
                js.src = "//connect.facebook.net/en_US/all.js#xfbml=1";
                fjs.parentNode.insertBefore(js, fjs);
            }(document, 'script', 'facebook-jssdk'));

            <!-- twitter button -->
            !function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");

            <!-- google+ button -->
            (function() {
                var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
                po.src = 'https://apis.google.com/js/plusone.js';
                var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
            })();
        </script>
        
        

        
            

<link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/cookiebar.ffe531fab344.css">

<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/cookiebar.70181766db90.js.download" crossorigin="anonymous"></script>


        

        
            
        

        
            <!-- Hackerearth Zendesk Widget -->




<link rel="stylesheet" href="./Game Of Strengths _ Practice Problems_files/customer-support-widget.c878b5e2cd83.css">

<iframe src="javascript:false" title="" role="presentation" style="display: none;" src="./Game Of Strengths _ Practice Problems_files/saved_resource(2).html"></iframe><script>
    var COUNTRY_CODE = "IN";
    var TRIAL_DAYS_LEFT =  0 ;
    var INTERCOM_APP_ID = 'nofrzq7u';
    var IS_INTERCOM_FEATUTRE_ENABLE = "True";

    var isRecruiterDashboard = false;
    var horizontalOffset = "-500px";
    var zESettingsRecruiterDashboard = {
        webWidget: {
            launcher: {
                label: {
                    "en-US": "",
                    "*": "",
                }
            },
            offset: {
                horizontal: horizontalOffset, /* To hide actual launcher widget */
                vertical: "50px",
                mobile: {
                  horizontal: horizontalOffset,
                },
            },
            position: {
                horizontal: 'right',
                vertical: 'top'
            }
        }
    };

    var zESettingsDefault = {
        webWidget: {
            launcher: {
                label: {
                    "en-US": "",
                    "*": "",
                }
            },
            offset: {
                horizontal: horizontalOffset, /* To hide actual launcher widget */
            }
        }
    };
    if (isRecruiterDashboard) {
        window.zESettings = zESettingsRecruiterDashboard;
    } else {
        window.zESettings = zESettingsDefault;
    }
    /*<![CDATA[*/window.zEmbed||function(e,t){var n,o,d,i,s,a=[],r=document.createElement("iframe");window.zEmbed=function(){a.push(arguments)},window.zE=window.zE||window.zEmbed,r.src="javascript:false",r.title="",r.role="presentation",(r.frameElement||r).style.cssText="display: none",d=document.getElementsByTagName("script"),d=d[d.length-1],d.parentNode.insertBefore(r,d),i=r.contentWindow,s=i.document;try{o=s}catch(e){n=document.domain,r.src='javascript:var d=document.open();d.domain="'+n+'";void(0);',o=s}o.open()._l=function(){var e=this.createElement("script");n&&(this.domain=n),e.id="js-iframe-async",e.src="https://assets.zendesk.com/embeddable_framework/main.js",this.t=+new Date,this.zendeskHost="hackerearth.zendesk.com",this.zEQueue=a,this.body.appendChild(e)},o.write('<body onload="document._l();">'),o.close()}();
    /*]]>*/

    var ZENDESK_LOCALE = "en-US";
    var USER_EMAIL = "chandan0107soni@gmail.com";
    var USER_NAME = "Chandan";
    var ATTACHMENT_LABEL = "Attachments (Optional)";
    var DESCRIPTION_LABEL = "How can we help you, {name}?";

    
</script>
<script type="text/javascript" src="./Game Of Strengths _ Practice Problems_files/customer-support-widget.df6b5efa9ec6.js.download" crossorigin="anonymous" defer=""></script>


    <div class="customer-support-icon">
        <p>?</p>
    </div>


        
    

<div id="tiptip_holder" style="max-width:200px;"><div id="tiptip_arrow"><div id="tiptip_arrow_inner"></div></div><div id="tiptip_content"></div></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div></div><div><div class="grecaptcha-badge" data-style="bottomright" style="width: 256px; height: 60px; display: block; transition: right 0.3s ease 0s; position: fixed; bottom: 14px; right: -186px; box-shadow: gray 0px 0px 5px; border-radius: 2px; overflow: hidden;"><div class="grecaptcha-logo"><iframe title="reCAPTCHA" src="./Game Of Strengths _ Practice Problems_files/anchor.html" width="256" height="60" role="presentation" name="a-3xm22q9tfj5i" frameborder="0" scrolling="no" sandbox="allow-forms allow-popups allow-same-origin allow-scripts allow-top-navigation allow-modals allow-popups-to-escape-sandbox allow-storage-access-by-user-activation"></iframe></div><div class="grecaptcha-error"></div><textarea id="g-recaptcha-response-100000" name="g-recaptcha-response" class="g-recaptcha-response" style="width: 250px; height: 40px; border: 1px solid rgb(193, 193, 193); margin: 10px 25px; padding: 0px; resize: none; display: none;"></textarea></div><iframe style="display: none;" src="./Game Of Strengths _ Practice Problems_files/saved_resource(3).html"></iframe></div><iframe data-product="web_widget" title="No content" role="presentation" tabindex="-1" allow="microphone *" aria-hidden="true" src="./Game Of Strengths _ Practice Problems_files/saved_resource(4).html" style="width: 0px; height: 0px; border: 0px; position: absolute; top: -9999px;"></iframe><div><iframe title="Opens a widget where you can find more information" id="launcher" tabindex="-1" style="width: 134px; height: 50px; padding: 0px; margin: 10px 20px; position: fixed; bottom: 30px; overflow: visible; opacity: 0; border: 0px; z-index: 999998; transition-duration: 250ms; transition-timing-function: cubic-bezier(0.645, 0.045, 0.355, 1); transition-property: opacity, top, bottom; top: -9999px; visibility: hidden;" src="./Game Of Strengths _ Practice Problems_files/saved_resource(5).html"></iframe></div><div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="status" aria-atomic="true"></div></div></body></html>