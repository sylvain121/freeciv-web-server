
<div id="main_column" style="text-align: center;">

<h2>Main menu</h2>

<div>
  Please choose gameplay mode:
</div>


<div onmouseover="help_single();">
  <a class='button' href="/preload.jsp?redir=/civclientlauncher?action=new">Start single-player game</a>
</div>

<div onmouseover="help_multi();">
  <a class="button" href="/preload.jsp?redir=/meta/metaserver.php%3Ftab%3Dmulti" >Multiplayer game</a><br>
</div>

<div onmouseover="help_scenario();">
  <a class="button" href="/preload.jsp?redir=/wireframe.jsp?do=scenarios">Start scenario game</a>
</div>

<div onmouseover="help_tutorial();">
  <a class="button" href="/preload.jsp?redir=/tutorial.jsp">Start tutorial</a>
</div>

<div onmouseover="help_load();">
  <a class="button" href="/wireframe.jsp?do=load">Load Game</a>
</div>


<br>

<script type="text/javascript">

function help_single() {
  $("#menu_help").html("<b>Help:</b><br> Start new single player game. Here you can play against a "
   + " number of artificial intelligence (AI) players.");
}

function help_multi() {
  $("#menu_help").html("<b>Help:</b><br> Join a multiplayer game against other players. "
  + " Multiplayer games requires at least 2 human players before they can begin. "
  + " Before the game has begun, it will be in a pregame state, where you have to wait until "
  + " enough players have joined. Once all players have joined, all players have to click "
  + " the start game button.");
}

function help_scenario() {
  $("#menu_help").html("<b>Help:</b><br> Start new scenario-game, which allows you to play a prepared game,"
  + " on the whole World, the British Aisles or the Iberian peninsula.");
}

function help_load() {
  $("#menu_help").html("<b>Help:</b><br> You can resume playing games that you have "
   + "played before, by clicking the <Load saved game> button. This requires HTML5 localstorage.");
}


function help_tutorial() {
  $("#menu_help").html("<b>Help:</b><br> Play this tutorial scenario to get an introduction to Freeciv-web. This is recommended the first time you play Freeciv-web.");
}



</script>

<div id="ad_bottom" style="background-color: transparent; height: 180px;">

	<div id="menu_help">
		<b>Help:</b>
		<br>
		You have four ways to play Freeciv-web: Start a new single-player game, join another multiplayer game,
		start a new scenario game, or play the tutorial.
		Multiplayer games requires at least 2 human players before they can begin, while single-player 
		games can start immediately.
		It is recommended to play a few single-player games, before you try playing against
		other human players.
	
		Once you have joined a game, the game can be started once all human players
		have clicked the "start game" button. 
	</div>
	
	<br>



</div>



<script>
	$( ".button").button();
	$( ".button").css("width", "230px");
	$( ".button").css("margin", "10px");
</script>

</div>
