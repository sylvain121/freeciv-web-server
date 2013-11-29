<!DOCTYPE html>
<html>
<head>
	
<title>Freeciv-web</title>

<%--<script type="text/javascript" src="/javascript-compressed/waterbug.js"> </script> --%>

<link rel="stylesheet" type="text/css" href="/css/webclient.min.css" />

<script type="text/javascript" src="/javascript-compressed/jquery.min.js"></script>
<script type="text/javascript" src="/javascript-compressed/webclient.js"></script>
<script type="text/javascript" src="/webclient/session.jsp"></script>

<link rel="shortcut icon" href="/images/freeciv-shortcut-icon.png" />
<link rel="apple-touch-icon" href="/images/freeciv-splash2.png" />

<%--  iPhone setup --%>
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0" />
<meta name="apple-mobile-web-app-capable" content="yes" />
<meta name="apple-mobile-web-app-status-bar-style" content="black-translucent" />

</head>

<body>
	
<%
  
  String username = "" + session.getAttribute("username");
  if (username == null || "null".equals(username)) {
	// User isn't logged in.
	response.sendRedirect("/wireframe.jsp?do=login");
  }
%>

    <jsp:include page="pregame.jsp" flush="false"/>
    <jsp:include page="game.jsp" flush="false"/>
    
 
</body>
</html>
