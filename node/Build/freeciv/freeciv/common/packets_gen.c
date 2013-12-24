
 /****************************************************************************
 *                       THIS FILE WAS GENERATED                             *
 * Script: common/generate_packets.py                                        *
 * Input:  common/packets.def                                                *
 *                       DO NOT CHANGE THIS FILE                             *
 ****************************************************************************/


#ifdef HAVE_CONFIG_H
#include <fc_config.h>
#endif

#include <string.h>

/* utility */
#include "bitvector.h"
#include "capability.h"
#include "genhash.h"
#include "log.h"
#include "mem.h"
#include "support.h"

/* common */
#include "capstr.h"
#include "connection.h"
#include "dataio.h"
#include "game.h"

#include "packets.h"

#if 0
static genhash_val_t hash_const(const void *vkey, size_t num_buckets)
{
  return 0;
}

static bool cmp_const(const void *vkey1, const void *vkey2)
{
  return TRUE;
}
#endif /* 0 */

void delta_stats_report(void) {}

void delta_stats_reset(void) {}

void *get_packet_from_connection_helper(struct connection *pc,
    enum packet_type type)
{
  switch (type) {

  case PACKET_PROCESSING_STARTED:
    return receive_packet_processing_started(pc);

  case PACKET_PROCESSING_FINISHED:
    return receive_packet_processing_finished(pc);

  case PACKET_SERVER_JOIN_REQ:
    return receive_packet_server_join_req(pc);

  case PACKET_SERVER_JOIN_REPLY:
    return receive_packet_server_join_reply(pc);

  case PACKET_AUTHENTICATION_REQ:
    return receive_packet_authentication_req(pc);

  case PACKET_AUTHENTICATION_REPLY:
    return receive_packet_authentication_reply(pc);

  case PACKET_SERVER_SHUTDOWN:
    return receive_packet_server_shutdown(pc);

  case PACKET_NATION_SELECT_REQ:
    return receive_packet_nation_select_req(pc);

  case PACKET_PLAYER_READY:
    return receive_packet_player_ready(pc);

  case PACKET_ENDGAME_REPORT:
    return receive_packet_endgame_report(pc);

  case PACKET_ENDGAME_PLAYER:
    return receive_packet_endgame_player(pc);

  case PACKET_TILE_INFO:
    return receive_packet_tile_info(pc);

  case PACKET_GAME_INFO:
    return receive_packet_game_info(pc);

  case PACKET_MAP_INFO:
    return receive_packet_map_info(pc);

  case PACKET_NUKE_TILE_INFO:
    return receive_packet_nuke_tile_info(pc);

  case PACKET_TEAM_NAME_INFO:
    return receive_packet_team_name_info(pc);

  case PACKET_CHAT_MSG:
    return receive_packet_chat_msg(pc);

  case PACKET_CHAT_MSG_REQ:
    return receive_packet_chat_msg_req(pc);

  case PACKET_CONNECT_MSG:
    return receive_packet_connect_msg(pc);

  case PACKET_CITY_REMOVE:
    return receive_packet_city_remove(pc);

  case PACKET_CITY_INFO:
    return receive_packet_city_info(pc);

  case PACKET_CITY_SHORT_INFO:
    return receive_packet_city_short_info(pc);

  case PACKET_CITY_SELL:
    return receive_packet_city_sell(pc);

  case PACKET_CITY_BUY:
    return receive_packet_city_buy(pc);

  case PACKET_CITY_CHANGE:
    return receive_packet_city_change(pc);

  case PACKET_CITY_WORKLIST:
    return receive_packet_city_worklist(pc);

  case PACKET_CITY_MAKE_SPECIALIST:
    return receive_packet_city_make_specialist(pc);

  case PACKET_CITY_MAKE_WORKER:
    return receive_packet_city_make_worker(pc);

  case PACKET_CITY_CHANGE_SPECIALIST:
    return receive_packet_city_change_specialist(pc);

  case PACKET_CITY_RENAME:
    return receive_packet_city_rename(pc);

  case PACKET_CITY_OPTIONS_REQ:
    return receive_packet_city_options_req(pc);

  case PACKET_CITY_REFRESH:
    return receive_packet_city_refresh(pc);

  case PACKET_CITY_NAME_SUGGESTION_REQ:
    return receive_packet_city_name_suggestion_req(pc);

  case PACKET_CITY_NAME_SUGGESTION_INFO:
    return receive_packet_city_name_suggestion_info(pc);

  case PACKET_CITY_SABOTAGE_LIST:
    return receive_packet_city_sabotage_list(pc);

  case PACKET_PLAYER_REMOVE:
    return receive_packet_player_remove(pc);

  case PACKET_PLAYER_INFO:
    return receive_packet_player_info(pc);

  case PACKET_PLAYER_PHASE_DONE:
    return receive_packet_player_phase_done(pc);

  case PACKET_PLAYER_RATES:
    return receive_packet_player_rates(pc);

  case PACKET_PLAYER_CHANGE_GOVERNMENT:
    return receive_packet_player_change_government(pc);

  case PACKET_PLAYER_RESEARCH:
    return receive_packet_player_research(pc);

  case PACKET_PLAYER_TECH_GOAL:
    return receive_packet_player_tech_goal(pc);

  case PACKET_TECH_GAINED:
    return receive_packet_tech_gained(pc);

  case PACKET_PLAYER_ATTRIBUTE_BLOCK:
    return receive_packet_player_attribute_block(pc);

  case PACKET_PLAYER_ATTRIBUTE_CHUNK:
    return receive_packet_player_attribute_chunk(pc);

  case PACKET_PLAYER_DIPLSTATE:
    return receive_packet_player_diplstate(pc);

  case PACKET_UNIT_REMOVE:
    return receive_packet_unit_remove(pc);

  case PACKET_UNIT_INFO:
    return receive_packet_unit_info(pc);

  case PACKET_UNIT_SHORT_INFO:
    return receive_packet_unit_short_info(pc);

  case PACKET_UNIT_COMBAT_INFO:
    return receive_packet_unit_combat_info(pc);

  case PACKET_UNIT_MOVE:
    return receive_packet_unit_move(pc);

  case PACKET_UNIT_BUILD_CITY:
    return receive_packet_unit_build_city(pc);

  case PACKET_UNIT_DISBAND:
    return receive_packet_unit_disband(pc);

  case PACKET_UNIT_CHANGE_HOMECITY:
    return receive_packet_unit_change_homecity(pc);

  case PACKET_UNIT_ESTABLISH_TRADE:
    return receive_packet_unit_establish_trade(pc);

  case PACKET_UNIT_BATTLEGROUP:
    return receive_packet_unit_battlegroup(pc);

  case PACKET_UNIT_HELP_BUILD_WONDER:
    return receive_packet_unit_help_build_wonder(pc);

  case PACKET_UNIT_ORDERS:
    return receive_packet_unit_orders(pc);

  case PACKET_UNIT_AUTOSETTLERS:
    return receive_packet_unit_autosettlers(pc);

  case PACKET_UNIT_LOAD:
    return receive_packet_unit_load(pc);

  case PACKET_UNIT_UNLOAD:
    return receive_packet_unit_unload(pc);

  case PACKET_UNIT_UPGRADE:
    return receive_packet_unit_upgrade(pc);

  case PACKET_UNIT_NUKE:
    return receive_packet_unit_nuke(pc);

  case PACKET_UNIT_PARADROP_TO:
    return receive_packet_unit_paradrop_to(pc);

  case PACKET_UNIT_AIRLIFT:
    return receive_packet_unit_airlift(pc);

  case PACKET_UNIT_DIPLOMAT_QUERY:
    return receive_packet_unit_diplomat_query(pc);

  case PACKET_UNIT_TYPE_UPGRADE:
    return receive_packet_unit_type_upgrade(pc);

  case PACKET_UNIT_DIPLOMAT_ACTION:
    return receive_packet_unit_diplomat_action(pc);

  case PACKET_UNIT_DIPLOMAT_ANSWER:
    return receive_packet_unit_diplomat_answer(pc);

  case PACKET_UNIT_CHANGE_ACTIVITY:
    return receive_packet_unit_change_activity(pc);

  case PACKET_UNIT_CHANGE_ACTIVITY_BASE:
    return receive_packet_unit_change_activity_base(pc);

  case PACKET_UNIT_CHANGE_ACTIVITY_ROAD:
    return receive_packet_unit_change_activity_road(pc);

  case PACKET_DIPLOMACY_INIT_MEETING_REQ:
    return receive_packet_diplomacy_init_meeting_req(pc);

  case PACKET_DIPLOMACY_INIT_MEETING:
    return receive_packet_diplomacy_init_meeting(pc);

  case PACKET_DIPLOMACY_CANCEL_MEETING_REQ:
    return receive_packet_diplomacy_cancel_meeting_req(pc);

  case PACKET_DIPLOMACY_CANCEL_MEETING:
    return receive_packet_diplomacy_cancel_meeting(pc);

  case PACKET_DIPLOMACY_CREATE_CLAUSE_REQ:
    return receive_packet_diplomacy_create_clause_req(pc);

  case PACKET_DIPLOMACY_CREATE_CLAUSE:
    return receive_packet_diplomacy_create_clause(pc);

  case PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ:
    return receive_packet_diplomacy_remove_clause_req(pc);

  case PACKET_DIPLOMACY_REMOVE_CLAUSE:
    return receive_packet_diplomacy_remove_clause(pc);

  case PACKET_DIPLOMACY_ACCEPT_TREATY_REQ:
    return receive_packet_diplomacy_accept_treaty_req(pc);

  case PACKET_DIPLOMACY_ACCEPT_TREATY:
    return receive_packet_diplomacy_accept_treaty(pc);

  case PACKET_DIPLOMACY_CANCEL_PACT:
    return receive_packet_diplomacy_cancel_pact(pc);

  case PACKET_PAGE_MSG:
    return receive_packet_page_msg(pc);

  case PACKET_REPORT_REQ:
    return receive_packet_report_req(pc);

  case PACKET_CONN_INFO:
    return receive_packet_conn_info(pc);

  case PACKET_CONN_PING_INFO:
    return receive_packet_conn_ping_info(pc);

  case PACKET_CONN_PING:
    return receive_packet_conn_ping(pc);

  case PACKET_CONN_PONG:
    return receive_packet_conn_pong(pc);

  case PACKET_CLIENT_INFO:
    return receive_packet_client_info(pc);

  case PACKET_END_PHASE:
    return receive_packet_end_phase(pc);

  case PACKET_START_PHASE:
    return receive_packet_start_phase(pc);

  case PACKET_NEW_YEAR:
    return receive_packet_new_year(pc);

  case PACKET_BEGIN_TURN:
    return receive_packet_begin_turn(pc);

  case PACKET_END_TURN:
    return receive_packet_end_turn(pc);

  case PACKET_FREEZE_CLIENT:
    return receive_packet_freeze_client(pc);

  case PACKET_THAW_CLIENT:
    return receive_packet_thaw_client(pc);

  case PACKET_SPACESHIP_LAUNCH:
    return receive_packet_spaceship_launch(pc);

  case PACKET_SPACESHIP_PLACE:
    return receive_packet_spaceship_place(pc);

  case PACKET_SPACESHIP_INFO:
    return receive_packet_spaceship_info(pc);

  case PACKET_RULESET_UNIT:
    return receive_packet_ruleset_unit(pc);

  case PACKET_RULESET_UNIT_BONUS:
    return receive_packet_ruleset_unit_bonus(pc);

  case PACKET_RULESET_UNIT_FLAG:
    return receive_packet_ruleset_unit_flag(pc);

  case PACKET_RULESET_GAME:
    return receive_packet_ruleset_game(pc);

  case PACKET_RULESET_SPECIALIST:
    return receive_packet_ruleset_specialist(pc);

  case PACKET_RULESET_GOVERNMENT_RULER_TITLE:
    return receive_packet_ruleset_government_ruler_title(pc);

  case PACKET_RULESET_TECH:
    return receive_packet_ruleset_tech(pc);

  case PACKET_RULESET_GOVERNMENT:
    return receive_packet_ruleset_government(pc);

  case PACKET_RULESET_TERRAIN_CONTROL:
    return receive_packet_ruleset_terrain_control(pc);

  case PACKET_RULESETS_READY:
    return receive_packet_rulesets_ready(pc);

  case PACKET_RULESET_NATION_GROUPS:
    return receive_packet_ruleset_nation_groups(pc);

  case PACKET_RULESET_NATION:
    return receive_packet_ruleset_nation(pc);

  case PACKET_RULESET_CITY:
    return receive_packet_ruleset_city(pc);

  case PACKET_RULESET_BUILDING:
    return receive_packet_ruleset_building(pc);

  case PACKET_RULESET_TERRAIN:
    return receive_packet_ruleset_terrain(pc);

  case PACKET_RULESET_TERRAIN_FLAG:
    return receive_packet_ruleset_terrain_flag(pc);

  case PACKET_RULESET_UNIT_CLASS:
    return receive_packet_ruleset_unit_class(pc);

  case PACKET_RULESET_BASE:
    return receive_packet_ruleset_base(pc);

  case PACKET_RULESET_ROAD:
    return receive_packet_ruleset_road(pc);

  case PACKET_RULESET_DISASTER:
    return receive_packet_ruleset_disaster(pc);

  case PACKET_RULESET_TRADE:
    return receive_packet_ruleset_trade(pc);

  case PACKET_RULESET_CONTROL:
    return receive_packet_ruleset_control(pc);

  case PACKET_SINGLE_WANT_HACK_REQ:
    return receive_packet_single_want_hack_req(pc);

  case PACKET_SINGLE_WANT_HACK_REPLY:
    return receive_packet_single_want_hack_reply(pc);

  case PACKET_RULESET_CHOICES:
    return receive_packet_ruleset_choices(pc);

  case PACKET_GAME_LOAD:
    return receive_packet_game_load(pc);

  case PACKET_SERVER_SETTING_CONTROL:
    return receive_packet_server_setting_control(pc);

  case PACKET_SERVER_SETTING_CONST:
    return receive_packet_server_setting_const(pc);

  case PACKET_SERVER_SETTING_BOOL:
    return receive_packet_server_setting_bool(pc);

  case PACKET_SERVER_SETTING_INT:
    return receive_packet_server_setting_int(pc);

  case PACKET_SERVER_SETTING_STR:
    return receive_packet_server_setting_str(pc);

  case PACKET_SERVER_SETTING_ENUM:
    return receive_packet_server_setting_enum(pc);

  case PACKET_SERVER_SETTING_BITWISE:
    return receive_packet_server_setting_bitwise(pc);

  case PACKET_RULESET_EFFECT:
    return receive_packet_ruleset_effect(pc);

  case PACKET_RULESET_EFFECT_REQ:
    return receive_packet_ruleset_effect_req(pc);

  case PACKET_RULESET_RESOURCE:
    return receive_packet_ruleset_resource(pc);

  case PACKET_SCENARIO_INFO:
    return receive_packet_scenario_info(pc);

  case PACKET_SAVE_SCENARIO:
    return receive_packet_save_scenario(pc);

  case PACKET_VOTE_NEW:
    return receive_packet_vote_new(pc);

  case PACKET_VOTE_UPDATE:
    return receive_packet_vote_update(pc);

  case PACKET_VOTE_REMOVE:
    return receive_packet_vote_remove(pc);

  case PACKET_VOTE_RESOLVE:
    return receive_packet_vote_resolve(pc);

  case PACKET_VOTE_SUBMIT:
    return receive_packet_vote_submit(pc);

  case PACKET_EDIT_MODE:
    return receive_packet_edit_mode(pc);

  case PACKET_EDIT_RECALCULATE_BORDERS:
    return receive_packet_edit_recalculate_borders(pc);

  case PACKET_EDIT_CHECK_TILES:
    return receive_packet_edit_check_tiles(pc);

  case PACKET_EDIT_TOGGLE_FOGOFWAR:
    return receive_packet_edit_toggle_fogofwar(pc);

  case PACKET_EDIT_TILE_TERRAIN:
    return receive_packet_edit_tile_terrain(pc);

  case PACKET_EDIT_TILE_RESOURCE:
    return receive_packet_edit_tile_resource(pc);

  case PACKET_EDIT_TILE_SPECIAL:
    return receive_packet_edit_tile_special(pc);

  case PACKET_EDIT_TILE_BASE:
    return receive_packet_edit_tile_base(pc);

  case PACKET_EDIT_TILE_ROAD:
    return receive_packet_edit_tile_road(pc);

  case PACKET_EDIT_STARTPOS:
    return receive_packet_edit_startpos(pc);

  case PACKET_EDIT_STARTPOS_FULL:
    return receive_packet_edit_startpos_full(pc);

  case PACKET_EDIT_TILE:
    return receive_packet_edit_tile(pc);

  case PACKET_EDIT_UNIT_CREATE:
    return receive_packet_edit_unit_create(pc);

  case PACKET_EDIT_UNIT_REMOVE:
    return receive_packet_edit_unit_remove(pc);

  case PACKET_EDIT_UNIT_REMOVE_BY_ID:
    return receive_packet_edit_unit_remove_by_id(pc);

  case PACKET_EDIT_UNIT:
    return receive_packet_edit_unit(pc);

  case PACKET_EDIT_CITY_CREATE:
    return receive_packet_edit_city_create(pc);

  case PACKET_EDIT_CITY_REMOVE:
    return receive_packet_edit_city_remove(pc);

  case PACKET_EDIT_CITY:
    return receive_packet_edit_city(pc);

  case PACKET_EDIT_PLAYER_CREATE:
    return receive_packet_edit_player_create(pc);

  case PACKET_EDIT_PLAYER_REMOVE:
    return receive_packet_edit_player_remove(pc);

  case PACKET_EDIT_PLAYER:
    return receive_packet_edit_player(pc);

  case PACKET_EDIT_PLAYER_VISION:
    return receive_packet_edit_player_vision(pc);

  case PACKET_EDIT_GAME:
    return receive_packet_edit_game(pc);

  case PACKET_EDIT_OBJECT_CREATED:
    return receive_packet_edit_object_created(pc);

  case PACKET_INFO_TEXT_REQ:
    return receive_packet_info_text_req(pc);

  case PACKET_INFO_TEXT_MESSAGE:
    return receive_packet_info_text_message(pc);

  case PACKET_GOTO_PATH_REQ:
    return receive_packet_goto_path_req(pc);

  case PACKET_GOTO_PATH:
    return receive_packet_goto_path(pc);

  default:
    log_packet("unknown packet type %d received from %s",
               type, conn_description(pc));
    return NULL;
  };
}

const char *packet_name(enum packet_type type)
{
  switch (type) {

  case PACKET_PROCESSING_STARTED:
    return "PACKET_PROCESSING_STARTED";

  case PACKET_PROCESSING_FINISHED:
    return "PACKET_PROCESSING_FINISHED";

  case PACKET_SERVER_JOIN_REQ:
    return "PACKET_SERVER_JOIN_REQ";

  case PACKET_SERVER_JOIN_REPLY:
    return "PACKET_SERVER_JOIN_REPLY";

  case PACKET_AUTHENTICATION_REQ:
    return "PACKET_AUTHENTICATION_REQ";

  case PACKET_AUTHENTICATION_REPLY:
    return "PACKET_AUTHENTICATION_REPLY";

  case PACKET_SERVER_SHUTDOWN:
    return "PACKET_SERVER_SHUTDOWN";

  case PACKET_NATION_SELECT_REQ:
    return "PACKET_NATION_SELECT_REQ";

  case PACKET_PLAYER_READY:
    return "PACKET_PLAYER_READY";

  case PACKET_ENDGAME_REPORT:
    return "PACKET_ENDGAME_REPORT";

  case PACKET_ENDGAME_PLAYER:
    return "PACKET_ENDGAME_PLAYER";

  case PACKET_TILE_INFO:
    return "PACKET_TILE_INFO";

  case PACKET_GAME_INFO:
    return "PACKET_GAME_INFO";

  case PACKET_MAP_INFO:
    return "PACKET_MAP_INFO";

  case PACKET_NUKE_TILE_INFO:
    return "PACKET_NUKE_TILE_INFO";

  case PACKET_TEAM_NAME_INFO:
    return "PACKET_TEAM_NAME_INFO";

  case PACKET_CHAT_MSG:
    return "PACKET_CHAT_MSG";

  case PACKET_CHAT_MSG_REQ:
    return "PACKET_CHAT_MSG_REQ";

  case PACKET_CONNECT_MSG:
    return "PACKET_CONNECT_MSG";

  case PACKET_CITY_REMOVE:
    return "PACKET_CITY_REMOVE";

  case PACKET_CITY_INFO:
    return "PACKET_CITY_INFO";

  case PACKET_CITY_SHORT_INFO:
    return "PACKET_CITY_SHORT_INFO";

  case PACKET_CITY_SELL:
    return "PACKET_CITY_SELL";

  case PACKET_CITY_BUY:
    return "PACKET_CITY_BUY";

  case PACKET_CITY_CHANGE:
    return "PACKET_CITY_CHANGE";

  case PACKET_CITY_WORKLIST:
    return "PACKET_CITY_WORKLIST";

  case PACKET_CITY_MAKE_SPECIALIST:
    return "PACKET_CITY_MAKE_SPECIALIST";

  case PACKET_CITY_MAKE_WORKER:
    return "PACKET_CITY_MAKE_WORKER";

  case PACKET_CITY_CHANGE_SPECIALIST:
    return "PACKET_CITY_CHANGE_SPECIALIST";

  case PACKET_CITY_RENAME:
    return "PACKET_CITY_RENAME";

  case PACKET_CITY_OPTIONS_REQ:
    return "PACKET_CITY_OPTIONS_REQ";

  case PACKET_CITY_REFRESH:
    return "PACKET_CITY_REFRESH";

  case PACKET_CITY_NAME_SUGGESTION_REQ:
    return "PACKET_CITY_NAME_SUGGESTION_REQ";

  case PACKET_CITY_NAME_SUGGESTION_INFO:
    return "PACKET_CITY_NAME_SUGGESTION_INFO";

  case PACKET_CITY_SABOTAGE_LIST:
    return "PACKET_CITY_SABOTAGE_LIST";

  case PACKET_PLAYER_REMOVE:
    return "PACKET_PLAYER_REMOVE";

  case PACKET_PLAYER_INFO:
    return "PACKET_PLAYER_INFO";

  case PACKET_PLAYER_PHASE_DONE:
    return "PACKET_PLAYER_PHASE_DONE";

  case PACKET_PLAYER_RATES:
    return "PACKET_PLAYER_RATES";

  case PACKET_PLAYER_CHANGE_GOVERNMENT:
    return "PACKET_PLAYER_CHANGE_GOVERNMENT";

  case PACKET_PLAYER_RESEARCH:
    return "PACKET_PLAYER_RESEARCH";

  case PACKET_PLAYER_TECH_GOAL:
    return "PACKET_PLAYER_TECH_GOAL";

  case PACKET_TECH_GAINED:
    return "PACKET_TECH_GAINED";

  case PACKET_PLAYER_ATTRIBUTE_BLOCK:
    return "PACKET_PLAYER_ATTRIBUTE_BLOCK";

  case PACKET_PLAYER_ATTRIBUTE_CHUNK:
    return "PACKET_PLAYER_ATTRIBUTE_CHUNK";

  case PACKET_PLAYER_DIPLSTATE:
    return "PACKET_PLAYER_DIPLSTATE";

  case PACKET_UNIT_REMOVE:
    return "PACKET_UNIT_REMOVE";

  case PACKET_UNIT_INFO:
    return "PACKET_UNIT_INFO";

  case PACKET_UNIT_SHORT_INFO:
    return "PACKET_UNIT_SHORT_INFO";

  case PACKET_UNIT_COMBAT_INFO:
    return "PACKET_UNIT_COMBAT_INFO";

  case PACKET_UNIT_MOVE:
    return "PACKET_UNIT_MOVE";

  case PACKET_UNIT_BUILD_CITY:
    return "PACKET_UNIT_BUILD_CITY";

  case PACKET_UNIT_DISBAND:
    return "PACKET_UNIT_DISBAND";

  case PACKET_UNIT_CHANGE_HOMECITY:
    return "PACKET_UNIT_CHANGE_HOMECITY";

  case PACKET_UNIT_ESTABLISH_TRADE:
    return "PACKET_UNIT_ESTABLISH_TRADE";

  case PACKET_UNIT_BATTLEGROUP:
    return "PACKET_UNIT_BATTLEGROUP";

  case PACKET_UNIT_HELP_BUILD_WONDER:
    return "PACKET_UNIT_HELP_BUILD_WONDER";

  case PACKET_UNIT_ORDERS:
    return "PACKET_UNIT_ORDERS";

  case PACKET_UNIT_AUTOSETTLERS:
    return "PACKET_UNIT_AUTOSETTLERS";

  case PACKET_UNIT_LOAD:
    return "PACKET_UNIT_LOAD";

  case PACKET_UNIT_UNLOAD:
    return "PACKET_UNIT_UNLOAD";

  case PACKET_UNIT_UPGRADE:
    return "PACKET_UNIT_UPGRADE";

  case PACKET_UNIT_NUKE:
    return "PACKET_UNIT_NUKE";

  case PACKET_UNIT_PARADROP_TO:
    return "PACKET_UNIT_PARADROP_TO";

  case PACKET_UNIT_AIRLIFT:
    return "PACKET_UNIT_AIRLIFT";

  case PACKET_UNIT_DIPLOMAT_QUERY:
    return "PACKET_UNIT_DIPLOMAT_QUERY";

  case PACKET_UNIT_TYPE_UPGRADE:
    return "PACKET_UNIT_TYPE_UPGRADE";

  case PACKET_UNIT_DIPLOMAT_ACTION:
    return "PACKET_UNIT_DIPLOMAT_ACTION";

  case PACKET_UNIT_DIPLOMAT_ANSWER:
    return "PACKET_UNIT_DIPLOMAT_ANSWER";

  case PACKET_UNIT_CHANGE_ACTIVITY:
    return "PACKET_UNIT_CHANGE_ACTIVITY";

  case PACKET_UNIT_CHANGE_ACTIVITY_BASE:
    return "PACKET_UNIT_CHANGE_ACTIVITY_BASE";

  case PACKET_UNIT_CHANGE_ACTIVITY_ROAD:
    return "PACKET_UNIT_CHANGE_ACTIVITY_ROAD";

  case PACKET_DIPLOMACY_INIT_MEETING_REQ:
    return "PACKET_DIPLOMACY_INIT_MEETING_REQ";

  case PACKET_DIPLOMACY_INIT_MEETING:
    return "PACKET_DIPLOMACY_INIT_MEETING";

  case PACKET_DIPLOMACY_CANCEL_MEETING_REQ:
    return "PACKET_DIPLOMACY_CANCEL_MEETING_REQ";

  case PACKET_DIPLOMACY_CANCEL_MEETING:
    return "PACKET_DIPLOMACY_CANCEL_MEETING";

  case PACKET_DIPLOMACY_CREATE_CLAUSE_REQ:
    return "PACKET_DIPLOMACY_CREATE_CLAUSE_REQ";

  case PACKET_DIPLOMACY_CREATE_CLAUSE:
    return "PACKET_DIPLOMACY_CREATE_CLAUSE";

  case PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ:
    return "PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ";

  case PACKET_DIPLOMACY_REMOVE_CLAUSE:
    return "PACKET_DIPLOMACY_REMOVE_CLAUSE";

  case PACKET_DIPLOMACY_ACCEPT_TREATY_REQ:
    return "PACKET_DIPLOMACY_ACCEPT_TREATY_REQ";

  case PACKET_DIPLOMACY_ACCEPT_TREATY:
    return "PACKET_DIPLOMACY_ACCEPT_TREATY";

  case PACKET_DIPLOMACY_CANCEL_PACT:
    return "PACKET_DIPLOMACY_CANCEL_PACT";

  case PACKET_PAGE_MSG:
    return "PACKET_PAGE_MSG";

  case PACKET_REPORT_REQ:
    return "PACKET_REPORT_REQ";

  case PACKET_CONN_INFO:
    return "PACKET_CONN_INFO";

  case PACKET_CONN_PING_INFO:
    return "PACKET_CONN_PING_INFO";

  case PACKET_CONN_PING:
    return "PACKET_CONN_PING";

  case PACKET_CONN_PONG:
    return "PACKET_CONN_PONG";

  case PACKET_CLIENT_INFO:
    return "PACKET_CLIENT_INFO";

  case PACKET_END_PHASE:
    return "PACKET_END_PHASE";

  case PACKET_START_PHASE:
    return "PACKET_START_PHASE";

  case PACKET_NEW_YEAR:
    return "PACKET_NEW_YEAR";

  case PACKET_BEGIN_TURN:
    return "PACKET_BEGIN_TURN";

  case PACKET_END_TURN:
    return "PACKET_END_TURN";

  case PACKET_FREEZE_CLIENT:
    return "PACKET_FREEZE_CLIENT";

  case PACKET_THAW_CLIENT:
    return "PACKET_THAW_CLIENT";

  case PACKET_SPACESHIP_LAUNCH:
    return "PACKET_SPACESHIP_LAUNCH";

  case PACKET_SPACESHIP_PLACE:
    return "PACKET_SPACESHIP_PLACE";

  case PACKET_SPACESHIP_INFO:
    return "PACKET_SPACESHIP_INFO";

  case PACKET_RULESET_UNIT:
    return "PACKET_RULESET_UNIT";

  case PACKET_RULESET_UNIT_BONUS:
    return "PACKET_RULESET_UNIT_BONUS";

  case PACKET_RULESET_UNIT_FLAG:
    return "PACKET_RULESET_UNIT_FLAG";

  case PACKET_RULESET_GAME:
    return "PACKET_RULESET_GAME";

  case PACKET_RULESET_SPECIALIST:
    return "PACKET_RULESET_SPECIALIST";

  case PACKET_RULESET_GOVERNMENT_RULER_TITLE:
    return "PACKET_RULESET_GOVERNMENT_RULER_TITLE";

  case PACKET_RULESET_TECH:
    return "PACKET_RULESET_TECH";

  case PACKET_RULESET_GOVERNMENT:
    return "PACKET_RULESET_GOVERNMENT";

  case PACKET_RULESET_TERRAIN_CONTROL:
    return "PACKET_RULESET_TERRAIN_CONTROL";

  case PACKET_RULESETS_READY:
    return "PACKET_RULESETS_READY";

  case PACKET_RULESET_NATION_GROUPS:
    return "PACKET_RULESET_NATION_GROUPS";

  case PACKET_RULESET_NATION:
    return "PACKET_RULESET_NATION";

  case PACKET_RULESET_CITY:
    return "PACKET_RULESET_CITY";

  case PACKET_RULESET_BUILDING:
    return "PACKET_RULESET_BUILDING";

  case PACKET_RULESET_TERRAIN:
    return "PACKET_RULESET_TERRAIN";

  case PACKET_RULESET_TERRAIN_FLAG:
    return "PACKET_RULESET_TERRAIN_FLAG";

  case PACKET_RULESET_UNIT_CLASS:
    return "PACKET_RULESET_UNIT_CLASS";

  case PACKET_RULESET_BASE:
    return "PACKET_RULESET_BASE";

  case PACKET_RULESET_ROAD:
    return "PACKET_RULESET_ROAD";

  case PACKET_RULESET_DISASTER:
    return "PACKET_RULESET_DISASTER";

  case PACKET_RULESET_TRADE:
    return "PACKET_RULESET_TRADE";

  case PACKET_RULESET_CONTROL:
    return "PACKET_RULESET_CONTROL";

  case PACKET_SINGLE_WANT_HACK_REQ:
    return "PACKET_SINGLE_WANT_HACK_REQ";

  case PACKET_SINGLE_WANT_HACK_REPLY:
    return "PACKET_SINGLE_WANT_HACK_REPLY";

  case PACKET_RULESET_CHOICES:
    return "PACKET_RULESET_CHOICES";

  case PACKET_GAME_LOAD:
    return "PACKET_GAME_LOAD";

  case PACKET_SERVER_SETTING_CONTROL:
    return "PACKET_SERVER_SETTING_CONTROL";

  case PACKET_SERVER_SETTING_CONST:
    return "PACKET_SERVER_SETTING_CONST";

  case PACKET_SERVER_SETTING_BOOL:
    return "PACKET_SERVER_SETTING_BOOL";

  case PACKET_SERVER_SETTING_INT:
    return "PACKET_SERVER_SETTING_INT";

  case PACKET_SERVER_SETTING_STR:
    return "PACKET_SERVER_SETTING_STR";

  case PACKET_SERVER_SETTING_ENUM:
    return "PACKET_SERVER_SETTING_ENUM";

  case PACKET_SERVER_SETTING_BITWISE:
    return "PACKET_SERVER_SETTING_BITWISE";

  case PACKET_RULESET_EFFECT:
    return "PACKET_RULESET_EFFECT";

  case PACKET_RULESET_EFFECT_REQ:
    return "PACKET_RULESET_EFFECT_REQ";

  case PACKET_RULESET_RESOURCE:
    return "PACKET_RULESET_RESOURCE";

  case PACKET_SCENARIO_INFO:
    return "PACKET_SCENARIO_INFO";

  case PACKET_SAVE_SCENARIO:
    return "PACKET_SAVE_SCENARIO";

  case PACKET_VOTE_NEW:
    return "PACKET_VOTE_NEW";

  case PACKET_VOTE_UPDATE:
    return "PACKET_VOTE_UPDATE";

  case PACKET_VOTE_REMOVE:
    return "PACKET_VOTE_REMOVE";

  case PACKET_VOTE_RESOLVE:
    return "PACKET_VOTE_RESOLVE";

  case PACKET_VOTE_SUBMIT:
    return "PACKET_VOTE_SUBMIT";

  case PACKET_EDIT_MODE:
    return "PACKET_EDIT_MODE";

  case PACKET_EDIT_RECALCULATE_BORDERS:
    return "PACKET_EDIT_RECALCULATE_BORDERS";

  case PACKET_EDIT_CHECK_TILES:
    return "PACKET_EDIT_CHECK_TILES";

  case PACKET_EDIT_TOGGLE_FOGOFWAR:
    return "PACKET_EDIT_TOGGLE_FOGOFWAR";

  case PACKET_EDIT_TILE_TERRAIN:
    return "PACKET_EDIT_TILE_TERRAIN";

  case PACKET_EDIT_TILE_RESOURCE:
    return "PACKET_EDIT_TILE_RESOURCE";

  case PACKET_EDIT_TILE_SPECIAL:
    return "PACKET_EDIT_TILE_SPECIAL";

  case PACKET_EDIT_TILE_BASE:
    return "PACKET_EDIT_TILE_BASE";

  case PACKET_EDIT_TILE_ROAD:
    return "PACKET_EDIT_TILE_ROAD";

  case PACKET_EDIT_STARTPOS:
    return "PACKET_EDIT_STARTPOS";

  case PACKET_EDIT_STARTPOS_FULL:
    return "PACKET_EDIT_STARTPOS_FULL";

  case PACKET_EDIT_TILE:
    return "PACKET_EDIT_TILE";

  case PACKET_EDIT_UNIT_CREATE:
    return "PACKET_EDIT_UNIT_CREATE";

  case PACKET_EDIT_UNIT_REMOVE:
    return "PACKET_EDIT_UNIT_REMOVE";

  case PACKET_EDIT_UNIT_REMOVE_BY_ID:
    return "PACKET_EDIT_UNIT_REMOVE_BY_ID";

  case PACKET_EDIT_UNIT:
    return "PACKET_EDIT_UNIT";

  case PACKET_EDIT_CITY_CREATE:
    return "PACKET_EDIT_CITY_CREATE";

  case PACKET_EDIT_CITY_REMOVE:
    return "PACKET_EDIT_CITY_REMOVE";

  case PACKET_EDIT_CITY:
    return "PACKET_EDIT_CITY";

  case PACKET_EDIT_PLAYER_CREATE:
    return "PACKET_EDIT_PLAYER_CREATE";

  case PACKET_EDIT_PLAYER_REMOVE:
    return "PACKET_EDIT_PLAYER_REMOVE";

  case PACKET_EDIT_PLAYER:
    return "PACKET_EDIT_PLAYER";

  case PACKET_EDIT_PLAYER_VISION:
    return "PACKET_EDIT_PLAYER_VISION";

  case PACKET_EDIT_GAME:
    return "PACKET_EDIT_GAME";

  case PACKET_EDIT_OBJECT_CREATED:
    return "PACKET_EDIT_OBJECT_CREATED";

  case PACKET_INFO_TEXT_REQ:
    return "PACKET_INFO_TEXT_REQ";

  case PACKET_INFO_TEXT_MESSAGE:
    return "PACKET_INFO_TEXT_MESSAGE";

  case PACKET_GOTO_PATH_REQ:
    return "PACKET_GOTO_PATH_REQ";

  case PACKET_GOTO_PATH:
    return "PACKET_GOTO_PATH";

  default:
    return "unknown";
  }
}

bool packet_has_game_info_flag(enum packet_type type)
{
  switch (type) {

  case PACKET_PROCESSING_STARTED:
    return FALSE;

  case PACKET_PROCESSING_FINISHED:
    return FALSE;

  case PACKET_SERVER_JOIN_REQ:
    return FALSE;

  case PACKET_SERVER_JOIN_REPLY:
    return FALSE;

  case PACKET_AUTHENTICATION_REQ:
    return FALSE;

  case PACKET_AUTHENTICATION_REPLY:
    return FALSE;

  case PACKET_SERVER_SHUTDOWN:
    return FALSE;

  case PACKET_NATION_SELECT_REQ:
    return FALSE;

  case PACKET_PLAYER_READY:
    return FALSE;

  case PACKET_ENDGAME_REPORT:
    return FALSE;

  case PACKET_ENDGAME_PLAYER:
    return FALSE;

  case PACKET_TILE_INFO:
    return TRUE;

  case PACKET_GAME_INFO:
    return FALSE;

  case PACKET_MAP_INFO:
    return FALSE;

  case PACKET_NUKE_TILE_INFO:
    return FALSE;

  case PACKET_TEAM_NAME_INFO:
    return FALSE;

  case PACKET_CHAT_MSG:
    return FALSE;

  case PACKET_CHAT_MSG_REQ:
    return FALSE;

  case PACKET_CONNECT_MSG:
    return FALSE;

  case PACKET_CITY_REMOVE:
    return FALSE;

  case PACKET_CITY_INFO:
    return TRUE;

  case PACKET_CITY_SHORT_INFO:
    return TRUE;

  case PACKET_CITY_SELL:
    return FALSE;

  case PACKET_CITY_BUY:
    return FALSE;

  case PACKET_CITY_CHANGE:
    return FALSE;

  case PACKET_CITY_WORKLIST:
    return FALSE;

  case PACKET_CITY_MAKE_SPECIALIST:
    return FALSE;

  case PACKET_CITY_MAKE_WORKER:
    return FALSE;

  case PACKET_CITY_CHANGE_SPECIALIST:
    return FALSE;

  case PACKET_CITY_RENAME:
    return FALSE;

  case PACKET_CITY_OPTIONS_REQ:
    return FALSE;

  case PACKET_CITY_REFRESH:
    return FALSE;

  case PACKET_CITY_NAME_SUGGESTION_REQ:
    return FALSE;

  case PACKET_CITY_NAME_SUGGESTION_INFO:
    return FALSE;

  case PACKET_CITY_SABOTAGE_LIST:
    return FALSE;

  case PACKET_PLAYER_REMOVE:
    return FALSE;

  case PACKET_PLAYER_INFO:
    return FALSE;

  case PACKET_PLAYER_PHASE_DONE:
    return FALSE;

  case PACKET_PLAYER_RATES:
    return FALSE;

  case PACKET_PLAYER_CHANGE_GOVERNMENT:
    return FALSE;

  case PACKET_PLAYER_RESEARCH:
    return FALSE;

  case PACKET_PLAYER_TECH_GOAL:
    return FALSE;

  case PACKET_TECH_GAINED:
    return FALSE;

  case PACKET_PLAYER_ATTRIBUTE_BLOCK:
    return FALSE;

  case PACKET_PLAYER_ATTRIBUTE_CHUNK:
    return FALSE;

  case PACKET_PLAYER_DIPLSTATE:
    return FALSE;

  case PACKET_UNIT_REMOVE:
    return FALSE;

  case PACKET_UNIT_INFO:
    return TRUE;

  case PACKET_UNIT_SHORT_INFO:
    return TRUE;

  case PACKET_UNIT_COMBAT_INFO:
    return FALSE;

  case PACKET_UNIT_MOVE:
    return FALSE;

  case PACKET_UNIT_BUILD_CITY:
    return FALSE;

  case PACKET_UNIT_DISBAND:
    return FALSE;

  case PACKET_UNIT_CHANGE_HOMECITY:
    return FALSE;

  case PACKET_UNIT_ESTABLISH_TRADE:
    return FALSE;

  case PACKET_UNIT_BATTLEGROUP:
    return FALSE;

  case PACKET_UNIT_HELP_BUILD_WONDER:
    return FALSE;

  case PACKET_UNIT_ORDERS:
    return FALSE;

  case PACKET_UNIT_AUTOSETTLERS:
    return FALSE;

  case PACKET_UNIT_LOAD:
    return FALSE;

  case PACKET_UNIT_UNLOAD:
    return FALSE;

  case PACKET_UNIT_UPGRADE:
    return FALSE;

  case PACKET_UNIT_NUKE:
    return FALSE;

  case PACKET_UNIT_PARADROP_TO:
    return FALSE;

  case PACKET_UNIT_AIRLIFT:
    return FALSE;

  case PACKET_UNIT_DIPLOMAT_QUERY:
    return FALSE;

  case PACKET_UNIT_TYPE_UPGRADE:
    return FALSE;

  case PACKET_UNIT_DIPLOMAT_ACTION:
    return FALSE;

  case PACKET_UNIT_DIPLOMAT_ANSWER:
    return FALSE;

  case PACKET_UNIT_CHANGE_ACTIVITY:
    return FALSE;

  case PACKET_UNIT_CHANGE_ACTIVITY_BASE:
    return FALSE;

  case PACKET_UNIT_CHANGE_ACTIVITY_ROAD:
    return FALSE;

  case PACKET_DIPLOMACY_INIT_MEETING_REQ:
    return FALSE;

  case PACKET_DIPLOMACY_INIT_MEETING:
    return FALSE;

  case PACKET_DIPLOMACY_CANCEL_MEETING_REQ:
    return FALSE;

  case PACKET_DIPLOMACY_CANCEL_MEETING:
    return FALSE;

  case PACKET_DIPLOMACY_CREATE_CLAUSE_REQ:
    return FALSE;

  case PACKET_DIPLOMACY_CREATE_CLAUSE:
    return FALSE;

  case PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ:
    return FALSE;

  case PACKET_DIPLOMACY_REMOVE_CLAUSE:
    return FALSE;

  case PACKET_DIPLOMACY_ACCEPT_TREATY_REQ:
    return FALSE;

  case PACKET_DIPLOMACY_ACCEPT_TREATY:
    return FALSE;

  case PACKET_DIPLOMACY_CANCEL_PACT:
    return FALSE;

  case PACKET_PAGE_MSG:
    return FALSE;

  case PACKET_REPORT_REQ:
    return FALSE;

  case PACKET_CONN_INFO:
    return FALSE;

  case PACKET_CONN_PING_INFO:
    return FALSE;

  case PACKET_CONN_PING:
    return FALSE;

  case PACKET_CONN_PONG:
    return FALSE;

  case PACKET_CLIENT_INFO:
    return FALSE;

  case PACKET_END_PHASE:
    return FALSE;

  case PACKET_START_PHASE:
    return FALSE;

  case PACKET_NEW_YEAR:
    return FALSE;

  case PACKET_BEGIN_TURN:
    return FALSE;

  case PACKET_END_TURN:
    return FALSE;

  case PACKET_FREEZE_CLIENT:
    return FALSE;

  case PACKET_THAW_CLIENT:
    return FALSE;

  case PACKET_SPACESHIP_LAUNCH:
    return FALSE;

  case PACKET_SPACESHIP_PLACE:
    return FALSE;

  case PACKET_SPACESHIP_INFO:
    return FALSE;

  case PACKET_RULESET_UNIT:
    return FALSE;

  case PACKET_RULESET_UNIT_BONUS:
    return FALSE;

  case PACKET_RULESET_UNIT_FLAG:
    return FALSE;

  case PACKET_RULESET_GAME:
    return FALSE;

  case PACKET_RULESET_SPECIALIST:
    return FALSE;

  case PACKET_RULESET_GOVERNMENT_RULER_TITLE:
    return FALSE;

  case PACKET_RULESET_TECH:
    return FALSE;

  case PACKET_RULESET_GOVERNMENT:
    return FALSE;

  case PACKET_RULESET_TERRAIN_CONTROL:
    return FALSE;

  case PACKET_RULESETS_READY:
    return FALSE;

  case PACKET_RULESET_NATION_GROUPS:
    return FALSE;

  case PACKET_RULESET_NATION:
    return FALSE;

  case PACKET_RULESET_CITY:
    return FALSE;

  case PACKET_RULESET_BUILDING:
    return FALSE;

  case PACKET_RULESET_TERRAIN:
    return FALSE;

  case PACKET_RULESET_TERRAIN_FLAG:
    return FALSE;

  case PACKET_RULESET_UNIT_CLASS:
    return FALSE;

  case PACKET_RULESET_BASE:
    return FALSE;

  case PACKET_RULESET_ROAD:
    return FALSE;

  case PACKET_RULESET_DISASTER:
    return FALSE;

  case PACKET_RULESET_TRADE:
    return FALSE;

  case PACKET_RULESET_CONTROL:
    return FALSE;

  case PACKET_SINGLE_WANT_HACK_REQ:
    return FALSE;

  case PACKET_SINGLE_WANT_HACK_REPLY:
    return FALSE;

  case PACKET_RULESET_CHOICES:
    return FALSE;

  case PACKET_GAME_LOAD:
    return FALSE;

  case PACKET_SERVER_SETTING_CONTROL:
    return FALSE;

  case PACKET_SERVER_SETTING_CONST:
    return FALSE;

  case PACKET_SERVER_SETTING_BOOL:
    return FALSE;

  case PACKET_SERVER_SETTING_INT:
    return FALSE;

  case PACKET_SERVER_SETTING_STR:
    return FALSE;

  case PACKET_SERVER_SETTING_ENUM:
    return FALSE;

  case PACKET_SERVER_SETTING_BITWISE:
    return FALSE;

  case PACKET_RULESET_EFFECT:
    return FALSE;

  case PACKET_RULESET_EFFECT_REQ:
    return FALSE;

  case PACKET_RULESET_RESOURCE:
    return FALSE;

  case PACKET_SCENARIO_INFO:
    return FALSE;

  case PACKET_SAVE_SCENARIO:
    return FALSE;

  case PACKET_VOTE_NEW:
    return FALSE;

  case PACKET_VOTE_UPDATE:
    return FALSE;

  case PACKET_VOTE_REMOVE:
    return FALSE;

  case PACKET_VOTE_RESOLVE:
    return FALSE;

  case PACKET_VOTE_SUBMIT:
    return FALSE;

  case PACKET_EDIT_MODE:
    return FALSE;

  case PACKET_EDIT_RECALCULATE_BORDERS:
    return FALSE;

  case PACKET_EDIT_CHECK_TILES:
    return FALSE;

  case PACKET_EDIT_TOGGLE_FOGOFWAR:
    return FALSE;

  case PACKET_EDIT_TILE_TERRAIN:
    return FALSE;

  case PACKET_EDIT_TILE_RESOURCE:
    return FALSE;

  case PACKET_EDIT_TILE_SPECIAL:
    return FALSE;

  case PACKET_EDIT_TILE_BASE:
    return FALSE;

  case PACKET_EDIT_TILE_ROAD:
    return FALSE;

  case PACKET_EDIT_STARTPOS:
    return FALSE;

  case PACKET_EDIT_STARTPOS_FULL:
    return FALSE;

  case PACKET_EDIT_TILE:
    return FALSE;

  case PACKET_EDIT_UNIT_CREATE:
    return FALSE;

  case PACKET_EDIT_UNIT_REMOVE:
    return FALSE;

  case PACKET_EDIT_UNIT_REMOVE_BY_ID:
    return FALSE;

  case PACKET_EDIT_UNIT:
    return FALSE;

  case PACKET_EDIT_CITY_CREATE:
    return FALSE;

  case PACKET_EDIT_CITY_REMOVE:
    return FALSE;

  case PACKET_EDIT_CITY:
    return FALSE;

  case PACKET_EDIT_PLAYER_CREATE:
    return FALSE;

  case PACKET_EDIT_PLAYER_REMOVE:
    return FALSE;

  case PACKET_EDIT_PLAYER:
    return FALSE;

  case PACKET_EDIT_PLAYER_VISION:
    return FALSE;

  case PACKET_EDIT_GAME:
    return FALSE;

  case PACKET_EDIT_OBJECT_CREATED:
    return FALSE;

  case PACKET_INFO_TEXT_REQ:
    return FALSE;

  case PACKET_INFO_TEXT_MESSAGE:
    return FALSE;

  case PACKET_GOTO_PATH_REQ:
    return FALSE;

  case PACKET_GOTO_PATH:
    return FALSE;

  default:
    return FALSE;
  }
}

static struct packet_processing_started *receive_packet_processing_started_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_processing_started, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_processing_started_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_processing_started_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_PROCESSING_STARTED);

  log_packet("packet_processing_started_100: sending info about ()");
  SEND_PACKET_END(PACKET_PROCESSING_STARTED);
}

static void ensure_valid_variant_packet_processing_started(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PROCESSING_STARTED] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PROCESSING_STARTED variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PROCESSING_STARTED] = variant;
}

struct packet_processing_started *receive_packet_processing_started(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_processing_started at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_processing_started(pc);

  switch(pc->phs.variant[PACKET_PROCESSING_STARTED]) {
  case 100:
    return receive_packet_processing_started_100(pc);
  default:
    log_debug("Unknown PACKET_PROCESSING_STARTED variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_processing_started(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_processing_started from the client.");
  }
  ensure_valid_variant_packet_processing_started(pc);

  switch(pc->phs.variant[PACKET_PROCESSING_STARTED]) {

  case 100:
    return send_packet_processing_started_100(pc);
  default:
    log_debug("Unknown PACKET_PROCESSING_STARTED variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_processing_finished *receive_packet_processing_finished_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_processing_finished, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_processing_finished_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_processing_finished_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_PROCESSING_FINISHED);

  log_packet("packet_processing_finished_100: sending info about ()");
  SEND_PACKET_END(PACKET_PROCESSING_FINISHED);
}

static void ensure_valid_variant_packet_processing_finished(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PROCESSING_FINISHED] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PROCESSING_FINISHED variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PROCESSING_FINISHED] = variant;
}

struct packet_processing_finished *receive_packet_processing_finished(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_processing_finished at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_processing_finished(pc);

  switch(pc->phs.variant[PACKET_PROCESSING_FINISHED]) {
  case 100:
    return receive_packet_processing_finished_100(pc);
  default:
    log_debug("Unknown PACKET_PROCESSING_FINISHED variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_processing_finished(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_processing_finished from the client.");
  }
  ensure_valid_variant_packet_processing_finished(pc);

  switch(pc->phs.variant[PACKET_PROCESSING_FINISHED]) {

  case 100:
    return send_packet_processing_finished_100(pc);
  default:
    log_debug("Unknown PACKET_PROCESSING_FINISHED variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_join_req *receive_packet_server_join_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_join_req, real_packet);
  if (!dio_get_string(pc->json_packet, "username", real_packet->username, sizeof(real_packet->username))) {
    RECEIVE_PACKET_FIELD_ERROR(username);
  }
  if (!dio_get_string(pc->json_packet, "capability", real_packet->capability, sizeof(real_packet->capability))) {
    RECEIVE_PACKET_FIELD_ERROR(capability);
  }
  if (!dio_get_string(pc->json_packet, "version_label", real_packet->version_label, sizeof(real_packet->version_label))) {
    RECEIVE_PACKET_FIELD_ERROR(version_label);
  }
  if (!dio_get_uint32(pc->json_packet, "major_version", &real_packet->major_version)) {
    RECEIVE_PACKET_FIELD_ERROR(major_version);
  }
  if (!dio_get_uint32(pc->json_packet, "minor_version", &real_packet->minor_version)) {
    RECEIVE_PACKET_FIELD_ERROR(minor_version);
  }
  if (!dio_get_uint32(pc->json_packet, "patch_version", &real_packet->patch_version)) {
    RECEIVE_PACKET_FIELD_ERROR(patch_version);
  }

  log_packet("packet_server_join_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_join_req_100(struct connection *pc, const struct packet_server_join_req *packet)
{
  const struct packet_server_join_req *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_JOIN_REQ);

  log_packet("packet_server_join_req_100: sending info about ()");

  dio_put_string(&dout, "username", real_packet->username);
  dio_put_string(&dout, "capability", real_packet->capability);
  dio_put_string(&dout, "version_label", real_packet->version_label);
  dio_put_uint32(&dout, "major_version", real_packet->major_version);
  dio_put_uint32(&dout, "minor_version", real_packet->minor_version);
  dio_put_uint32(&dout, "patch_version", real_packet->patch_version);

  SEND_PACKET_END(PACKET_SERVER_JOIN_REQ);
}

static void ensure_valid_variant_packet_server_join_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_JOIN_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_JOIN_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_JOIN_REQ] = variant;
}

struct packet_server_join_req *receive_packet_server_join_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_server_join_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_server_join_req(pc);

  switch(pc->phs.variant[PACKET_SERVER_JOIN_REQ]) {
  case 100:
    return receive_packet_server_join_req_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_JOIN_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_join_req(struct connection *pc, const struct packet_server_join_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_server_join_req from the server.");
  }
  ensure_valid_variant_packet_server_join_req(pc);

  switch(pc->phs.variant[PACKET_SERVER_JOIN_REQ]) {

  case 100:
    return send_packet_server_join_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_JOIN_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_server_join_req(struct connection *pc, const char *username, const char *capability, const char *version_label, int major_version, int minor_version, int patch_version)
{
  struct packet_server_join_req packet, *real_packet = &packet;

  sz_strlcpy(real_packet->username, username);
  sz_strlcpy(real_packet->capability, capability);
  sz_strlcpy(real_packet->version_label, version_label);
  real_packet->major_version = major_version;
  real_packet->minor_version = minor_version;
  real_packet->patch_version = patch_version;
  
  return send_packet_server_join_req(pc, real_packet);
}

static struct packet_server_join_reply *receive_packet_server_join_reply_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_join_reply, real_packet);
  if (!dio_get_bool8(pc->json_packet, "you_can_join", &real_packet->you_can_join)) {
    RECEIVE_PACKET_FIELD_ERROR(you_can_join);
  }
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }
  if (!dio_get_string(pc->json_packet, "capability", real_packet->capability, sizeof(real_packet->capability))) {
    RECEIVE_PACKET_FIELD_ERROR(capability);
  }
  if (!dio_get_string(pc->json_packet, "challenge_file", real_packet->challenge_file, sizeof(real_packet->challenge_file))) {
    RECEIVE_PACKET_FIELD_ERROR(challenge_file);
  }
  if (!dio_get_sint16(pc->json_packet, "conn_id", &real_packet->conn_id)) {
    RECEIVE_PACKET_FIELD_ERROR(conn_id);
  }

  log_packet("packet_server_join_reply_100: got info about ()");
  post_receive_packet_server_join_reply(pc, real_packet);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_join_reply_100(struct connection *pc, const struct packet_server_join_reply *packet)
{
  const struct packet_server_join_reply *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_JOIN_REPLY);

  log_packet("packet_server_join_reply_100: sending info about ()");

  dio_put_bool8(&dout, "you_can_join", real_packet->you_can_join);
  dio_put_string(&dout, "message", real_packet->message);
  dio_put_string(&dout, "capability", real_packet->capability);
  dio_put_string(&dout, "challenge_file", real_packet->challenge_file);
  dio_put_sint16(&dout, "conn_id", real_packet->conn_id);

  post_send_packet_server_join_reply(pc, real_packet);
  SEND_PACKET_END(PACKET_SERVER_JOIN_REPLY);
}

static void ensure_valid_variant_packet_server_join_reply(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_JOIN_REPLY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_JOIN_REPLY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_JOIN_REPLY] = variant;
}

struct packet_server_join_reply *receive_packet_server_join_reply(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_join_reply at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_join_reply(pc);

  switch(pc->phs.variant[PACKET_SERVER_JOIN_REPLY]) {
  case 100:
    return receive_packet_server_join_reply_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_JOIN_REPLY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_join_reply(struct connection *pc, const struct packet_server_join_reply *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_join_reply from the client.");
  }
  ensure_valid_variant_packet_server_join_reply(pc);

  switch(pc->phs.variant[PACKET_SERVER_JOIN_REPLY]) {

  case 100:
    return send_packet_server_join_reply_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_JOIN_REPLY variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_authentication_req *receive_packet_authentication_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_authentication_req, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }

  log_packet("packet_authentication_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_authentication_req_100(struct connection *pc, const struct packet_authentication_req *packet)
{
  const struct packet_authentication_req *real_packet = packet;
  SEND_PACKET_START(PACKET_AUTHENTICATION_REQ);

  log_packet("packet_authentication_req_100: sending info about ()");

  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_string(&dout, "message", real_packet->message);

  SEND_PACKET_END(PACKET_AUTHENTICATION_REQ);
}

static void ensure_valid_variant_packet_authentication_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_AUTHENTICATION_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_AUTHENTICATION_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_AUTHENTICATION_REQ] = variant;
}

struct packet_authentication_req *receive_packet_authentication_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_authentication_req at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_authentication_req(pc);

  switch(pc->phs.variant[PACKET_AUTHENTICATION_REQ]) {
  case 100:
    return receive_packet_authentication_req_100(pc);
  default:
    log_debug("Unknown PACKET_AUTHENTICATION_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_authentication_req(struct connection *pc, const struct packet_authentication_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_authentication_req from the client.");
  }
  ensure_valid_variant_packet_authentication_req(pc);

  switch(pc->phs.variant[PACKET_AUTHENTICATION_REQ]) {

  case 100:
    return send_packet_authentication_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_AUTHENTICATION_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_authentication_req(struct connection *pc, enum authentication_type type, const char *message)
{
  struct packet_authentication_req packet, *real_packet = &packet;

  real_packet->type = type;
  sz_strlcpy(real_packet->message, message);
  
  return send_packet_authentication_req(pc, real_packet);
}

static struct packet_authentication_reply *receive_packet_authentication_reply_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_authentication_reply, real_packet);
  if (!dio_get_string(pc->json_packet, "password", real_packet->password, sizeof(real_packet->password))) {
    RECEIVE_PACKET_FIELD_ERROR(password);
  }

  log_packet("packet_authentication_reply_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_authentication_reply_100(struct connection *pc, const struct packet_authentication_reply *packet)
{
  const struct packet_authentication_reply *real_packet = packet;
  SEND_PACKET_START(PACKET_AUTHENTICATION_REPLY);

  log_packet("packet_authentication_reply_100: sending info about ()");

  dio_put_string(&dout, "password", real_packet->password);

  SEND_PACKET_END(PACKET_AUTHENTICATION_REPLY);
}

static void ensure_valid_variant_packet_authentication_reply(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_AUTHENTICATION_REPLY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_AUTHENTICATION_REPLY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_AUTHENTICATION_REPLY] = variant;
}

struct packet_authentication_reply *receive_packet_authentication_reply(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_authentication_reply at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_authentication_reply(pc);

  switch(pc->phs.variant[PACKET_AUTHENTICATION_REPLY]) {
  case 100:
    return receive_packet_authentication_reply_100(pc);
  default:
    log_debug("Unknown PACKET_AUTHENTICATION_REPLY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_authentication_reply(struct connection *pc, const struct packet_authentication_reply *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_authentication_reply from the server.");
  }
  ensure_valid_variant_packet_authentication_reply(pc);

  switch(pc->phs.variant[PACKET_AUTHENTICATION_REPLY]) {

  case 100:
    return send_packet_authentication_reply_100(pc, packet);
  default:
    log_debug("Unknown PACKET_AUTHENTICATION_REPLY variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_shutdown *receive_packet_server_shutdown_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_shutdown, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_server_shutdown_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_shutdown_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_SERVER_SHUTDOWN);

  log_packet("packet_server_shutdown_100: sending info about ()");
  SEND_PACKET_END(PACKET_SERVER_SHUTDOWN);
}

static void ensure_valid_variant_packet_server_shutdown(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SHUTDOWN] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SHUTDOWN variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SHUTDOWN] = variant;
}

struct packet_server_shutdown *receive_packet_server_shutdown(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_shutdown at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_shutdown(pc);

  switch(pc->phs.variant[PACKET_SERVER_SHUTDOWN]) {
  case 100:
    return receive_packet_server_shutdown_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SHUTDOWN variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_shutdown(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_shutdown from the client.");
  }
  ensure_valid_variant_packet_server_shutdown(pc);

  switch(pc->phs.variant[PACKET_SERVER_SHUTDOWN]) {

  case 100:
    return send_packet_server_shutdown_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SHUTDOWN variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_server_shutdown(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_server_shutdown(pconn);
  } conn_list_iterate_end;
}

static struct packet_nation_select_req *receive_packet_nation_select_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_nation_select_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "player_no", &real_packet->player_no)) {
    RECEIVE_PACKET_FIELD_ERROR(player_no);
  }
  if (!dio_get_uint32(pc->json_packet, "nation_no", &real_packet->nation_no)) {
    RECEIVE_PACKET_FIELD_ERROR(nation_no);
  }
  if (!dio_get_bool8(pc->json_packet, "is_male", &real_packet->is_male)) {
    RECEIVE_PACKET_FIELD_ERROR(is_male);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_uint8(pc->json_packet, "city_style", &real_packet->city_style)) {
    RECEIVE_PACKET_FIELD_ERROR(city_style);
  }

  log_packet("packet_nation_select_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_nation_select_req_100(struct connection *pc, const struct packet_nation_select_req *packet)
{
  const struct packet_nation_select_req *real_packet = packet;
  SEND_PACKET_START(PACKET_NATION_SELECT_REQ);

  log_packet("packet_nation_select_req_100: sending info about ()");

  dio_put_sint8(&dout, "player_no", real_packet->player_no);
  dio_put_uint32(&dout, "nation_no", real_packet->nation_no);
  dio_put_bool8(&dout, "is_male", real_packet->is_male);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_uint8(&dout, "city_style", real_packet->city_style);

  SEND_PACKET_END(PACKET_NATION_SELECT_REQ);
}

static void ensure_valid_variant_packet_nation_select_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_NATION_SELECT_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_NATION_SELECT_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_NATION_SELECT_REQ] = variant;
}

struct packet_nation_select_req *receive_packet_nation_select_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_nation_select_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_nation_select_req(pc);

  switch(pc->phs.variant[PACKET_NATION_SELECT_REQ]) {
  case 100:
    return receive_packet_nation_select_req_100(pc);
  default:
    log_debug("Unknown PACKET_NATION_SELECT_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_nation_select_req(struct connection *pc, const struct packet_nation_select_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_nation_select_req from the server.");
  }
  ensure_valid_variant_packet_nation_select_req(pc);

  switch(pc->phs.variant[PACKET_NATION_SELECT_REQ]) {

  case 100:
    return send_packet_nation_select_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_NATION_SELECT_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_nation_select_req(struct connection *pc, int player_no, int nation_no, bool is_male, const char *name, int city_style)
{
  struct packet_nation_select_req packet, *real_packet = &packet;

  real_packet->player_no = player_no;
  real_packet->nation_no = nation_no;
  real_packet->is_male = is_male;
  sz_strlcpy(real_packet->name, name);
  real_packet->city_style = city_style;
  
  return send_packet_nation_select_req(pc, real_packet);
}

static struct packet_player_ready *receive_packet_player_ready_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_ready, real_packet);
  if (!dio_get_sint8(pc->json_packet, "player_no", &real_packet->player_no)) {
    RECEIVE_PACKET_FIELD_ERROR(player_no);
  }
  if (!dio_get_bool8(pc->json_packet, "is_ready", &real_packet->is_ready)) {
    RECEIVE_PACKET_FIELD_ERROR(is_ready);
  }

  log_packet("packet_player_ready_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_ready_100(struct connection *pc, const struct packet_player_ready *packet)
{
  const struct packet_player_ready *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_READY);

  log_packet("packet_player_ready_100: sending info about ()");

  dio_put_sint8(&dout, "player_no", real_packet->player_no);
  dio_put_bool8(&dout, "is_ready", real_packet->is_ready);

  SEND_PACKET_END(PACKET_PLAYER_READY);
}

static void ensure_valid_variant_packet_player_ready(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_READY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_READY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_READY] = variant;
}

struct packet_player_ready *receive_packet_player_ready(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_ready at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_ready(pc);

  switch(pc->phs.variant[PACKET_PLAYER_READY]) {
  case 100:
    return receive_packet_player_ready_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_READY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_ready(struct connection *pc, const struct packet_player_ready *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_ready from the server.");
  }
  ensure_valid_variant_packet_player_ready(pc);

  switch(pc->phs.variant[PACKET_PLAYER_READY]) {

  case 100:
    return send_packet_player_ready_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_READY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_ready(struct connection *pc, int player_no, bool is_ready)
{
  struct packet_player_ready packet, *real_packet = &packet;

  real_packet->player_no = player_no;
  real_packet->is_ready = is_ready;
  
  return send_packet_player_ready(pc, real_packet);
}

static struct packet_endgame_report *receive_packet_endgame_report_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_endgame_report, real_packet);
  if (!dio_get_uint8(pc->json_packet, "category_num", &real_packet->category_num)) {
    RECEIVE_PACKET_FIELD_ERROR(category_num);
  }
  
  {
    int i;
  
    if (real_packet->category_num > 32) {
      RECEIVE_PACKET_FIELD_ERROR(category_name, ": truncation array");
    }
    for (i = 0; i < real_packet->category_num; i++) {
      if (!dio_get_string(pc->json_packet, "category_name", real_packet->category_name[i], sizeof(real_packet->category_name[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(category_name);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "player_num", &real_packet->player_num)) {
    RECEIVE_PACKET_FIELD_ERROR(player_num);
  }

  log_packet("packet_endgame_report_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_endgame_report_100(struct connection *pc, const struct packet_endgame_report *packet)
{
  const struct packet_endgame_report *real_packet = packet;
  SEND_PACKET_START(PACKET_ENDGAME_REPORT);

  log_packet("packet_endgame_report_100: sending info about ()");

  dio_put_uint8(&dout, "category_num", real_packet->category_num);

    {
        /* dio_put_string(&dout, "category_name", real_packet->category_name[i]); */
    } 
  dio_put_uint8(&dout, "player_num", real_packet->player_num);

  SEND_PACKET_END(PACKET_ENDGAME_REPORT);
}

static void ensure_valid_variant_packet_endgame_report(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_ENDGAME_REPORT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_ENDGAME_REPORT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_ENDGAME_REPORT] = variant;
}

struct packet_endgame_report *receive_packet_endgame_report(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_endgame_report at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_endgame_report(pc);

  switch(pc->phs.variant[PACKET_ENDGAME_REPORT]) {
  case 100:
    return receive_packet_endgame_report_100(pc);
  default:
    log_debug("Unknown PACKET_ENDGAME_REPORT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_endgame_report(struct connection *pc, const struct packet_endgame_report *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_endgame_report from the client.");
  }
  ensure_valid_variant_packet_endgame_report(pc);

  switch(pc->phs.variant[PACKET_ENDGAME_REPORT]) {

  case 100:
    return send_packet_endgame_report_100(pc, packet);
  default:
    log_debug("Unknown PACKET_ENDGAME_REPORT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_endgame_report(struct conn_list *dest, const struct packet_endgame_report *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_endgame_report(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_endgame_player *receive_packet_endgame_player_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_endgame_player, real_packet);
  if (!dio_get_uint8(pc->json_packet, "category_num", &real_packet->category_num)) {
    RECEIVE_PACKET_FIELD_ERROR(category_num);
  }
  if (!dio_get_sint8(pc->json_packet, "player_id", &real_packet->player_id)) {
    RECEIVE_PACKET_FIELD_ERROR(player_id);
  }
  if (!dio_get_uint32(pc->json_packet, "score", &real_packet->score)) {
    RECEIVE_PACKET_FIELD_ERROR(score);
  }
  
  {
    int i;
  
    if (real_packet->category_num > 32) {
      RECEIVE_PACKET_FIELD_ERROR(category_score, ": truncation array");
    }
    for (i = 0; i < real_packet->category_num; i++) {
      if (!dio_get_uint32(pc->json_packet, "category_score", &real_packet->category_score[i])) {
        RECEIVE_PACKET_FIELD_ERROR(category_score);
      }
    }
  }

  log_packet("packet_endgame_player_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_endgame_player_100(struct connection *pc, const struct packet_endgame_player *packet)
{
  const struct packet_endgame_player *real_packet = packet;
  SEND_PACKET_START(PACKET_ENDGAME_PLAYER);

  log_packet("packet_endgame_player_100: sending info about ()");

  dio_put_uint8(&dout, "category_num", real_packet->category_num);
  dio_put_sint8(&dout, "player_id", real_packet->player_id);
  dio_put_uint32(&dout, "score", real_packet->score);

    {
        dio_put_array_uint32(&dout, "category_score", (void *)real_packet->category_score, real_packet->category_num);
    } 

  SEND_PACKET_END(PACKET_ENDGAME_PLAYER);
}

static void ensure_valid_variant_packet_endgame_player(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_ENDGAME_PLAYER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_ENDGAME_PLAYER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_ENDGAME_PLAYER] = variant;
}

struct packet_endgame_player *receive_packet_endgame_player(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_endgame_player at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_endgame_player(pc);

  switch(pc->phs.variant[PACKET_ENDGAME_PLAYER]) {
  case 100:
    return receive_packet_endgame_player_100(pc);
  default:
    log_debug("Unknown PACKET_ENDGAME_PLAYER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_endgame_player(struct connection *pc, const struct packet_endgame_player *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_endgame_player from the client.");
  }
  ensure_valid_variant_packet_endgame_player(pc);

  switch(pc->phs.variant[PACKET_ENDGAME_PLAYER]) {

  case 100:
    return send_packet_endgame_player_100(pc, packet);
  default:
    log_debug("Unknown PACKET_ENDGAME_PLAYER variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_endgame_player(struct conn_list *dest, const struct packet_endgame_player *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_endgame_player(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_tile_info *receive_packet_tile_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_tile_info, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint16(pc->json_packet, "continent", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(continent);
    }
    real_packet->continent = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "known", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(known);
    }
    real_packet->known = readin;
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint8(pc->json_packet, "extras_owner", &real_packet->extras_owner)) {
    RECEIVE_PACKET_FIELD_ERROR(extras_owner);
  }
  if (!dio_get_uint32(pc->json_packet, "worked", &real_packet->worked)) {
    RECEIVE_PACKET_FIELD_ERROR(worked);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "terrain", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(terrain);
    }
    real_packet->terrain = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "resource", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(resource);
    }
    real_packet->resource = readin;
  }
  
  {
    int i;
  
    for (i = 0; i < S_LAST; i++) {
      if (!dio_get_bool8(pc->json_packet, "special", &real_packet->special[i])) {
        RECEIVE_PACKET_FIELD_ERROR(special);
      }
    }
  }
  if (!dio_get_string(pc->json_packet, "bases", real_packet->bases, sizeof(real_packet->bases))) {
    RECEIVE_PACKET_FIELD_ERROR(bases);
  }
  if (!dio_get_string(pc->json_packet, "roads", real_packet->roads, sizeof(real_packet->roads))) {
    RECEIVE_PACKET_FIELD_ERROR(roads);
  }
  if (!dio_get_string(pc->json_packet, "spec_sprite", real_packet->spec_sprite, sizeof(real_packet->spec_sprite))) {
    RECEIVE_PACKET_FIELD_ERROR(spec_sprite);
  }
  if (!dio_get_string(pc->json_packet, "label", real_packet->label, sizeof(real_packet->label))) {
    RECEIVE_PACKET_FIELD_ERROR(label);
  }

  log_packet("packet_tile_info_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_tile_info_100(struct connection *pc, const struct packet_tile_info *packet)
{
  const struct packet_tile_info *real_packet = packet;
  SEND_PACKET_START(PACKET_TILE_INFO);

  log_packet("packet_tile_info_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint16(&dout, "continent", real_packet->continent);
  dio_put_uint8(&dout, "known", real_packet->known);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint8(&dout, "extras_owner", real_packet->extras_owner);
  dio_put_uint32(&dout, "worked", real_packet->worked);
  dio_put_uint8(&dout, "terrain", real_packet->terrain);
  dio_put_uint8(&dout, "resource", real_packet->resource);

    {
        dio_put_array_bool8(&dout, "special", (void *)real_packet->special, S_LAST);
    } 
  dio_put_string(&dout, "bases", real_packet->bases);
  dio_put_string(&dout, "roads", real_packet->roads);
  dio_put_string(&dout, "spec_sprite", real_packet->spec_sprite);
  dio_put_string(&dout, "label", real_packet->label);

  SEND_PACKET_END(PACKET_TILE_INFO);
}

static void ensure_valid_variant_packet_tile_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_TILE_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_TILE_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_TILE_INFO] = variant;
}

struct packet_tile_info *receive_packet_tile_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_tile_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_tile_info(pc);

  switch(pc->phs.variant[PACKET_TILE_INFO]) {
  case 100:
    return receive_packet_tile_info_100(pc);
  default:
    log_debug("Unknown PACKET_TILE_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_tile_info(struct connection *pc, const struct packet_tile_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_tile_info from the client.");
  }
  ensure_valid_variant_packet_tile_info(pc);

  switch(pc->phs.variant[PACKET_TILE_INFO]) {

  case 100:
    return send_packet_tile_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_TILE_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_tile_info(struct conn_list *dest, const struct packet_tile_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_tile_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_game_info *receive_packet_game_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_game_info, real_packet);
  if (!dio_get_uint8(pc->json_packet, "add_to_size_limit", &real_packet->add_to_size_limit)) {
    RECEIVE_PACKET_FIELD_ERROR(add_to_size_limit);
  }
  if (!dio_get_uint32(pc->json_packet, "aifill", &real_packet->aifill)) {
    RECEIVE_PACKET_FIELD_ERROR(aifill);
  }
  if (!dio_get_uint32(pc->json_packet, "mapsize", &real_packet->mapsize)) {
    RECEIVE_PACKET_FIELD_ERROR(mapsize);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "airlifting_style", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(airlifting_style);
    }
    real_packet->airlifting_style = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "angrycitizen", &real_packet->angrycitizen)) {
    RECEIVE_PACKET_FIELD_ERROR(angrycitizen);
  }
  if (!dio_get_sint16(pc->json_packet, "base_pollution", &real_packet->base_pollution)) {
    RECEIVE_PACKET_FIELD_ERROR(base_pollution);
  }
  if (!dio_get_uint8(pc->json_packet, "base_tech_cost", &real_packet->base_tech_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(base_tech_cost);
  }
  if (!dio_get_uint8(pc->json_packet, "border_city_radius_sq", &real_packet->border_city_radius_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(border_city_radius_sq);
  }
  if (!dio_get_uint8(pc->json_packet, "border_size_effect", &real_packet->border_size_effect)) {
    RECEIVE_PACKET_FIELD_ERROR(border_size_effect);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "borders", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(borders);
    }
    real_packet->borders = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "base_bribe_cost", &real_packet->base_bribe_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(base_bribe_cost);
  }
  if (!dio_get_bool8(pc->json_packet, "calendar_skip_0", &real_packet->calendar_skip_0)) {
    RECEIVE_PACKET_FIELD_ERROR(calendar_skip_0);
  }
  if (!dio_get_uint8(pc->json_packet, "celebratesize", &real_packet->celebratesize)) {
    RECEIVE_PACKET_FIELD_ERROR(celebratesize);
  }
  if (!dio_get_bool8(pc->json_packet, "changable_tax", &real_packet->changable_tax)) {
    RECEIVE_PACKET_FIELD_ERROR(changable_tax);
  }
  if (!dio_get_uint8(pc->json_packet, "pop_report_zeroes", &real_packet->pop_report_zeroes)) {
    RECEIVE_PACKET_FIELD_ERROR(pop_report_zeroes);
  }
  if (!dio_get_bool8(pc->json_packet, "citizen_nationality", &real_packet->citizen_nationality)) {
    RECEIVE_PACKET_FIELD_ERROR(citizen_nationality);
  }
  if (!dio_get_uint32(pc->json_packet, "citizen_convert_speed", &real_packet->citizen_convert_speed)) {
    RECEIVE_PACKET_FIELD_ERROR(citizen_convert_speed);
  }
  if (!dio_get_uint8(pc->json_packet, "citizen_partisans_pct", &real_packet->citizen_partisans_pct)) {
    RECEIVE_PACKET_FIELD_ERROR(citizen_partisans_pct);
  }
  if (!dio_get_uint8(pc->json_packet, "citymindist", &real_packet->citymindist)) {
    RECEIVE_PACKET_FIELD_ERROR(citymindist);
  }
  if (!dio_get_uint32(pc->json_packet, "cooling", &real_packet->cooling)) {
    RECEIVE_PACKET_FIELD_ERROR(cooling);
  }
  if (!dio_get_uint32(pc->json_packet, "coolinglevel", &real_packet->coolinglevel)) {
    RECEIVE_PACKET_FIELD_ERROR(coolinglevel);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "diplomacy", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(diplomacy);
    }
    real_packet->diplomacy = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "fogofwar", &real_packet->fogofwar)) {
    RECEIVE_PACKET_FIELD_ERROR(fogofwar);
  }
  if (!dio_get_uint8(pc->json_packet, "food_cost", &real_packet->food_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(food_cost);
  }
  if (!dio_get_uint32(pc->json_packet, "foodbox", &real_packet->foodbox)) {
    RECEIVE_PACKET_FIELD_ERROR(foodbox);
  }
  if (!dio_get_uint8(pc->json_packet, "forced_gold", &real_packet->forced_gold)) {
    RECEIVE_PACKET_FIELD_ERROR(forced_gold);
  }
  if (!dio_get_uint8(pc->json_packet, "forced_luxury", &real_packet->forced_luxury)) {
    RECEIVE_PACKET_FIELD_ERROR(forced_luxury);
  }
  if (!dio_get_uint8(pc->json_packet, "forced_science", &real_packet->forced_science)) {
    RECEIVE_PACKET_FIELD_ERROR(forced_science);
  }
  if (!dio_get_uint8(pc->json_packet, "fulltradesize", &real_packet->fulltradesize)) {
    RECEIVE_PACKET_FIELD_ERROR(fulltradesize);
  }
  
  {
    int i;
  
    for (i = 0; i < A_LAST; i++) {
      if (!dio_get_bool8(pc->json_packet, "global_advances", &real_packet->global_advances[i])) {
        RECEIVE_PACKET_FIELD_ERROR(global_advances);
      }
    }
  }
  if (!dio_get_bool8(pc->json_packet, "global_warming", &real_packet->global_warming)) {
    RECEIVE_PACKET_FIELD_ERROR(global_warming);
  }
  if (!dio_get_uint32(pc->json_packet, "globalwarming", &real_packet->globalwarming)) {
    RECEIVE_PACKET_FIELD_ERROR(globalwarming);
  }
  if (!dio_get_uint32(pc->json_packet, "gold", &real_packet->gold)) {
    RECEIVE_PACKET_FIELD_ERROR(gold);
  }
  if (!dio_get_uint8(pc->json_packet, "gold_upkeep_style", &real_packet->gold_upkeep_style)) {
    RECEIVE_PACKET_FIELD_ERROR(gold_upkeep_style);
  }
  if (!dio_get_uint8(pc->json_packet, "government_during_revolution_id", &real_packet->government_during_revolution_id)) {
    RECEIVE_PACKET_FIELD_ERROR(government_during_revolution_id);
  }
  if (!dio_get_uint8(pc->json_packet, "granary_food_inc", &real_packet->granary_food_inc)) {
    RECEIVE_PACKET_FIELD_ERROR(granary_food_inc);
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_GRANARY_INIS; i++) {
      if (!dio_get_uint8(pc->json_packet, "granary_food_ini", &real_packet->granary_food_ini[i])) {
        RECEIVE_PACKET_FIELD_ERROR(granary_food_ini);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "granary_num_inis", &real_packet->granary_num_inis)) {
    RECEIVE_PACKET_FIELD_ERROR(granary_num_inis);
  }
  
  {
    int i;
  
    for (i = 0; i < B_LAST; i++) {
      if (!dio_get_sint8(pc->json_packet, "great_wonder_owners", &real_packet->great_wonder_owners[i])) {
        RECEIVE_PACKET_FIELD_ERROR(great_wonder_owners);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "happy_cost", &real_packet->happy_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(happy_cost);
  }
  if (!dio_get_bool8(pc->json_packet, "happyborders", &real_packet->happyborders)) {
    RECEIVE_PACKET_FIELD_ERROR(happyborders);
  }
  if (!dio_get_uint32(pc->json_packet, "heating", &real_packet->heating)) {
    RECEIVE_PACKET_FIELD_ERROR(heating);
  }
  if (!dio_get_uint8(pc->json_packet, "illness_base_factor", &real_packet->illness_base_factor)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_base_factor);
  }
  if (!dio_get_uint8(pc->json_packet, "illness_min_size", &real_packet->illness_min_size)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_min_size);
  }
  if (!dio_get_bool8(pc->json_packet, "illness_on", &real_packet->illness_on)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_on);
  }
  if (!dio_get_uint8(pc->json_packet, "illness_pollution_factor", &real_packet->illness_pollution_factor)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_pollution_factor);
  }
  if (!dio_get_uint8(pc->json_packet, "illness_trade_infection", &real_packet->illness_trade_infection)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_trade_infection);
  }
  if (!dio_get_uint8(pc->json_packet, "init_city_radius_sq", &real_packet->init_city_radius_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(init_city_radius_sq);
  }
  if (!dio_get_bool8(pc->json_packet, "is_edit_mode", &real_packet->is_edit_mode)) {
    RECEIVE_PACKET_FIELD_ERROR(is_edit_mode);
  }
  if (!dio_get_bool8(pc->json_packet, "is_new_game", &real_packet->is_new_game)) {
    RECEIVE_PACKET_FIELD_ERROR(is_new_game);
  }
  if (!dio_get_bool8(pc->json_packet, "killcitizen", &real_packet->killcitizen)) {
    RECEIVE_PACKET_FIELD_ERROR(killcitizen);
  }
  if (!dio_get_bool8(pc->json_packet, "killstack", &real_packet->killstack)) {
    RECEIVE_PACKET_FIELD_ERROR(killstack);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "min_city_center_output", &real_packet->min_city_center_output[i])) {
        RECEIVE_PACKET_FIELD_ERROR(min_city_center_output);
      }
    }
  }
  if (!dio_get_string(pc->json_packet, "negative_year_label", real_packet->negative_year_label, sizeof(real_packet->negative_year_label))) {
    RECEIVE_PACKET_FIELD_ERROR(negative_year_label);
  }
  if (!dio_get_uint8(pc->json_packet, "notradesize", &real_packet->notradesize)) {
    RECEIVE_PACKET_FIELD_ERROR(notradesize);
  }
  if (!dio_get_bool8(pc->json_packet, "nuclear_winter", &real_packet->nuclear_winter)) {
    RECEIVE_PACKET_FIELD_ERROR(nuclear_winter);
  }
  if (!dio_get_uint32(pc->json_packet, "nuclearwinter", &real_packet->nuclearwinter)) {
    RECEIVE_PACKET_FIELD_ERROR(nuclearwinter);
  }
  if (!dio_get_sint16(pc->json_packet, "phase", &real_packet->phase)) {
    RECEIVE_PACKET_FIELD_ERROR(phase);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "phase_mode", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(phase_mode);
    }
    real_packet->phase_mode = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "pillage_select", &real_packet->pillage_select)) {
    RECEIVE_PACKET_FIELD_ERROR(pillage_select);
  }
  if (!dio_get_string(pc->json_packet, "positive_year_label", real_packet->positive_year_label, sizeof(real_packet->positive_year_label))) {
    RECEIVE_PACKET_FIELD_ERROR(positive_year_label);
  }
  if (!dio_get_uint8(pc->json_packet, "rapturedelay", &real_packet->rapturedelay)) {
    RECEIVE_PACKET_FIELD_ERROR(rapturedelay);
  }
  if (!dio_get_uint32(pc->json_packet, "disasters", &real_packet->disasters)) {
    RECEIVE_PACKET_FIELD_ERROR(disasters);
  }
  if (!dio_get_bool8(pc->json_packet, "restrictinfra", &real_packet->restrictinfra)) {
    RECEIVE_PACKET_FIELD_ERROR(restrictinfra);
  }
  if (!dio_get_bool8(pc->json_packet, "unreachable_protects", &real_packet->unreachable_protects)) {
    RECEIVE_PACKET_FIELD_ERROR(unreachable_protects);
  }
  if (!dio_get_uint32(pc->json_packet, "sciencebox", &real_packet->sciencebox)) {
    RECEIVE_PACKET_FIELD_ERROR(sciencebox);
  }
  if (!dio_get_float(pc->json_packet, "seconds_to_phasedone", &real_packet->seconds_to_phasedone, 100)) {
    RECEIVE_PACKET_FIELD_ERROR(seconds_to_phasedone);
  }
  if (!dio_get_uint32(pc->json_packet, "shieldbox", &real_packet->shieldbox)) {
    RECEIVE_PACKET_FIELD_ERROR(shieldbox);
  }
  if (!dio_get_uint32(pc->json_packet, "skill_level", &real_packet->skill_level)) {
    RECEIVE_PACKET_FIELD_ERROR(skill_level);
  }
  if (!dio_get_bool8(pc->json_packet, "slow_invasions", &real_packet->slow_invasions)) {
    RECEIVE_PACKET_FIELD_ERROR(slow_invasions);
  }
  if (!dio_get_bool8(pc->json_packet, "spacerace", &real_packet->spacerace)) {
    RECEIVE_PACKET_FIELD_ERROR(spacerace);
  }
  if (!dio_get_bool8(pc->json_packet, "team_pooled_research", &real_packet->team_pooled_research)) {
    RECEIVE_PACKET_FIELD_ERROR(team_pooled_research);
  }
  if (!dio_get_uint32(pc->json_packet, "tech", &real_packet->tech)) {
    RECEIVE_PACKET_FIELD_ERROR(tech);
  }
  if (!dio_get_uint8(pc->json_packet, "tech_cost_style", &real_packet->tech_cost_style)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_cost_style);
  }
  if (!dio_get_uint8(pc->json_packet, "tech_leakage", &real_packet->tech_leakage)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_leakage);
  }
  if (!dio_get_uint32(pc->json_packet, "tech_upkeep_divider", &real_packet->tech_upkeep_divider)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_upkeep_divider);
  }
  if (!dio_get_uint8(pc->json_packet, "tech_upkeep_style", &real_packet->tech_upkeep_style)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_upkeep_style);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "free_tech_method", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(free_tech_method);
    }
    real_packet->free_tech_method = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "gameloss_style", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(gameloss_style);
    }
    real_packet->gameloss_style = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "timeout", &real_packet->timeout)) {
    RECEIVE_PACKET_FIELD_ERROR(timeout);
  }
  if (!dio_get_bool8(pc->json_packet, "tired_attack", &real_packet->tired_attack)) {
    RECEIVE_PACKET_FIELD_ERROR(tired_attack);
  }
  if (!dio_get_uint32(pc->json_packet, "trademindist", &real_packet->trademindist)) {
    RECEIVE_PACKET_FIELD_ERROR(trademindist);
  }
  if (!dio_get_bool8(pc->json_packet, "trading_city", &real_packet->trading_city)) {
    RECEIVE_PACKET_FIELD_ERROR(trading_city);
  }
  if (!dio_get_bool8(pc->json_packet, "trading_gold", &real_packet->trading_gold)) {
    RECEIVE_PACKET_FIELD_ERROR(trading_gold);
  }
  if (!dio_get_bool8(pc->json_packet, "trading_tech", &real_packet->trading_tech)) {
    RECEIVE_PACKET_FIELD_ERROR(trading_tech);
  }
  if (!dio_get_sint16(pc->json_packet, "turn", &real_packet->turn)) {
    RECEIVE_PACKET_FIELD_ERROR(turn);
  }
  if (!dio_get_uint32(pc->json_packet, "warminglevel", &real_packet->warminglevel)) {
    RECEIVE_PACKET_FIELD_ERROR(warminglevel);
  }
  if (!dio_get_sint32(pc->json_packet, "year", &real_packet->year)) {
    RECEIVE_PACKET_FIELD_ERROR(year);
  }
  if (!dio_get_bool8(pc->json_packet, "year_0_hack", &real_packet->year_0_hack)) {
    RECEIVE_PACKET_FIELD_ERROR(year_0_hack);
  }
  if (!dio_get_bool8(pc->json_packet, "civil_war_enabled", &real_packet->civil_war_enabled)) {
    RECEIVE_PACKET_FIELD_ERROR(civil_war_enabled);
  }
  if (!dio_get_bool8(pc->json_packet, "paradrop_to_transport", &real_packet->paradrop_to_transport)) {
    RECEIVE_PACKET_FIELD_ERROR(paradrop_to_transport);
  }

  log_packet("packet_game_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_game_info_100(struct connection *pc, const struct packet_game_info *packet)
{
  const struct packet_game_info *real_packet = packet;
  SEND_PACKET_START(PACKET_GAME_INFO);

  log_packet("packet_game_info_100: sending info about ()");

  dio_put_uint8(&dout, "add_to_size_limit", real_packet->add_to_size_limit);
  dio_put_uint32(&dout, "aifill", real_packet->aifill);
  dio_put_uint32(&dout, "mapsize", real_packet->mapsize);
  dio_put_uint8(&dout, "airlifting_style", real_packet->airlifting_style);
  dio_put_uint8(&dout, "angrycitizen", real_packet->angrycitizen);
  dio_put_sint16(&dout, "base_pollution", real_packet->base_pollution);
  dio_put_uint8(&dout, "base_tech_cost", real_packet->base_tech_cost);
  dio_put_uint8(&dout, "border_city_radius_sq", real_packet->border_city_radius_sq);
  dio_put_uint8(&dout, "border_size_effect", real_packet->border_size_effect);
  dio_put_uint8(&dout, "borders", real_packet->borders);
  dio_put_uint32(&dout, "base_bribe_cost", real_packet->base_bribe_cost);
  dio_put_bool8(&dout, "calendar_skip_0", real_packet->calendar_skip_0);
  dio_put_uint8(&dout, "celebratesize", real_packet->celebratesize);
  dio_put_bool8(&dout, "changable_tax", real_packet->changable_tax);
  dio_put_uint8(&dout, "pop_report_zeroes", real_packet->pop_report_zeroes);
  dio_put_bool8(&dout, "citizen_nationality", real_packet->citizen_nationality);
  dio_put_uint32(&dout, "citizen_convert_speed", real_packet->citizen_convert_speed);
  dio_put_uint8(&dout, "citizen_partisans_pct", real_packet->citizen_partisans_pct);
  dio_put_uint8(&dout, "citymindist", real_packet->citymindist);
  dio_put_uint32(&dout, "cooling", real_packet->cooling);
  dio_put_uint32(&dout, "coolinglevel", real_packet->coolinglevel);
  dio_put_uint8(&dout, "diplomacy", real_packet->diplomacy);
  dio_put_bool8(&dout, "fogofwar", real_packet->fogofwar);
  dio_put_uint8(&dout, "food_cost", real_packet->food_cost);
  dio_put_uint32(&dout, "foodbox", real_packet->foodbox);
  dio_put_uint8(&dout, "forced_gold", real_packet->forced_gold);
  dio_put_uint8(&dout, "forced_luxury", real_packet->forced_luxury);
  dio_put_uint8(&dout, "forced_science", real_packet->forced_science);
  dio_put_uint8(&dout, "fulltradesize", real_packet->fulltradesize);

    {
        dio_put_array_bool8(&dout, "global_advances", (void *)real_packet->global_advances, A_LAST);
    } 
  dio_put_bool8(&dout, "global_warming", real_packet->global_warming);
  dio_put_uint32(&dout, "globalwarming", real_packet->globalwarming);
  dio_put_uint32(&dout, "gold", real_packet->gold);
  dio_put_uint8(&dout, "gold_upkeep_style", real_packet->gold_upkeep_style);
  dio_put_uint8(&dout, "government_during_revolution_id", real_packet->government_during_revolution_id);
  dio_put_uint8(&dout, "granary_food_inc", real_packet->granary_food_inc);

    {
        dio_put_array_uint8(&dout, "granary_food_ini", (void *)real_packet->granary_food_ini, MAX_GRANARY_INIS);
    } 
  dio_put_uint8(&dout, "granary_num_inis", real_packet->granary_num_inis);

    {
        dio_put_array_sint8(&dout, "great_wonder_owners", (void *)real_packet->great_wonder_owners, B_LAST);
    } 
  dio_put_uint8(&dout, "happy_cost", real_packet->happy_cost);
  dio_put_bool8(&dout, "happyborders", real_packet->happyborders);
  dio_put_uint32(&dout, "heating", real_packet->heating);
  dio_put_uint8(&dout, "illness_base_factor", real_packet->illness_base_factor);
  dio_put_uint8(&dout, "illness_min_size", real_packet->illness_min_size);
  dio_put_bool8(&dout, "illness_on", real_packet->illness_on);
  dio_put_uint8(&dout, "illness_pollution_factor", real_packet->illness_pollution_factor);
  dio_put_uint8(&dout, "illness_trade_infection", real_packet->illness_trade_infection);
  dio_put_uint8(&dout, "init_city_radius_sq", real_packet->init_city_radius_sq);
  dio_put_bool8(&dout, "is_edit_mode", real_packet->is_edit_mode);
  dio_put_bool8(&dout, "is_new_game", real_packet->is_new_game);
  dio_put_bool8(&dout, "killcitizen", real_packet->killcitizen);
  dio_put_bool8(&dout, "killstack", real_packet->killstack);

    {
        dio_put_array_uint8(&dout, "min_city_center_output", (void *)real_packet->min_city_center_output, O_LAST);
    } 
  dio_put_string(&dout, "negative_year_label", real_packet->negative_year_label);
  dio_put_uint8(&dout, "notradesize", real_packet->notradesize);
  dio_put_bool8(&dout, "nuclear_winter", real_packet->nuclear_winter);
  dio_put_uint32(&dout, "nuclearwinter", real_packet->nuclearwinter);
  dio_put_sint16(&dout, "phase", real_packet->phase);
  dio_put_uint8(&dout, "phase_mode", real_packet->phase_mode);
  dio_put_bool8(&dout, "pillage_select", real_packet->pillage_select);
  dio_put_string(&dout, "positive_year_label", real_packet->positive_year_label);
  dio_put_uint8(&dout, "rapturedelay", real_packet->rapturedelay);
  dio_put_uint32(&dout, "disasters", real_packet->disasters);
  dio_put_bool8(&dout, "restrictinfra", real_packet->restrictinfra);
  dio_put_bool8(&dout, "unreachable_protects", real_packet->unreachable_protects);
  dio_put_uint32(&dout, "sciencebox", real_packet->sciencebox);
  dio_put_float(&dout, "seconds_to_phasedone", real_packet->seconds_to_phasedone, 100);
  dio_put_uint32(&dout, "shieldbox", real_packet->shieldbox);
  dio_put_uint32(&dout, "skill_level", real_packet->skill_level);
  dio_put_bool8(&dout, "slow_invasions", real_packet->slow_invasions);
  dio_put_bool8(&dout, "spacerace", real_packet->spacerace);
  dio_put_bool8(&dout, "team_pooled_research", real_packet->team_pooled_research);
  dio_put_uint32(&dout, "tech", real_packet->tech);
  dio_put_uint8(&dout, "tech_cost_style", real_packet->tech_cost_style);
  dio_put_uint8(&dout, "tech_leakage", real_packet->tech_leakage);
  dio_put_uint32(&dout, "tech_upkeep_divider", real_packet->tech_upkeep_divider);
  dio_put_uint8(&dout, "tech_upkeep_style", real_packet->tech_upkeep_style);
  dio_put_uint8(&dout, "free_tech_method", real_packet->free_tech_method);
  dio_put_uint8(&dout, "gameloss_style", real_packet->gameloss_style);
  dio_put_uint32(&dout, "timeout", real_packet->timeout);
  dio_put_bool8(&dout, "tired_attack", real_packet->tired_attack);
  dio_put_uint32(&dout, "trademindist", real_packet->trademindist);
  dio_put_bool8(&dout, "trading_city", real_packet->trading_city);
  dio_put_bool8(&dout, "trading_gold", real_packet->trading_gold);
  dio_put_bool8(&dout, "trading_tech", real_packet->trading_tech);
  dio_put_sint16(&dout, "turn", real_packet->turn);
  dio_put_uint32(&dout, "warminglevel", real_packet->warminglevel);
  dio_put_sint32(&dout, "year", real_packet->year);
  dio_put_bool8(&dout, "year_0_hack", real_packet->year_0_hack);
  dio_put_bool8(&dout, "civil_war_enabled", real_packet->civil_war_enabled);
  dio_put_bool8(&dout, "paradrop_to_transport", real_packet->paradrop_to_transport);

  SEND_PACKET_END(PACKET_GAME_INFO);
}

static void ensure_valid_variant_packet_game_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_GAME_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_GAME_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_GAME_INFO] = variant;
}

struct packet_game_info *receive_packet_game_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_game_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_game_info(pc);

  switch(pc->phs.variant[PACKET_GAME_INFO]) {
  case 100:
    return receive_packet_game_info_100(pc);
  default:
    log_debug("Unknown PACKET_GAME_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_game_info(struct connection *pc, const struct packet_game_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_game_info from the client.");
  }
  ensure_valid_variant_packet_game_info(pc);

  switch(pc->phs.variant[PACKET_GAME_INFO]) {

  case 100:
    return send_packet_game_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_GAME_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_map_info *receive_packet_map_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_map_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "xsize", &real_packet->xsize)) {
    RECEIVE_PACKET_FIELD_ERROR(xsize);
  }
  if (!dio_get_uint32(pc->json_packet, "ysize", &real_packet->ysize)) {
    RECEIVE_PACKET_FIELD_ERROR(ysize);
  }
  if (!dio_get_uint8(pc->json_packet, "topology_id", &real_packet->topology_id)) {
    RECEIVE_PACKET_FIELD_ERROR(topology_id);
  }

  log_packet("packet_map_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_map_info_100(struct connection *pc, const struct packet_map_info *packet)
{
  const struct packet_map_info *real_packet = packet;
  SEND_PACKET_START(PACKET_MAP_INFO);

  log_packet("packet_map_info_100: sending info about ()");

  dio_put_uint32(&dout, "xsize", real_packet->xsize);
  dio_put_uint32(&dout, "ysize", real_packet->ysize);
  dio_put_uint8(&dout, "topology_id", real_packet->topology_id);

  SEND_PACKET_END(PACKET_MAP_INFO);
}

static void ensure_valid_variant_packet_map_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_MAP_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_MAP_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_MAP_INFO] = variant;
}

struct packet_map_info *receive_packet_map_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_map_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_map_info(pc);

  switch(pc->phs.variant[PACKET_MAP_INFO]) {
  case 100:
    return receive_packet_map_info_100(pc);
  default:
    log_debug("Unknown PACKET_MAP_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_map_info(struct connection *pc, const struct packet_map_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_map_info from the client.");
  }
  ensure_valid_variant_packet_map_info(pc);

  switch(pc->phs.variant[PACKET_MAP_INFO]) {

  case 100:
    return send_packet_map_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_MAP_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_map_info(struct conn_list *dest, const struct packet_map_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_map_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_nuke_tile_info *receive_packet_nuke_tile_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_nuke_tile_info, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }

  log_packet("packet_nuke_tile_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_nuke_tile_info_100(struct connection *pc, const struct packet_nuke_tile_info *packet)
{
  const struct packet_nuke_tile_info *real_packet = packet;
  SEND_PACKET_START(PACKET_NUKE_TILE_INFO);

  log_packet("packet_nuke_tile_info_100: sending info about ()");

  dio_put_sint32(&dout, "tile", real_packet->tile);

  SEND_PACKET_END(PACKET_NUKE_TILE_INFO);
}

static void ensure_valid_variant_packet_nuke_tile_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_NUKE_TILE_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_NUKE_TILE_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_NUKE_TILE_INFO] = variant;
}

struct packet_nuke_tile_info *receive_packet_nuke_tile_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_nuke_tile_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_nuke_tile_info(pc);

  switch(pc->phs.variant[PACKET_NUKE_TILE_INFO]) {
  case 100:
    return receive_packet_nuke_tile_info_100(pc);
  default:
    log_debug("Unknown PACKET_NUKE_TILE_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_nuke_tile_info(struct connection *pc, const struct packet_nuke_tile_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_nuke_tile_info from the client.");
  }
  ensure_valid_variant_packet_nuke_tile_info(pc);

  switch(pc->phs.variant[PACKET_NUKE_TILE_INFO]) {

  case 100:
    return send_packet_nuke_tile_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_NUKE_TILE_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_nuke_tile_info(struct conn_list *dest, const struct packet_nuke_tile_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_nuke_tile_info(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_nuke_tile_info(struct connection *pc, int tile)
{
  struct packet_nuke_tile_info packet, *real_packet = &packet;

  real_packet->tile = tile;
  
  return send_packet_nuke_tile_info(pc, real_packet);
}

void dlsend_packet_nuke_tile_info(struct conn_list *dest, int tile)
{
  struct packet_nuke_tile_info packet, *real_packet = &packet;

  real_packet->tile = tile;
  
  lsend_packet_nuke_tile_info(dest, real_packet);
}

static struct packet_team_name_info *receive_packet_team_name_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_team_name_info, real_packet);
  if (!dio_get_uint8(pc->json_packet, "team_id", &real_packet->team_id)) {
    RECEIVE_PACKET_FIELD_ERROR(team_id);
  }
  if (!dio_get_string(pc->json_packet, "team_name", real_packet->team_name, sizeof(real_packet->team_name))) {
    RECEIVE_PACKET_FIELD_ERROR(team_name);
  }

  log_packet("packet_team_name_info_100: got info about (%d)",
    real_packet->team_id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_team_name_info_100(struct connection *pc, const struct packet_team_name_info *packet)
{
  const struct packet_team_name_info *real_packet = packet;
  SEND_PACKET_START(PACKET_TEAM_NAME_INFO);

  log_packet("packet_team_name_info_100: sending info about (%d)",
    real_packet->team_id);

  dio_put_uint8(&dout, "team_id", real_packet->team_id);
  dio_put_string(&dout, "team_name", real_packet->team_name);

  SEND_PACKET_END(PACKET_TEAM_NAME_INFO);
}

static void ensure_valid_variant_packet_team_name_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_TEAM_NAME_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_TEAM_NAME_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_TEAM_NAME_INFO] = variant;
}

struct packet_team_name_info *receive_packet_team_name_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_team_name_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_team_name_info(pc);

  switch(pc->phs.variant[PACKET_TEAM_NAME_INFO]) {
  case 100:
    return receive_packet_team_name_info_100(pc);
  default:
    log_debug("Unknown PACKET_TEAM_NAME_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_team_name_info(struct connection *pc, const struct packet_team_name_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_team_name_info from the client.");
  }
  ensure_valid_variant_packet_team_name_info(pc);

  switch(pc->phs.variant[PACKET_TEAM_NAME_INFO]) {

  case 100:
    return send_packet_team_name_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_TEAM_NAME_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_team_name_info(struct conn_list *dest, const struct packet_team_name_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_team_name_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_chat_msg *receive_packet_chat_msg_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_chat_msg, real_packet);
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint32(pc->json_packet, "event", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(event);
    }
    real_packet->event = readin;
  }
  if (!dio_get_sint16(pc->json_packet, "conn_id", &real_packet->conn_id)) {
    RECEIVE_PACKET_FIELD_ERROR(conn_id);
  }

  log_packet("packet_chat_msg_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_chat_msg_100(struct connection *pc, const struct packet_chat_msg *packet)
{
  const struct packet_chat_msg *real_packet = packet;
  SEND_PACKET_START(PACKET_CHAT_MSG);

  log_packet("packet_chat_msg_100: sending info about ()");

  dio_put_string(&dout, "message", real_packet->message);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint32(&dout, "event", real_packet->event);
  dio_put_sint16(&dout, "conn_id", real_packet->conn_id);

  SEND_PACKET_END(PACKET_CHAT_MSG);
}

static void ensure_valid_variant_packet_chat_msg(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CHAT_MSG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CHAT_MSG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CHAT_MSG] = variant;
}

struct packet_chat_msg *receive_packet_chat_msg(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_chat_msg at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_chat_msg(pc);

  switch(pc->phs.variant[PACKET_CHAT_MSG]) {
  case 100:
    return receive_packet_chat_msg_100(pc);
  default:
    log_debug("Unknown PACKET_CHAT_MSG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_chat_msg(struct connection *pc, const struct packet_chat_msg *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_chat_msg from the client.");
  }
  ensure_valid_variant_packet_chat_msg(pc);

  switch(pc->phs.variant[PACKET_CHAT_MSG]) {

  case 100:
    return send_packet_chat_msg_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CHAT_MSG variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_chat_msg(struct conn_list *dest, const struct packet_chat_msg *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_chat_msg(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_chat_msg_req *receive_packet_chat_msg_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_chat_msg_req, real_packet);
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }

  log_packet("packet_chat_msg_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_chat_msg_req_100(struct connection *pc, const struct packet_chat_msg_req *packet)
{
  const struct packet_chat_msg_req *real_packet = packet;
  SEND_PACKET_START(PACKET_CHAT_MSG_REQ);

  log_packet("packet_chat_msg_req_100: sending info about ()");

  dio_put_string(&dout, "message", real_packet->message);

  SEND_PACKET_END(PACKET_CHAT_MSG_REQ);
}

static void ensure_valid_variant_packet_chat_msg_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CHAT_MSG_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CHAT_MSG_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CHAT_MSG_REQ] = variant;
}

struct packet_chat_msg_req *receive_packet_chat_msg_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_chat_msg_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_chat_msg_req(pc);

  switch(pc->phs.variant[PACKET_CHAT_MSG_REQ]) {
  case 100:
    return receive_packet_chat_msg_req_100(pc);
  default:
    log_debug("Unknown PACKET_CHAT_MSG_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_chat_msg_req(struct connection *pc, const struct packet_chat_msg_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_chat_msg_req from the server.");
  }
  ensure_valid_variant_packet_chat_msg_req(pc);

  switch(pc->phs.variant[PACKET_CHAT_MSG_REQ]) {

  case 100:
    return send_packet_chat_msg_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CHAT_MSG_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_chat_msg_req(struct connection *pc, const char *message)
{
  struct packet_chat_msg_req packet, *real_packet = &packet;

  sz_strlcpy(real_packet->message, message);
  
  return send_packet_chat_msg_req(pc, real_packet);
}

static struct packet_connect_msg *receive_packet_connect_msg_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_connect_msg, real_packet);
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }

  log_packet("packet_connect_msg_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_connect_msg_100(struct connection *pc, const struct packet_connect_msg *packet)
{
  const struct packet_connect_msg *real_packet = packet;
  SEND_PACKET_START(PACKET_CONNECT_MSG);

  log_packet("packet_connect_msg_100: sending info about ()");

  dio_put_string(&dout, "message", real_packet->message);

  SEND_PACKET_END(PACKET_CONNECT_MSG);
}

static void ensure_valid_variant_packet_connect_msg(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CONNECT_MSG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CONNECT_MSG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CONNECT_MSG] = variant;
}

struct packet_connect_msg *receive_packet_connect_msg(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_connect_msg at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_connect_msg(pc);

  switch(pc->phs.variant[PACKET_CONNECT_MSG]) {
  case 100:
    return receive_packet_connect_msg_100(pc);
  default:
    log_debug("Unknown PACKET_CONNECT_MSG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_connect_msg(struct connection *pc, const struct packet_connect_msg *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_connect_msg from the client.");
  }
  ensure_valid_variant_packet_connect_msg(pc);

  switch(pc->phs.variant[PACKET_CONNECT_MSG]) {

  case 100:
    return send_packet_connect_msg_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CONNECT_MSG variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_connect_msg(struct connection *pc, const char *message)
{
  struct packet_connect_msg packet, *real_packet = &packet;

  sz_strlcpy(real_packet->message, message);
  
  return send_packet_connect_msg(pc, real_packet);
}

static struct packet_city_remove *receive_packet_city_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_remove, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }

  log_packet("packet_city_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_remove_100(struct connection *pc, const struct packet_city_remove *packet)
{
  const struct packet_city_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_REMOVE);

  log_packet("packet_city_remove_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);

  SEND_PACKET_END(PACKET_CITY_REMOVE);
}

static void ensure_valid_variant_packet_city_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_REMOVE] = variant;
}

struct packet_city_remove *receive_packet_city_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_city_remove at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_city_remove(pc);

  switch(pc->phs.variant[PACKET_CITY_REMOVE]) {
  case 100:
    return receive_packet_city_remove_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_remove(struct connection *pc, const struct packet_city_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_city_remove from the client.");
  }
  ensure_valid_variant_packet_city_remove(pc);

  switch(pc->phs.variant[PACKET_CITY_REMOVE]) {

  case 100:
    return send_packet_city_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_city_remove(struct conn_list *dest, const struct packet_city_remove *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_city_remove(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_city_remove(struct connection *pc, int city_id)
{
  struct packet_city_remove packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  
  return send_packet_city_remove(pc, real_packet);
}

void dlsend_packet_city_remove(struct conn_list *dest, int city_id)
{
  struct packet_city_remove packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  
  lsend_packet_city_remove(dest, real_packet);
}

static struct packet_city_info *receive_packet_city_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }
  if (!dio_get_uint8(pc->json_packet, "city_radius_sq", &real_packet->city_radius_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(city_radius_sq);
  }
  
  {
    int i;
  
    for (i = 0; i < FEELING_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_happy", &real_packet->ppl_happy[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_happy);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < FEELING_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_content", &real_packet->ppl_content[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_content);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < FEELING_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_unhappy", &real_packet->ppl_unhappy[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_unhappy);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < FEELING_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_angry", &real_packet->ppl_angry[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_angry);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "specialists_size", &real_packet->specialists_size)) {
    RECEIVE_PACKET_FIELD_ERROR(specialists_size);
  }
  
  {
    int i;
  
    if (real_packet->specialists_size > SP_MAX) {
      RECEIVE_PACKET_FIELD_ERROR(specialists, ": truncation array");
    }
    for (i = 0; i < real_packet->specialists_size; i++) {
      if (!dio_get_uint8(pc->json_packet, "specialists", &real_packet->specialists[i])) {
        RECEIVE_PACKET_FIELD_ERROR(specialists);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "nationalities_count", &real_packet->nationalities_count)) {
    RECEIVE_PACKET_FIELD_ERROR(nationalities_count);
  }
  
  {
    int i;
  
    if (real_packet->nationalities_count > MAX_NUM_PLAYER_SLOTS) {
      RECEIVE_PACKET_FIELD_ERROR(nation_id, ": truncation array");
    }
    for (i = 0; i < real_packet->nationalities_count; i++) {
      if (!dio_get_sint8(pc->json_packet, "nation_id", &real_packet->nation_id[i])) {
        RECEIVE_PACKET_FIELD_ERROR(nation_id);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->nationalities_count > MAX_NUM_PLAYER_SLOTS) {
      RECEIVE_PACKET_FIELD_ERROR(nation_citizens, ": truncation array");
    }
    for (i = 0; i < real_packet->nationalities_count; i++) {
      if (!dio_get_uint8(pc->json_packet, "nation_citizens", &real_packet->nation_citizens[i])) {
        RECEIVE_PACKET_FIELD_ERROR(nation_citizens);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_sint16(pc->json_packet, "surplus", &real_packet->surplus[i])) {
        RECEIVE_PACKET_FIELD_ERROR(surplus);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "waste", &real_packet->waste[i])) {
        RECEIVE_PACKET_FIELD_ERROR(waste);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_sint16(pc->json_packet, "unhappy_penalty", &real_packet->unhappy_penalty[i])) {
        RECEIVE_PACKET_FIELD_ERROR(unhappy_penalty);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "prod", &real_packet->prod[i])) {
        RECEIVE_PACKET_FIELD_ERROR(prod);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_sint16(pc->json_packet, "citizen_base", &real_packet->citizen_base[i])) {
        RECEIVE_PACKET_FIELD_ERROR(citizen_base);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_sint16(pc->json_packet, "usage", &real_packet->usage[i])) {
        RECEIVE_PACKET_FIELD_ERROR(usage);
      }
    }
  }
  if (!dio_get_uint32(pc->json_packet, "food_stock", &real_packet->food_stock)) {
    RECEIVE_PACKET_FIELD_ERROR(food_stock);
  }
  if (!dio_get_uint32(pc->json_packet, "shield_stock", &real_packet->shield_stock)) {
    RECEIVE_PACKET_FIELD_ERROR(shield_stock);
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_TRADE_ROUTES; i++) {
      if (!dio_get_uint32(pc->json_packet, "trade", &real_packet->trade[i])) {
        RECEIVE_PACKET_FIELD_ERROR(trade);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_TRADE_ROUTES; i++) {
      if (!dio_get_uint8(pc->json_packet, "trade_value", &real_packet->trade_value[i])) {
        RECEIVE_PACKET_FIELD_ERROR(trade_value);
      }
    }
  }
  if (!dio_get_uint32(pc->json_packet, "pollution", &real_packet->pollution)) {
    RECEIVE_PACKET_FIELD_ERROR(pollution);
  }
  if (!dio_get_uint32(pc->json_packet, "illness_trade", &real_packet->illness_trade)) {
    RECEIVE_PACKET_FIELD_ERROR(illness_trade);
  }
  if (!dio_get_uint8(pc->json_packet, "production_kind", &real_packet->production_kind)) {
    RECEIVE_PACKET_FIELD_ERROR(production_kind);
  }
  if (!dio_get_uint8(pc->json_packet, "production_value", &real_packet->production_value)) {
    RECEIVE_PACKET_FIELD_ERROR(production_value);
  }
  if (!dio_get_sint16(pc->json_packet, "turn_founded", &real_packet->turn_founded)) {
    RECEIVE_PACKET_FIELD_ERROR(turn_founded);
  }
  if (!dio_get_sint16(pc->json_packet, "turn_last_built", &real_packet->turn_last_built)) {
    RECEIVE_PACKET_FIELD_ERROR(turn_last_built);
  }
  if (!dio_get_uint8(pc->json_packet, "changed_from_kind", &real_packet->changed_from_kind)) {
    RECEIVE_PACKET_FIELD_ERROR(changed_from_kind);
  }
  if (!dio_get_uint8(pc->json_packet, "changed_from_value", &real_packet->changed_from_value)) {
    RECEIVE_PACKET_FIELD_ERROR(changed_from_value);
  }
  if (!dio_get_uint32(pc->json_packet, "before_change_shields", &real_packet->before_change_shields)) {
    RECEIVE_PACKET_FIELD_ERROR(before_change_shields);
  }
  if (!dio_get_uint32(pc->json_packet, "disbanded_shields", &real_packet->disbanded_shields)) {
    RECEIVE_PACKET_FIELD_ERROR(disbanded_shields);
  }
  if (!dio_get_uint32(pc->json_packet, "caravan_shields", &real_packet->caravan_shields)) {
    RECEIVE_PACKET_FIELD_ERROR(caravan_shields);
  }
  if (!dio_get_uint32(pc->json_packet, "last_turns_shield_surplus", &real_packet->last_turns_shield_surplus)) {
    RECEIVE_PACKET_FIELD_ERROR(last_turns_shield_surplus);
  }
  if (!dio_get_uint8(pc->json_packet, "airlift", &real_packet->airlift)) {
    RECEIVE_PACKET_FIELD_ERROR(airlift);
  }
  if (!dio_get_bool8(pc->json_packet, "did_buy", &real_packet->did_buy)) {
    RECEIVE_PACKET_FIELD_ERROR(did_buy);
  }
  if (!dio_get_bool8(pc->json_packet, "did_sell", &real_packet->did_sell)) {
    RECEIVE_PACKET_FIELD_ERROR(did_sell);
  }
  if (!dio_get_bool8(pc->json_packet, "was_happy", &real_packet->was_happy)) {
    RECEIVE_PACKET_FIELD_ERROR(was_happy);
  }
  if (!dio_get_bool8(pc->json_packet, "diplomat_investigate", &real_packet->diplomat_investigate)) {
    RECEIVE_PACKET_FIELD_ERROR(diplomat_investigate);
  }
  if (!dio_get_bool8(pc->json_packet, "walls", &real_packet->walls)) {
    RECEIVE_PACKET_FIELD_ERROR(walls);
  }
  if (!dio_get_sint8(pc->json_packet, "city_image", &real_packet->city_image)) {
    RECEIVE_PACKET_FIELD_ERROR(city_image);
  }
  if (!dio_get_string(pc->json_packet, "can_build_unit", real_packet->can_build_unit, sizeof(real_packet->can_build_unit))) {
    RECEIVE_PACKET_FIELD_ERROR(can_build_unit);
  }
  if (!dio_get_string(pc->json_packet, "can_build_improvement", real_packet->can_build_improvement, sizeof(real_packet->can_build_improvement))) {
    RECEIVE_PACKET_FIELD_ERROR(can_build_improvement);
  }
  if (!dio_get_string(pc->json_packet, "improvements", real_packet->improvements, sizeof(real_packet->improvements))) {
    RECEIVE_PACKET_FIELD_ERROR(improvements);
  }
  if (!dio_get_string(pc->json_packet, "food_output", real_packet->food_output, sizeof(real_packet->food_output))) {
    RECEIVE_PACKET_FIELD_ERROR(food_output);
  }
  if (!dio_get_string(pc->json_packet, "shield_output", real_packet->shield_output, sizeof(real_packet->shield_output))) {
    RECEIVE_PACKET_FIELD_ERROR(shield_output);
  }
  if (!dio_get_string(pc->json_packet, "trade_output", real_packet->trade_output, sizeof(real_packet->trade_output))) {
    RECEIVE_PACKET_FIELD_ERROR(trade_output);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_bool8(pc->json_packet, "unhappy", &real_packet->unhappy)) {
    RECEIVE_PACKET_FIELD_ERROR(unhappy);
  }

  log_packet("packet_city_info_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_info_100(struct connection *pc, const struct packet_city_info *packet, bool force_to_send)
{
  const struct packet_city_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_INFO);

  log_packet("packet_city_info_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_uint8(&dout, "size", real_packet->size);
  dio_put_uint8(&dout, "city_radius_sq", real_packet->city_radius_sq);

    {
        dio_put_array_uint8(&dout, "ppl_happy", (void *)real_packet->ppl_happy, FEELING_LAST);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_content", (void *)real_packet->ppl_content, FEELING_LAST);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_unhappy", (void *)real_packet->ppl_unhappy, FEELING_LAST);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_angry", (void *)real_packet->ppl_angry, FEELING_LAST);
    } 
  dio_put_uint8(&dout, "specialists_size", real_packet->specialists_size);

    {
        dio_put_array_uint8(&dout, "specialists", (void *)real_packet->specialists, real_packet->specialists_size);
    } 
  dio_put_uint8(&dout, "nationalities_count", real_packet->nationalities_count);

    {
        dio_put_array_sint8(&dout, "nation_id", (void *)real_packet->nation_id, real_packet->nationalities_count);
    } 

    {
        dio_put_array_uint8(&dout, "nation_citizens", (void *)real_packet->nation_citizens, real_packet->nationalities_count);
    } 

    {
        dio_put_array_sint16(&dout, "surplus", (void *)real_packet->surplus, O_LAST);
    } 

    {
        dio_put_array_uint32(&dout, "waste", (void *)real_packet->waste, O_LAST);
    } 

    {
        dio_put_array_sint16(&dout, "unhappy_penalty", (void *)real_packet->unhappy_penalty, O_LAST);
    } 

    {
        dio_put_array_uint32(&dout, "prod", (void *)real_packet->prod, O_LAST);
    } 

    {
        dio_put_array_sint16(&dout, "citizen_base", (void *)real_packet->citizen_base, O_LAST);
    } 

    {
        dio_put_array_sint16(&dout, "usage", (void *)real_packet->usage, O_LAST);
    } 
  dio_put_uint32(&dout, "food_stock", real_packet->food_stock);
  dio_put_uint32(&dout, "shield_stock", real_packet->shield_stock);

    {
        dio_put_array_uint32(&dout, "trade", (void *)real_packet->trade, MAX_TRADE_ROUTES);
    } 

    {
        dio_put_array_uint8(&dout, "trade_value", (void *)real_packet->trade_value, MAX_TRADE_ROUTES);
    } 
  dio_put_uint32(&dout, "pollution", real_packet->pollution);
  dio_put_uint32(&dout, "illness_trade", real_packet->illness_trade);
  dio_put_uint8(&dout, "production_kind", real_packet->production_kind);
  dio_put_uint8(&dout, "production_value", real_packet->production_value);
  dio_put_sint16(&dout, "turn_founded", real_packet->turn_founded);
  dio_put_sint16(&dout, "turn_last_built", real_packet->turn_last_built);
  dio_put_uint8(&dout, "changed_from_kind", real_packet->changed_from_kind);
  dio_put_uint8(&dout, "changed_from_value", real_packet->changed_from_value);
  dio_put_uint32(&dout, "before_change_shields", real_packet->before_change_shields);
  dio_put_uint32(&dout, "disbanded_shields", real_packet->disbanded_shields);
  dio_put_uint32(&dout, "caravan_shields", real_packet->caravan_shields);
  dio_put_uint32(&dout, "last_turns_shield_surplus", real_packet->last_turns_shield_surplus);
  dio_put_uint8(&dout, "airlift", real_packet->airlift);
  dio_put_bool8(&dout, "did_buy", real_packet->did_buy);
  dio_put_bool8(&dout, "did_sell", real_packet->did_sell);
  dio_put_bool8(&dout, "was_happy", real_packet->was_happy);
  dio_put_bool8(&dout, "diplomat_investigate", real_packet->diplomat_investigate);
  dio_put_bool8(&dout, "walls", real_packet->walls);
  dio_put_sint8(&dout, "city_image", real_packet->city_image);
  dio_put_string(&dout, "can_build_unit", real_packet->can_build_unit);
  dio_put_string(&dout, "can_build_improvement", real_packet->can_build_improvement);
  dio_put_string(&dout, "improvements", real_packet->improvements);
  dio_put_string(&dout, "food_output", real_packet->food_output);
  dio_put_string(&dout, "shield_output", real_packet->shield_output);
  dio_put_string(&dout, "trade_output", real_packet->trade_output);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_bool8(&dout, "unhappy", real_packet->unhappy);

  SEND_PACKET_END(PACKET_CITY_INFO);
}

static void ensure_valid_variant_packet_city_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_INFO] = variant;
}

struct packet_city_info *receive_packet_city_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_city_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_city_info(pc);

  switch(pc->phs.variant[PACKET_CITY_INFO]) {
  case 100:
    return receive_packet_city_info_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_info(struct connection *pc, const struct packet_city_info *packet, bool force_to_send)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_city_info from the client.");
  }
  ensure_valid_variant_packet_city_info(pc);

  switch(pc->phs.variant[PACKET_CITY_INFO]) {

  case 100:
    return send_packet_city_info_100(pc, packet, force_to_send);
  default:
    log_debug("Unknown PACKET_CITY_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_city_info(struct conn_list *dest, const struct packet_city_info *packet, bool force_to_send)
{
  conn_list_iterate(dest, pconn) {
    send_packet_city_info(pconn, packet, force_to_send);
  } conn_list_iterate_end;
}

static struct packet_city_short_info *receive_packet_city_short_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_short_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }
  if (!dio_get_bool8(pc->json_packet, "occupied", &real_packet->occupied)) {
    RECEIVE_PACKET_FIELD_ERROR(occupied);
  }
  if (!dio_get_bool8(pc->json_packet, "walls", &real_packet->walls)) {
    RECEIVE_PACKET_FIELD_ERROR(walls);
  }
  if (!dio_get_bool8(pc->json_packet, "happy", &real_packet->happy)) {
    RECEIVE_PACKET_FIELD_ERROR(happy);
  }
  if (!dio_get_bool8(pc->json_packet, "unhappy", &real_packet->unhappy)) {
    RECEIVE_PACKET_FIELD_ERROR(unhappy);
  }
  if (!dio_get_sint8(pc->json_packet, "city_image", &real_packet->city_image)) {
    RECEIVE_PACKET_FIELD_ERROR(city_image);
  }
  if (!dio_get_string(pc->json_packet, "improvements", real_packet->improvements, sizeof(real_packet->improvements))) {
    RECEIVE_PACKET_FIELD_ERROR(improvements);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }

  log_packet("packet_city_short_info_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_short_info_100(struct connection *pc, const struct packet_city_short_info *packet)
{
  const struct packet_city_short_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_SHORT_INFO);

  log_packet("packet_city_short_info_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_uint8(&dout, "size", real_packet->size);
  dio_put_bool8(&dout, "occupied", real_packet->occupied);
  dio_put_bool8(&dout, "walls", real_packet->walls);
  dio_put_bool8(&dout, "happy", real_packet->happy);
  dio_put_bool8(&dout, "unhappy", real_packet->unhappy);
  dio_put_sint8(&dout, "city_image", real_packet->city_image);
  dio_put_string(&dout, "improvements", real_packet->improvements);
  dio_put_string(&dout, "name", real_packet->name);

  SEND_PACKET_END(PACKET_CITY_SHORT_INFO);
}

static void ensure_valid_variant_packet_city_short_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_SHORT_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_SHORT_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_SHORT_INFO] = variant;
}

struct packet_city_short_info *receive_packet_city_short_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_city_short_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_city_short_info(pc);

  switch(pc->phs.variant[PACKET_CITY_SHORT_INFO]) {
  case 100:
    return receive_packet_city_short_info_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_SHORT_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_short_info(struct connection *pc, const struct packet_city_short_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_city_short_info from the client.");
  }
  ensure_valid_variant_packet_city_short_info(pc);

  switch(pc->phs.variant[PACKET_CITY_SHORT_INFO]) {

  case 100:
    return send_packet_city_short_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_SHORT_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_city_short_info(struct conn_list *dest, const struct packet_city_short_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_city_short_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_city_sell *receive_packet_city_sell_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_sell, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_uint8(pc->json_packet, "build_id", &real_packet->build_id)) {
    RECEIVE_PACKET_FIELD_ERROR(build_id);
  }

  log_packet("packet_city_sell_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_sell_100(struct connection *pc, const struct packet_city_sell *packet)
{
  const struct packet_city_sell *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_SELL);

  log_packet("packet_city_sell_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_uint8(&dout, "build_id", real_packet->build_id);

  SEND_PACKET_END(PACKET_CITY_SELL);
}

static void ensure_valid_variant_packet_city_sell(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_SELL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_SELL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_SELL] = variant;
}

struct packet_city_sell *receive_packet_city_sell(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_sell at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_sell(pc);

  switch(pc->phs.variant[PACKET_CITY_SELL]) {
  case 100:
    return receive_packet_city_sell_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_SELL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_sell(struct connection *pc, const struct packet_city_sell *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_sell from the server.");
  }
  ensure_valid_variant_packet_city_sell(pc);

  switch(pc->phs.variant[PACKET_CITY_SELL]) {

  case 100:
    return send_packet_city_sell_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_SELL variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_sell(struct connection *pc, int city_id, int build_id)
{
  struct packet_city_sell packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->build_id = build_id;
  
  return send_packet_city_sell(pc, real_packet);
}

static struct packet_city_buy *receive_packet_city_buy_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_buy, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }

  log_packet("packet_city_buy_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_buy_100(struct connection *pc, const struct packet_city_buy *packet)
{
  const struct packet_city_buy *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_BUY);

  log_packet("packet_city_buy_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);

  SEND_PACKET_END(PACKET_CITY_BUY);
}

static void ensure_valid_variant_packet_city_buy(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_BUY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_BUY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_BUY] = variant;
}

struct packet_city_buy *receive_packet_city_buy(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_buy at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_buy(pc);

  switch(pc->phs.variant[PACKET_CITY_BUY]) {
  case 100:
    return receive_packet_city_buy_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_BUY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_buy(struct connection *pc, const struct packet_city_buy *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_buy from the server.");
  }
  ensure_valid_variant_packet_city_buy(pc);

  switch(pc->phs.variant[PACKET_CITY_BUY]) {

  case 100:
    return send_packet_city_buy_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_BUY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_buy(struct connection *pc, int city_id)
{
  struct packet_city_buy packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  
  return send_packet_city_buy(pc, real_packet);
}

static struct packet_city_change *receive_packet_city_change_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_change, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_uint8(pc->json_packet, "production_kind", &real_packet->production_kind)) {
    RECEIVE_PACKET_FIELD_ERROR(production_kind);
  }
  if (!dio_get_uint8(pc->json_packet, "production_value", &real_packet->production_value)) {
    RECEIVE_PACKET_FIELD_ERROR(production_value);
  }

  log_packet("packet_city_change_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_change_100(struct connection *pc, const struct packet_city_change *packet)
{
  const struct packet_city_change *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_CHANGE);

  log_packet("packet_city_change_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_uint8(&dout, "production_kind", real_packet->production_kind);
  dio_put_uint8(&dout, "production_value", real_packet->production_value);

  SEND_PACKET_END(PACKET_CITY_CHANGE);
}

static void ensure_valid_variant_packet_city_change(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_CHANGE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_CHANGE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_CHANGE] = variant;
}

struct packet_city_change *receive_packet_city_change(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_change at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_change(pc);

  switch(pc->phs.variant[PACKET_CITY_CHANGE]) {
  case 100:
    return receive_packet_city_change_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_CHANGE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_change(struct connection *pc, const struct packet_city_change *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_change from the server.");
  }
  ensure_valid_variant_packet_city_change(pc);

  switch(pc->phs.variant[PACKET_CITY_CHANGE]) {

  case 100:
    return send_packet_city_change_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_CHANGE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_change(struct connection *pc, int city_id, int production_kind, int production_value)
{
  struct packet_city_change packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->production_kind = production_kind;
  real_packet->production_value = production_value;
  
  return send_packet_city_change(pc, real_packet);
}

static struct packet_city_worklist *receive_packet_city_worklist_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_worklist, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_worklist(pc->json_packet, "worklist", &real_packet->worklist)) {
    RECEIVE_PACKET_FIELD_ERROR(worklist);
  }

  log_packet("packet_city_worklist_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_worklist_100(struct connection *pc, const struct packet_city_worklist *packet)
{
  const struct packet_city_worklist *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_WORKLIST);

  log_packet("packet_city_worklist_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_worklist(&dout, "worklist", &real_packet->worklist);

  SEND_PACKET_END(PACKET_CITY_WORKLIST);
}

static void ensure_valid_variant_packet_city_worklist(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_WORKLIST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_WORKLIST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_WORKLIST] = variant;
}

struct packet_city_worklist *receive_packet_city_worklist(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_worklist at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_worklist(pc);

  switch(pc->phs.variant[PACKET_CITY_WORKLIST]) {
  case 100:
    return receive_packet_city_worklist_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_WORKLIST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_worklist(struct connection *pc, const struct packet_city_worklist *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_worklist from the server.");
  }
  ensure_valid_variant_packet_city_worklist(pc);

  switch(pc->phs.variant[PACKET_CITY_WORKLIST]) {

  case 100:
    return send_packet_city_worklist_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_WORKLIST variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_worklist(struct connection *pc, int city_id, const struct worklist *worklist)
{
  struct packet_city_worklist packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  worklist_copy(&real_packet->worklist, worklist);
  
  return send_packet_city_worklist(pc, real_packet);
}

static struct packet_city_make_specialist *receive_packet_city_make_specialist_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_make_specialist, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_uint32(pc->json_packet, "worker_x", &real_packet->worker_x)) {
    RECEIVE_PACKET_FIELD_ERROR(worker_x);
  }
  if (!dio_get_uint32(pc->json_packet, "worker_y", &real_packet->worker_y)) {
    RECEIVE_PACKET_FIELD_ERROR(worker_y);
  }

  log_packet("packet_city_make_specialist_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_make_specialist_100(struct connection *pc, const struct packet_city_make_specialist *packet)
{
  const struct packet_city_make_specialist *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_MAKE_SPECIALIST);

  log_packet("packet_city_make_specialist_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_uint32(&dout, "worker_x", real_packet->worker_x);
  dio_put_uint32(&dout, "worker_y", real_packet->worker_y);

  SEND_PACKET_END(PACKET_CITY_MAKE_SPECIALIST);
}

static void ensure_valid_variant_packet_city_make_specialist(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_MAKE_SPECIALIST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_MAKE_SPECIALIST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_MAKE_SPECIALIST] = variant;
}

struct packet_city_make_specialist *receive_packet_city_make_specialist(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_make_specialist at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_make_specialist(pc);

  switch(pc->phs.variant[PACKET_CITY_MAKE_SPECIALIST]) {
  case 100:
    return receive_packet_city_make_specialist_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_MAKE_SPECIALIST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_make_specialist(struct connection *pc, const struct packet_city_make_specialist *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_make_specialist from the server.");
  }
  ensure_valid_variant_packet_city_make_specialist(pc);

  switch(pc->phs.variant[PACKET_CITY_MAKE_SPECIALIST]) {

  case 100:
    return send_packet_city_make_specialist_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_MAKE_SPECIALIST variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_make_specialist(struct connection *pc, int city_id, int worker_x, int worker_y)
{
  struct packet_city_make_specialist packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->worker_x = worker_x;
  real_packet->worker_y = worker_y;
  
  return send_packet_city_make_specialist(pc, real_packet);
}

static struct packet_city_make_worker *receive_packet_city_make_worker_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_make_worker, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_uint32(pc->json_packet, "worker_x", &real_packet->worker_x)) {
    RECEIVE_PACKET_FIELD_ERROR(worker_x);
  }
  if (!dio_get_uint32(pc->json_packet, "worker_y", &real_packet->worker_y)) {
    RECEIVE_PACKET_FIELD_ERROR(worker_y);
  }

  log_packet("packet_city_make_worker_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_make_worker_100(struct connection *pc, const struct packet_city_make_worker *packet)
{
  const struct packet_city_make_worker *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_MAKE_WORKER);

  log_packet("packet_city_make_worker_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_uint32(&dout, "worker_x", real_packet->worker_x);
  dio_put_uint32(&dout, "worker_y", real_packet->worker_y);

  SEND_PACKET_END(PACKET_CITY_MAKE_WORKER);
}

static void ensure_valid_variant_packet_city_make_worker(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_MAKE_WORKER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_MAKE_WORKER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_MAKE_WORKER] = variant;
}

struct packet_city_make_worker *receive_packet_city_make_worker(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_make_worker at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_make_worker(pc);

  switch(pc->phs.variant[PACKET_CITY_MAKE_WORKER]) {
  case 100:
    return receive_packet_city_make_worker_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_MAKE_WORKER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_make_worker(struct connection *pc, const struct packet_city_make_worker *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_make_worker from the server.");
  }
  ensure_valid_variant_packet_city_make_worker(pc);

  switch(pc->phs.variant[PACKET_CITY_MAKE_WORKER]) {

  case 100:
    return send_packet_city_make_worker_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_MAKE_WORKER variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_make_worker(struct connection *pc, int city_id, int worker_x, int worker_y)
{
  struct packet_city_make_worker packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->worker_x = worker_x;
  real_packet->worker_y = worker_y;
  
  return send_packet_city_make_worker(pc, real_packet);
}

static struct packet_city_change_specialist *receive_packet_city_change_specialist_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_change_specialist, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "from", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(from);
    }
    real_packet->from = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "to", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(to);
    }
    real_packet->to = readin;
  }

  log_packet("packet_city_change_specialist_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_change_specialist_100(struct connection *pc, const struct packet_city_change_specialist *packet)
{
  const struct packet_city_change_specialist *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_CHANGE_SPECIALIST);

  log_packet("packet_city_change_specialist_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_uint8(&dout, "from", real_packet->from);
  dio_put_uint8(&dout, "to", real_packet->to);

  SEND_PACKET_END(PACKET_CITY_CHANGE_SPECIALIST);
}

static void ensure_valid_variant_packet_city_change_specialist(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_CHANGE_SPECIALIST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_CHANGE_SPECIALIST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_CHANGE_SPECIALIST] = variant;
}

struct packet_city_change_specialist *receive_packet_city_change_specialist(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_change_specialist at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_change_specialist(pc);

  switch(pc->phs.variant[PACKET_CITY_CHANGE_SPECIALIST]) {
  case 100:
    return receive_packet_city_change_specialist_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_CHANGE_SPECIALIST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_change_specialist(struct connection *pc, const struct packet_city_change_specialist *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_change_specialist from the server.");
  }
  ensure_valid_variant_packet_city_change_specialist(pc);

  switch(pc->phs.variant[PACKET_CITY_CHANGE_SPECIALIST]) {

  case 100:
    return send_packet_city_change_specialist_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_CHANGE_SPECIALIST variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_change_specialist(struct connection *pc, int city_id, Specialist_type_id from, Specialist_type_id to)
{
  struct packet_city_change_specialist packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->from = from;
  real_packet->to = to;
  
  return send_packet_city_change_specialist(pc, real_packet);
}

static struct packet_city_rename *receive_packet_city_rename_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_rename, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }

  log_packet("packet_city_rename_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_rename_100(struct connection *pc, const struct packet_city_rename *packet)
{
  const struct packet_city_rename *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_RENAME);

  log_packet("packet_city_rename_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
  dio_put_string(&dout, "name", real_packet->name);

  SEND_PACKET_END(PACKET_CITY_RENAME);
}

static void ensure_valid_variant_packet_city_rename(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_RENAME] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_RENAME variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_RENAME] = variant;
}

struct packet_city_rename *receive_packet_city_rename(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_rename at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_rename(pc);

  switch(pc->phs.variant[PACKET_CITY_RENAME]) {
  case 100:
    return receive_packet_city_rename_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_RENAME variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_rename(struct connection *pc, const struct packet_city_rename *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_rename from the server.");
  }
  ensure_valid_variant_packet_city_rename(pc);

  switch(pc->phs.variant[PACKET_CITY_RENAME]) {

  case 100:
    return send_packet_city_rename_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_RENAME variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_rename(struct connection *pc, int city_id, const char *name)
{
  struct packet_city_rename packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  sz_strlcpy(real_packet->name, name);
  
  return send_packet_city_rename(pc, real_packet);
}

static struct packet_city_options_req *receive_packet_city_options_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_options_req, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->options)) {
    RECEIVE_PACKET_FIELD_ERROR(options);
  }
  #endif

  log_packet("packet_city_options_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_options_req_100(struct connection *pc, const struct packet_city_options_req *packet)
{
  const struct packet_city_options_req *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_OPTIONS_REQ);

  log_packet("packet_city_options_req_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);
DIO_BV_PUT(&dout, "options", packet->options);

  SEND_PACKET_END(PACKET_CITY_OPTIONS_REQ);
}

static void ensure_valid_variant_packet_city_options_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_OPTIONS_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_OPTIONS_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_OPTIONS_REQ] = variant;
}

struct packet_city_options_req *receive_packet_city_options_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_options_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_options_req(pc);

  switch(pc->phs.variant[PACKET_CITY_OPTIONS_REQ]) {
  case 100:
    return receive_packet_city_options_req_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_OPTIONS_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_options_req(struct connection *pc, const struct packet_city_options_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_options_req from the server.");
  }
  ensure_valid_variant_packet_city_options_req(pc);

  switch(pc->phs.variant[PACKET_CITY_OPTIONS_REQ]) {

  case 100:
    return send_packet_city_options_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_OPTIONS_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_options_req(struct connection *pc, int city_id, bv_city_options options)
{
  struct packet_city_options_req packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  real_packet->options = options;
  
  return send_packet_city_options_req(pc, real_packet);
}

static struct packet_city_refresh *receive_packet_city_refresh_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_refresh, real_packet);
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }

  log_packet("packet_city_refresh_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_refresh_100(struct connection *pc, const struct packet_city_refresh *packet)
{
  const struct packet_city_refresh *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_REFRESH);

  log_packet("packet_city_refresh_100: sending info about ()");

  dio_put_uint32(&dout, "city_id", real_packet->city_id);

  SEND_PACKET_END(PACKET_CITY_REFRESH);
}

static void ensure_valid_variant_packet_city_refresh(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_REFRESH] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_REFRESH variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_REFRESH] = variant;
}

struct packet_city_refresh *receive_packet_city_refresh(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_refresh at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_refresh(pc);

  switch(pc->phs.variant[PACKET_CITY_REFRESH]) {
  case 100:
    return receive_packet_city_refresh_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_REFRESH variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_refresh(struct connection *pc, const struct packet_city_refresh *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_refresh from the server.");
  }
  ensure_valid_variant_packet_city_refresh(pc);

  switch(pc->phs.variant[PACKET_CITY_REFRESH]) {

  case 100:
    return send_packet_city_refresh_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_REFRESH variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_refresh(struct connection *pc, int city_id)
{
  struct packet_city_refresh packet, *real_packet = &packet;

  real_packet->city_id = city_id;
  
  return send_packet_city_refresh(pc, real_packet);
}

static struct packet_city_name_suggestion_req *receive_packet_city_name_suggestion_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_name_suggestion_req, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_city_name_suggestion_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_name_suggestion_req_100(struct connection *pc, const struct packet_city_name_suggestion_req *packet)
{
  const struct packet_city_name_suggestion_req *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_NAME_SUGGESTION_REQ);

  log_packet("packet_city_name_suggestion_req_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_CITY_NAME_SUGGESTION_REQ);
}

static void ensure_valid_variant_packet_city_name_suggestion_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_NAME_SUGGESTION_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_REQ] = variant;
}

struct packet_city_name_suggestion_req *receive_packet_city_name_suggestion_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_city_name_suggestion_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_city_name_suggestion_req(pc);

  switch(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_REQ]) {
  case 100:
    return receive_packet_city_name_suggestion_req_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_NAME_SUGGESTION_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_name_suggestion_req(struct connection *pc, const struct packet_city_name_suggestion_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_city_name_suggestion_req from the server.");
  }
  ensure_valid_variant_packet_city_name_suggestion_req(pc);

  switch(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_REQ]) {

  case 100:
    return send_packet_city_name_suggestion_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_NAME_SUGGESTION_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_city_name_suggestion_req(struct connection *pc, int unit_id)
{
  struct packet_city_name_suggestion_req packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_city_name_suggestion_req(pc, real_packet);
}

static struct packet_city_name_suggestion_info *receive_packet_city_name_suggestion_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_name_suggestion_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }

  log_packet("packet_city_name_suggestion_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_name_suggestion_info_100(struct connection *pc, const struct packet_city_name_suggestion_info *packet)
{
  const struct packet_city_name_suggestion_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_NAME_SUGGESTION_INFO);

  log_packet("packet_city_name_suggestion_info_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_string(&dout, "name", real_packet->name);

  SEND_PACKET_END(PACKET_CITY_NAME_SUGGESTION_INFO);
}

static void ensure_valid_variant_packet_city_name_suggestion_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_NAME_SUGGESTION_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_INFO] = variant;
}

struct packet_city_name_suggestion_info *receive_packet_city_name_suggestion_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_city_name_suggestion_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_city_name_suggestion_info(pc);

  switch(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_INFO]) {
  case 100:
    return receive_packet_city_name_suggestion_info_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_NAME_SUGGESTION_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_name_suggestion_info(struct connection *pc, const struct packet_city_name_suggestion_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_city_name_suggestion_info from the client.");
  }
  ensure_valid_variant_packet_city_name_suggestion_info(pc);

  switch(pc->phs.variant[PACKET_CITY_NAME_SUGGESTION_INFO]) {

  case 100:
    return send_packet_city_name_suggestion_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_NAME_SUGGESTION_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_city_name_suggestion_info(struct conn_list *dest, const struct packet_city_name_suggestion_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_city_name_suggestion_info(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_city_name_suggestion_info(struct connection *pc, int unit_id, const char *name)
{
  struct packet_city_name_suggestion_info packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  sz_strlcpy(real_packet->name, name);
  
  return send_packet_city_name_suggestion_info(pc, real_packet);
}

void dlsend_packet_city_name_suggestion_info(struct conn_list *dest, int unit_id, const char *name)
{
  struct packet_city_name_suggestion_info packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  sz_strlcpy(real_packet->name, name);
  
  lsend_packet_city_name_suggestion_info(dest, real_packet);
}

static struct packet_city_sabotage_list *receive_packet_city_sabotage_list_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_city_sabotage_list, real_packet);
  if (!dio_get_uint32(pc->json_packet, "diplomat_id", &real_packet->diplomat_id)) {
    RECEIVE_PACKET_FIELD_ERROR(diplomat_id);
  }
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->improvements)) {
    RECEIVE_PACKET_FIELD_ERROR(improvements);
  }
  #endif

  log_packet("packet_city_sabotage_list_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_city_sabotage_list_100(struct connection *pc, const struct packet_city_sabotage_list *packet)
{
  const struct packet_city_sabotage_list *real_packet = packet;
  SEND_PACKET_START(PACKET_CITY_SABOTAGE_LIST);

  log_packet("packet_city_sabotage_list_100: sending info about ()");

  dio_put_uint32(&dout, "diplomat_id", real_packet->diplomat_id);
  dio_put_uint32(&dout, "city_id", real_packet->city_id);
DIO_BV_PUT(&dout, "improvements", packet->improvements);

  SEND_PACKET_END(PACKET_CITY_SABOTAGE_LIST);
}

static void ensure_valid_variant_packet_city_sabotage_list(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CITY_SABOTAGE_LIST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CITY_SABOTAGE_LIST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CITY_SABOTAGE_LIST] = variant;
}

struct packet_city_sabotage_list *receive_packet_city_sabotage_list(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_city_sabotage_list at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_city_sabotage_list(pc);

  switch(pc->phs.variant[PACKET_CITY_SABOTAGE_LIST]) {
  case 100:
    return receive_packet_city_sabotage_list_100(pc);
  default:
    log_debug("Unknown PACKET_CITY_SABOTAGE_LIST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_city_sabotage_list(struct connection *pc, const struct packet_city_sabotage_list *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_city_sabotage_list from the client.");
  }
  ensure_valid_variant_packet_city_sabotage_list(pc);

  switch(pc->phs.variant[PACKET_CITY_SABOTAGE_LIST]) {

  case 100:
    return send_packet_city_sabotage_list_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CITY_SABOTAGE_LIST variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_city_sabotage_list(struct conn_list *dest, const struct packet_city_sabotage_list *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_city_sabotage_list(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_player_remove *receive_packet_player_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_remove, real_packet);
  if (!dio_get_sint8(pc->json_packet, "playerno", &real_packet->playerno)) {
    RECEIVE_PACKET_FIELD_ERROR(playerno);
  }

  log_packet("packet_player_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_remove_100(struct connection *pc, const struct packet_player_remove *packet)
{
  const struct packet_player_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_REMOVE);

  log_packet("packet_player_remove_100: sending info about ()");

  dio_put_sint8(&dout, "playerno", real_packet->playerno);

  SEND_PACKET_END(PACKET_PLAYER_REMOVE);
}

static void ensure_valid_variant_packet_player_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_REMOVE] = variant;
}

struct packet_player_remove *receive_packet_player_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_player_remove at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_player_remove(pc);

  switch(pc->phs.variant[PACKET_PLAYER_REMOVE]) {
  case 100:
    return receive_packet_player_remove_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_remove(struct connection *pc, const struct packet_player_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_player_remove from the client.");
  }
  ensure_valid_variant_packet_player_remove(pc);

  switch(pc->phs.variant[PACKET_PLAYER_REMOVE]) {

  case 100:
    return send_packet_player_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_remove(struct connection *pc, int playerno)
{
  struct packet_player_remove packet, *real_packet = &packet;

  real_packet->playerno = playerno;
  
  return send_packet_player_remove(pc, real_packet);
}

static struct packet_player_info *receive_packet_player_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_info, real_packet);
  if (!dio_get_sint8(pc->json_packet, "playerno", &real_packet->playerno)) {
    RECEIVE_PACKET_FIELD_ERROR(playerno);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "username", real_packet->username, sizeof(real_packet->username))) {
    RECEIVE_PACKET_FIELD_ERROR(username);
  }
  if (!dio_get_uint32(pc->json_packet, "score", &real_packet->score)) {
    RECEIVE_PACKET_FIELD_ERROR(score);
  }
  if (!dio_get_bool8(pc->json_packet, "is_male", &real_packet->is_male)) {
    RECEIVE_PACKET_FIELD_ERROR(is_male);
  }
  if (!dio_get_bool8(pc->json_packet, "was_created", &real_packet->was_created)) {
    RECEIVE_PACKET_FIELD_ERROR(was_created);
  }
  if (!dio_get_uint8(pc->json_packet, "government", &real_packet->government)) {
    RECEIVE_PACKET_FIELD_ERROR(government);
  }
  if (!dio_get_uint8(pc->json_packet, "target_government", &real_packet->target_government)) {
    RECEIVE_PACKET_FIELD_ERROR(target_government);
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_NUM_PLAYER_SLOTS; i++) {
      if (!dio_get_bool8(pc->json_packet, "real_embassy", &real_packet->real_embassy[i])) {
        RECEIVE_PACKET_FIELD_ERROR(real_embassy);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "city_style", &real_packet->city_style)) {
    RECEIVE_PACKET_FIELD_ERROR(city_style);
  }
  if (!dio_get_uint32(pc->json_packet, "nation", &real_packet->nation)) {
    RECEIVE_PACKET_FIELD_ERROR(nation);
  }
  if (!dio_get_uint8(pc->json_packet, "team", &real_packet->team)) {
    RECEIVE_PACKET_FIELD_ERROR(team);
  }
  if (!dio_get_bool8(pc->json_packet, "is_ready", &real_packet->is_ready)) {
    RECEIVE_PACKET_FIELD_ERROR(is_ready);
  }
  if (!dio_get_bool8(pc->json_packet, "phase_done", &real_packet->phase_done)) {
    RECEIVE_PACKET_FIELD_ERROR(phase_done);
  }
  if (!dio_get_sint16(pc->json_packet, "nturns_idle", &real_packet->nturns_idle)) {
    RECEIVE_PACKET_FIELD_ERROR(nturns_idle);
  }
  if (!dio_get_bool8(pc->json_packet, "is_alive", &real_packet->is_alive)) {
    RECEIVE_PACKET_FIELD_ERROR(is_alive);
  }
  if (!dio_get_uint32(pc->json_packet, "gold", &real_packet->gold)) {
    RECEIVE_PACKET_FIELD_ERROR(gold);
  }
  if (!dio_get_uint32(pc->json_packet, "tax", &real_packet->tax)) {
    RECEIVE_PACKET_FIELD_ERROR(tax);
  }
  if (!dio_get_uint32(pc->json_packet, "science", &real_packet->science)) {
    RECEIVE_PACKET_FIELD_ERROR(science);
  }
  if (!dio_get_uint32(pc->json_packet, "luxury", &real_packet->luxury)) {
    RECEIVE_PACKET_FIELD_ERROR(luxury);
  }
  if (!dio_get_uint32(pc->json_packet, "bulbs_last_turn", &real_packet->bulbs_last_turn)) {
    RECEIVE_PACKET_FIELD_ERROR(bulbs_last_turn);
  }
  if (!dio_get_uint32(pc->json_packet, "bulbs_researched", &real_packet->bulbs_researched)) {
    RECEIVE_PACKET_FIELD_ERROR(bulbs_researched);
  }
  if (!dio_get_uint32(pc->json_packet, "techs_researched", &real_packet->techs_researched)) {
    RECEIVE_PACKET_FIELD_ERROR(techs_researched);
  }
  if (!dio_get_uint32(pc->json_packet, "current_research_cost", &real_packet->current_research_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(current_research_cost);
  }
  if (!dio_get_uint8(pc->json_packet, "researching", &real_packet->researching)) {
    RECEIVE_PACKET_FIELD_ERROR(researching);
  }
  if (!dio_get_uint32(pc->json_packet, "science_cost", &real_packet->science_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(science_cost);
  }
  if (!dio_get_uint32(pc->json_packet, "future_tech", &real_packet->future_tech)) {
    RECEIVE_PACKET_FIELD_ERROR(future_tech);
  }
  if (!dio_get_uint8(pc->json_packet, "tech_goal", &real_packet->tech_goal)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_goal);
  }
  if (!dio_get_bool8(pc->json_packet, "is_connected", &real_packet->is_connected)) {
    RECEIVE_PACKET_FIELD_ERROR(is_connected);
  }
  if (!dio_get_sint16(pc->json_packet, "revolution_finishes", &real_packet->revolution_finishes)) {
    RECEIVE_PACKET_FIELD_ERROR(revolution_finishes);
  }
  if (!dio_get_bool8(pc->json_packet, "ai", &real_packet->ai)) {
    RECEIVE_PACKET_FIELD_ERROR(ai);
  }
  if (!dio_get_uint8(pc->json_packet, "ai_skill_level", &real_packet->ai_skill_level)) {
    RECEIVE_PACKET_FIELD_ERROR(ai_skill_level);
  }
  if (!dio_get_uint8(pc->json_packet, "barbarian_type", &real_packet->barbarian_type)) {
    RECEIVE_PACKET_FIELD_ERROR(barbarian_type);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->gives_shared_vision)) {
    RECEIVE_PACKET_FIELD_ERROR(gives_shared_vision);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "inventions", real_packet->inventions, sizeof(real_packet->inventions))) {
    RECEIVE_PACKET_FIELD_ERROR(inventions);
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_NUM_PLAYER_SLOTS; i++) {
      if (!dio_get_uint32(pc->json_packet, "love", &real_packet->love[i])) {
        RECEIVE_PACKET_FIELD_ERROR(love);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "color_red", &real_packet->color_red)) {
    RECEIVE_PACKET_FIELD_ERROR(color_red);
  }
  if (!dio_get_uint8(pc->json_packet, "color_green", &real_packet->color_green)) {
    RECEIVE_PACKET_FIELD_ERROR(color_green);
  }
  if (!dio_get_uint8(pc->json_packet, "color_blue", &real_packet->color_blue)) {
    RECEIVE_PACKET_FIELD_ERROR(color_blue);
  }
  
  {
    int i;
  
    for (i = 0; i < B_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "wonders", &real_packet->wonders[i])) {
        RECEIVE_PACKET_FIELD_ERROR(wonders);
      }
    }
  }
  if (!dio_get_uint32(pc->json_packet, "net_income", &real_packet->net_income)) {
    RECEIVE_PACKET_FIELD_ERROR(net_income);
  }

  log_packet("packet_player_info_100: got info about (%d)",
    real_packet->playerno);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_info_100(struct connection *pc, const struct packet_player_info *packet)
{
  const struct packet_player_info *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_INFO);

  log_packet("packet_player_info_100: sending info about (%d)",
    real_packet->playerno);

  dio_put_sint8(&dout, "playerno", real_packet->playerno);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "username", real_packet->username);
  dio_put_uint32(&dout, "score", real_packet->score);
  dio_put_bool8(&dout, "is_male", real_packet->is_male);
  dio_put_bool8(&dout, "was_created", real_packet->was_created);
  dio_put_uint8(&dout, "government", real_packet->government);
  dio_put_uint8(&dout, "target_government", real_packet->target_government);

    {
        dio_put_array_bool8(&dout, "real_embassy", (void *)real_packet->real_embassy, MAX_NUM_PLAYER_SLOTS);
    } 
  dio_put_uint8(&dout, "city_style", real_packet->city_style);
  dio_put_uint32(&dout, "nation", real_packet->nation);
  dio_put_uint8(&dout, "team", real_packet->team);
  dio_put_bool8(&dout, "is_ready", real_packet->is_ready);
  dio_put_bool8(&dout, "phase_done", real_packet->phase_done);
  dio_put_sint16(&dout, "nturns_idle", real_packet->nturns_idle);
  dio_put_bool8(&dout, "is_alive", real_packet->is_alive);
  dio_put_uint32(&dout, "gold", real_packet->gold);
  dio_put_uint32(&dout, "tax", real_packet->tax);
  dio_put_uint32(&dout, "science", real_packet->science);
  dio_put_uint32(&dout, "luxury", real_packet->luxury);
  dio_put_uint32(&dout, "bulbs_last_turn", real_packet->bulbs_last_turn);
  dio_put_uint32(&dout, "bulbs_researched", real_packet->bulbs_researched);
  dio_put_uint32(&dout, "techs_researched", real_packet->techs_researched);
  dio_put_uint32(&dout, "current_research_cost", real_packet->current_research_cost);
  dio_put_uint8(&dout, "researching", real_packet->researching);
  dio_put_uint32(&dout, "science_cost", real_packet->science_cost);
  dio_put_uint32(&dout, "future_tech", real_packet->future_tech);
  dio_put_uint8(&dout, "tech_goal", real_packet->tech_goal);
  dio_put_bool8(&dout, "is_connected", real_packet->is_connected);
  dio_put_sint16(&dout, "revolution_finishes", real_packet->revolution_finishes);
  dio_put_bool8(&dout, "ai", real_packet->ai);
  dio_put_uint8(&dout, "ai_skill_level", real_packet->ai_skill_level);
  dio_put_uint8(&dout, "barbarian_type", real_packet->barbarian_type);
DIO_BV_PUT(&dout, "gives_shared_vision", packet->gives_shared_vision);
  dio_put_string(&dout, "inventions", real_packet->inventions);

    {
        dio_put_array_uint32(&dout, "love", (void *)real_packet->love, MAX_NUM_PLAYER_SLOTS);
    } 
  dio_put_uint8(&dout, "color_red", real_packet->color_red);
  dio_put_uint8(&dout, "color_green", real_packet->color_green);
  dio_put_uint8(&dout, "color_blue", real_packet->color_blue);

    {
        dio_put_array_uint32(&dout, "wonders", (void *)real_packet->wonders, B_LAST);
    } 
  dio_put_uint32(&dout, "net_income", real_packet->net_income);

  SEND_PACKET_END(PACKET_PLAYER_INFO);
}

static void ensure_valid_variant_packet_player_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_INFO] = variant;
}

struct packet_player_info *receive_packet_player_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_player_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_player_info(pc);

  switch(pc->phs.variant[PACKET_PLAYER_INFO]) {
  case 100:
    return receive_packet_player_info_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_info(struct connection *pc, const struct packet_player_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_player_info from the client.");
  }
  ensure_valid_variant_packet_player_info(pc);

  switch(pc->phs.variant[PACKET_PLAYER_INFO]) {

  case 100:
    return send_packet_player_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_player_phase_done *receive_packet_player_phase_done_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_phase_done, real_packet);
  if (!dio_get_sint16(pc->json_packet, "turn", &real_packet->turn)) {
    RECEIVE_PACKET_FIELD_ERROR(turn);
  }

  log_packet("packet_player_phase_done_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_phase_done_100(struct connection *pc, const struct packet_player_phase_done *packet)
{
  const struct packet_player_phase_done *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_PHASE_DONE);

  log_packet("packet_player_phase_done_100: sending info about ()");

  dio_put_sint16(&dout, "turn", real_packet->turn);

  SEND_PACKET_END(PACKET_PLAYER_PHASE_DONE);
}

static void ensure_valid_variant_packet_player_phase_done(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_PHASE_DONE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_PHASE_DONE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_PHASE_DONE] = variant;
}

struct packet_player_phase_done *receive_packet_player_phase_done(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_phase_done at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_phase_done(pc);

  switch(pc->phs.variant[PACKET_PLAYER_PHASE_DONE]) {
  case 100:
    return receive_packet_player_phase_done_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_PHASE_DONE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_phase_done(struct connection *pc, const struct packet_player_phase_done *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_phase_done from the server.");
  }
  ensure_valid_variant_packet_player_phase_done(pc);

  switch(pc->phs.variant[PACKET_PLAYER_PHASE_DONE]) {

  case 100:
    return send_packet_player_phase_done_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_PHASE_DONE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_phase_done(struct connection *pc, int turn)
{
  struct packet_player_phase_done packet, *real_packet = &packet;

  real_packet->turn = turn;
  
  return send_packet_player_phase_done(pc, real_packet);
}

static struct packet_player_rates *receive_packet_player_rates_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_rates, real_packet);
  if (!dio_get_uint32(pc->json_packet, "tax", &real_packet->tax)) {
    RECEIVE_PACKET_FIELD_ERROR(tax);
  }
  if (!dio_get_uint32(pc->json_packet, "luxury", &real_packet->luxury)) {
    RECEIVE_PACKET_FIELD_ERROR(luxury);
  }
  if (!dio_get_uint32(pc->json_packet, "science", &real_packet->science)) {
    RECEIVE_PACKET_FIELD_ERROR(science);
  }

  log_packet("packet_player_rates_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_rates_100(struct connection *pc, const struct packet_player_rates *packet)
{
  const struct packet_player_rates *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_RATES);

  log_packet("packet_player_rates_100: sending info about ()");

  dio_put_uint32(&dout, "tax", real_packet->tax);
  dio_put_uint32(&dout, "luxury", real_packet->luxury);
  dio_put_uint32(&dout, "science", real_packet->science);

  SEND_PACKET_END(PACKET_PLAYER_RATES);
}

static void ensure_valid_variant_packet_player_rates(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_RATES] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_RATES variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_RATES] = variant;
}

struct packet_player_rates *receive_packet_player_rates(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_rates at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_rates(pc);

  switch(pc->phs.variant[PACKET_PLAYER_RATES]) {
  case 100:
    return receive_packet_player_rates_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_RATES variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_rates(struct connection *pc, const struct packet_player_rates *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_rates from the server.");
  }
  ensure_valid_variant_packet_player_rates(pc);

  switch(pc->phs.variant[PACKET_PLAYER_RATES]) {

  case 100:
    return send_packet_player_rates_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_RATES variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_rates(struct connection *pc, int tax, int luxury, int science)
{
  struct packet_player_rates packet, *real_packet = &packet;

  real_packet->tax = tax;
  real_packet->luxury = luxury;
  real_packet->science = science;
  
  return send_packet_player_rates(pc, real_packet);
}

static struct packet_player_change_government *receive_packet_player_change_government_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_change_government, real_packet);
  if (!dio_get_uint8(pc->json_packet, "government", &real_packet->government)) {
    RECEIVE_PACKET_FIELD_ERROR(government);
  }

  log_packet("packet_player_change_government_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_change_government_100(struct connection *pc, const struct packet_player_change_government *packet)
{
  const struct packet_player_change_government *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_CHANGE_GOVERNMENT);

  log_packet("packet_player_change_government_100: sending info about ()");

  dio_put_uint8(&dout, "government", real_packet->government);

  SEND_PACKET_END(PACKET_PLAYER_CHANGE_GOVERNMENT);
}

static void ensure_valid_variant_packet_player_change_government(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_CHANGE_GOVERNMENT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_CHANGE_GOVERNMENT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_CHANGE_GOVERNMENT] = variant;
}

struct packet_player_change_government *receive_packet_player_change_government(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_change_government at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_change_government(pc);

  switch(pc->phs.variant[PACKET_PLAYER_CHANGE_GOVERNMENT]) {
  case 100:
    return receive_packet_player_change_government_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_CHANGE_GOVERNMENT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_change_government(struct connection *pc, const struct packet_player_change_government *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_change_government from the server.");
  }
  ensure_valid_variant_packet_player_change_government(pc);

  switch(pc->phs.variant[PACKET_PLAYER_CHANGE_GOVERNMENT]) {

  case 100:
    return send_packet_player_change_government_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_CHANGE_GOVERNMENT variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_change_government(struct connection *pc, int government)
{
  struct packet_player_change_government packet, *real_packet = &packet;

  real_packet->government = government;
  
  return send_packet_player_change_government(pc, real_packet);
}

static struct packet_player_research *receive_packet_player_research_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_research, real_packet);
  if (!dio_get_uint8(pc->json_packet, "tech", &real_packet->tech)) {
    RECEIVE_PACKET_FIELD_ERROR(tech);
  }

  log_packet("packet_player_research_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_research_100(struct connection *pc, const struct packet_player_research *packet)
{
  const struct packet_player_research *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_RESEARCH);

  log_packet("packet_player_research_100: sending info about ()");

  dio_put_uint8(&dout, "tech", real_packet->tech);

  SEND_PACKET_END(PACKET_PLAYER_RESEARCH);
}

static void ensure_valid_variant_packet_player_research(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_RESEARCH] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_RESEARCH variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_RESEARCH] = variant;
}

struct packet_player_research *receive_packet_player_research(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_research at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_research(pc);

  switch(pc->phs.variant[PACKET_PLAYER_RESEARCH]) {
  case 100:
    return receive_packet_player_research_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_RESEARCH variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_research(struct connection *pc, const struct packet_player_research *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_research from the server.");
  }
  ensure_valid_variant_packet_player_research(pc);

  switch(pc->phs.variant[PACKET_PLAYER_RESEARCH]) {

  case 100:
    return send_packet_player_research_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_RESEARCH variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_research(struct connection *pc, int tech)
{
  struct packet_player_research packet, *real_packet = &packet;

  real_packet->tech = tech;
  
  return send_packet_player_research(pc, real_packet);
}

static struct packet_player_tech_goal *receive_packet_player_tech_goal_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_tech_goal, real_packet);
  if (!dio_get_uint8(pc->json_packet, "tech", &real_packet->tech)) {
    RECEIVE_PACKET_FIELD_ERROR(tech);
  }

  log_packet("packet_player_tech_goal_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_tech_goal_100(struct connection *pc, const struct packet_player_tech_goal *packet)
{
  const struct packet_player_tech_goal *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_TECH_GOAL);

  log_packet("packet_player_tech_goal_100: sending info about ()");

  dio_put_uint8(&dout, "tech", real_packet->tech);

  SEND_PACKET_END(PACKET_PLAYER_TECH_GOAL);
}

static void ensure_valid_variant_packet_player_tech_goal(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_TECH_GOAL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_TECH_GOAL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_TECH_GOAL] = variant;
}

struct packet_player_tech_goal *receive_packet_player_tech_goal(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_tech_goal at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_tech_goal(pc);

  switch(pc->phs.variant[PACKET_PLAYER_TECH_GOAL]) {
  case 100:
    return receive_packet_player_tech_goal_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_TECH_GOAL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_tech_goal(struct connection *pc, const struct packet_player_tech_goal *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_tech_goal from the server.");
  }
  ensure_valid_variant_packet_player_tech_goal(pc);

  switch(pc->phs.variant[PACKET_PLAYER_TECH_GOAL]) {

  case 100:
    return send_packet_player_tech_goal_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_TECH_GOAL variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_player_tech_goal(struct connection *pc, int tech)
{
  struct packet_player_tech_goal packet, *real_packet = &packet;

  real_packet->tech = tech;
  
  return send_packet_player_tech_goal(pc, real_packet);
}

static struct packet_tech_gained *receive_packet_tech_gained_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_tech_gained, real_packet);
  if (!dio_get_uint8(pc->json_packet, "tech", &real_packet->tech)) {
    RECEIVE_PACKET_FIELD_ERROR(tech);
  }

  log_packet("packet_tech_gained_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_tech_gained_100(struct connection *pc, const struct packet_tech_gained *packet)
{
  const struct packet_tech_gained *real_packet = packet;
  SEND_PACKET_START(PACKET_TECH_GAINED);

  log_packet("packet_tech_gained_100: sending info about ()");

  dio_put_uint8(&dout, "tech", real_packet->tech);

  SEND_PACKET_END(PACKET_TECH_GAINED);
}

static void ensure_valid_variant_packet_tech_gained(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_TECH_GAINED] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_TECH_GAINED variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_TECH_GAINED] = variant;
}

struct packet_tech_gained *receive_packet_tech_gained(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_tech_gained at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_tech_gained(pc);

  switch(pc->phs.variant[PACKET_TECH_GAINED]) {
  case 100:
    return receive_packet_tech_gained_100(pc);
  default:
    log_debug("Unknown PACKET_TECH_GAINED variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_tech_gained(struct connection *pc, const struct packet_tech_gained *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_tech_gained from the client.");
  }
  ensure_valid_variant_packet_tech_gained(pc);

  switch(pc->phs.variant[PACKET_TECH_GAINED]) {

  case 100:
    return send_packet_tech_gained_100(pc, packet);
  default:
    log_debug("Unknown PACKET_TECH_GAINED variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_tech_gained(struct connection *pc, int tech)
{
  struct packet_tech_gained packet, *real_packet = &packet;

  real_packet->tech = tech;
  
  return send_packet_tech_gained(pc, real_packet);
}

static struct packet_player_attribute_block *receive_packet_player_attribute_block_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_attribute_block, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_player_attribute_block_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_attribute_block_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_PLAYER_ATTRIBUTE_BLOCK);

  log_packet("packet_player_attribute_block_100: sending info about ()");
  SEND_PACKET_END(PACKET_PLAYER_ATTRIBUTE_BLOCK);
}

static void ensure_valid_variant_packet_player_attribute_block(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_BLOCK] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_ATTRIBUTE_BLOCK variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_BLOCK] = variant;
}

struct packet_player_attribute_block *receive_packet_player_attribute_block(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_player_attribute_block at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_player_attribute_block(pc);

  switch(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_BLOCK]) {
  case 100:
    return receive_packet_player_attribute_block_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_ATTRIBUTE_BLOCK variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_attribute_block(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_player_attribute_block from the server.");
  }
  ensure_valid_variant_packet_player_attribute_block(pc);

  switch(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_BLOCK]) {

  case 100:
    return send_packet_player_attribute_block_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_ATTRIBUTE_BLOCK variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_player_attribute_chunk *receive_packet_player_attribute_chunk_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_attribute_chunk, real_packet);
  if (!dio_get_uint32(pc->json_packet, "offset", &real_packet->offset)) {
    RECEIVE_PACKET_FIELD_ERROR(offset);
  }
  if (!dio_get_uint32(pc->json_packet, "total_length", &real_packet->total_length)) {
    RECEIVE_PACKET_FIELD_ERROR(total_length);
  }
  if (!dio_get_uint32(pc->json_packet, "chunk_length", &real_packet->chunk_length)) {
    RECEIVE_PACKET_FIELD_ERROR(chunk_length);
  }
   /* not supported yet. 
    if (real_packet->chunk_length > ATTRIBUTE_CHUNK_SIZE) {
      RECEIVE_PACKET_FIELD_ERROR(data, ": truncation array");
    }
    if (!dio_get_memory(pc->json_packet, "data", real_packet->data, real_packet->chunk_length)){
      RECEIVE_PACKET_FIELD_ERROR(data);
    } */

  log_packet("packet_player_attribute_chunk_100: got info about (%d)",
    real_packet->offset);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_attribute_chunk_100(struct connection *pc, const struct packet_player_attribute_chunk *packet)
{
  const struct packet_player_attribute_chunk *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_ATTRIBUTE_CHUNK);

  log_packet("packet_player_attribute_chunk_100: sending info about (%d)",
    real_packet->offset);

  {
    struct packet_player_attribute_chunk *tmp = fc_malloc(sizeof(*tmp));

    *tmp = *packet;
    pre_send_packet_player_attribute_chunk(pc, tmp);
    real_packet = tmp;
  }

  dio_put_uint32(&dout, "offset", real_packet->offset);
  dio_put_uint32(&dout, "total_length", real_packet->total_length);
  dio_put_uint32(&dout, "chunk_length", real_packet->chunk_length);
  dio_put_memory(&dout, "data", &real_packet->data, real_packet->chunk_length);


  if (real_packet != packet) {
    free((void *) real_packet);
  }
  SEND_PACKET_END(PACKET_PLAYER_ATTRIBUTE_CHUNK);
}

static void ensure_valid_variant_packet_player_attribute_chunk(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_CHUNK] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_ATTRIBUTE_CHUNK variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_CHUNK] = variant;
}

struct packet_player_attribute_chunk *receive_packet_player_attribute_chunk(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  ensure_valid_variant_packet_player_attribute_chunk(pc);

  switch(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_CHUNK]) {
  case 100:
    return receive_packet_player_attribute_chunk_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_ATTRIBUTE_CHUNK variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_attribute_chunk(struct connection *pc, const struct packet_player_attribute_chunk *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  ensure_valid_variant_packet_player_attribute_chunk(pc);

  switch(pc->phs.variant[PACKET_PLAYER_ATTRIBUTE_CHUNK]) {

  case 100:
    return send_packet_player_attribute_chunk_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_ATTRIBUTE_CHUNK variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_player_diplstate *receive_packet_player_diplstate_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_player_diplstate, real_packet);
  if (!dio_get_uint32(pc->json_packet, "diplstate_id", &real_packet->diplstate_id)) {
    RECEIVE_PACKET_FIELD_ERROR(diplstate_id);
  }
  if (!dio_get_sint8(pc->json_packet, "plr1", &real_packet->plr1)) {
    RECEIVE_PACKET_FIELD_ERROR(plr1);
  }
  if (!dio_get_sint8(pc->json_packet, "plr2", &real_packet->plr2)) {
    RECEIVE_PACKET_FIELD_ERROR(plr2);
  }
  if (!dio_get_uint32(pc->json_packet, "ds_type", &real_packet->ds_type)) {
    RECEIVE_PACKET_FIELD_ERROR(ds_type);
  }
  if (!dio_get_uint32(pc->json_packet, "turns_left", &real_packet->turns_left)) {
    RECEIVE_PACKET_FIELD_ERROR(turns_left);
  }
  if (!dio_get_uint8(pc->json_packet, "has_reason_to_cancel", &real_packet->has_reason_to_cancel)) {
    RECEIVE_PACKET_FIELD_ERROR(has_reason_to_cancel);
  }
  if (!dio_get_uint32(pc->json_packet, "contact_turns_left", &real_packet->contact_turns_left)) {
    RECEIVE_PACKET_FIELD_ERROR(contact_turns_left);
  }

  log_packet("packet_player_diplstate_100: got info about (%d)",
    real_packet->diplstate_id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_player_diplstate_100(struct connection *pc, const struct packet_player_diplstate *packet)
{
  const struct packet_player_diplstate *real_packet = packet;
  SEND_PACKET_START(PACKET_PLAYER_DIPLSTATE);

  log_packet("packet_player_diplstate_100: sending info about (%d)",
    real_packet->diplstate_id);

  dio_put_uint32(&dout, "diplstate_id", real_packet->diplstate_id);
  dio_put_sint8(&dout, "plr1", real_packet->plr1);
  dio_put_sint8(&dout, "plr2", real_packet->plr2);
  dio_put_uint32(&dout, "ds_type", real_packet->ds_type);
  dio_put_uint32(&dout, "turns_left", real_packet->turns_left);
  dio_put_uint8(&dout, "has_reason_to_cancel", real_packet->has_reason_to_cancel);
  dio_put_uint32(&dout, "contact_turns_left", real_packet->contact_turns_left);

  SEND_PACKET_END(PACKET_PLAYER_DIPLSTATE);
}

static void ensure_valid_variant_packet_player_diplstate(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PLAYER_DIPLSTATE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PLAYER_DIPLSTATE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PLAYER_DIPLSTATE] = variant;
}

struct packet_player_diplstate *receive_packet_player_diplstate(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_player_diplstate at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_player_diplstate(pc);

  switch(pc->phs.variant[PACKET_PLAYER_DIPLSTATE]) {
  case 100:
    return receive_packet_player_diplstate_100(pc);
  default:
    log_debug("Unknown PACKET_PLAYER_DIPLSTATE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_player_diplstate(struct connection *pc, const struct packet_player_diplstate *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_player_diplstate from the client.");
  }
  ensure_valid_variant_packet_player_diplstate(pc);

  switch(pc->phs.variant[PACKET_PLAYER_DIPLSTATE]) {

  case 100:
    return send_packet_player_diplstate_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PLAYER_DIPLSTATE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_unit_remove *receive_packet_unit_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_remove, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_remove_100(struct connection *pc, const struct packet_unit_remove *packet)
{
  const struct packet_unit_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_REMOVE);

  log_packet("packet_unit_remove_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_REMOVE);
}

static void ensure_valid_variant_packet_unit_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_REMOVE] = variant;
}

struct packet_unit_remove *receive_packet_unit_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_unit_remove at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_remove(pc);

  switch(pc->phs.variant[PACKET_UNIT_REMOVE]) {
  case 100:
    return receive_packet_unit_remove_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_remove(struct connection *pc, const struct packet_unit_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_unit_remove from the client.");
  }
  ensure_valid_variant_packet_unit_remove(pc);

  switch(pc->phs.variant[PACKET_UNIT_REMOVE]) {

  case 100:
    return send_packet_unit_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_unit_remove(struct conn_list *dest, const struct packet_unit_remove *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_unit_remove(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_unit_remove(struct connection *pc, int unit_id)
{
  struct packet_unit_remove packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_remove(pc, real_packet);
}

void dlsend_packet_unit_remove(struct conn_list *dest, int unit_id)
{
  struct packet_unit_remove packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  lsend_packet_unit_remove(dest, real_packet);
}

static struct packet_unit_info *receive_packet_unit_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint8(pc->json_packet, "nationality", &real_packet->nationality)) {
    RECEIVE_PACKET_FIELD_ERROR(nationality);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "facing", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(facing);
    }
    real_packet->facing = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "homecity", &real_packet->homecity)) {
    RECEIVE_PACKET_FIELD_ERROR(homecity);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "upkeep", &real_packet->upkeep[i])) {
        RECEIVE_PACKET_FIELD_ERROR(upkeep);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "veteran", &real_packet->veteran)) {
    RECEIVE_PACKET_FIELD_ERROR(veteran);
  }
  if (!dio_get_bool8(pc->json_packet, "ai", &real_packet->ai)) {
    RECEIVE_PACKET_FIELD_ERROR(ai);
  }
  if (!dio_get_bool8(pc->json_packet, "paradropped", &real_packet->paradropped)) {
    RECEIVE_PACKET_FIELD_ERROR(paradropped);
  }
  if (!dio_get_bool8(pc->json_packet, "occupied", &real_packet->occupied)) {
    RECEIVE_PACKET_FIELD_ERROR(occupied);
  }
  if (!dio_get_bool8(pc->json_packet, "transported", &real_packet->transported)) {
    RECEIVE_PACKET_FIELD_ERROR(transported);
  }
  if (!dio_get_bool8(pc->json_packet, "done_moving", &real_packet->done_moving)) {
    RECEIVE_PACKET_FIELD_ERROR(done_moving);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "transported_by", &real_packet->transported_by)) {
    RECEIVE_PACKET_FIELD_ERROR(transported_by);
  }
  if (!dio_get_uint8(pc->json_packet, "movesleft", &real_packet->movesleft)) {
    RECEIVE_PACKET_FIELD_ERROR(movesleft);
  }
  if (!dio_get_uint8(pc->json_packet, "hp", &real_packet->hp)) {
    RECEIVE_PACKET_FIELD_ERROR(hp);
  }
  if (!dio_get_uint8(pc->json_packet, "fuel", &real_packet->fuel)) {
    RECEIVE_PACKET_FIELD_ERROR(fuel);
  }
  if (!dio_get_uint32(pc->json_packet, "activity_count", &real_packet->activity_count)) {
    RECEIVE_PACKET_FIELD_ERROR(activity_count);
  }
  if (!dio_get_uint32(pc->json_packet, "changed_from_count", &real_packet->changed_from_count)) {
    RECEIVE_PACKET_FIELD_ERROR(changed_from_count);
  }
  if (!dio_get_sint32(pc->json_packet, "goto_tile", &real_packet->goto_tile)) {
    RECEIVE_PACKET_FIELD_ERROR(goto_tile);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity);
    }
    real_packet->activity = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint32(pc->json_packet, "activity_tgt_spe", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_tgt_spe);
    }
    real_packet->activity_tgt_spe = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_tgt_base", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_tgt_base);
    }
    real_packet->activity_tgt_base = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_tgt_road", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_tgt_road);
    }
    real_packet->activity_tgt_road = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "changed_from", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(changed_from);
    }
    real_packet->changed_from = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint32(pc->json_packet, "changed_from_tgt_spe", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(changed_from_tgt_spe);
    }
    real_packet->changed_from_tgt_spe = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "changed_from_tgt_base", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(changed_from_tgt_base);
    }
    real_packet->changed_from_tgt_base = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "changed_from_tgt_road", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(changed_from_tgt_road);
    }
    real_packet->changed_from_tgt_road = readin;
  }
  if (!dio_get_sint8(pc->json_packet, "battlegroup", &real_packet->battlegroup)) {
    RECEIVE_PACKET_FIELD_ERROR(battlegroup);
  }
  if (!dio_get_bool8(pc->json_packet, "has_orders", &real_packet->has_orders)) {
    RECEIVE_PACKET_FIELD_ERROR(has_orders);
  }
  if (!dio_get_uint32(pc->json_packet, "orders_length", &real_packet->orders_length)) {
    RECEIVE_PACKET_FIELD_ERROR(orders_length);
  }
  if (!dio_get_uint32(pc->json_packet, "orders_index", &real_packet->orders_index)) {
    RECEIVE_PACKET_FIELD_ERROR(orders_index);
  }
  if (!dio_get_bool8(pc->json_packet, "orders_repeat", &real_packet->orders_repeat)) {
    RECEIVE_PACKET_FIELD_ERROR(orders_repeat);
  }
  if (!dio_get_bool8(pc->json_packet, "orders_vigilant", &real_packet->orders_vigilant)) {
    RECEIVE_PACKET_FIELD_ERROR(orders_vigilant);
  }
  if (!dio_get_bool8(pc->json_packet, "caravan_trade", &real_packet->caravan_trade)) {
    RECEIVE_PACKET_FIELD_ERROR(caravan_trade);
  }
  if (!dio_get_bool8(pc->json_packet, "caravan_wonder", &real_packet->caravan_wonder)) {
    RECEIVE_PACKET_FIELD_ERROR(caravan_wonder);
  }
  
  {
    int i;
  
    if (real_packet->orders_length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders, ": truncation array");
    }
    for (i = 0; i < real_packet->orders_length; i++) {
      {
        int readin;
    
        if (!dio_get_uint8(pc->json_packet, "orders", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders);
        }
        real_packet->orders[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->orders_length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders_dirs, ": truncation array");
    }
    for (i = 0; i < real_packet->orders_length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "orders_dirs", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders_dirs);
        }
        real_packet->orders_dirs[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->orders_length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders_activities, ": truncation array");
    }
    for (i = 0; i < real_packet->orders_length; i++) {
      {
        int readin;
    
        if (!dio_get_uint8(pc->json_packet, "orders_activities", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders_activities);
        }
        real_packet->orders_activities[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->orders_length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders_bases, ": truncation array");
    }
    for (i = 0; i < real_packet->orders_length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "orders_bases", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders_bases);
        }
        real_packet->orders_bases[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->orders_length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders_roads, ": truncation array");
    }
    for (i = 0; i < real_packet->orders_length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "orders_roads", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders_roads);
        }
        real_packet->orders_roads[i] = readin;
      }
    }
  }

  log_packet("packet_unit_info_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_info_100(struct connection *pc, const struct packet_unit_info *packet)
{
  const struct packet_unit_info *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_INFO);

  log_packet("packet_unit_info_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint8(&dout, "nationality", real_packet->nationality);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "facing", real_packet->facing);
  dio_put_uint32(&dout, "homecity", real_packet->homecity);

    {
        dio_put_array_uint8(&dout, "upkeep", (void *)real_packet->upkeep, O_LAST);
    } 
  dio_put_uint8(&dout, "veteran", real_packet->veteran);
  dio_put_bool8(&dout, "ai", real_packet->ai);
  dio_put_bool8(&dout, "paradropped", real_packet->paradropped);
  dio_put_bool8(&dout, "occupied", real_packet->occupied);
  dio_put_bool8(&dout, "transported", real_packet->transported);
  dio_put_bool8(&dout, "done_moving", real_packet->done_moving);
  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint32(&dout, "transported_by", real_packet->transported_by);
  dio_put_uint8(&dout, "movesleft", real_packet->movesleft);
  dio_put_uint8(&dout, "hp", real_packet->hp);
  dio_put_uint8(&dout, "fuel", real_packet->fuel);
  dio_put_uint32(&dout, "activity_count", real_packet->activity_count);
  dio_put_uint32(&dout, "changed_from_count", real_packet->changed_from_count);
  dio_put_sint32(&dout, "goto_tile", real_packet->goto_tile);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_uint32(&dout, "activity_tgt_spe", real_packet->activity_tgt_spe);
  dio_put_sint8(&dout, "activity_tgt_base", real_packet->activity_tgt_base);
  dio_put_sint8(&dout, "activity_tgt_road", real_packet->activity_tgt_road);
  dio_put_uint8(&dout, "changed_from", real_packet->changed_from);
  dio_put_uint32(&dout, "changed_from_tgt_spe", real_packet->changed_from_tgt_spe);
  dio_put_sint8(&dout, "changed_from_tgt_base", real_packet->changed_from_tgt_base);
  dio_put_sint8(&dout, "changed_from_tgt_road", real_packet->changed_from_tgt_road);
  dio_put_sint8(&dout, "battlegroup", real_packet->battlegroup);
  dio_put_bool8(&dout, "has_orders", real_packet->has_orders);
  dio_put_uint32(&dout, "orders_length", real_packet->orders_length);
  dio_put_uint32(&dout, "orders_index", real_packet->orders_index);
  dio_put_bool8(&dout, "orders_repeat", real_packet->orders_repeat);
  dio_put_bool8(&dout, "orders_vigilant", real_packet->orders_vigilant);
  dio_put_bool8(&dout, "caravan_trade", real_packet->caravan_trade);
  dio_put_bool8(&dout, "caravan_wonder", real_packet->caravan_wonder);

    {
        dio_put_array_uint8(&dout, "orders", (void *)real_packet->orders, real_packet->orders_length);
    } 

    {
        dio_put_array_sint8(&dout, "orders_dirs", (void *)real_packet->orders_dirs, real_packet->orders_length);
    } 

    {
        dio_put_array_uint8(&dout, "orders_activities", (void *)real_packet->orders_activities, real_packet->orders_length);
    } 

    {
        dio_put_array_sint8(&dout, "orders_bases", (void *)real_packet->orders_bases, real_packet->orders_length);
    } 

    {
        dio_put_array_sint8(&dout, "orders_roads", (void *)real_packet->orders_roads, real_packet->orders_length);
    } 

  SEND_PACKET_END(PACKET_UNIT_INFO);
}

static void ensure_valid_variant_packet_unit_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_INFO] = variant;
}

struct packet_unit_info *receive_packet_unit_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_unit_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_INFO]) {
  case 100:
    return receive_packet_unit_info_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_info(struct connection *pc, const struct packet_unit_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_unit_info from the client.");
  }
  ensure_valid_variant_packet_unit_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_INFO]) {

  case 100:
    return send_packet_unit_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_unit_info(struct conn_list *dest, const struct packet_unit_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_unit_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_unit_short_info *receive_packet_unit_short_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_short_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "facing", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(facing);
    }
    real_packet->facing = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "veteran", &real_packet->veteran)) {
    RECEIVE_PACKET_FIELD_ERROR(veteran);
  }
  if (!dio_get_bool8(pc->json_packet, "occupied", &real_packet->occupied)) {
    RECEIVE_PACKET_FIELD_ERROR(occupied);
  }
  if (!dio_get_bool8(pc->json_packet, "goes_out_of_sight", &real_packet->goes_out_of_sight)) {
    RECEIVE_PACKET_FIELD_ERROR(goes_out_of_sight);
  }
  if (!dio_get_bool8(pc->json_packet, "transported", &real_packet->transported)) {
    RECEIVE_PACKET_FIELD_ERROR(transported);
  }
  if (!dio_get_uint8(pc->json_packet, "hp", &real_packet->hp)) {
    RECEIVE_PACKET_FIELD_ERROR(hp);
  }
  if (!dio_get_uint8(pc->json_packet, "activity", &real_packet->activity)) {
    RECEIVE_PACKET_FIELD_ERROR(activity);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_tgt_base", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_tgt_base);
    }
    real_packet->activity_tgt_base = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_tgt_road", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_tgt_road);
    }
    real_packet->activity_tgt_road = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "transported_by", &real_packet->transported_by)) {
    RECEIVE_PACKET_FIELD_ERROR(transported_by);
  }
  if (!dio_get_uint8(pc->json_packet, "packet_use", &real_packet->packet_use)) {
    RECEIVE_PACKET_FIELD_ERROR(packet_use);
  }
  if (!dio_get_uint32(pc->json_packet, "info_city_id", &real_packet->info_city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(info_city_id);
  }
  if (!dio_get_uint32(pc->json_packet, "serial_num", &real_packet->serial_num)) {
    RECEIVE_PACKET_FIELD_ERROR(serial_num);
  }

  log_packet("packet_unit_short_info_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_short_info_100(struct connection *pc, const struct packet_unit_short_info *packet)
{
  const struct packet_unit_short_info *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_SHORT_INFO);

  log_packet("packet_unit_short_info_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "facing", real_packet->facing);
  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint8(&dout, "veteran", real_packet->veteran);
  dio_put_bool8(&dout, "occupied", real_packet->occupied);
  dio_put_bool8(&dout, "goes_out_of_sight", real_packet->goes_out_of_sight);
  dio_put_bool8(&dout, "transported", real_packet->transported);
  dio_put_uint8(&dout, "hp", real_packet->hp);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_sint8(&dout, "activity_tgt_base", real_packet->activity_tgt_base);
  dio_put_sint8(&dout, "activity_tgt_road", real_packet->activity_tgt_road);
  dio_put_uint32(&dout, "transported_by", real_packet->transported_by);
  dio_put_uint8(&dout, "packet_use", real_packet->packet_use);
  dio_put_uint32(&dout, "info_city_id", real_packet->info_city_id);
  dio_put_uint32(&dout, "serial_num", real_packet->serial_num);

  SEND_PACKET_END(PACKET_UNIT_SHORT_INFO);
}

static void ensure_valid_variant_packet_unit_short_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_SHORT_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_SHORT_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_SHORT_INFO] = variant;
}

struct packet_unit_short_info *receive_packet_unit_short_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_unit_short_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_short_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_SHORT_INFO]) {
  case 100:
    return receive_packet_unit_short_info_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_SHORT_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_short_info(struct connection *pc, const struct packet_unit_short_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_unit_short_info from the client.");
  }
  ensure_valid_variant_packet_unit_short_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_SHORT_INFO]) {

  case 100:
    return send_packet_unit_short_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_SHORT_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_unit_short_info(struct conn_list *dest, const struct packet_unit_short_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_unit_short_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_unit_combat_info *receive_packet_unit_combat_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_combat_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "attacker_unit_id", &real_packet->attacker_unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(attacker_unit_id);
  }
  if (!dio_get_uint32(pc->json_packet, "defender_unit_id", &real_packet->defender_unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(defender_unit_id);
  }
  if (!dio_get_uint32(pc->json_packet, "attacker_hp", &real_packet->attacker_hp)) {
    RECEIVE_PACKET_FIELD_ERROR(attacker_hp);
  }
  if (!dio_get_uint32(pc->json_packet, "defender_hp", &real_packet->defender_hp)) {
    RECEIVE_PACKET_FIELD_ERROR(defender_hp);
  }
  if (!dio_get_bool8(pc->json_packet, "make_winner_veteran", &real_packet->make_winner_veteran)) {
    RECEIVE_PACKET_FIELD_ERROR(make_winner_veteran);
  }

  log_packet("packet_unit_combat_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_combat_info_100(struct connection *pc, const struct packet_unit_combat_info *packet)
{
  const struct packet_unit_combat_info *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_COMBAT_INFO);

  log_packet("packet_unit_combat_info_100: sending info about ()");

  dio_put_uint32(&dout, "attacker_unit_id", real_packet->attacker_unit_id);
  dio_put_uint32(&dout, "defender_unit_id", real_packet->defender_unit_id);
  dio_put_uint32(&dout, "attacker_hp", real_packet->attacker_hp);
  dio_put_uint32(&dout, "defender_hp", real_packet->defender_hp);
  dio_put_bool8(&dout, "make_winner_veteran", real_packet->make_winner_veteran);

  SEND_PACKET_END(PACKET_UNIT_COMBAT_INFO);
}

static void ensure_valid_variant_packet_unit_combat_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_COMBAT_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_COMBAT_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_COMBAT_INFO] = variant;
}

struct packet_unit_combat_info *receive_packet_unit_combat_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_unit_combat_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_combat_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_COMBAT_INFO]) {
  case 100:
    return receive_packet_unit_combat_info_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_COMBAT_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_combat_info(struct connection *pc, const struct packet_unit_combat_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_unit_combat_info from the client.");
  }
  ensure_valid_variant_packet_unit_combat_info(pc);

  switch(pc->phs.variant[PACKET_UNIT_COMBAT_INFO]) {

  case 100:
    return send_packet_unit_combat_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_COMBAT_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_unit_combat_info(struct conn_list *dest, const struct packet_unit_combat_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_unit_combat_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_unit_move *receive_packet_unit_move_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_move, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }

  log_packet("packet_unit_move_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_move_100(struct connection *pc, const struct packet_unit_move *packet)
{
  const struct packet_unit_move *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_MOVE);

  log_packet("packet_unit_move_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_sint32(&dout, "tile", real_packet->tile);

  SEND_PACKET_END(PACKET_UNIT_MOVE);
}

static void ensure_valid_variant_packet_unit_move(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_MOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_MOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_MOVE] = variant;
}

struct packet_unit_move *receive_packet_unit_move(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_move at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_move(pc);

  switch(pc->phs.variant[PACKET_UNIT_MOVE]) {
  case 100:
    return receive_packet_unit_move_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_MOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_move(struct connection *pc, const struct packet_unit_move *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_move from the server.");
  }
  ensure_valid_variant_packet_unit_move(pc);

  switch(pc->phs.variant[PACKET_UNIT_MOVE]) {

  case 100:
    return send_packet_unit_move_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_MOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_move(struct connection *pc, int unit_id, int tile)
{
  struct packet_unit_move packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->tile = tile;
  
  return send_packet_unit_move(pc, real_packet);
}

static struct packet_unit_build_city *receive_packet_unit_build_city_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_build_city, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }

  log_packet("packet_unit_build_city_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_build_city_100(struct connection *pc, const struct packet_unit_build_city *packet)
{
  const struct packet_unit_build_city *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_BUILD_CITY);

  log_packet("packet_unit_build_city_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_string(&dout, "name", real_packet->name);

  SEND_PACKET_END(PACKET_UNIT_BUILD_CITY);
}

static void ensure_valid_variant_packet_unit_build_city(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_BUILD_CITY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_BUILD_CITY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_BUILD_CITY] = variant;
}

struct packet_unit_build_city *receive_packet_unit_build_city(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_build_city at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_build_city(pc);

  switch(pc->phs.variant[PACKET_UNIT_BUILD_CITY]) {
  case 100:
    return receive_packet_unit_build_city_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_BUILD_CITY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_build_city(struct connection *pc, const struct packet_unit_build_city *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_build_city from the server.");
  }
  ensure_valid_variant_packet_unit_build_city(pc);

  switch(pc->phs.variant[PACKET_UNIT_BUILD_CITY]) {

  case 100:
    return send_packet_unit_build_city_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_BUILD_CITY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_build_city(struct connection *pc, int unit_id, const char *name)
{
  struct packet_unit_build_city packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  sz_strlcpy(real_packet->name, name);
  
  return send_packet_unit_build_city(pc, real_packet);
}

static struct packet_unit_disband *receive_packet_unit_disband_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_disband, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_disband_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_disband_100(struct connection *pc, const struct packet_unit_disband *packet)
{
  const struct packet_unit_disband *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_DISBAND);

  log_packet("packet_unit_disband_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_DISBAND);
}

static void ensure_valid_variant_packet_unit_disband(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_DISBAND] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_DISBAND variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_DISBAND] = variant;
}

struct packet_unit_disband *receive_packet_unit_disband(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_disband at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_disband(pc);

  switch(pc->phs.variant[PACKET_UNIT_DISBAND]) {
  case 100:
    return receive_packet_unit_disband_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_DISBAND variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_disband(struct connection *pc, const struct packet_unit_disband *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_disband from the server.");
  }
  ensure_valid_variant_packet_unit_disband(pc);

  switch(pc->phs.variant[PACKET_UNIT_DISBAND]) {

  case 100:
    return send_packet_unit_disband_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_DISBAND variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_disband(struct connection *pc, int unit_id)
{
  struct packet_unit_disband packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_disband(pc, real_packet);
}

static struct packet_unit_change_homecity *receive_packet_unit_change_homecity_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_change_homecity, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }

  log_packet("packet_unit_change_homecity_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_change_homecity_100(struct connection *pc, const struct packet_unit_change_homecity *packet)
{
  const struct packet_unit_change_homecity *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_CHANGE_HOMECITY);

  log_packet("packet_unit_change_homecity_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint32(&dout, "city_id", real_packet->city_id);

  SEND_PACKET_END(PACKET_UNIT_CHANGE_HOMECITY);
}

static void ensure_valid_variant_packet_unit_change_homecity(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_CHANGE_HOMECITY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_CHANGE_HOMECITY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_CHANGE_HOMECITY] = variant;
}

struct packet_unit_change_homecity *receive_packet_unit_change_homecity(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_change_homecity at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_change_homecity(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_HOMECITY]) {
  case 100:
    return receive_packet_unit_change_homecity_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_HOMECITY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_change_homecity(struct connection *pc, const struct packet_unit_change_homecity *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_change_homecity from the server.");
  }
  ensure_valid_variant_packet_unit_change_homecity(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_HOMECITY]) {

  case 100:
    return send_packet_unit_change_homecity_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_HOMECITY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_change_homecity(struct connection *pc, int unit_id, int city_id)
{
  struct packet_unit_change_homecity packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->city_id = city_id;
  
  return send_packet_unit_change_homecity(pc, real_packet);
}

static struct packet_unit_establish_trade *receive_packet_unit_establish_trade_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_establish_trade, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_establish_trade_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_establish_trade_100(struct connection *pc, const struct packet_unit_establish_trade *packet)
{
  const struct packet_unit_establish_trade *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_ESTABLISH_TRADE);

  log_packet("packet_unit_establish_trade_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_ESTABLISH_TRADE);
}

static void ensure_valid_variant_packet_unit_establish_trade(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_ESTABLISH_TRADE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_ESTABLISH_TRADE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_ESTABLISH_TRADE] = variant;
}

struct packet_unit_establish_trade *receive_packet_unit_establish_trade(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_establish_trade at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_establish_trade(pc);

  switch(pc->phs.variant[PACKET_UNIT_ESTABLISH_TRADE]) {
  case 100:
    return receive_packet_unit_establish_trade_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_ESTABLISH_TRADE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_establish_trade(struct connection *pc, const struct packet_unit_establish_trade *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_establish_trade from the server.");
  }
  ensure_valid_variant_packet_unit_establish_trade(pc);

  switch(pc->phs.variant[PACKET_UNIT_ESTABLISH_TRADE]) {

  case 100:
    return send_packet_unit_establish_trade_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_ESTABLISH_TRADE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_establish_trade(struct connection *pc, int unit_id)
{
  struct packet_unit_establish_trade packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_establish_trade(pc, real_packet);
}

static struct packet_unit_battlegroup *receive_packet_unit_battlegroup_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_battlegroup, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_sint8(pc->json_packet, "battlegroup", &real_packet->battlegroup)) {
    RECEIVE_PACKET_FIELD_ERROR(battlegroup);
  }

  log_packet("packet_unit_battlegroup_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_battlegroup_100(struct connection *pc, const struct packet_unit_battlegroup *packet)
{
  const struct packet_unit_battlegroup *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_BATTLEGROUP);

  log_packet("packet_unit_battlegroup_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_sint8(&dout, "battlegroup", real_packet->battlegroup);

  SEND_PACKET_END(PACKET_UNIT_BATTLEGROUP);
}

static void ensure_valid_variant_packet_unit_battlegroup(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_BATTLEGROUP] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_BATTLEGROUP variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_BATTLEGROUP] = variant;
}

struct packet_unit_battlegroup *receive_packet_unit_battlegroup(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_battlegroup at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_battlegroup(pc);

  switch(pc->phs.variant[PACKET_UNIT_BATTLEGROUP]) {
  case 100:
    return receive_packet_unit_battlegroup_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_BATTLEGROUP variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_battlegroup(struct connection *pc, const struct packet_unit_battlegroup *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_battlegroup from the server.");
  }
  ensure_valid_variant_packet_unit_battlegroup(pc);

  switch(pc->phs.variant[PACKET_UNIT_BATTLEGROUP]) {

  case 100:
    return send_packet_unit_battlegroup_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_BATTLEGROUP variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_battlegroup(struct connection *pc, int unit_id, int battlegroup)
{
  struct packet_unit_battlegroup packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->battlegroup = battlegroup;
  
  return send_packet_unit_battlegroup(pc, real_packet);
}

static struct packet_unit_help_build_wonder *receive_packet_unit_help_build_wonder_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_help_build_wonder, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_help_build_wonder_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_help_build_wonder_100(struct connection *pc, const struct packet_unit_help_build_wonder *packet)
{
  const struct packet_unit_help_build_wonder *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_HELP_BUILD_WONDER);

  log_packet("packet_unit_help_build_wonder_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_HELP_BUILD_WONDER);
}

static void ensure_valid_variant_packet_unit_help_build_wonder(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_HELP_BUILD_WONDER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_HELP_BUILD_WONDER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_HELP_BUILD_WONDER] = variant;
}

struct packet_unit_help_build_wonder *receive_packet_unit_help_build_wonder(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_help_build_wonder at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_help_build_wonder(pc);

  switch(pc->phs.variant[PACKET_UNIT_HELP_BUILD_WONDER]) {
  case 100:
    return receive_packet_unit_help_build_wonder_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_HELP_BUILD_WONDER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_help_build_wonder(struct connection *pc, const struct packet_unit_help_build_wonder *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_help_build_wonder from the server.");
  }
  ensure_valid_variant_packet_unit_help_build_wonder(pc);

  switch(pc->phs.variant[PACKET_UNIT_HELP_BUILD_WONDER]) {

  case 100:
    return send_packet_unit_help_build_wonder_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_HELP_BUILD_WONDER variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_help_build_wonder(struct connection *pc, int unit_id)
{
  struct packet_unit_help_build_wonder packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_help_build_wonder(pc, real_packet);
}

static struct packet_unit_orders *receive_packet_unit_orders_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_orders, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_sint32(pc->json_packet, "src_tile", &real_packet->src_tile)) {
    RECEIVE_PACKET_FIELD_ERROR(src_tile);
  }
  if (!dio_get_uint32(pc->json_packet, "length", &real_packet->length)) {
    RECEIVE_PACKET_FIELD_ERROR(length);
  }
  if (!dio_get_bool8(pc->json_packet, "repeat", &real_packet->repeat)) {
    RECEIVE_PACKET_FIELD_ERROR(repeat);
  }
  if (!dio_get_bool8(pc->json_packet, "vigilant", &real_packet->vigilant)) {
    RECEIVE_PACKET_FIELD_ERROR(vigilant);
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(orders, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_uint8(pc->json_packet, "orders", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(orders);
        }
        real_packet->orders[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(dir, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "dir", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(dir);
        }
        real_packet->dir[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(activity, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(activity);
        }
        real_packet->activity[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(base, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "base", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(base);
        }
        real_packet->base[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(road, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "road", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(road);
        }
        real_packet->road[i] = readin;
      }
    }
  }
  if (!dio_get_sint32(pc->json_packet, "dest_tile", &real_packet->dest_tile)) {
    RECEIVE_PACKET_FIELD_ERROR(dest_tile);
  }

  log_packet("packet_unit_orders_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_orders_100(struct connection *pc, const struct packet_unit_orders *packet)
{
  const struct packet_unit_orders *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_ORDERS);

  log_packet("packet_unit_orders_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_sint32(&dout, "src_tile", real_packet->src_tile);
  dio_put_uint32(&dout, "length", real_packet->length);
  dio_put_bool8(&dout, "repeat", real_packet->repeat);
  dio_put_bool8(&dout, "vigilant", real_packet->vigilant);

    {
        dio_put_array_uint8(&dout, "orders", (void *)real_packet->orders, real_packet->length);
    } 

    {
        dio_put_array_sint8(&dout, "dir", (void *)real_packet->dir, real_packet->length);
    } 

    {
        dio_put_array_uint8(&dout, "activity", (void *)real_packet->activity, real_packet->length);
    } 

    {
        dio_put_array_sint8(&dout, "base", (void *)real_packet->base, real_packet->length);
    } 

    {
        dio_put_array_sint8(&dout, "road", (void *)real_packet->road, real_packet->length);
    } 
  dio_put_sint32(&dout, "dest_tile", real_packet->dest_tile);

  SEND_PACKET_END(PACKET_UNIT_ORDERS);
}

static void ensure_valid_variant_packet_unit_orders(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_ORDERS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_ORDERS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_ORDERS] = variant;
}

struct packet_unit_orders *receive_packet_unit_orders(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_orders at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_orders(pc);

  switch(pc->phs.variant[PACKET_UNIT_ORDERS]) {
  case 100:
    return receive_packet_unit_orders_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_ORDERS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_orders(struct connection *pc, const struct packet_unit_orders *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_orders from the server.");
  }
  ensure_valid_variant_packet_unit_orders(pc);

  switch(pc->phs.variant[PACKET_UNIT_ORDERS]) {

  case 100:
    return send_packet_unit_orders_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_ORDERS variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_unit_autosettlers *receive_packet_unit_autosettlers_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_autosettlers, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_autosettlers_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_autosettlers_100(struct connection *pc, const struct packet_unit_autosettlers *packet)
{
  const struct packet_unit_autosettlers *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_AUTOSETTLERS);

  log_packet("packet_unit_autosettlers_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_AUTOSETTLERS);
}

static void ensure_valid_variant_packet_unit_autosettlers(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_AUTOSETTLERS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_AUTOSETTLERS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_AUTOSETTLERS] = variant;
}

struct packet_unit_autosettlers *receive_packet_unit_autosettlers(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_autosettlers at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_autosettlers(pc);

  switch(pc->phs.variant[PACKET_UNIT_AUTOSETTLERS]) {
  case 100:
    return receive_packet_unit_autosettlers_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_AUTOSETTLERS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_autosettlers(struct connection *pc, const struct packet_unit_autosettlers *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_autosettlers from the server.");
  }
  ensure_valid_variant_packet_unit_autosettlers(pc);

  switch(pc->phs.variant[PACKET_UNIT_AUTOSETTLERS]) {

  case 100:
    return send_packet_unit_autosettlers_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_AUTOSETTLERS variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_autosettlers(struct connection *pc, int unit_id)
{
  struct packet_unit_autosettlers packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_autosettlers(pc, real_packet);
}

static struct packet_unit_load *receive_packet_unit_load_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_load, real_packet);
  if (!dio_get_uint32(pc->json_packet, "cargo_id", &real_packet->cargo_id)) {
    RECEIVE_PACKET_FIELD_ERROR(cargo_id);
  }
  if (!dio_get_uint32(pc->json_packet, "transporter_id", &real_packet->transporter_id)) {
    RECEIVE_PACKET_FIELD_ERROR(transporter_id);
  }

  log_packet("packet_unit_load_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_load_100(struct connection *pc, const struct packet_unit_load *packet)
{
  const struct packet_unit_load *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_LOAD);

  log_packet("packet_unit_load_100: sending info about ()");

  dio_put_uint32(&dout, "cargo_id", real_packet->cargo_id);
  dio_put_uint32(&dout, "transporter_id", real_packet->transporter_id);

  SEND_PACKET_END(PACKET_UNIT_LOAD);
}

static void ensure_valid_variant_packet_unit_load(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_LOAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_LOAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_LOAD] = variant;
}

struct packet_unit_load *receive_packet_unit_load(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_load at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_load(pc);

  switch(pc->phs.variant[PACKET_UNIT_LOAD]) {
  case 100:
    return receive_packet_unit_load_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_LOAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_load(struct connection *pc, const struct packet_unit_load *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_load from the server.");
  }
  ensure_valid_variant_packet_unit_load(pc);

  switch(pc->phs.variant[PACKET_UNIT_LOAD]) {

  case 100:
    return send_packet_unit_load_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_LOAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_load(struct connection *pc, int cargo_id, int transporter_id)
{
  struct packet_unit_load packet, *real_packet = &packet;

  real_packet->cargo_id = cargo_id;
  real_packet->transporter_id = transporter_id;
  
  return send_packet_unit_load(pc, real_packet);
}

static struct packet_unit_unload *receive_packet_unit_unload_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_unload, real_packet);
  if (!dio_get_uint32(pc->json_packet, "cargo_id", &real_packet->cargo_id)) {
    RECEIVE_PACKET_FIELD_ERROR(cargo_id);
  }
  if (!dio_get_uint32(pc->json_packet, "transporter_id", &real_packet->transporter_id)) {
    RECEIVE_PACKET_FIELD_ERROR(transporter_id);
  }

  log_packet("packet_unit_unload_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_unload_100(struct connection *pc, const struct packet_unit_unload *packet)
{
  const struct packet_unit_unload *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_UNLOAD);

  log_packet("packet_unit_unload_100: sending info about ()");

  dio_put_uint32(&dout, "cargo_id", real_packet->cargo_id);
  dio_put_uint32(&dout, "transporter_id", real_packet->transporter_id);

  SEND_PACKET_END(PACKET_UNIT_UNLOAD);
}

static void ensure_valid_variant_packet_unit_unload(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_UNLOAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_UNLOAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_UNLOAD] = variant;
}

struct packet_unit_unload *receive_packet_unit_unload(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_unload at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_unload(pc);

  switch(pc->phs.variant[PACKET_UNIT_UNLOAD]) {
  case 100:
    return receive_packet_unit_unload_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_UNLOAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_unload(struct connection *pc, const struct packet_unit_unload *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_unload from the server.");
  }
  ensure_valid_variant_packet_unit_unload(pc);

  switch(pc->phs.variant[PACKET_UNIT_UNLOAD]) {

  case 100:
    return send_packet_unit_unload_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_UNLOAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_unload(struct connection *pc, int cargo_id, int transporter_id)
{
  struct packet_unit_unload packet, *real_packet = &packet;

  real_packet->cargo_id = cargo_id;
  real_packet->transporter_id = transporter_id;
  
  return send_packet_unit_unload(pc, real_packet);
}

static struct packet_unit_upgrade *receive_packet_unit_upgrade_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_upgrade, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_upgrade_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_upgrade_100(struct connection *pc, const struct packet_unit_upgrade *packet)
{
  const struct packet_unit_upgrade *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_UPGRADE);

  log_packet("packet_unit_upgrade_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_UPGRADE);
}

static void ensure_valid_variant_packet_unit_upgrade(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_UPGRADE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_UPGRADE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_UPGRADE] = variant;
}

struct packet_unit_upgrade *receive_packet_unit_upgrade(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_upgrade at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_upgrade(pc);

  switch(pc->phs.variant[PACKET_UNIT_UPGRADE]) {
  case 100:
    return receive_packet_unit_upgrade_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_UPGRADE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_upgrade(struct connection *pc, const struct packet_unit_upgrade *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_upgrade from the server.");
  }
  ensure_valid_variant_packet_unit_upgrade(pc);

  switch(pc->phs.variant[PACKET_UNIT_UPGRADE]) {

  case 100:
    return send_packet_unit_upgrade_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_UPGRADE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_upgrade(struct connection *pc, int unit_id)
{
  struct packet_unit_upgrade packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_upgrade(pc, real_packet);
}

static struct packet_unit_nuke *receive_packet_unit_nuke_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_nuke, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }

  log_packet("packet_unit_nuke_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_nuke_100(struct connection *pc, const struct packet_unit_nuke *packet)
{
  const struct packet_unit_nuke *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_NUKE);

  log_packet("packet_unit_nuke_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);

  SEND_PACKET_END(PACKET_UNIT_NUKE);
}

static void ensure_valid_variant_packet_unit_nuke(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_NUKE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_NUKE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_NUKE] = variant;
}

struct packet_unit_nuke *receive_packet_unit_nuke(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_nuke at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_nuke(pc);

  switch(pc->phs.variant[PACKET_UNIT_NUKE]) {
  case 100:
    return receive_packet_unit_nuke_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_NUKE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_nuke(struct connection *pc, const struct packet_unit_nuke *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_nuke from the server.");
  }
  ensure_valid_variant_packet_unit_nuke(pc);

  switch(pc->phs.variant[PACKET_UNIT_NUKE]) {

  case 100:
    return send_packet_unit_nuke_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_NUKE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_nuke(struct connection *pc, int unit_id)
{
  struct packet_unit_nuke packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  
  return send_packet_unit_nuke(pc, real_packet);
}

static struct packet_unit_paradrop_to *receive_packet_unit_paradrop_to_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_paradrop_to, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }

  log_packet("packet_unit_paradrop_to_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_paradrop_to_100(struct connection *pc, const struct packet_unit_paradrop_to *packet)
{
  const struct packet_unit_paradrop_to *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_PARADROP_TO);

  log_packet("packet_unit_paradrop_to_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_sint32(&dout, "tile", real_packet->tile);

  SEND_PACKET_END(PACKET_UNIT_PARADROP_TO);
}

static void ensure_valid_variant_packet_unit_paradrop_to(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_PARADROP_TO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_PARADROP_TO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_PARADROP_TO] = variant;
}

struct packet_unit_paradrop_to *receive_packet_unit_paradrop_to(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_paradrop_to at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_paradrop_to(pc);

  switch(pc->phs.variant[PACKET_UNIT_PARADROP_TO]) {
  case 100:
    return receive_packet_unit_paradrop_to_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_PARADROP_TO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_paradrop_to(struct connection *pc, const struct packet_unit_paradrop_to *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_paradrop_to from the server.");
  }
  ensure_valid_variant_packet_unit_paradrop_to(pc);

  switch(pc->phs.variant[PACKET_UNIT_PARADROP_TO]) {

  case 100:
    return send_packet_unit_paradrop_to_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_PARADROP_TO variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_paradrop_to(struct connection *pc, int unit_id, int tile)
{
  struct packet_unit_paradrop_to packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->tile = tile;
  
  return send_packet_unit_paradrop_to(pc, real_packet);
}

static struct packet_unit_airlift *receive_packet_unit_airlift_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_airlift, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_uint32(pc->json_packet, "city_id", &real_packet->city_id)) {
    RECEIVE_PACKET_FIELD_ERROR(city_id);
  }

  log_packet("packet_unit_airlift_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_airlift_100(struct connection *pc, const struct packet_unit_airlift *packet)
{
  const struct packet_unit_airlift *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_AIRLIFT);

  log_packet("packet_unit_airlift_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint32(&dout, "city_id", real_packet->city_id);

  SEND_PACKET_END(PACKET_UNIT_AIRLIFT);
}

static void ensure_valid_variant_packet_unit_airlift(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_AIRLIFT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_AIRLIFT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_AIRLIFT] = variant;
}

struct packet_unit_airlift *receive_packet_unit_airlift(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_airlift at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_airlift(pc);

  switch(pc->phs.variant[PACKET_UNIT_AIRLIFT]) {
  case 100:
    return receive_packet_unit_airlift_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_AIRLIFT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_airlift(struct connection *pc, const struct packet_unit_airlift *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_airlift from the server.");
  }
  ensure_valid_variant_packet_unit_airlift(pc);

  switch(pc->phs.variant[PACKET_UNIT_AIRLIFT]) {

  case 100:
    return send_packet_unit_airlift_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_AIRLIFT variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_airlift(struct connection *pc, int unit_id, int city_id)
{
  struct packet_unit_airlift packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->city_id = city_id;
  
  return send_packet_unit_airlift(pc, real_packet);
}

static struct packet_unit_diplomat_query *receive_packet_unit_diplomat_query_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_diplomat_query, real_packet);
  if (!dio_get_uint32(pc->json_packet, "diplomat_id", &real_packet->diplomat_id)) {
    RECEIVE_PACKET_FIELD_ERROR(diplomat_id);
  }
  if (!dio_get_uint32(pc->json_packet, "target_id", &real_packet->target_id)) {
    RECEIVE_PACKET_FIELD_ERROR(target_id);
  }
  if (!dio_get_uint32(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "action_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(action_type);
    }
    real_packet->action_type = readin;
  }

  log_packet("packet_unit_diplomat_query_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_diplomat_query_100(struct connection *pc, const struct packet_unit_diplomat_query *packet)
{
  const struct packet_unit_diplomat_query *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_DIPLOMAT_QUERY);

  log_packet("packet_unit_diplomat_query_100: sending info about ()");

  dio_put_uint32(&dout, "diplomat_id", real_packet->diplomat_id);
  dio_put_uint32(&dout, "target_id", real_packet->target_id);
  dio_put_uint32(&dout, "value", real_packet->value);
  dio_put_uint8(&dout, "action_type", real_packet->action_type);

  SEND_PACKET_END(PACKET_UNIT_DIPLOMAT_QUERY);
}

static void ensure_valid_variant_packet_unit_diplomat_query(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_DIPLOMAT_QUERY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_DIPLOMAT_QUERY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_DIPLOMAT_QUERY] = variant;
}

struct packet_unit_diplomat_query *receive_packet_unit_diplomat_query(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_diplomat_query at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_diplomat_query(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_QUERY]) {
  case 100:
    return receive_packet_unit_diplomat_query_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_QUERY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_diplomat_query(struct connection *pc, const struct packet_unit_diplomat_query *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_diplomat_query from the server.");
  }
  ensure_valid_variant_packet_unit_diplomat_query(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_QUERY]) {

  case 100:
    return send_packet_unit_diplomat_query_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_QUERY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_diplomat_query(struct connection *pc, int diplomat_id, int target_id, int value, enum diplomat_actions action_type)
{
  struct packet_unit_diplomat_query packet, *real_packet = &packet;

  real_packet->diplomat_id = diplomat_id;
  real_packet->target_id = target_id;
  real_packet->value = value;
  real_packet->action_type = action_type;
  
  return send_packet_unit_diplomat_query(pc, real_packet);
}

static struct packet_unit_type_upgrade *receive_packet_unit_type_upgrade_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_type_upgrade, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }

  log_packet("packet_unit_type_upgrade_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_type_upgrade_100(struct connection *pc, const struct packet_unit_type_upgrade *packet)
{
  const struct packet_unit_type_upgrade *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_TYPE_UPGRADE);

  log_packet("packet_unit_type_upgrade_100: sending info about ()");

  dio_put_uint8(&dout, "type", real_packet->type);

  SEND_PACKET_END(PACKET_UNIT_TYPE_UPGRADE);
}

static void ensure_valid_variant_packet_unit_type_upgrade(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_TYPE_UPGRADE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_TYPE_UPGRADE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_TYPE_UPGRADE] = variant;
}

struct packet_unit_type_upgrade *receive_packet_unit_type_upgrade(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_type_upgrade at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_type_upgrade(pc);

  switch(pc->phs.variant[PACKET_UNIT_TYPE_UPGRADE]) {
  case 100:
    return receive_packet_unit_type_upgrade_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_TYPE_UPGRADE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_type_upgrade(struct connection *pc, const struct packet_unit_type_upgrade *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_type_upgrade from the server.");
  }
  ensure_valid_variant_packet_unit_type_upgrade(pc);

  switch(pc->phs.variant[PACKET_UNIT_TYPE_UPGRADE]) {

  case 100:
    return send_packet_unit_type_upgrade_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_TYPE_UPGRADE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_type_upgrade(struct connection *pc, Unit_type_id type)
{
  struct packet_unit_type_upgrade packet, *real_packet = &packet;

  real_packet->type = type;
  
  return send_packet_unit_type_upgrade(pc, real_packet);
}

static struct packet_unit_diplomat_action *receive_packet_unit_diplomat_action_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_diplomat_action, real_packet);
  if (!dio_get_uint32(pc->json_packet, "diplomat_id", &real_packet->diplomat_id)) {
    RECEIVE_PACKET_FIELD_ERROR(diplomat_id);
  }
  if (!dio_get_uint32(pc->json_packet, "target_id", &real_packet->target_id)) {
    RECEIVE_PACKET_FIELD_ERROR(target_id);
  }
  if (!dio_get_sint16(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "action_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(action_type);
    }
    real_packet->action_type = readin;
  }

  log_packet("packet_unit_diplomat_action_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_diplomat_action_100(struct connection *pc, const struct packet_unit_diplomat_action *packet)
{
  const struct packet_unit_diplomat_action *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_DIPLOMAT_ACTION);

  log_packet("packet_unit_diplomat_action_100: sending info about ()");

  dio_put_uint32(&dout, "diplomat_id", real_packet->diplomat_id);
  dio_put_uint32(&dout, "target_id", real_packet->target_id);
  dio_put_sint16(&dout, "value", real_packet->value);
  dio_put_uint8(&dout, "action_type", real_packet->action_type);

  SEND_PACKET_END(PACKET_UNIT_DIPLOMAT_ACTION);
}

static void ensure_valid_variant_packet_unit_diplomat_action(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ACTION] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_DIPLOMAT_ACTION variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_DIPLOMAT_ACTION] = variant;
}

struct packet_unit_diplomat_action *receive_packet_unit_diplomat_action(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_diplomat_action at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_diplomat_action(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ACTION]) {
  case 100:
    return receive_packet_unit_diplomat_action_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_ACTION variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_diplomat_action(struct connection *pc, const struct packet_unit_diplomat_action *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_diplomat_action from the server.");
  }
  ensure_valid_variant_packet_unit_diplomat_action(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ACTION]) {

  case 100:
    return send_packet_unit_diplomat_action_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_ACTION variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_diplomat_action(struct connection *pc, int diplomat_id, int target_id, int value, enum diplomat_actions action_type)
{
  struct packet_unit_diplomat_action packet, *real_packet = &packet;

  real_packet->diplomat_id = diplomat_id;
  real_packet->target_id = target_id;
  real_packet->value = value;
  real_packet->action_type = action_type;
  
  return send_packet_unit_diplomat_action(pc, real_packet);
}

static struct packet_unit_diplomat_answer *receive_packet_unit_diplomat_answer_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_diplomat_answer, real_packet);
  if (!dio_get_uint32(pc->json_packet, "diplomat_id", &real_packet->diplomat_id)) {
    RECEIVE_PACKET_FIELD_ERROR(diplomat_id);
  }
  if (!dio_get_uint32(pc->json_packet, "target_id", &real_packet->target_id)) {
    RECEIVE_PACKET_FIELD_ERROR(target_id);
  }
  if (!dio_get_uint32(pc->json_packet, "cost", &real_packet->cost)) {
    RECEIVE_PACKET_FIELD_ERROR(cost);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "action_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(action_type);
    }
    real_packet->action_type = readin;
  }

  log_packet("packet_unit_diplomat_answer_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_diplomat_answer_100(struct connection *pc, const struct packet_unit_diplomat_answer *packet)
{
  const struct packet_unit_diplomat_answer *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_DIPLOMAT_ANSWER);

  log_packet("packet_unit_diplomat_answer_100: sending info about ()");

  dio_put_uint32(&dout, "diplomat_id", real_packet->diplomat_id);
  dio_put_uint32(&dout, "target_id", real_packet->target_id);
  dio_put_uint32(&dout, "cost", real_packet->cost);
  dio_put_uint8(&dout, "action_type", real_packet->action_type);

  SEND_PACKET_END(PACKET_UNIT_DIPLOMAT_ANSWER);
}

static void ensure_valid_variant_packet_unit_diplomat_answer(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ANSWER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_DIPLOMAT_ANSWER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_DIPLOMAT_ANSWER] = variant;
}

struct packet_unit_diplomat_answer *receive_packet_unit_diplomat_answer(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_unit_diplomat_answer at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_diplomat_answer(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ANSWER]) {
  case 100:
    return receive_packet_unit_diplomat_answer_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_ANSWER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_diplomat_answer(struct connection *pc, const struct packet_unit_diplomat_answer *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_unit_diplomat_answer from the client.");
  }
  ensure_valid_variant_packet_unit_diplomat_answer(pc);

  switch(pc->phs.variant[PACKET_UNIT_DIPLOMAT_ANSWER]) {

  case 100:
    return send_packet_unit_diplomat_answer_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_DIPLOMAT_ANSWER variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_unit_diplomat_answer(struct conn_list *dest, const struct packet_unit_diplomat_answer *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_unit_diplomat_answer(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_unit_diplomat_answer(struct connection *pc, int diplomat_id, int target_id, int cost, enum diplomat_actions action_type)
{
  struct packet_unit_diplomat_answer packet, *real_packet = &packet;

  real_packet->diplomat_id = diplomat_id;
  real_packet->target_id = target_id;
  real_packet->cost = cost;
  real_packet->action_type = action_type;
  
  return send_packet_unit_diplomat_answer(pc, real_packet);
}

void dlsend_packet_unit_diplomat_answer(struct conn_list *dest, int diplomat_id, int target_id, int cost, enum diplomat_actions action_type)
{
  struct packet_unit_diplomat_answer packet, *real_packet = &packet;

  real_packet->diplomat_id = diplomat_id;
  real_packet->target_id = target_id;
  real_packet->cost = cost;
  real_packet->action_type = action_type;
  
  lsend_packet_unit_diplomat_answer(dest, real_packet);
}

static struct packet_unit_change_activity *receive_packet_unit_change_activity_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_change_activity, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity);
    }
    real_packet->activity = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint32(pc->json_packet, "activity_target", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_target);
    }
    real_packet->activity_target = readin;
  }

  log_packet("packet_unit_change_activity_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_change_activity_100(struct connection *pc, const struct packet_unit_change_activity *packet)
{
  const struct packet_unit_change_activity *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_CHANGE_ACTIVITY);

  log_packet("packet_unit_change_activity_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_uint32(&dout, "activity_target", real_packet->activity_target);

  SEND_PACKET_END(PACKET_UNIT_CHANGE_ACTIVITY);
}

static void ensure_valid_variant_packet_unit_change_activity(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_CHANGE_ACTIVITY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY] = variant;
}

struct packet_unit_change_activity *receive_packet_unit_change_activity(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_change_activity at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_change_activity(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY]) {
  case 100:
    return receive_packet_unit_change_activity_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_change_activity(struct connection *pc, const struct packet_unit_change_activity *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_change_activity from the server.");
  }
  ensure_valid_variant_packet_unit_change_activity(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY]) {

  case 100:
    return send_packet_unit_change_activity_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_change_activity(struct connection *pc, int unit_id, enum unit_activity activity, enum tile_special_type activity_target)
{
  struct packet_unit_change_activity packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->activity = activity;
  real_packet->activity_target = activity_target;
  
  return send_packet_unit_change_activity(pc, real_packet);
}

static struct packet_unit_change_activity_base *receive_packet_unit_change_activity_base_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_change_activity_base, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity);
    }
    real_packet->activity = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_base", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_base);
    }
    real_packet->activity_base = readin;
  }

  log_packet("packet_unit_change_activity_base_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_change_activity_base_100(struct connection *pc, const struct packet_unit_change_activity_base *packet)
{
  const struct packet_unit_change_activity_base *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_CHANGE_ACTIVITY_BASE);

  log_packet("packet_unit_change_activity_base_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_sint8(&dout, "activity_base", real_packet->activity_base);

  SEND_PACKET_END(PACKET_UNIT_CHANGE_ACTIVITY_BASE);
}

static void ensure_valid_variant_packet_unit_change_activity_base(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_BASE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_CHANGE_ACTIVITY_BASE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_BASE] = variant;
}

struct packet_unit_change_activity_base *receive_packet_unit_change_activity_base(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_change_activity_base at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_change_activity_base(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_BASE]) {
  case 100:
    return receive_packet_unit_change_activity_base_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY_BASE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_change_activity_base(struct connection *pc, const struct packet_unit_change_activity_base *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_change_activity_base from the server.");
  }
  ensure_valid_variant_packet_unit_change_activity_base(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_BASE]) {

  case 100:
    return send_packet_unit_change_activity_base_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY_BASE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_change_activity_base(struct connection *pc, int unit_id, enum unit_activity activity, Base_type_id activity_base)
{
  struct packet_unit_change_activity_base packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->activity = activity;
  real_packet->activity_base = activity_base;
  
  return send_packet_unit_change_activity_base(pc, real_packet);
}

static struct packet_unit_change_activity_road *receive_packet_unit_change_activity_road_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_unit_change_activity_road, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity);
    }
    real_packet->activity = readin;
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_road", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_road);
    }
    real_packet->activity_road = readin;
  }

  log_packet("packet_unit_change_activity_road_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_unit_change_activity_road_100(struct connection *pc, const struct packet_unit_change_activity_road *packet)
{
  const struct packet_unit_change_activity_road *real_packet = packet;
  SEND_PACKET_START(PACKET_UNIT_CHANGE_ACTIVITY_ROAD);

  log_packet("packet_unit_change_activity_road_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_sint8(&dout, "activity_road", real_packet->activity_road);

  SEND_PACKET_END(PACKET_UNIT_CHANGE_ACTIVITY_ROAD);
}

static void ensure_valid_variant_packet_unit_change_activity_road(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_ROAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_UNIT_CHANGE_ACTIVITY_ROAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_ROAD] = variant;
}

struct packet_unit_change_activity_road *receive_packet_unit_change_activity_road(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_unit_change_activity_road at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_unit_change_activity_road(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_ROAD]) {
  case 100:
    return receive_packet_unit_change_activity_road_100(pc);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY_ROAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_unit_change_activity_road(struct connection *pc, const struct packet_unit_change_activity_road *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_unit_change_activity_road from the server.");
  }
  ensure_valid_variant_packet_unit_change_activity_road(pc);

  switch(pc->phs.variant[PACKET_UNIT_CHANGE_ACTIVITY_ROAD]) {

  case 100:
    return send_packet_unit_change_activity_road_100(pc, packet);
  default:
    log_debug("Unknown PACKET_UNIT_CHANGE_ACTIVITY_ROAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_unit_change_activity_road(struct connection *pc, int unit_id, enum unit_activity activity, Road_type_id activity_road)
{
  struct packet_unit_change_activity_road packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->activity = activity;
  real_packet->activity_road = activity_road;
  
  return send_packet_unit_change_activity_road(pc, real_packet);
}

static struct packet_diplomacy_init_meeting_req *receive_packet_diplomacy_init_meeting_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_init_meeting_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }

  log_packet("packet_diplomacy_init_meeting_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_init_meeting_req_100(struct connection *pc, const struct packet_diplomacy_init_meeting_req *packet)
{
  const struct packet_diplomacy_init_meeting_req *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_INIT_MEETING_REQ);

  log_packet("packet_diplomacy_init_meeting_req_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);

  SEND_PACKET_END(PACKET_DIPLOMACY_INIT_MEETING_REQ);
}

static void ensure_valid_variant_packet_diplomacy_init_meeting_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_INIT_MEETING_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING_REQ] = variant;
}

struct packet_diplomacy_init_meeting_req *receive_packet_diplomacy_init_meeting_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_init_meeting_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_init_meeting_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING_REQ]) {
  case 100:
    return receive_packet_diplomacy_init_meeting_req_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_INIT_MEETING_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_init_meeting_req(struct connection *pc, const struct packet_diplomacy_init_meeting_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_init_meeting_req from the server.");
  }
  ensure_valid_variant_packet_diplomacy_init_meeting_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING_REQ]) {

  case 100:
    return send_packet_diplomacy_init_meeting_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_INIT_MEETING_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_init_meeting_req(struct connection *pc, int counterpart)
{
  struct packet_diplomacy_init_meeting_req packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  
  return send_packet_diplomacy_init_meeting_req(pc, real_packet);
}

static struct packet_diplomacy_init_meeting *receive_packet_diplomacy_init_meeting_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_init_meeting, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "initiated_from", &real_packet->initiated_from)) {
    RECEIVE_PACKET_FIELD_ERROR(initiated_from);
  }

  log_packet("packet_diplomacy_init_meeting_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_init_meeting_100(struct connection *pc, const struct packet_diplomacy_init_meeting *packet)
{
  const struct packet_diplomacy_init_meeting *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_INIT_MEETING);

  log_packet("packet_diplomacy_init_meeting_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "initiated_from", real_packet->initiated_from);

  SEND_PACKET_END(PACKET_DIPLOMACY_INIT_MEETING);
}

static void ensure_valid_variant_packet_diplomacy_init_meeting(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_INIT_MEETING variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING] = variant;
}

struct packet_diplomacy_init_meeting *receive_packet_diplomacy_init_meeting(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_diplomacy_init_meeting at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_init_meeting(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING]) {
  case 100:
    return receive_packet_diplomacy_init_meeting_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_INIT_MEETING variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_init_meeting(struct connection *pc, const struct packet_diplomacy_init_meeting *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_diplomacy_init_meeting from the client.");
  }
  ensure_valid_variant_packet_diplomacy_init_meeting(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_INIT_MEETING]) {

  case 100:
    return send_packet_diplomacy_init_meeting_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_INIT_MEETING variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_diplomacy_init_meeting(struct conn_list *dest, const struct packet_diplomacy_init_meeting *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_diplomacy_init_meeting(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_diplomacy_init_meeting(struct connection *pc, int counterpart, int initiated_from)
{
  struct packet_diplomacy_init_meeting packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->initiated_from = initiated_from;
  
  return send_packet_diplomacy_init_meeting(pc, real_packet);
}

void dlsend_packet_diplomacy_init_meeting(struct conn_list *dest, int counterpart, int initiated_from)
{
  struct packet_diplomacy_init_meeting packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->initiated_from = initiated_from;
  
  lsend_packet_diplomacy_init_meeting(dest, real_packet);
}

static struct packet_diplomacy_cancel_meeting_req *receive_packet_diplomacy_cancel_meeting_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_cancel_meeting_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }

  log_packet("packet_diplomacy_cancel_meeting_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_cancel_meeting_req_100(struct connection *pc, const struct packet_diplomacy_cancel_meeting_req *packet)
{
  const struct packet_diplomacy_cancel_meeting_req *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_CANCEL_MEETING_REQ);

  log_packet("packet_diplomacy_cancel_meeting_req_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);

  SEND_PACKET_END(PACKET_DIPLOMACY_CANCEL_MEETING_REQ);
}

static void ensure_valid_variant_packet_diplomacy_cancel_meeting_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_CANCEL_MEETING_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING_REQ] = variant;
}

struct packet_diplomacy_cancel_meeting_req *receive_packet_diplomacy_cancel_meeting_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_cancel_meeting_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_cancel_meeting_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING_REQ]) {
  case 100:
    return receive_packet_diplomacy_cancel_meeting_req_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_MEETING_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_cancel_meeting_req(struct connection *pc, const struct packet_diplomacy_cancel_meeting_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_cancel_meeting_req from the server.");
  }
  ensure_valid_variant_packet_diplomacy_cancel_meeting_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING_REQ]) {

  case 100:
    return send_packet_diplomacy_cancel_meeting_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_MEETING_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_cancel_meeting_req(struct connection *pc, int counterpart)
{
  struct packet_diplomacy_cancel_meeting_req packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  
  return send_packet_diplomacy_cancel_meeting_req(pc, real_packet);
}

static struct packet_diplomacy_cancel_meeting *receive_packet_diplomacy_cancel_meeting_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_cancel_meeting, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "initiated_from", &real_packet->initiated_from)) {
    RECEIVE_PACKET_FIELD_ERROR(initiated_from);
  }

  log_packet("packet_diplomacy_cancel_meeting_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_cancel_meeting_100(struct connection *pc, const struct packet_diplomacy_cancel_meeting *packet)
{
  const struct packet_diplomacy_cancel_meeting *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_CANCEL_MEETING);

  log_packet("packet_diplomacy_cancel_meeting_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "initiated_from", real_packet->initiated_from);

  SEND_PACKET_END(PACKET_DIPLOMACY_CANCEL_MEETING);
}

static void ensure_valid_variant_packet_diplomacy_cancel_meeting(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_CANCEL_MEETING variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING] = variant;
}

struct packet_diplomacy_cancel_meeting *receive_packet_diplomacy_cancel_meeting(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_diplomacy_cancel_meeting at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_cancel_meeting(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING]) {
  case 100:
    return receive_packet_diplomacy_cancel_meeting_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_MEETING variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_cancel_meeting(struct connection *pc, const struct packet_diplomacy_cancel_meeting *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_diplomacy_cancel_meeting from the client.");
  }
  ensure_valid_variant_packet_diplomacy_cancel_meeting(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_MEETING]) {

  case 100:
    return send_packet_diplomacy_cancel_meeting_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_MEETING variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_diplomacy_cancel_meeting(struct conn_list *dest, const struct packet_diplomacy_cancel_meeting *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_diplomacy_cancel_meeting(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_diplomacy_cancel_meeting(struct connection *pc, int counterpart, int initiated_from)
{
  struct packet_diplomacy_cancel_meeting packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->initiated_from = initiated_from;
  
  return send_packet_diplomacy_cancel_meeting(pc, real_packet);
}

void dlsend_packet_diplomacy_cancel_meeting(struct conn_list *dest, int counterpart, int initiated_from)
{
  struct packet_diplomacy_cancel_meeting packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->initiated_from = initiated_from;
  
  lsend_packet_diplomacy_cancel_meeting(dest, real_packet);
}

static struct packet_diplomacy_create_clause_req *receive_packet_diplomacy_create_clause_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_create_clause_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "giver", &real_packet->giver)) {
    RECEIVE_PACKET_FIELD_ERROR(giver);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "clause_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(clause_type);
    }
    real_packet->clause_type = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_diplomacy_create_clause_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_create_clause_req_100(struct connection *pc, const struct packet_diplomacy_create_clause_req *packet)
{
  const struct packet_diplomacy_create_clause_req *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_CREATE_CLAUSE_REQ);

  log_packet("packet_diplomacy_create_clause_req_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "giver", real_packet->giver);
  dio_put_uint8(&dout, "clause_type", real_packet->clause_type);
  dio_put_uint32(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_DIPLOMACY_CREATE_CLAUSE_REQ);
}

static void ensure_valid_variant_packet_diplomacy_create_clause_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE_REQ] = variant;
}

struct packet_diplomacy_create_clause_req *receive_packet_diplomacy_create_clause_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_create_clause_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_create_clause_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE_REQ]) {
  case 100:
    return receive_packet_diplomacy_create_clause_req_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_create_clause_req(struct connection *pc, const struct packet_diplomacy_create_clause_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_create_clause_req from the server.");
  }
  ensure_valid_variant_packet_diplomacy_create_clause_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE_REQ]) {

  case 100:
    return send_packet_diplomacy_create_clause_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_create_clause_req(struct connection *pc, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_create_clause_req packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  return send_packet_diplomacy_create_clause_req(pc, real_packet);
}

static struct packet_diplomacy_create_clause *receive_packet_diplomacy_create_clause_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_create_clause, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "giver", &real_packet->giver)) {
    RECEIVE_PACKET_FIELD_ERROR(giver);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "clause_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(clause_type);
    }
    real_packet->clause_type = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_diplomacy_create_clause_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_create_clause_100(struct connection *pc, const struct packet_diplomacy_create_clause *packet)
{
  const struct packet_diplomacy_create_clause *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_CREATE_CLAUSE);

  log_packet("packet_diplomacy_create_clause_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "giver", real_packet->giver);
  dio_put_uint8(&dout, "clause_type", real_packet->clause_type);
  dio_put_uint32(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_DIPLOMACY_CREATE_CLAUSE);
}

static void ensure_valid_variant_packet_diplomacy_create_clause(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE] = variant;
}

struct packet_diplomacy_create_clause *receive_packet_diplomacy_create_clause(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_diplomacy_create_clause at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_create_clause(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE]) {
  case 100:
    return receive_packet_diplomacy_create_clause_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_create_clause(struct connection *pc, const struct packet_diplomacy_create_clause *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_diplomacy_create_clause from the client.");
  }
  ensure_valid_variant_packet_diplomacy_create_clause(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CREATE_CLAUSE]) {

  case 100:
    return send_packet_diplomacy_create_clause_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CREATE_CLAUSE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_diplomacy_create_clause(struct conn_list *dest, const struct packet_diplomacy_create_clause *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_diplomacy_create_clause(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_diplomacy_create_clause(struct connection *pc, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_create_clause packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  return send_packet_diplomacy_create_clause(pc, real_packet);
}

void dlsend_packet_diplomacy_create_clause(struct conn_list *dest, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_create_clause packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  lsend_packet_diplomacy_create_clause(dest, real_packet);
}

static struct packet_diplomacy_remove_clause_req *receive_packet_diplomacy_remove_clause_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_remove_clause_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "giver", &real_packet->giver)) {
    RECEIVE_PACKET_FIELD_ERROR(giver);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "clause_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(clause_type);
    }
    real_packet->clause_type = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_diplomacy_remove_clause_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_remove_clause_req_100(struct connection *pc, const struct packet_diplomacy_remove_clause_req *packet)
{
  const struct packet_diplomacy_remove_clause_req *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ);

  log_packet("packet_diplomacy_remove_clause_req_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "giver", real_packet->giver);
  dio_put_uint8(&dout, "clause_type", real_packet->clause_type);
  dio_put_uint32(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ);
}

static void ensure_valid_variant_packet_diplomacy_remove_clause_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ] = variant;
}

struct packet_diplomacy_remove_clause_req *receive_packet_diplomacy_remove_clause_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_remove_clause_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_remove_clause_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ]) {
  case 100:
    return receive_packet_diplomacy_remove_clause_req_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_remove_clause_req(struct connection *pc, const struct packet_diplomacy_remove_clause_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_remove_clause_req from the server.");
  }
  ensure_valid_variant_packet_diplomacy_remove_clause_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ]) {

  case 100:
    return send_packet_diplomacy_remove_clause_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_remove_clause_req(struct connection *pc, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_remove_clause_req packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  return send_packet_diplomacy_remove_clause_req(pc, real_packet);
}

static struct packet_diplomacy_remove_clause *receive_packet_diplomacy_remove_clause_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_remove_clause, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_sint8(pc->json_packet, "giver", &real_packet->giver)) {
    RECEIVE_PACKET_FIELD_ERROR(giver);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "clause_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(clause_type);
    }
    real_packet->clause_type = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_diplomacy_remove_clause_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_remove_clause_100(struct connection *pc, const struct packet_diplomacy_remove_clause *packet)
{
  const struct packet_diplomacy_remove_clause *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_REMOVE_CLAUSE);

  log_packet("packet_diplomacy_remove_clause_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_sint8(&dout, "giver", real_packet->giver);
  dio_put_uint8(&dout, "clause_type", real_packet->clause_type);
  dio_put_uint32(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_DIPLOMACY_REMOVE_CLAUSE);
}

static void ensure_valid_variant_packet_diplomacy_remove_clause(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE] = variant;
}

struct packet_diplomacy_remove_clause *receive_packet_diplomacy_remove_clause(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_diplomacy_remove_clause at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_remove_clause(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE]) {
  case 100:
    return receive_packet_diplomacy_remove_clause_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_remove_clause(struct connection *pc, const struct packet_diplomacy_remove_clause *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_diplomacy_remove_clause from the client.");
  }
  ensure_valid_variant_packet_diplomacy_remove_clause(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_REMOVE_CLAUSE]) {

  case 100:
    return send_packet_diplomacy_remove_clause_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_REMOVE_CLAUSE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_diplomacy_remove_clause(struct conn_list *dest, const struct packet_diplomacy_remove_clause *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_diplomacy_remove_clause(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_diplomacy_remove_clause(struct connection *pc, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_remove_clause packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  return send_packet_diplomacy_remove_clause(pc, real_packet);
}

void dlsend_packet_diplomacy_remove_clause(struct conn_list *dest, int counterpart, int giver, enum clause_type clause_type, int value)
{
  struct packet_diplomacy_remove_clause packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->giver = giver;
  real_packet->clause_type = clause_type;
  real_packet->value = value;
  
  lsend_packet_diplomacy_remove_clause(dest, real_packet);
}

static struct packet_diplomacy_accept_treaty_req *receive_packet_diplomacy_accept_treaty_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_accept_treaty_req, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }

  log_packet("packet_diplomacy_accept_treaty_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_accept_treaty_req_100(struct connection *pc, const struct packet_diplomacy_accept_treaty_req *packet)
{
  const struct packet_diplomacy_accept_treaty_req *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_ACCEPT_TREATY_REQ);

  log_packet("packet_diplomacy_accept_treaty_req_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);

  SEND_PACKET_END(PACKET_DIPLOMACY_ACCEPT_TREATY_REQ);
}

static void ensure_valid_variant_packet_diplomacy_accept_treaty_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY_REQ] = variant;
}

struct packet_diplomacy_accept_treaty_req *receive_packet_diplomacy_accept_treaty_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_accept_treaty_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_accept_treaty_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY_REQ]) {
  case 100:
    return receive_packet_diplomacy_accept_treaty_req_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_accept_treaty_req(struct connection *pc, const struct packet_diplomacy_accept_treaty_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_accept_treaty_req from the server.");
  }
  ensure_valid_variant_packet_diplomacy_accept_treaty_req(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY_REQ]) {

  case 100:
    return send_packet_diplomacy_accept_treaty_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_accept_treaty_req(struct connection *pc, int counterpart)
{
  struct packet_diplomacy_accept_treaty_req packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  
  return send_packet_diplomacy_accept_treaty_req(pc, real_packet);
}

static struct packet_diplomacy_accept_treaty *receive_packet_diplomacy_accept_treaty_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_accept_treaty, real_packet);
  if (!dio_get_sint8(pc->json_packet, "counterpart", &real_packet->counterpart)) {
    RECEIVE_PACKET_FIELD_ERROR(counterpart);
  }
  if (!dio_get_bool8(pc->json_packet, "I_accepted", &real_packet->I_accepted)) {
    RECEIVE_PACKET_FIELD_ERROR(I_accepted);
  }
  if (!dio_get_bool8(pc->json_packet, "other_accepted", &real_packet->other_accepted)) {
    RECEIVE_PACKET_FIELD_ERROR(other_accepted);
  }

  log_packet("packet_diplomacy_accept_treaty_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_accept_treaty_100(struct connection *pc, const struct packet_diplomacy_accept_treaty *packet)
{
  const struct packet_diplomacy_accept_treaty *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_ACCEPT_TREATY);

  log_packet("packet_diplomacy_accept_treaty_100: sending info about ()");

  dio_put_sint8(&dout, "counterpart", real_packet->counterpart);
  dio_put_bool8(&dout, "I_accepted", real_packet->I_accepted);
  dio_put_bool8(&dout, "other_accepted", real_packet->other_accepted);

  SEND_PACKET_END(PACKET_DIPLOMACY_ACCEPT_TREATY);
}

static void ensure_valid_variant_packet_diplomacy_accept_treaty(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY] = variant;
}

struct packet_diplomacy_accept_treaty *receive_packet_diplomacy_accept_treaty(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_diplomacy_accept_treaty at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_accept_treaty(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY]) {
  case 100:
    return receive_packet_diplomacy_accept_treaty_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_accept_treaty(struct connection *pc, const struct packet_diplomacy_accept_treaty *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_diplomacy_accept_treaty from the client.");
  }
  ensure_valid_variant_packet_diplomacy_accept_treaty(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_ACCEPT_TREATY]) {

  case 100:
    return send_packet_diplomacy_accept_treaty_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_ACCEPT_TREATY variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_diplomacy_accept_treaty(struct conn_list *dest, const struct packet_diplomacy_accept_treaty *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_diplomacy_accept_treaty(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_diplomacy_accept_treaty(struct connection *pc, int counterpart, bool I_accepted, bool other_accepted)
{
  struct packet_diplomacy_accept_treaty packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->I_accepted = I_accepted;
  real_packet->other_accepted = other_accepted;
  
  return send_packet_diplomacy_accept_treaty(pc, real_packet);
}

void dlsend_packet_diplomacy_accept_treaty(struct conn_list *dest, int counterpart, bool I_accepted, bool other_accepted)
{
  struct packet_diplomacy_accept_treaty packet, *real_packet = &packet;

  real_packet->counterpart = counterpart;
  real_packet->I_accepted = I_accepted;
  real_packet->other_accepted = other_accepted;
  
  lsend_packet_diplomacy_accept_treaty(dest, real_packet);
}

static struct packet_diplomacy_cancel_pact *receive_packet_diplomacy_cancel_pact_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_diplomacy_cancel_pact, real_packet);
  if (!dio_get_sint8(pc->json_packet, "other_player_id", &real_packet->other_player_id)) {
    RECEIVE_PACKET_FIELD_ERROR(other_player_id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "clause", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(clause);
    }
    real_packet->clause = readin;
  }

  log_packet("packet_diplomacy_cancel_pact_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_diplomacy_cancel_pact_100(struct connection *pc, const struct packet_diplomacy_cancel_pact *packet)
{
  const struct packet_diplomacy_cancel_pact *real_packet = packet;
  SEND_PACKET_START(PACKET_DIPLOMACY_CANCEL_PACT);

  log_packet("packet_diplomacy_cancel_pact_100: sending info about ()");

  dio_put_sint8(&dout, "other_player_id", real_packet->other_player_id);
  dio_put_uint8(&dout, "clause", real_packet->clause);

  SEND_PACKET_END(PACKET_DIPLOMACY_CANCEL_PACT);
}

static void ensure_valid_variant_packet_diplomacy_cancel_pact(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_PACT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_DIPLOMACY_CANCEL_PACT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_DIPLOMACY_CANCEL_PACT] = variant;
}

struct packet_diplomacy_cancel_pact *receive_packet_diplomacy_cancel_pact(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_diplomacy_cancel_pact at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_diplomacy_cancel_pact(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_PACT]) {
  case 100:
    return receive_packet_diplomacy_cancel_pact_100(pc);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_PACT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_diplomacy_cancel_pact(struct connection *pc, const struct packet_diplomacy_cancel_pact *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_diplomacy_cancel_pact from the server.");
  }
  ensure_valid_variant_packet_diplomacy_cancel_pact(pc);

  switch(pc->phs.variant[PACKET_DIPLOMACY_CANCEL_PACT]) {

  case 100:
    return send_packet_diplomacy_cancel_pact_100(pc, packet);
  default:
    log_debug("Unknown PACKET_DIPLOMACY_CANCEL_PACT variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_diplomacy_cancel_pact(struct connection *pc, int other_player_id, enum clause_type clause)
{
  struct packet_diplomacy_cancel_pact packet, *real_packet = &packet;

  real_packet->other_player_id = other_player_id;
  real_packet->clause = clause;
  
  return send_packet_diplomacy_cancel_pact(pc, real_packet);
}

static struct packet_page_msg *receive_packet_page_msg_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_page_msg, real_packet);
  if (!dio_get_string(pc->json_packet, "caption", real_packet->caption, sizeof(real_packet->caption))) {
    RECEIVE_PACKET_FIELD_ERROR(caption);
  }
  if (!dio_get_string(pc->json_packet, "headline", real_packet->headline, sizeof(real_packet->headline))) {
    RECEIVE_PACKET_FIELD_ERROR(headline);
  }
  if (!dio_get_string(pc->json_packet, "lines", real_packet->lines, sizeof(real_packet->lines))) {
    RECEIVE_PACKET_FIELD_ERROR(lines);
  }
  {
    int readin;
    
    if (!dio_get_sint32(pc->json_packet, "event", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(event);
    }
    real_packet->event = readin;
  }

  log_packet("packet_page_msg_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_page_msg_100(struct connection *pc, const struct packet_page_msg *packet)
{
  const struct packet_page_msg *real_packet = packet;
  SEND_PACKET_START(PACKET_PAGE_MSG);

  log_packet("packet_page_msg_100: sending info about ()");

  dio_put_string(&dout, "caption", real_packet->caption);
  dio_put_string(&dout, "headline", real_packet->headline);
  dio_put_string(&dout, "lines", real_packet->lines);
  dio_put_sint32(&dout, "event", real_packet->event);

  SEND_PACKET_END(PACKET_PAGE_MSG);
}

static void ensure_valid_variant_packet_page_msg(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_PAGE_MSG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_PAGE_MSG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_PAGE_MSG] = variant;
}

struct packet_page_msg *receive_packet_page_msg(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_page_msg at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_page_msg(pc);

  switch(pc->phs.variant[PACKET_PAGE_MSG]) {
  case 100:
    return receive_packet_page_msg_100(pc);
  default:
    log_debug("Unknown PACKET_PAGE_MSG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_page_msg(struct connection *pc, const struct packet_page_msg *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_page_msg from the client.");
  }
  ensure_valid_variant_packet_page_msg(pc);

  switch(pc->phs.variant[PACKET_PAGE_MSG]) {

  case 100:
    return send_packet_page_msg_100(pc, packet);
  default:
    log_debug("Unknown PACKET_PAGE_MSG variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_page_msg(struct conn_list *dest, const struct packet_page_msg *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_page_msg(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_report_req *receive_packet_report_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_report_req, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "report_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(report_type);
    }
    real_packet->report_type = readin;
  }

  log_packet("packet_report_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_report_req_100(struct connection *pc, const struct packet_report_req *packet)
{
  const struct packet_report_req *real_packet = packet;
  SEND_PACKET_START(PACKET_REPORT_REQ);

  log_packet("packet_report_req_100: sending info about ()");

  dio_put_uint8(&dout, "report_type", real_packet->report_type);

  SEND_PACKET_END(PACKET_REPORT_REQ);
}

static void ensure_valid_variant_packet_report_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_REPORT_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_REPORT_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_REPORT_REQ] = variant;
}

struct packet_report_req *receive_packet_report_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_report_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_report_req(pc);

  switch(pc->phs.variant[PACKET_REPORT_REQ]) {
  case 100:
    return receive_packet_report_req_100(pc);
  default:
    log_debug("Unknown PACKET_REPORT_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_report_req(struct connection *pc, const struct packet_report_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_report_req from the server.");
  }
  ensure_valid_variant_packet_report_req(pc);

  switch(pc->phs.variant[PACKET_REPORT_REQ]) {

  case 100:
    return send_packet_report_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_REPORT_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_report_req(struct connection *pc, enum report_type report_type)
{
  struct packet_report_req packet, *real_packet = &packet;

  real_packet->report_type = report_type;
  
  return send_packet_report_req(pc, real_packet);
}

static struct packet_conn_info *receive_packet_conn_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_conn_info, real_packet);
  if (!dio_get_sint16(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "used", &real_packet->used)) {
    RECEIVE_PACKET_FIELD_ERROR(used);
  }
  if (!dio_get_bool8(pc->json_packet, "established", &real_packet->established)) {
    RECEIVE_PACKET_FIELD_ERROR(established);
  }
  if (!dio_get_bool8(pc->json_packet, "observer", &real_packet->observer)) {
    RECEIVE_PACKET_FIELD_ERROR(observer);
  }
  if (!dio_get_sint8(pc->json_packet, "player_num", &real_packet->player_num)) {
    RECEIVE_PACKET_FIELD_ERROR(player_num);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "access_level", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(access_level);
    }
    real_packet->access_level = readin;
  }
  if (!dio_get_string(pc->json_packet, "username", real_packet->username, sizeof(real_packet->username))) {
    RECEIVE_PACKET_FIELD_ERROR(username);
  }
  if (!dio_get_string(pc->json_packet, "addr", real_packet->addr, sizeof(real_packet->addr))) {
    RECEIVE_PACKET_FIELD_ERROR(addr);
  }
  if (!dio_get_string(pc->json_packet, "capability", real_packet->capability, sizeof(real_packet->capability))) {
    RECEIVE_PACKET_FIELD_ERROR(capability);
  }

  log_packet("packet_conn_info_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_conn_info_100(struct connection *pc, const struct packet_conn_info *packet)
{
  const struct packet_conn_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CONN_INFO);

  log_packet("packet_conn_info_100: sending info about (%d)",
    real_packet->id);

  dio_put_sint16(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "used", real_packet->used);
  dio_put_bool8(&dout, "established", real_packet->established);
  dio_put_bool8(&dout, "observer", real_packet->observer);
  dio_put_sint8(&dout, "player_num", real_packet->player_num);
  dio_put_uint8(&dout, "access_level", real_packet->access_level);
  dio_put_string(&dout, "username", real_packet->username);
  dio_put_string(&dout, "addr", real_packet->addr);
  dio_put_string(&dout, "capability", real_packet->capability);

  SEND_PACKET_END(PACKET_CONN_INFO);
}

static void ensure_valid_variant_packet_conn_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CONN_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CONN_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CONN_INFO] = variant;
}

struct packet_conn_info *receive_packet_conn_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_conn_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_conn_info(pc);

  switch(pc->phs.variant[PACKET_CONN_INFO]) {
  case 100:
    return receive_packet_conn_info_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_conn_info(struct connection *pc, const struct packet_conn_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_conn_info from the client.");
  }
  ensure_valid_variant_packet_conn_info(pc);

  switch(pc->phs.variant[PACKET_CONN_INFO]) {

  case 100:
    return send_packet_conn_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CONN_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_conn_info(struct conn_list *dest, const struct packet_conn_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_conn_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_conn_ping_info *receive_packet_conn_ping_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_conn_ping_info, real_packet);
  if (!dio_get_uint32(pc->json_packet, "connections", &real_packet->connections)) {
    RECEIVE_PACKET_FIELD_ERROR(connections);
  }
  
  {
    int i;
  
    if (real_packet->connections > MAX_NUM_CONNECTIONS) {
      RECEIVE_PACKET_FIELD_ERROR(conn_id, ": truncation array");
    }
    for (i = 0; i < real_packet->connections; i++) {
      if (!dio_get_sint16(pc->json_packet, "conn_id", &real_packet->conn_id[i])) {
        RECEIVE_PACKET_FIELD_ERROR(conn_id);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->connections > MAX_NUM_CONNECTIONS) {
      RECEIVE_PACKET_FIELD_ERROR(ping_time, ": truncation array");
    }
    for (i = 0; i < real_packet->connections; i++) {
      if (!dio_get_uint32(pc->json_packet, "ping_time", &real_packet->ping_time[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ping_time);
      }
    }
  }

  log_packet("packet_conn_ping_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_conn_ping_info_100(struct connection *pc, const struct packet_conn_ping_info *packet)
{
  const struct packet_conn_ping_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CONN_PING_INFO);

  log_packet("packet_conn_ping_info_100: sending info about ()");

  dio_put_uint32(&dout, "connections", real_packet->connections);

    {
        dio_put_array_sint16(&dout, "conn_id", (void *)real_packet->conn_id, real_packet->connections);
    } 

    {
        dio_put_array_uint32(&dout, "ping_time", (void *)real_packet->ping_time, real_packet->connections);
    } 

  SEND_PACKET_END(PACKET_CONN_PING_INFO);
}

static void ensure_valid_variant_packet_conn_ping_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CONN_PING_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CONN_PING_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CONN_PING_INFO] = variant;
}

struct packet_conn_ping_info *receive_packet_conn_ping_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_conn_ping_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_conn_ping_info(pc);

  switch(pc->phs.variant[PACKET_CONN_PING_INFO]) {
  case 100:
    return receive_packet_conn_ping_info_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_PING_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_conn_ping_info(struct connection *pc, const struct packet_conn_ping_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_conn_ping_info from the client.");
  }
  ensure_valid_variant_packet_conn_ping_info(pc);

  switch(pc->phs.variant[PACKET_CONN_PING_INFO]) {

  case 100:
    return send_packet_conn_ping_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CONN_PING_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_conn_ping_info(struct conn_list *dest, const struct packet_conn_ping_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_conn_ping_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_conn_ping *receive_packet_conn_ping_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_conn_ping, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_conn_ping_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_conn_ping_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_CONN_PING);

  log_packet("packet_conn_ping_100: sending info about ()");
  SEND_PACKET_END(PACKET_CONN_PING);
}

static void ensure_valid_variant_packet_conn_ping(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CONN_PING] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CONN_PING variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CONN_PING] = variant;
}

struct packet_conn_ping *receive_packet_conn_ping(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_conn_ping at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_conn_ping(pc);

  switch(pc->phs.variant[PACKET_CONN_PING]) {
  case 100:
    return receive_packet_conn_ping_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_PING variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_conn_ping(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_conn_ping from the client.");
  }
  ensure_valid_variant_packet_conn_ping(pc);

  switch(pc->phs.variant[PACKET_CONN_PING]) {

  case 100:
    return send_packet_conn_ping_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_PING variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_conn_pong *receive_packet_conn_pong_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_conn_pong, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_conn_pong_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_conn_pong_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_CONN_PONG);

  log_packet("packet_conn_pong_100: sending info about ()");
  SEND_PACKET_END(PACKET_CONN_PONG);
}

static void ensure_valid_variant_packet_conn_pong(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CONN_PONG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CONN_PONG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CONN_PONG] = variant;
}

struct packet_conn_pong *receive_packet_conn_pong(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_conn_pong at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_conn_pong(pc);

  switch(pc->phs.variant[PACKET_CONN_PONG]) {
  case 100:
    return receive_packet_conn_pong_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_PONG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_conn_pong(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_conn_pong from the server.");
  }
  ensure_valid_variant_packet_conn_pong(pc);

  switch(pc->phs.variant[PACKET_CONN_PONG]) {

  case 100:
    return send_packet_conn_pong_100(pc);
  default:
    log_debug("Unknown PACKET_CONN_PONG variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_client_info *receive_packet_client_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_client_info, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "gui", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(gui);
    }
    real_packet->gui = readin;
  }
  if (!dio_get_string(pc->json_packet, "distribution", real_packet->distribution, sizeof(real_packet->distribution))) {
    RECEIVE_PACKET_FIELD_ERROR(distribution);
  }

  log_packet("packet_client_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_client_info_100(struct connection *pc, const struct packet_client_info *packet)
{
  const struct packet_client_info *real_packet = packet;
  SEND_PACKET_START(PACKET_CLIENT_INFO);

  log_packet("packet_client_info_100: sending info about ()");

  dio_put_uint8(&dout, "gui", real_packet->gui);
  dio_put_string(&dout, "distribution", real_packet->distribution);

  SEND_PACKET_END(PACKET_CLIENT_INFO);
}

static void ensure_valid_variant_packet_client_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_CLIENT_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_CLIENT_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_CLIENT_INFO] = variant;
}

struct packet_client_info *receive_packet_client_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_client_info at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_client_info(pc);

  switch(pc->phs.variant[PACKET_CLIENT_INFO]) {
  case 100:
    return receive_packet_client_info_100(pc);
  default:
    log_debug("Unknown PACKET_CLIENT_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_client_info(struct connection *pc, const struct packet_client_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_client_info from the server.");
  }
  ensure_valid_variant_packet_client_info(pc);

  switch(pc->phs.variant[PACKET_CLIENT_INFO]) {

  case 100:
    return send_packet_client_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_CLIENT_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_end_phase *receive_packet_end_phase_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_end_phase, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_end_phase_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_end_phase_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_END_PHASE);

  log_packet("packet_end_phase_100: sending info about ()");
  SEND_PACKET_END(PACKET_END_PHASE);
}

static void ensure_valid_variant_packet_end_phase(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_END_PHASE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_END_PHASE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_END_PHASE] = variant;
}

struct packet_end_phase *receive_packet_end_phase(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_end_phase at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_end_phase(pc);

  switch(pc->phs.variant[PACKET_END_PHASE]) {
  case 100:
    return receive_packet_end_phase_100(pc);
  default:
    log_debug("Unknown PACKET_END_PHASE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_end_phase(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_end_phase from the client.");
  }
  ensure_valid_variant_packet_end_phase(pc);

  switch(pc->phs.variant[PACKET_END_PHASE]) {

  case 100:
    return send_packet_end_phase_100(pc);
  default:
    log_debug("Unknown PACKET_END_PHASE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_end_phase(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_end_phase(pconn);
  } conn_list_iterate_end;
}

static struct packet_start_phase *receive_packet_start_phase_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_start_phase, real_packet);
  if (!dio_get_sint16(pc->json_packet, "phase", &real_packet->phase)) {
    RECEIVE_PACKET_FIELD_ERROR(phase);
  }

  log_packet("packet_start_phase_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_start_phase_100(struct connection *pc, const struct packet_start_phase *packet)
{
  const struct packet_start_phase *real_packet = packet;
  SEND_PACKET_START(PACKET_START_PHASE);

  log_packet("packet_start_phase_100: sending info about ()");

  dio_put_sint16(&dout, "phase", real_packet->phase);

  SEND_PACKET_END(PACKET_START_PHASE);
}

static void ensure_valid_variant_packet_start_phase(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_START_PHASE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_START_PHASE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_START_PHASE] = variant;
}

struct packet_start_phase *receive_packet_start_phase(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_start_phase at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_start_phase(pc);

  switch(pc->phs.variant[PACKET_START_PHASE]) {
  case 100:
    return receive_packet_start_phase_100(pc);
  default:
    log_debug("Unknown PACKET_START_PHASE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_start_phase(struct connection *pc, const struct packet_start_phase *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_start_phase from the client.");
  }
  ensure_valid_variant_packet_start_phase(pc);

  switch(pc->phs.variant[PACKET_START_PHASE]) {

  case 100:
    return send_packet_start_phase_100(pc, packet);
  default:
    log_debug("Unknown PACKET_START_PHASE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_start_phase(struct conn_list *dest, const struct packet_start_phase *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_start_phase(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_start_phase(struct connection *pc, int phase)
{
  struct packet_start_phase packet, *real_packet = &packet;

  real_packet->phase = phase;
  
  return send_packet_start_phase(pc, real_packet);
}

void dlsend_packet_start_phase(struct conn_list *dest, int phase)
{
  struct packet_start_phase packet, *real_packet = &packet;

  real_packet->phase = phase;
  
  lsend_packet_start_phase(dest, real_packet);
}

static struct packet_new_year *receive_packet_new_year_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_new_year, real_packet);
  if (!dio_get_sint32(pc->json_packet, "year", &real_packet->year)) {
    RECEIVE_PACKET_FIELD_ERROR(year);
  }
  if (!dio_get_sint16(pc->json_packet, "turn", &real_packet->turn)) {
    RECEIVE_PACKET_FIELD_ERROR(turn);
  }

  log_packet("packet_new_year_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_new_year_100(struct connection *pc, const struct packet_new_year *packet)
{
  const struct packet_new_year *real_packet = packet;
  SEND_PACKET_START(PACKET_NEW_YEAR);

  log_packet("packet_new_year_100: sending info about ()");

  dio_put_sint32(&dout, "year", real_packet->year);
  dio_put_sint16(&dout, "turn", real_packet->turn);

  SEND_PACKET_END(PACKET_NEW_YEAR);
}

static void ensure_valid_variant_packet_new_year(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_NEW_YEAR] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_NEW_YEAR variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_NEW_YEAR] = variant;
}

struct packet_new_year *receive_packet_new_year(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_new_year at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_new_year(pc);

  switch(pc->phs.variant[PACKET_NEW_YEAR]) {
  case 100:
    return receive_packet_new_year_100(pc);
  default:
    log_debug("Unknown PACKET_NEW_YEAR variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_new_year(struct connection *pc, const struct packet_new_year *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_new_year from the client.");
  }
  ensure_valid_variant_packet_new_year(pc);

  switch(pc->phs.variant[PACKET_NEW_YEAR]) {

  case 100:
    return send_packet_new_year_100(pc, packet);
  default:
    log_debug("Unknown PACKET_NEW_YEAR variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_new_year(struct conn_list *dest, const struct packet_new_year *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_new_year(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_begin_turn *receive_packet_begin_turn_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_begin_turn, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_begin_turn_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_begin_turn_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_BEGIN_TURN);

  log_packet("packet_begin_turn_100: sending info about ()");
  SEND_PACKET_END(PACKET_BEGIN_TURN);
}

static void ensure_valid_variant_packet_begin_turn(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_BEGIN_TURN] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_BEGIN_TURN variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_BEGIN_TURN] = variant;
}

struct packet_begin_turn *receive_packet_begin_turn(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_begin_turn at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_begin_turn(pc);

  switch(pc->phs.variant[PACKET_BEGIN_TURN]) {
  case 100:
    return receive_packet_begin_turn_100(pc);
  default:
    log_debug("Unknown PACKET_BEGIN_TURN variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_begin_turn(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_begin_turn from the client.");
  }
  ensure_valid_variant_packet_begin_turn(pc);

  switch(pc->phs.variant[PACKET_BEGIN_TURN]) {

  case 100:
    return send_packet_begin_turn_100(pc);
  default:
    log_debug("Unknown PACKET_BEGIN_TURN variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_begin_turn(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_begin_turn(pconn);
  } conn_list_iterate_end;
}

static struct packet_end_turn *receive_packet_end_turn_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_end_turn, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_end_turn_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_end_turn_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_END_TURN);

  log_packet("packet_end_turn_100: sending info about ()");
  SEND_PACKET_END(PACKET_END_TURN);
}

static void ensure_valid_variant_packet_end_turn(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_END_TURN] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_END_TURN variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_END_TURN] = variant;
}

struct packet_end_turn *receive_packet_end_turn(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_end_turn at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_end_turn(pc);

  switch(pc->phs.variant[PACKET_END_TURN]) {
  case 100:
    return receive_packet_end_turn_100(pc);
  default:
    log_debug("Unknown PACKET_END_TURN variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_end_turn(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_end_turn from the client.");
  }
  ensure_valid_variant_packet_end_turn(pc);

  switch(pc->phs.variant[PACKET_END_TURN]) {

  case 100:
    return send_packet_end_turn_100(pc);
  default:
    log_debug("Unknown PACKET_END_TURN variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_end_turn(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_end_turn(pconn);
  } conn_list_iterate_end;
}

static struct packet_freeze_client *receive_packet_freeze_client_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_freeze_client, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_freeze_client_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_freeze_client_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_FREEZE_CLIENT);

  log_packet("packet_freeze_client_100: sending info about ()");
  SEND_PACKET_END(PACKET_FREEZE_CLIENT);
}

static void ensure_valid_variant_packet_freeze_client(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_FREEZE_CLIENT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_FREEZE_CLIENT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_FREEZE_CLIENT] = variant;
}

struct packet_freeze_client *receive_packet_freeze_client(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_freeze_client at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_freeze_client(pc);

  switch(pc->phs.variant[PACKET_FREEZE_CLIENT]) {
  case 100:
    return receive_packet_freeze_client_100(pc);
  default:
    log_debug("Unknown PACKET_FREEZE_CLIENT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_freeze_client(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_freeze_client from the client.");
  }
  ensure_valid_variant_packet_freeze_client(pc);

  switch(pc->phs.variant[PACKET_FREEZE_CLIENT]) {

  case 100:
    return send_packet_freeze_client_100(pc);
  default:
    log_debug("Unknown PACKET_FREEZE_CLIENT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_freeze_client(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_freeze_client(pconn);
  } conn_list_iterate_end;
}

static struct packet_thaw_client *receive_packet_thaw_client_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_thaw_client, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_thaw_client_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_thaw_client_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_THAW_CLIENT);

  log_packet("packet_thaw_client_100: sending info about ()");
  SEND_PACKET_END(PACKET_THAW_CLIENT);
}

static void ensure_valid_variant_packet_thaw_client(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_THAW_CLIENT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_THAW_CLIENT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_THAW_CLIENT] = variant;
}

struct packet_thaw_client *receive_packet_thaw_client(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_thaw_client at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_thaw_client(pc);

  switch(pc->phs.variant[PACKET_THAW_CLIENT]) {
  case 100:
    return receive_packet_thaw_client_100(pc);
  default:
    log_debug("Unknown PACKET_THAW_CLIENT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_thaw_client(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_thaw_client from the client.");
  }
  ensure_valid_variant_packet_thaw_client(pc);

  switch(pc->phs.variant[PACKET_THAW_CLIENT]) {

  case 100:
    return send_packet_thaw_client_100(pc);
  default:
    log_debug("Unknown PACKET_THAW_CLIENT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_thaw_client(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_thaw_client(pconn);
  } conn_list_iterate_end;
}

static struct packet_spaceship_launch *receive_packet_spaceship_launch_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_spaceship_launch, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_spaceship_launch_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_spaceship_launch_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_SPACESHIP_LAUNCH);

  log_packet("packet_spaceship_launch_100: sending info about ()");
  SEND_PACKET_END(PACKET_SPACESHIP_LAUNCH);
}

static void ensure_valid_variant_packet_spaceship_launch(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SPACESHIP_LAUNCH] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SPACESHIP_LAUNCH variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SPACESHIP_LAUNCH] = variant;
}

struct packet_spaceship_launch *receive_packet_spaceship_launch(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_spaceship_launch at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_spaceship_launch(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_LAUNCH]) {
  case 100:
    return receive_packet_spaceship_launch_100(pc);
  default:
    log_debug("Unknown PACKET_SPACESHIP_LAUNCH variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_spaceship_launch(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_spaceship_launch from the server.");
  }
  ensure_valid_variant_packet_spaceship_launch(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_LAUNCH]) {

  case 100:
    return send_packet_spaceship_launch_100(pc);
  default:
    log_debug("Unknown PACKET_SPACESHIP_LAUNCH variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_spaceship_place *receive_packet_spaceship_place_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_spaceship_place, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "num", &real_packet->num)) {
    RECEIVE_PACKET_FIELD_ERROR(num);
  }

  log_packet("packet_spaceship_place_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_spaceship_place_100(struct connection *pc, const struct packet_spaceship_place *packet)
{
  const struct packet_spaceship_place *real_packet = packet;
  SEND_PACKET_START(PACKET_SPACESHIP_PLACE);

  log_packet("packet_spaceship_place_100: sending info about ()");

  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint8(&dout, "num", real_packet->num);

  SEND_PACKET_END(PACKET_SPACESHIP_PLACE);
}

static void ensure_valid_variant_packet_spaceship_place(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SPACESHIP_PLACE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SPACESHIP_PLACE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SPACESHIP_PLACE] = variant;
}

struct packet_spaceship_place *receive_packet_spaceship_place(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_spaceship_place at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_spaceship_place(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_PLACE]) {
  case 100:
    return receive_packet_spaceship_place_100(pc);
  default:
    log_debug("Unknown PACKET_SPACESHIP_PLACE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_spaceship_place(struct connection *pc, const struct packet_spaceship_place *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_spaceship_place from the server.");
  }
  ensure_valid_variant_packet_spaceship_place(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_PLACE]) {

  case 100:
    return send_packet_spaceship_place_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SPACESHIP_PLACE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_spaceship_place(struct connection *pc, enum spaceship_place_type type, int num)
{
  struct packet_spaceship_place packet, *real_packet = &packet;

  real_packet->type = type;
  real_packet->num = num;
  
  return send_packet_spaceship_place(pc, real_packet);
}

static struct packet_spaceship_info *receive_packet_spaceship_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_spaceship_info, real_packet);
  if (!dio_get_sint8(pc->json_packet, "player_num", &real_packet->player_num)) {
    RECEIVE_PACKET_FIELD_ERROR(player_num);
  }
  if (!dio_get_uint8(pc->json_packet, "sship_state", &real_packet->sship_state)) {
    RECEIVE_PACKET_FIELD_ERROR(sship_state);
  }
  if (!dio_get_uint8(pc->json_packet, "structurals", &real_packet->structurals)) {
    RECEIVE_PACKET_FIELD_ERROR(structurals);
  }
  if (!dio_get_uint8(pc->json_packet, "components", &real_packet->components)) {
    RECEIVE_PACKET_FIELD_ERROR(components);
  }
  if (!dio_get_uint8(pc->json_packet, "modules", &real_packet->modules)) {
    RECEIVE_PACKET_FIELD_ERROR(modules);
  }
  if (!dio_get_uint8(pc->json_packet, "fuel", &real_packet->fuel)) {
    RECEIVE_PACKET_FIELD_ERROR(fuel);
  }
  if (!dio_get_uint8(pc->json_packet, "propulsion", &real_packet->propulsion)) {
    RECEIVE_PACKET_FIELD_ERROR(propulsion);
  }
  if (!dio_get_uint8(pc->json_packet, "habitation", &real_packet->habitation)) {
    RECEIVE_PACKET_FIELD_ERROR(habitation);
  }
  if (!dio_get_uint8(pc->json_packet, "life_support", &real_packet->life_support)) {
    RECEIVE_PACKET_FIELD_ERROR(life_support);
  }
  if (!dio_get_uint8(pc->json_packet, "solar_panels", &real_packet->solar_panels)) {
    RECEIVE_PACKET_FIELD_ERROR(solar_panels);
  }
  if (!dio_get_sint32(pc->json_packet, "launch_year", &real_packet->launch_year)) {
    RECEIVE_PACKET_FIELD_ERROR(launch_year);
  }
  if (!dio_get_uint32(pc->json_packet, "population", &real_packet->population)) {
    RECEIVE_PACKET_FIELD_ERROR(population);
  }
  if (!dio_get_uint32(pc->json_packet, "mass", &real_packet->mass)) {
    RECEIVE_PACKET_FIELD_ERROR(mass);
  }
  if (!dio_get_bit_string(pc->json_packet, "structure", real_packet->structure, sizeof(real_packet->structure))) {
    RECEIVE_PACKET_FIELD_ERROR(structure);
  }
  if (!dio_get_float(pc->json_packet, "support_rate", &real_packet->support_rate, 10000)) {
    RECEIVE_PACKET_FIELD_ERROR(support_rate);
  }
  if (!dio_get_float(pc->json_packet, "energy_rate", &real_packet->energy_rate, 10000)) {
    RECEIVE_PACKET_FIELD_ERROR(energy_rate);
  }
  if (!dio_get_float(pc->json_packet, "success_rate", &real_packet->success_rate, 10000)) {
    RECEIVE_PACKET_FIELD_ERROR(success_rate);
  }
  if (!dio_get_float(pc->json_packet, "travel_time", &real_packet->travel_time, 10000)) {
    RECEIVE_PACKET_FIELD_ERROR(travel_time);
  }

  log_packet("packet_spaceship_info_100: got info about (%d)",
    real_packet->player_num);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_spaceship_info_100(struct connection *pc, const struct packet_spaceship_info *packet)
{
  const struct packet_spaceship_info *real_packet = packet;
  SEND_PACKET_START(PACKET_SPACESHIP_INFO);

  log_packet("packet_spaceship_info_100: sending info about (%d)",
    real_packet->player_num);

  dio_put_sint8(&dout, "player_num", real_packet->player_num);
  dio_put_uint8(&dout, "sship_state", real_packet->sship_state);
  dio_put_uint8(&dout, "structurals", real_packet->structurals);
  dio_put_uint8(&dout, "components", real_packet->components);
  dio_put_uint8(&dout, "modules", real_packet->modules);
  dio_put_uint8(&dout, "fuel", real_packet->fuel);
  dio_put_uint8(&dout, "propulsion", real_packet->propulsion);
  dio_put_uint8(&dout, "habitation", real_packet->habitation);
  dio_put_uint8(&dout, "life_support", real_packet->life_support);
  dio_put_uint8(&dout, "solar_panels", real_packet->solar_panels);
  dio_put_sint32(&dout, "launch_year", real_packet->launch_year);
  dio_put_uint32(&dout, "population", real_packet->population);
  dio_put_uint32(&dout, "mass", real_packet->mass);
  dio_put_bit_string(&dout, "structure", real_packet->structure);
  dio_put_float(&dout, "support_rate", real_packet->support_rate, 10000);
  dio_put_float(&dout, "energy_rate", real_packet->energy_rate, 10000);
  dio_put_float(&dout, "success_rate", real_packet->success_rate, 10000);
  dio_put_float(&dout, "travel_time", real_packet->travel_time, 10000);

  SEND_PACKET_END(PACKET_SPACESHIP_INFO);
}

static void ensure_valid_variant_packet_spaceship_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SPACESHIP_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SPACESHIP_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SPACESHIP_INFO] = variant;
}

struct packet_spaceship_info *receive_packet_spaceship_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_spaceship_info at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_spaceship_info(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_INFO]) {
  case 100:
    return receive_packet_spaceship_info_100(pc);
  default:
    log_debug("Unknown PACKET_SPACESHIP_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_spaceship_info(struct connection *pc, const struct packet_spaceship_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_spaceship_info from the client.");
  }
  ensure_valid_variant_packet_spaceship_info(pc);

  switch(pc->phs.variant[PACKET_SPACESHIP_INFO]) {

  case 100:
    return send_packet_spaceship_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SPACESHIP_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_spaceship_info(struct conn_list *dest, const struct packet_spaceship_info *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_spaceship_info(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_unit *receive_packet_ruleset_unit_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_unit, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(id);
    }
    real_packet->id = readin;
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "sound_move", real_packet->sound_move, sizeof(real_packet->sound_move))) {
    RECEIVE_PACKET_FIELD_ERROR(sound_move);
  }
  if (!dio_get_string(pc->json_packet, "sound_move_alt", real_packet->sound_move_alt, sizeof(real_packet->sound_move_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(sound_move_alt);
  }
  if (!dio_get_string(pc->json_packet, "sound_fight", real_packet->sound_fight, sizeof(real_packet->sound_fight))) {
    RECEIVE_PACKET_FIELD_ERROR(sound_fight);
  }
  if (!dio_get_string(pc->json_packet, "sound_fight_alt", real_packet->sound_fight_alt, sizeof(real_packet->sound_fight_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(sound_fight_alt);
  }
  if (!dio_get_uint8(pc->json_packet, "unit_class_id", &real_packet->unit_class_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_class_id);
  }
  if (!dio_get_uint32(pc->json_packet, "build_cost", &real_packet->build_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(build_cost);
  }
  if (!dio_get_uint8(pc->json_packet, "pop_cost", &real_packet->pop_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(pop_cost);
  }
  if (!dio_get_uint8(pc->json_packet, "attack_strength", &real_packet->attack_strength)) {
    RECEIVE_PACKET_FIELD_ERROR(attack_strength);
  }
  if (!dio_get_uint8(pc->json_packet, "defense_strength", &real_packet->defense_strength)) {
    RECEIVE_PACKET_FIELD_ERROR(defense_strength);
  }
  if (!dio_get_uint8(pc->json_packet, "move_rate", &real_packet->move_rate)) {
    RECEIVE_PACKET_FIELD_ERROR(move_rate);
  }
  if (!dio_get_uint8(pc->json_packet, "tech_requirement", &real_packet->tech_requirement)) {
    RECEIVE_PACKET_FIELD_ERROR(tech_requirement);
  }
  if (!dio_get_uint8(pc->json_packet, "impr_requirement", &real_packet->impr_requirement)) {
    RECEIVE_PACKET_FIELD_ERROR(impr_requirement);
  }
  if (!dio_get_uint8(pc->json_packet, "gov_requirement", &real_packet->gov_requirement)) {
    RECEIVE_PACKET_FIELD_ERROR(gov_requirement);
  }
  if (!dio_get_uint32(pc->json_packet, "vision_radius_sq", &real_packet->vision_radius_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(vision_radius_sq);
  }
  if (!dio_get_uint8(pc->json_packet, "transport_capacity", &real_packet->transport_capacity)) {
    RECEIVE_PACKET_FIELD_ERROR(transport_capacity);
  }
  if (!dio_get_uint8(pc->json_packet, "hp", &real_packet->hp)) {
    RECEIVE_PACKET_FIELD_ERROR(hp);
  }
  if (!dio_get_uint8(pc->json_packet, "firepower", &real_packet->firepower)) {
    RECEIVE_PACKET_FIELD_ERROR(firepower);
  }
  if (!dio_get_sint8(pc->json_packet, "obsoleted_by", &real_packet->obsoleted_by)) {
    RECEIVE_PACKET_FIELD_ERROR(obsoleted_by);
  }
  if (!dio_get_sint8(pc->json_packet, "converted_to", &real_packet->converted_to)) {
    RECEIVE_PACKET_FIELD_ERROR(converted_to);
  }
  if (!dio_get_uint8(pc->json_packet, "convert_time", &real_packet->convert_time)) {
    RECEIVE_PACKET_FIELD_ERROR(convert_time);
  }
  if (!dio_get_uint8(pc->json_packet, "fuel", &real_packet->fuel)) {
    RECEIVE_PACKET_FIELD_ERROR(fuel);
  }
  if (!dio_get_uint8(pc->json_packet, "happy_cost", &real_packet->happy_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(happy_cost);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "upkeep", &real_packet->upkeep[i])) {
        RECEIVE_PACKET_FIELD_ERROR(upkeep);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "paratroopers_range", &real_packet->paratroopers_range)) {
    RECEIVE_PACKET_FIELD_ERROR(paratroopers_range);
  }
  if (!dio_get_uint8(pc->json_packet, "paratroopers_mr_req", &real_packet->paratroopers_mr_req)) {
    RECEIVE_PACKET_FIELD_ERROR(paratroopers_mr_req);
  }
  if (!dio_get_uint8(pc->json_packet, "paratroopers_mr_sub", &real_packet->paratroopers_mr_sub)) {
    RECEIVE_PACKET_FIELD_ERROR(paratroopers_mr_sub);
  }
  if (!dio_get_uint8(pc->json_packet, "veteran_levels", &real_packet->veteran_levels)) {
    RECEIVE_PACKET_FIELD_ERROR(veteran_levels);
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(veteran_name, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_string(pc->json_packet, "veteran_name", real_packet->veteran_name[i], sizeof(real_packet->veteran_name[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(veteran_name);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(power_fact, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_uint32(pc->json_packet, "power_fact", &real_packet->power_fact[i])) {
        RECEIVE_PACKET_FIELD_ERROR(power_fact);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(move_bonus, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_uint8(pc->json_packet, "move_bonus", &real_packet->move_bonus[i])) {
        RECEIVE_PACKET_FIELD_ERROR(move_bonus);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "bombard_rate", &real_packet->bombard_rate)) {
    RECEIVE_PACKET_FIELD_ERROR(bombard_rate);
  }
  if (!dio_get_uint8(pc->json_packet, "city_size", &real_packet->city_size)) {
    RECEIVE_PACKET_FIELD_ERROR(city_size);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->cargo)) {
    RECEIVE_PACKET_FIELD_ERROR(cargo);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->targets)) {
    RECEIVE_PACKET_FIELD_ERROR(targets);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->embarks)) {
    RECEIVE_PACKET_FIELD_ERROR(embarks);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->disembarks)) {
    RECEIVE_PACKET_FIELD_ERROR(disembarks);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->roles)) {
    RECEIVE_PACKET_FIELD_ERROR(roles);
  }
  #endif

  log_packet("packet_ruleset_unit_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_unit_100(struct connection *pc, const struct packet_ruleset_unit *packet)
{
  const struct packet_ruleset_unit *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_UNIT);

  log_packet("packet_ruleset_unit_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "sound_move", real_packet->sound_move);
  dio_put_string(&dout, "sound_move_alt", real_packet->sound_move_alt);
  dio_put_string(&dout, "sound_fight", real_packet->sound_fight);
  dio_put_string(&dout, "sound_fight_alt", real_packet->sound_fight_alt);
  dio_put_uint8(&dout, "unit_class_id", real_packet->unit_class_id);
  dio_put_uint32(&dout, "build_cost", real_packet->build_cost);
  dio_put_uint8(&dout, "pop_cost", real_packet->pop_cost);
  dio_put_uint8(&dout, "attack_strength", real_packet->attack_strength);
  dio_put_uint8(&dout, "defense_strength", real_packet->defense_strength);
  dio_put_uint8(&dout, "move_rate", real_packet->move_rate);
  dio_put_uint8(&dout, "tech_requirement", real_packet->tech_requirement);
  dio_put_uint8(&dout, "impr_requirement", real_packet->impr_requirement);
  dio_put_uint8(&dout, "gov_requirement", real_packet->gov_requirement);
  dio_put_uint32(&dout, "vision_radius_sq", real_packet->vision_radius_sq);
  dio_put_uint8(&dout, "transport_capacity", real_packet->transport_capacity);
  dio_put_uint8(&dout, "hp", real_packet->hp);
  dio_put_uint8(&dout, "firepower", real_packet->firepower);
  dio_put_sint8(&dout, "obsoleted_by", real_packet->obsoleted_by);
  dio_put_sint8(&dout, "converted_to", real_packet->converted_to);
  dio_put_uint8(&dout, "convert_time", real_packet->convert_time);
  dio_put_uint8(&dout, "fuel", real_packet->fuel);
  dio_put_uint8(&dout, "happy_cost", real_packet->happy_cost);

    {
        dio_put_array_uint8(&dout, "upkeep", (void *)real_packet->upkeep, O_LAST);
    } 
  dio_put_uint8(&dout, "paratroopers_range", real_packet->paratroopers_range);
  dio_put_uint8(&dout, "paratroopers_mr_req", real_packet->paratroopers_mr_req);
  dio_put_uint8(&dout, "paratroopers_mr_sub", real_packet->paratroopers_mr_sub);
  dio_put_uint8(&dout, "veteran_levels", real_packet->veteran_levels);

    {
        /* dio_put_string(&dout, "veteran_name", real_packet->veteran_name[i]); */
    } 

    {
        dio_put_array_uint32(&dout, "power_fact", (void *)real_packet->power_fact, real_packet->veteran_levels);
    } 

    {
        dio_put_array_uint8(&dout, "move_bonus", (void *)real_packet->move_bonus, real_packet->veteran_levels);
    } 
  dio_put_uint8(&dout, "bombard_rate", real_packet->bombard_rate);
  dio_put_uint8(&dout, "city_size", real_packet->city_size);
DIO_BV_PUT(&dout, "cargo", packet->cargo);
DIO_BV_PUT(&dout, "targets", packet->targets);
DIO_BV_PUT(&dout, "embarks", packet->embarks);
DIO_BV_PUT(&dout, "disembarks", packet->disembarks);
  dio_put_string(&dout, "helptext", real_packet->helptext);
DIO_BV_PUT(&dout, "flags", packet->flags);
DIO_BV_PUT(&dout, "roles", packet->roles);

  SEND_PACKET_END(PACKET_RULESET_UNIT);
}

static void ensure_valid_variant_packet_ruleset_unit(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_UNIT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_UNIT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_UNIT] = variant;
}

struct packet_ruleset_unit *receive_packet_ruleset_unit(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_unit at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_unit(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT]) {
  case 100:
    return receive_packet_ruleset_unit_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_unit(struct connection *pc, const struct packet_ruleset_unit *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_unit from the client.");
  }
  ensure_valid_variant_packet_ruleset_unit(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT]) {

  case 100:
    return send_packet_ruleset_unit_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_unit(struct conn_list *dest, const struct packet_ruleset_unit *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_unit(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_unit_bonus *receive_packet_ruleset_unit_bonus_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_unit_bonus, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "unit", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(unit);
    }
    real_packet->unit = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "flag", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(flag);
    }
    real_packet->flag = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_ruleset_unit_bonus_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_unit_bonus_100(struct connection *pc, const struct packet_ruleset_unit_bonus *packet)
{
  const struct packet_ruleset_unit_bonus *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_UNIT_BONUS);

  log_packet("packet_ruleset_unit_bonus_100: sending info about ()");

  dio_put_uint8(&dout, "unit", real_packet->unit);
  dio_put_uint8(&dout, "flag", real_packet->flag);
  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint8(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_RULESET_UNIT_BONUS);
}

static void ensure_valid_variant_packet_ruleset_unit_bonus(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_UNIT_BONUS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_UNIT_BONUS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_UNIT_BONUS] = variant;
}

struct packet_ruleset_unit_bonus *receive_packet_ruleset_unit_bonus(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_unit_bonus at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_unit_bonus(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_BONUS]) {
  case 100:
    return receive_packet_ruleset_unit_bonus_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_BONUS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_unit_bonus(struct connection *pc, const struct packet_ruleset_unit_bonus *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_unit_bonus from the client.");
  }
  ensure_valid_variant_packet_ruleset_unit_bonus(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_BONUS]) {

  case 100:
    return send_packet_ruleset_unit_bonus_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_BONUS variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_unit_bonus(struct conn_list *dest, const struct packet_ruleset_unit_bonus *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_unit_bonus(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_unit_flag *receive_packet_ruleset_unit_flag_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_unit_flag, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "helptxt", real_packet->helptxt, sizeof(real_packet->helptxt))) {
    RECEIVE_PACKET_FIELD_ERROR(helptxt);
  }

  log_packet("packet_ruleset_unit_flag_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_unit_flag_100(struct connection *pc, const struct packet_ruleset_unit_flag *packet)
{
  const struct packet_ruleset_unit_flag *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_UNIT_FLAG);

  log_packet("packet_ruleset_unit_flag_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "helptxt", real_packet->helptxt);

  SEND_PACKET_END(PACKET_RULESET_UNIT_FLAG);
}

static void ensure_valid_variant_packet_ruleset_unit_flag(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_UNIT_FLAG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_UNIT_FLAG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_UNIT_FLAG] = variant;
}

struct packet_ruleset_unit_flag *receive_packet_ruleset_unit_flag(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_unit_flag at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_unit_flag(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_FLAG]) {
  case 100:
    return receive_packet_ruleset_unit_flag_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_FLAG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_unit_flag(struct connection *pc, const struct packet_ruleset_unit_flag *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_unit_flag from the client.");
  }
  ensure_valid_variant_packet_ruleset_unit_flag(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_FLAG]) {

  case 100:
    return send_packet_ruleset_unit_flag_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_FLAG variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_unit_flag(struct conn_list *dest, const struct packet_ruleset_unit_flag *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_unit_flag(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_game *receive_packet_ruleset_game_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_game, real_packet);
  if (!dio_get_uint8(pc->json_packet, "default_specialist", &real_packet->default_specialist)) {
    RECEIVE_PACKET_FIELD_ERROR(default_specialist);
  }
  if (!dio_get_uint8(pc->json_packet, "veteran_levels", &real_packet->veteran_levels)) {
    RECEIVE_PACKET_FIELD_ERROR(veteran_levels);
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(veteran_name, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_string(pc->json_packet, "veteran_name", real_packet->veteran_name[i], sizeof(real_packet->veteran_name[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(veteran_name);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(power_fact, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_uint32(pc->json_packet, "power_fact", &real_packet->power_fact[i])) {
        RECEIVE_PACKET_FIELD_ERROR(power_fact);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->veteran_levels > MAX_VET_LEVELS) {
      RECEIVE_PACKET_FIELD_ERROR(move_bonus, ": truncation array");
    }
    for (i = 0; i < real_packet->veteran_levels; i++) {
      if (!dio_get_uint8(pc->json_packet, "move_bonus", &real_packet->move_bonus[i])) {
        RECEIVE_PACKET_FIELD_ERROR(move_bonus);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "background_red", &real_packet->background_red)) {
    RECEIVE_PACKET_FIELD_ERROR(background_red);
  }
  if (!dio_get_uint8(pc->json_packet, "background_green", &real_packet->background_green)) {
    RECEIVE_PACKET_FIELD_ERROR(background_green);
  }
  if (!dio_get_uint8(pc->json_packet, "background_blue", &real_packet->background_blue)) {
    RECEIVE_PACKET_FIELD_ERROR(background_blue);
  }

  log_packet("packet_ruleset_game_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_game_100(struct connection *pc, const struct packet_ruleset_game *packet)
{
  const struct packet_ruleset_game *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_GAME);

  log_packet("packet_ruleset_game_100: sending info about ()");

  dio_put_uint8(&dout, "default_specialist", real_packet->default_specialist);
  dio_put_uint8(&dout, "veteran_levels", real_packet->veteran_levels);

    {
        /* dio_put_string(&dout, "veteran_name", real_packet->veteran_name[i]); */
    } 

    {
        dio_put_array_uint32(&dout, "power_fact", (void *)real_packet->power_fact, real_packet->veteran_levels);
    } 

    {
        dio_put_array_uint8(&dout, "move_bonus", (void *)real_packet->move_bonus, real_packet->veteran_levels);
    } 
  dio_put_uint8(&dout, "background_red", real_packet->background_red);
  dio_put_uint8(&dout, "background_green", real_packet->background_green);
  dio_put_uint8(&dout, "background_blue", real_packet->background_blue);

  SEND_PACKET_END(PACKET_RULESET_GAME);
}

static void ensure_valid_variant_packet_ruleset_game(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_GAME] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_GAME variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_GAME] = variant;
}

struct packet_ruleset_game *receive_packet_ruleset_game(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_game at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_game(pc);

  switch(pc->phs.variant[PACKET_RULESET_GAME]) {
  case 100:
    return receive_packet_ruleset_game_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_GAME variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_game(struct connection *pc, const struct packet_ruleset_game *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_game from the client.");
  }
  ensure_valid_variant_packet_ruleset_game(pc);

  switch(pc->phs.variant[PACKET_RULESET_GAME]) {

  case 100:
    return send_packet_ruleset_game_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_GAME variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_game(struct conn_list *dest, const struct packet_ruleset_game *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_game(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_specialist *receive_packet_ruleset_specialist_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_specialist, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(id);
    }
    real_packet->id = readin;
  }
  if (!dio_get_string(pc->json_packet, "plural_name", real_packet->plural_name, sizeof(real_packet->plural_name))) {
    RECEIVE_PACKET_FIELD_ERROR(plural_name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "short_name", real_packet->short_name, sizeof(real_packet->short_name))) {
    RECEIVE_PACKET_FIELD_ERROR(short_name);
  }
  if (!dio_get_uint8(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_specialist_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_specialist_100(struct connection *pc, const struct packet_ruleset_specialist *packet)
{
  const struct packet_ruleset_specialist *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_SPECIALIST);

  log_packet("packet_ruleset_specialist_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "plural_name", real_packet->plural_name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "short_name", real_packet->short_name);
  dio_put_uint8(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_SPECIALIST);
}

static void ensure_valid_variant_packet_ruleset_specialist(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_SPECIALIST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_SPECIALIST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_SPECIALIST] = variant;
}

struct packet_ruleset_specialist *receive_packet_ruleset_specialist(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_specialist at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_specialist(pc);

  switch(pc->phs.variant[PACKET_RULESET_SPECIALIST]) {
  case 100:
    return receive_packet_ruleset_specialist_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_SPECIALIST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_specialist(struct connection *pc, const struct packet_ruleset_specialist *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_specialist from the client.");
  }
  ensure_valid_variant_packet_ruleset_specialist(pc);

  switch(pc->phs.variant[PACKET_RULESET_SPECIALIST]) {

  case 100:
    return send_packet_ruleset_specialist_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_SPECIALIST variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_specialist(struct conn_list *dest, const struct packet_ruleset_specialist *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_specialist(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_government_ruler_title *receive_packet_ruleset_government_ruler_title_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_government_ruler_title, real_packet);
  if (!dio_get_uint8(pc->json_packet, "gov", &real_packet->gov)) {
    RECEIVE_PACKET_FIELD_ERROR(gov);
  }
  if (!dio_get_uint32(pc->json_packet, "nation", &real_packet->nation)) {
    RECEIVE_PACKET_FIELD_ERROR(nation);
  }
  if (!dio_get_string(pc->json_packet, "male_title", real_packet->male_title, sizeof(real_packet->male_title))) {
    RECEIVE_PACKET_FIELD_ERROR(male_title);
  }
  if (!dio_get_string(pc->json_packet, "female_title", real_packet->female_title, sizeof(real_packet->female_title))) {
    RECEIVE_PACKET_FIELD_ERROR(female_title);
  }

  log_packet("packet_ruleset_government_ruler_title_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_government_ruler_title_100(struct connection *pc, const struct packet_ruleset_government_ruler_title *packet)
{
  const struct packet_ruleset_government_ruler_title *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_GOVERNMENT_RULER_TITLE);

  log_packet("packet_ruleset_government_ruler_title_100: sending info about ()");

  dio_put_uint8(&dout, "gov", real_packet->gov);
  dio_put_uint32(&dout, "nation", real_packet->nation);
  dio_put_string(&dout, "male_title", real_packet->male_title);
  dio_put_string(&dout, "female_title", real_packet->female_title);

  SEND_PACKET_END(PACKET_RULESET_GOVERNMENT_RULER_TITLE);
}

static void ensure_valid_variant_packet_ruleset_government_ruler_title(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_GOVERNMENT_RULER_TITLE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_GOVERNMENT_RULER_TITLE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_GOVERNMENT_RULER_TITLE] = variant;
}

struct packet_ruleset_government_ruler_title *receive_packet_ruleset_government_ruler_title(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_government_ruler_title at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_government_ruler_title(pc);

  switch(pc->phs.variant[PACKET_RULESET_GOVERNMENT_RULER_TITLE]) {
  case 100:
    return receive_packet_ruleset_government_ruler_title_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_GOVERNMENT_RULER_TITLE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_government_ruler_title(struct connection *pc, const struct packet_ruleset_government_ruler_title *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_government_ruler_title from the client.");
  }
  ensure_valid_variant_packet_ruleset_government_ruler_title(pc);

  switch(pc->phs.variant[PACKET_RULESET_GOVERNMENT_RULER_TITLE]) {

  case 100:
    return send_packet_ruleset_government_ruler_title_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_GOVERNMENT_RULER_TITLE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_government_ruler_title(struct conn_list *dest, const struct packet_ruleset_government_ruler_title *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_government_ruler_title(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_tech *receive_packet_ruleset_tech_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_tech, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  
  {
    int i;
  
    for (i = 0; i < 2; i++) {
      if (!dio_get_uint8(pc->json_packet, "req", &real_packet->req[i])) {
        RECEIVE_PACKET_FIELD_ERROR(req);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "root_req", &real_packet->root_req)) {
    RECEIVE_PACKET_FIELD_ERROR(root_req);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  if (!dio_get_uint32(pc->json_packet, "preset_cost", &real_packet->preset_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(preset_cost);
  }
  if (!dio_get_uint32(pc->json_packet, "num_reqs", &real_packet->num_reqs)) {
    RECEIVE_PACKET_FIELD_ERROR(num_reqs);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }

  log_packet("packet_ruleset_tech_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_tech_100(struct connection *pc, const struct packet_ruleset_tech *packet)
{
  const struct packet_ruleset_tech *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_TECH);

  log_packet("packet_ruleset_tech_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);

    {
        dio_put_array_uint8(&dout, "req", (void *)real_packet->req, 2);
    } 
  dio_put_uint8(&dout, "root_req", real_packet->root_req);
DIO_BV_PUT(&dout, "flags", packet->flags);
  dio_put_uint32(&dout, "preset_cost", real_packet->preset_cost);
  dio_put_uint32(&dout, "num_reqs", real_packet->num_reqs);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "helptext", real_packet->helptext);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);

  SEND_PACKET_END(PACKET_RULESET_TECH);
}

static void ensure_valid_variant_packet_ruleset_tech(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_TECH] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_TECH variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_TECH] = variant;
}

struct packet_ruleset_tech *receive_packet_ruleset_tech(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_tech at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_tech(pc);

  switch(pc->phs.variant[PACKET_RULESET_TECH]) {
  case 100:
    return receive_packet_ruleset_tech_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_TECH variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_tech(struct connection *pc, const struct packet_ruleset_tech *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_tech from the client.");
  }
  ensure_valid_variant_packet_ruleset_tech(pc);

  switch(pc->phs.variant[PACKET_RULESET_TECH]) {

  case 100:
    return send_packet_ruleset_tech_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_TECH variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_tech(struct conn_list *dest, const struct packet_ruleset_tech *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_tech(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_government *receive_packet_ruleset_government_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_government, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_government_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_government_100(struct connection *pc, const struct packet_ruleset_government *packet)
{
  const struct packet_ruleset_government *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_GOVERNMENT);

  log_packet("packet_ruleset_government_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_GOVERNMENT);
}

static void ensure_valid_variant_packet_ruleset_government(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_GOVERNMENT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_GOVERNMENT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_GOVERNMENT] = variant;
}

struct packet_ruleset_government *receive_packet_ruleset_government(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_government at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_government(pc);

  switch(pc->phs.variant[PACKET_RULESET_GOVERNMENT]) {
  case 100:
    return receive_packet_ruleset_government_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_GOVERNMENT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_government(struct connection *pc, const struct packet_ruleset_government *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_government from the client.");
  }
  ensure_valid_variant_packet_ruleset_government(pc);

  switch(pc->phs.variant[PACKET_RULESET_GOVERNMENT]) {

  case 100:
    return send_packet_ruleset_government_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_GOVERNMENT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_government(struct conn_list *dest, const struct packet_ruleset_government *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_government(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_terrain_control *receive_packet_ruleset_terrain_control_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_terrain_control, real_packet);
  if (!dio_get_uint8(pc->json_packet, "ocean_reclaim_requirement_pct", &real_packet->ocean_reclaim_requirement_pct)) {
    RECEIVE_PACKET_FIELD_ERROR(ocean_reclaim_requirement_pct);
  }
  if (!dio_get_uint8(pc->json_packet, "land_channel_requirement_pct", &real_packet->land_channel_requirement_pct)) {
    RECEIVE_PACKET_FIELD_ERROR(land_channel_requirement_pct);
  }
  if (!dio_get_uint8(pc->json_packet, "lake_max_size", &real_packet->lake_max_size)) {
    RECEIVE_PACKET_FIELD_ERROR(lake_max_size);
  }
  if (!dio_get_uint8(pc->json_packet, "min_start_native_area", &real_packet->min_start_native_area)) {
    RECEIVE_PACKET_FIELD_ERROR(min_start_native_area);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "pollution_tile_penalty", &real_packet->pollution_tile_penalty[i])) {
        RECEIVE_PACKET_FIELD_ERROR(pollution_tile_penalty);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "fallout_tile_penalty", &real_packet->fallout_tile_penalty[i])) {
        RECEIVE_PACKET_FIELD_ERROR(fallout_tile_penalty);
      }
    }
  }

  log_packet("packet_ruleset_terrain_control_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_terrain_control_100(struct connection *pc, const struct packet_ruleset_terrain_control *packet)
{
  const struct packet_ruleset_terrain_control *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_TERRAIN_CONTROL);

  log_packet("packet_ruleset_terrain_control_100: sending info about ()");

  dio_put_uint8(&dout, "ocean_reclaim_requirement_pct", real_packet->ocean_reclaim_requirement_pct);
  dio_put_uint8(&dout, "land_channel_requirement_pct", real_packet->land_channel_requirement_pct);
  dio_put_uint8(&dout, "lake_max_size", real_packet->lake_max_size);
  dio_put_uint8(&dout, "min_start_native_area", real_packet->min_start_native_area);

    {
        dio_put_array_uint8(&dout, "pollution_tile_penalty", (void *)real_packet->pollution_tile_penalty, O_LAST);
    } 

    {
        dio_put_array_uint8(&dout, "fallout_tile_penalty", (void *)real_packet->fallout_tile_penalty, O_LAST);
    } 

  SEND_PACKET_END(PACKET_RULESET_TERRAIN_CONTROL);
}

static void ensure_valid_variant_packet_ruleset_terrain_control(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_TERRAIN_CONTROL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_TERRAIN_CONTROL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_TERRAIN_CONTROL] = variant;
}

struct packet_ruleset_terrain_control *receive_packet_ruleset_terrain_control(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_terrain_control at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_terrain_control(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN_CONTROL]) {
  case 100:
    return receive_packet_ruleset_terrain_control_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN_CONTROL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_terrain_control(struct connection *pc, const struct packet_ruleset_terrain_control *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_terrain_control from the client.");
  }
  ensure_valid_variant_packet_ruleset_terrain_control(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN_CONTROL]) {

  case 100:
    return send_packet_ruleset_terrain_control_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN_CONTROL variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_terrain_control(struct conn_list *dest, const struct packet_ruleset_terrain_control *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_terrain_control(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_rulesets_ready *receive_packet_rulesets_ready_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_rulesets_ready, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_rulesets_ready_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_rulesets_ready_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_RULESETS_READY);

  log_packet("packet_rulesets_ready_100: sending info about ()");
  SEND_PACKET_END(PACKET_RULESETS_READY);
}

static void ensure_valid_variant_packet_rulesets_ready(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESETS_READY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESETS_READY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESETS_READY] = variant;
}

struct packet_rulesets_ready *receive_packet_rulesets_ready(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_rulesets_ready at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_rulesets_ready(pc);

  switch(pc->phs.variant[PACKET_RULESETS_READY]) {
  case 100:
    return receive_packet_rulesets_ready_100(pc);
  default:
    log_debug("Unknown PACKET_RULESETS_READY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_rulesets_ready(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_rulesets_ready from the client.");
  }
  ensure_valid_variant_packet_rulesets_ready(pc);

  switch(pc->phs.variant[PACKET_RULESETS_READY]) {

  case 100:
    return send_packet_rulesets_ready_100(pc);
  default:
    log_debug("Unknown PACKET_RULESETS_READY variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_rulesets_ready(struct conn_list *dest)
{
  conn_list_iterate(dest, pconn) {
    send_packet_rulesets_ready(pconn);
  } conn_list_iterate_end;
}

static struct packet_ruleset_nation_groups *receive_packet_ruleset_nation_groups_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_nation_groups, real_packet);
  if (!dio_get_uint8(pc->json_packet, "ngroups", &real_packet->ngroups)) {
    RECEIVE_PACKET_FIELD_ERROR(ngroups);
  }
  
  {
    int i;
  
    if (real_packet->ngroups > MAX_NUM_NATION_GROUPS) {
      RECEIVE_PACKET_FIELD_ERROR(groups, ": truncation array");
    }
    for (i = 0; i < real_packet->ngroups; i++) {
      if (!dio_get_string(pc->json_packet, "groups", real_packet->groups[i], sizeof(real_packet->groups[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(groups);
      }
    }
  }

  log_packet("packet_ruleset_nation_groups_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_nation_groups_100(struct connection *pc, const struct packet_ruleset_nation_groups *packet)
{
  const struct packet_ruleset_nation_groups *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_NATION_GROUPS);

  log_packet("packet_ruleset_nation_groups_100: sending info about ()");

  dio_put_uint8(&dout, "ngroups", real_packet->ngroups);

    {
        /* dio_put_string(&dout, "groups", real_packet->groups[i]); */
    } 

  SEND_PACKET_END(PACKET_RULESET_NATION_GROUPS);
}

static void ensure_valid_variant_packet_ruleset_nation_groups(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_NATION_GROUPS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_NATION_GROUPS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_NATION_GROUPS] = variant;
}

struct packet_ruleset_nation_groups *receive_packet_ruleset_nation_groups(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_nation_groups at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_nation_groups(pc);

  switch(pc->phs.variant[PACKET_RULESET_NATION_GROUPS]) {
  case 100:
    return receive_packet_ruleset_nation_groups_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_NATION_GROUPS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_nation_groups(struct connection *pc, const struct packet_ruleset_nation_groups *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_nation_groups from the client.");
  }
  ensure_valid_variant_packet_ruleset_nation_groups(pc);

  switch(pc->phs.variant[PACKET_RULESET_NATION_GROUPS]) {

  case 100:
    return send_packet_ruleset_nation_groups_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_NATION_GROUPS variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_nation_groups(struct conn_list *dest, const struct packet_ruleset_nation_groups *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_nation_groups(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_nation *receive_packet_ruleset_nation_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_nation, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "adjective", real_packet->adjective, sizeof(real_packet->adjective))) {
    RECEIVE_PACKET_FIELD_ERROR(adjective);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "noun_plural", real_packet->noun_plural, sizeof(real_packet->noun_plural))) {
    RECEIVE_PACKET_FIELD_ERROR(noun_plural);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "legend", real_packet->legend, sizeof(real_packet->legend))) {
    RECEIVE_PACKET_FIELD_ERROR(legend);
  }
  if (!dio_get_uint8(pc->json_packet, "city_style", &real_packet->city_style)) {
    RECEIVE_PACKET_FIELD_ERROR(city_style);
  }
  if (!dio_get_uint8(pc->json_packet, "leader_count", &real_packet->leader_count)) {
    RECEIVE_PACKET_FIELD_ERROR(leader_count);
  }
  
  {
    int i;
  
    if (real_packet->leader_count > MAX_NUM_LEADERS) {
      RECEIVE_PACKET_FIELD_ERROR(leader_name, ": truncation array");
    }
    for (i = 0; i < real_packet->leader_count; i++) {
      if (!dio_get_string(pc->json_packet, "leader_name", real_packet->leader_name[i], sizeof(real_packet->leader_name[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(leader_name);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->leader_count > MAX_NUM_LEADERS) {
      RECEIVE_PACKET_FIELD_ERROR(leader_is_male, ": truncation array");
    }
    for (i = 0; i < real_packet->leader_count; i++) {
      if (!dio_get_bool8(pc->json_packet, "leader_is_male", &real_packet->leader_is_male[i])) {
        RECEIVE_PACKET_FIELD_ERROR(leader_is_male);
      }
    }
  }
  if (!dio_get_bool8(pc->json_packet, "is_available", &real_packet->is_available)) {
    RECEIVE_PACKET_FIELD_ERROR(is_available);
  }
  if (!dio_get_bool8(pc->json_packet, "is_playable", &real_packet->is_playable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_playable);
  }
  if (!dio_get_uint8(pc->json_packet, "barbarian_type", &real_packet->barbarian_type)) {
    RECEIVE_PACKET_FIELD_ERROR(barbarian_type);
  }
  if (!dio_get_uint8(pc->json_packet, "ngroups", &real_packet->ngroups)) {
    RECEIVE_PACKET_FIELD_ERROR(ngroups);
  }
  
  {
    int i;
  
    if (real_packet->ngroups > MAX_NUM_NATION_GROUPS) {
      RECEIVE_PACKET_FIELD_ERROR(groups, ": truncation array");
    }
    for (i = 0; i < real_packet->ngroups; i++) {
      if (!dio_get_uint8(pc->json_packet, "groups", &real_packet->groups[i])) {
        RECEIVE_PACKET_FIELD_ERROR(groups);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "init_government_id", &real_packet->init_government_id)) {
    RECEIVE_PACKET_FIELD_ERROR(init_government_id);
  }

  log_packet("packet_ruleset_nation_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_nation_100(struct connection *pc, const struct packet_ruleset_nation *packet)
{
  const struct packet_ruleset_nation *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_NATION);

  log_packet("packet_ruleset_nation_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_string(&dout, "adjective", real_packet->adjective);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "noun_plural", real_packet->noun_plural);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "legend", real_packet->legend);
  dio_put_uint8(&dout, "city_style", real_packet->city_style);
  dio_put_uint8(&dout, "leader_count", real_packet->leader_count);

    {
        /* dio_put_string(&dout, "leader_name", real_packet->leader_name[i]); */
    } 

    {
        dio_put_array_bool8(&dout, "leader_is_male", (void *)real_packet->leader_is_male, real_packet->leader_count);
    } 
  dio_put_bool8(&dout, "is_available", real_packet->is_available);
  dio_put_bool8(&dout, "is_playable", real_packet->is_playable);
  dio_put_uint8(&dout, "barbarian_type", real_packet->barbarian_type);
  dio_put_uint8(&dout, "ngroups", real_packet->ngroups);

    {
        dio_put_array_uint8(&dout, "groups", (void *)real_packet->groups, real_packet->ngroups);
    } 
  dio_put_uint8(&dout, "init_government_id", real_packet->init_government_id);

  SEND_PACKET_END(PACKET_RULESET_NATION);
}

static void ensure_valid_variant_packet_ruleset_nation(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_NATION] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_NATION variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_NATION] = variant;
}

struct packet_ruleset_nation *receive_packet_ruleset_nation(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_nation at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_nation(pc);

  switch(pc->phs.variant[PACKET_RULESET_NATION]) {
  case 100:
    return receive_packet_ruleset_nation_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_NATION variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_nation(struct connection *pc, const struct packet_ruleset_nation *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_nation from the client.");
  }
  ensure_valid_variant_packet_ruleset_nation(pc);

  switch(pc->phs.variant[PACKET_RULESET_NATION]) {

  case 100:
    return send_packet_ruleset_nation_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_NATION variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_nation(struct conn_list *dest, const struct packet_ruleset_nation *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_nation(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_city *receive_packet_ruleset_city_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_city, real_packet);
  if (!dio_get_uint8(pc->json_packet, "style_id", &real_packet->style_id)) {
    RECEIVE_PACKET_FIELD_ERROR(style_id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "citizens_graphic", real_packet->citizens_graphic, sizeof(real_packet->citizens_graphic))) {
    RECEIVE_PACKET_FIELD_ERROR(citizens_graphic);
  }
  if (!dio_get_string(pc->json_packet, "citizens_graphic_alt", real_packet->citizens_graphic_alt, sizeof(real_packet->citizens_graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(citizens_graphic_alt);
  }
  if (!dio_get_uint8(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  if (!dio_get_string(pc->json_packet, "graphic", real_packet->graphic, sizeof(real_packet->graphic))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "oceanic_graphic", real_packet->oceanic_graphic, sizeof(real_packet->oceanic_graphic))) {
    RECEIVE_PACKET_FIELD_ERROR(oceanic_graphic);
  }
  if (!dio_get_string(pc->json_packet, "oceanic_graphic_alt", real_packet->oceanic_graphic_alt, sizeof(real_packet->oceanic_graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(oceanic_graphic_alt);
  }
  if (!dio_get_sint8(pc->json_packet, "replaced_by", &real_packet->replaced_by)) {
    RECEIVE_PACKET_FIELD_ERROR(replaced_by);
  }

  log_packet("packet_ruleset_city_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_city_100(struct connection *pc, const struct packet_ruleset_city *packet)
{
  const struct packet_ruleset_city *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_CITY);

  log_packet("packet_ruleset_city_100: sending info about ()");

  dio_put_uint8(&dout, "style_id", real_packet->style_id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "citizens_graphic", real_packet->citizens_graphic);
  dio_put_string(&dout, "citizens_graphic_alt", real_packet->citizens_graphic_alt);
  dio_put_uint8(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_string(&dout, "graphic", real_packet->graphic);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "oceanic_graphic", real_packet->oceanic_graphic);
  dio_put_string(&dout, "oceanic_graphic_alt", real_packet->oceanic_graphic_alt);
  dio_put_sint8(&dout, "replaced_by", real_packet->replaced_by);

  SEND_PACKET_END(PACKET_RULESET_CITY);
}

static void ensure_valid_variant_packet_ruleset_city(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_CITY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_CITY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_CITY] = variant;
}

struct packet_ruleset_city *receive_packet_ruleset_city(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_city at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_city(pc);

  switch(pc->phs.variant[PACKET_RULESET_CITY]) {
  case 100:
    return receive_packet_ruleset_city_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_CITY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_city(struct connection *pc, const struct packet_ruleset_city *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_city from the client.");
  }
  ensure_valid_variant_packet_ruleset_city(pc);

  switch(pc->phs.variant[PACKET_RULESET_CITY]) {

  case 100:
    return send_packet_ruleset_city_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_CITY variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_city(struct conn_list *dest, const struct packet_ruleset_city *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_city(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_building *receive_packet_ruleset_building_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_building, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(id);
    }
    real_packet->id = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "genus", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(genus);
    }
    real_packet->genus = readin;
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_uint32(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "obsolete_by", &real_packet->obsolete_by)) {
    RECEIVE_PACKET_FIELD_ERROR(obsolete_by);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "replaced_by", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(replaced_by);
    }
    real_packet->replaced_by = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "build_cost", &real_packet->build_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(build_cost);
  }
  if (!dio_get_uint32(pc->json_packet, "upkeep", &real_packet->upkeep)) {
    RECEIVE_PACKET_FIELD_ERROR(upkeep);
  }
  if (!dio_get_uint32(pc->json_packet, "sabotage", &real_packet->sabotage)) {
    RECEIVE_PACKET_FIELD_ERROR(sabotage);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "soundtag", real_packet->soundtag, sizeof(real_packet->soundtag))) {
    RECEIVE_PACKET_FIELD_ERROR(soundtag);
  }
  if (!dio_get_string(pc->json_packet, "soundtag_alt", real_packet->soundtag_alt, sizeof(real_packet->soundtag_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(soundtag_alt);
  }
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_building_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_building_100(struct connection *pc, const struct packet_ruleset_building *packet)
{
  const struct packet_ruleset_building *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_BUILDING);

  log_packet("packet_ruleset_building_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_uint8(&dout, "genus", real_packet->genus);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_uint32(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_uint8(&dout, "obsolete_by", real_packet->obsolete_by);
  dio_put_uint8(&dout, "replaced_by", real_packet->replaced_by);
  dio_put_uint32(&dout, "build_cost", real_packet->build_cost);
  dio_put_uint32(&dout, "upkeep", real_packet->upkeep);
  dio_put_uint32(&dout, "sabotage", real_packet->sabotage);
DIO_BV_PUT(&dout, "flags", packet->flags);
  dio_put_string(&dout, "soundtag", real_packet->soundtag);
  dio_put_string(&dout, "soundtag_alt", real_packet->soundtag_alt);
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_BUILDING);
}

static void ensure_valid_variant_packet_ruleset_building(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_BUILDING] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_BUILDING variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_BUILDING] = variant;
}

struct packet_ruleset_building *receive_packet_ruleset_building(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_building at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_building(pc);

  switch(pc->phs.variant[PACKET_RULESET_BUILDING]) {
  case 100:
    return receive_packet_ruleset_building_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_BUILDING variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_building(struct connection *pc, const struct packet_ruleset_building *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_building from the client.");
  }
  ensure_valid_variant_packet_ruleset_building(pc);

  switch(pc->phs.variant[PACKET_RULESET_BUILDING]) {

  case 100:
    return send_packet_ruleset_building_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_BUILDING variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_building(struct conn_list *dest, const struct packet_ruleset_building *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_building(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_terrain *receive_packet_ruleset_terrain_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_terrain, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(id);
    }
    real_packet->id = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "tclass", &real_packet->tclass)) {
    RECEIVE_PACKET_FIELD_ERROR(tclass);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->native_to)) {
    RECEIVE_PACKET_FIELD_ERROR(native_to);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_uint8(pc->json_packet, "movement_cost", &real_packet->movement_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(movement_cost);
  }
  if (!dio_get_sint16(pc->json_packet, "defense_bonus", &real_packet->defense_bonus)) {
    RECEIVE_PACKET_FIELD_ERROR(defense_bonus);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "output", &real_packet->output[i])) {
        RECEIVE_PACKET_FIELD_ERROR(output);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "num_resources", &real_packet->num_resources)) {
    RECEIVE_PACKET_FIELD_ERROR(num_resources);
  }
  
  {
    int i;
  
    if (real_packet->num_resources > MAX_NUM_RESOURCES) {
      RECEIVE_PACKET_FIELD_ERROR(resources, ": truncation array");
    }
    for (i = 0; i < real_packet->num_resources; i++) {
      {
        int readin;
    
        if (!dio_get_uint8(pc->json_packet, "resources", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(resources);
        }
        real_packet->resources[i] = readin;
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "road_output_incr_pct", &real_packet->road_output_incr_pct[i])) {
        RECEIVE_PACKET_FIELD_ERROR(road_output_incr_pct);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "base_time", &real_packet->base_time)) {
    RECEIVE_PACKET_FIELD_ERROR(base_time);
  }
  if (!dio_get_uint8(pc->json_packet, "road_time", &real_packet->road_time)) {
    RECEIVE_PACKET_FIELD_ERROR(road_time);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "irrigation_result", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(irrigation_result);
    }
    real_packet->irrigation_result = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "irrigation_food_incr", &real_packet->irrigation_food_incr)) {
    RECEIVE_PACKET_FIELD_ERROR(irrigation_food_incr);
  }
  if (!dio_get_uint8(pc->json_packet, "irrigation_time", &real_packet->irrigation_time)) {
    RECEIVE_PACKET_FIELD_ERROR(irrigation_time);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "mining_result", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(mining_result);
    }
    real_packet->mining_result = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "mining_shield_incr", &real_packet->mining_shield_incr)) {
    RECEIVE_PACKET_FIELD_ERROR(mining_shield_incr);
  }
  if (!dio_get_uint8(pc->json_packet, "mining_time", &real_packet->mining_time)) {
    RECEIVE_PACKET_FIELD_ERROR(mining_time);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "transform_result", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(transform_result);
    }
    real_packet->transform_result = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "transform_time", &real_packet->transform_time)) {
    RECEIVE_PACKET_FIELD_ERROR(transform_time);
  }
  if (!dio_get_uint8(pc->json_packet, "clean_pollution_time", &real_packet->clean_pollution_time)) {
    RECEIVE_PACKET_FIELD_ERROR(clean_pollution_time);
  }
  if (!dio_get_uint8(pc->json_packet, "clean_fallout_time", &real_packet->clean_fallout_time)) {
    RECEIVE_PACKET_FIELD_ERROR(clean_fallout_time);
  }
  if (!dio_get_uint8(pc->json_packet, "color_red", &real_packet->color_red)) {
    RECEIVE_PACKET_FIELD_ERROR(color_red);
  }
  if (!dio_get_uint8(pc->json_packet, "color_green", &real_packet->color_green)) {
    RECEIVE_PACKET_FIELD_ERROR(color_green);
  }
  if (!dio_get_uint8(pc->json_packet, "color_blue", &real_packet->color_blue)) {
    RECEIVE_PACKET_FIELD_ERROR(color_blue);
  }
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_terrain_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_terrain_100(struct connection *pc, const struct packet_ruleset_terrain *packet)
{
  const struct packet_ruleset_terrain *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_TERRAIN);

  log_packet("packet_ruleset_terrain_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_uint8(&dout, "tclass", real_packet->tclass);
DIO_BV_PUT(&dout, "flags", packet->flags);
DIO_BV_PUT(&dout, "native_to", packet->native_to);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_uint8(&dout, "movement_cost", real_packet->movement_cost);
  dio_put_sint16(&dout, "defense_bonus", real_packet->defense_bonus);

    {
        dio_put_array_uint8(&dout, "output", (void *)real_packet->output, O_LAST);
    } 
  dio_put_uint8(&dout, "num_resources", real_packet->num_resources);

    {
        dio_put_array_uint8(&dout, "resources", (void *)real_packet->resources, real_packet->num_resources);
    } 

    {
        dio_put_array_uint32(&dout, "road_output_incr_pct", (void *)real_packet->road_output_incr_pct, O_LAST);
    } 
  dio_put_uint8(&dout, "base_time", real_packet->base_time);
  dio_put_uint8(&dout, "road_time", real_packet->road_time);
  dio_put_uint8(&dout, "irrigation_result", real_packet->irrigation_result);
  dio_put_uint8(&dout, "irrigation_food_incr", real_packet->irrigation_food_incr);
  dio_put_uint8(&dout, "irrigation_time", real_packet->irrigation_time);
  dio_put_uint8(&dout, "mining_result", real_packet->mining_result);
  dio_put_uint8(&dout, "mining_shield_incr", real_packet->mining_shield_incr);
  dio_put_uint8(&dout, "mining_time", real_packet->mining_time);
  dio_put_uint8(&dout, "transform_result", real_packet->transform_result);
  dio_put_uint8(&dout, "transform_time", real_packet->transform_time);
  dio_put_uint8(&dout, "clean_pollution_time", real_packet->clean_pollution_time);
  dio_put_uint8(&dout, "clean_fallout_time", real_packet->clean_fallout_time);
  dio_put_uint8(&dout, "color_red", real_packet->color_red);
  dio_put_uint8(&dout, "color_green", real_packet->color_green);
  dio_put_uint8(&dout, "color_blue", real_packet->color_blue);
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_TERRAIN);
}

static void ensure_valid_variant_packet_ruleset_terrain(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_TERRAIN] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_TERRAIN variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_TERRAIN] = variant;
}

struct packet_ruleset_terrain *receive_packet_ruleset_terrain(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_terrain at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_terrain(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN]) {
  case 100:
    return receive_packet_ruleset_terrain_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_terrain(struct connection *pc, const struct packet_ruleset_terrain *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_terrain from the client.");
  }
  ensure_valid_variant_packet_ruleset_terrain(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN]) {

  case 100:
    return send_packet_ruleset_terrain_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_terrain(struct conn_list *dest, const struct packet_ruleset_terrain *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_terrain(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_terrain_flag *receive_packet_ruleset_terrain_flag_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_terrain_flag, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "helptxt", real_packet->helptxt, sizeof(real_packet->helptxt))) {
    RECEIVE_PACKET_FIELD_ERROR(helptxt);
  }

  log_packet("packet_ruleset_terrain_flag_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_terrain_flag_100(struct connection *pc, const struct packet_ruleset_terrain_flag *packet)
{
  const struct packet_ruleset_terrain_flag *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_TERRAIN_FLAG);

  log_packet("packet_ruleset_terrain_flag_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "helptxt", real_packet->helptxt);

  SEND_PACKET_END(PACKET_RULESET_TERRAIN_FLAG);
}

static void ensure_valid_variant_packet_ruleset_terrain_flag(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_TERRAIN_FLAG] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_TERRAIN_FLAG variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_TERRAIN_FLAG] = variant;
}

struct packet_ruleset_terrain_flag *receive_packet_ruleset_terrain_flag(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_terrain_flag at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_terrain_flag(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN_FLAG]) {
  case 100:
    return receive_packet_ruleset_terrain_flag_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN_FLAG variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_terrain_flag(struct connection *pc, const struct packet_ruleset_terrain_flag *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_terrain_flag from the client.");
  }
  ensure_valid_variant_packet_ruleset_terrain_flag(pc);

  switch(pc->phs.variant[PACKET_RULESET_TERRAIN_FLAG]) {

  case 100:
    return send_packet_ruleset_terrain_flag_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_TERRAIN_FLAG variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_terrain_flag(struct conn_list *dest, const struct packet_ruleset_terrain_flag *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_terrain_flag(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_unit_class *receive_packet_ruleset_unit_class_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_unit_class, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_uint8(pc->json_packet, "move_type", &real_packet->move_type)) {
    RECEIVE_PACKET_FIELD_ERROR(move_type);
  }
  if (!dio_get_uint8(pc->json_packet, "min_speed", &real_packet->min_speed)) {
    RECEIVE_PACKET_FIELD_ERROR(min_speed);
  }
  if (!dio_get_uint8(pc->json_packet, "hp_loss_pct", &real_packet->hp_loss_pct)) {
    RECEIVE_PACKET_FIELD_ERROR(hp_loss_pct);
  }
  if (!dio_get_uint8(pc->json_packet, "hut_behavior", &real_packet->hut_behavior)) {
    RECEIVE_PACKET_FIELD_ERROR(hut_behavior);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif

  log_packet("packet_ruleset_unit_class_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_unit_class_100(struct connection *pc, const struct packet_ruleset_unit_class *packet)
{
  const struct packet_ruleset_unit_class *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_UNIT_CLASS);

  log_packet("packet_ruleset_unit_class_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_uint8(&dout, "move_type", real_packet->move_type);
  dio_put_uint8(&dout, "min_speed", real_packet->min_speed);
  dio_put_uint8(&dout, "hp_loss_pct", real_packet->hp_loss_pct);
  dio_put_uint8(&dout, "hut_behavior", real_packet->hut_behavior);
DIO_BV_PUT(&dout, "flags", packet->flags);

  SEND_PACKET_END(PACKET_RULESET_UNIT_CLASS);
}

static void ensure_valid_variant_packet_ruleset_unit_class(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_UNIT_CLASS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_UNIT_CLASS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_UNIT_CLASS] = variant;
}

struct packet_ruleset_unit_class *receive_packet_ruleset_unit_class(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_unit_class at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_unit_class(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_CLASS]) {
  case 100:
    return receive_packet_ruleset_unit_class_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_CLASS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_unit_class(struct connection *pc, const struct packet_ruleset_unit_class *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_unit_class from the client.");
  }
  ensure_valid_variant_packet_ruleset_unit_class(pc);

  switch(pc->phs.variant[PACKET_RULESET_UNIT_CLASS]) {

  case 100:
    return send_packet_ruleset_unit_class_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_UNIT_CLASS variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_unit_class(struct conn_list *dest, const struct packet_ruleset_unit_class *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_unit_class(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_base *receive_packet_ruleset_base_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_base, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_bool8(pc->json_packet, "buildable", &real_packet->buildable)) {
    RECEIVE_PACKET_FIELD_ERROR(buildable);
  }
  if (!dio_get_bool8(pc->json_packet, "pillageable", &real_packet->pillageable)) {
    RECEIVE_PACKET_FIELD_ERROR(pillageable);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "activity_gfx", real_packet->activity_gfx, sizeof(real_packet->activity_gfx))) {
    RECEIVE_PACKET_FIELD_ERROR(activity_gfx);
  }
  if (!dio_get_string(pc->json_packet, "act_gfx_alt", real_packet->act_gfx_alt, sizeof(real_packet->act_gfx_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(act_gfx_alt);
  }
  if (!dio_get_uint8(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "gui_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(gui_type);
    }
    real_packet->gui_type = readin;
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->native_to)) {
    RECEIVE_PACKET_FIELD_ERROR(native_to);
  }
  #endif
  if (!dio_get_uint8(pc->json_packet, "build_time", &real_packet->build_time)) {
    RECEIVE_PACKET_FIELD_ERROR(build_time);
  }
  if (!dio_get_uint8(pc->json_packet, "defense_bonus", &real_packet->defense_bonus)) {
    RECEIVE_PACKET_FIELD_ERROR(defense_bonus);
  }
  if (!dio_get_sint8(pc->json_packet, "border_sq", &real_packet->border_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(border_sq);
  }
  if (!dio_get_sint8(pc->json_packet, "vision_main_sq", &real_packet->vision_main_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(vision_main_sq);
  }
  if (!dio_get_sint8(pc->json_packet, "vision_invis_sq", &real_packet->vision_invis_sq)) {
    RECEIVE_PACKET_FIELD_ERROR(vision_invis_sq);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->conflicts)) {
    RECEIVE_PACKET_FIELD_ERROR(conflicts);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_base_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_base_100(struct connection *pc, const struct packet_ruleset_base *packet)
{
  const struct packet_ruleset_base *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_BASE);

  log_packet("packet_ruleset_base_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_bool8(&dout, "buildable", real_packet->buildable);
  dio_put_bool8(&dout, "pillageable", real_packet->pillageable);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "activity_gfx", real_packet->activity_gfx);
  dio_put_string(&dout, "act_gfx_alt", real_packet->act_gfx_alt);
  dio_put_uint8(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_uint8(&dout, "gui_type", real_packet->gui_type);
DIO_BV_PUT(&dout, "native_to", packet->native_to);
  dio_put_uint8(&dout, "build_time", real_packet->build_time);
  dio_put_uint8(&dout, "defense_bonus", real_packet->defense_bonus);
  dio_put_sint8(&dout, "border_sq", real_packet->border_sq);
  dio_put_sint8(&dout, "vision_main_sq", real_packet->vision_main_sq);
  dio_put_sint8(&dout, "vision_invis_sq", real_packet->vision_invis_sq);
DIO_BV_PUT(&dout, "flags", packet->flags);
DIO_BV_PUT(&dout, "conflicts", packet->conflicts);
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_BASE);
}

static void ensure_valid_variant_packet_ruleset_base(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_BASE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_BASE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_BASE] = variant;
}

struct packet_ruleset_base *receive_packet_ruleset_base(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_base at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_base(pc);

  switch(pc->phs.variant[PACKET_RULESET_BASE]) {
  case 100:
    return receive_packet_ruleset_base_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_BASE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_base(struct connection *pc, const struct packet_ruleset_base *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_base from the client.");
  }
  ensure_valid_variant_packet_ruleset_base(pc);

  switch(pc->phs.variant[PACKET_RULESET_BASE]) {

  case 100:
    return send_packet_ruleset_base_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_BASE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_base(struct conn_list *dest, const struct packet_ruleset_base *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_base(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_road *receive_packet_ruleset_road_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_road, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }
  if (!dio_get_string(pc->json_packet, "activity_gfx", real_packet->activity_gfx, sizeof(real_packet->activity_gfx))) {
    RECEIVE_PACKET_FIELD_ERROR(activity_gfx);
  }
  if (!dio_get_string(pc->json_packet, "act_gfx_alt", real_packet->act_gfx_alt, sizeof(real_packet->act_gfx_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(act_gfx_alt);
  }
  if (!dio_get_uint8(pc->json_packet, "move_cost", &real_packet->move_cost)) {
    RECEIVE_PACKET_FIELD_ERROR(move_cost);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "move_mode", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(move_mode);
    }
    real_packet->move_mode = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "build_time", &real_packet->build_time)) {
    RECEIVE_PACKET_FIELD_ERROR(build_time);
  }
  if (!dio_get_uint8(pc->json_packet, "defense_bonus", &real_packet->defense_bonus)) {
    RECEIVE_PACKET_FIELD_ERROR(defense_bonus);
  }
  if (!dio_get_bool8(pc->json_packet, "buildable", &real_packet->buildable)) {
    RECEIVE_PACKET_FIELD_ERROR(buildable);
  }
  if (!dio_get_bool8(pc->json_packet, "pillageable", &real_packet->pillageable)) {
    RECEIVE_PACKET_FIELD_ERROR(pillageable);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "tile_incr_const", &real_packet->tile_incr_const[i])) {
        RECEIVE_PACKET_FIELD_ERROR(tile_incr_const);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "tile_incr", &real_packet->tile_incr[i])) {
        RECEIVE_PACKET_FIELD_ERROR(tile_incr);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint32(pc->json_packet, "tile_bonus", &real_packet->tile_bonus[i])) {
        RECEIVE_PACKET_FIELD_ERROR(tile_bonus);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "compat", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(compat);
    }
    real_packet->compat = readin;
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->native_to)) {
    RECEIVE_PACKET_FIELD_ERROR(native_to);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->hidden_by)) {
    RECEIVE_PACKET_FIELD_ERROR(hidden_by);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }
  #endif
  if (!dio_get_string(pc->json_packet, "helptext", real_packet->helptext, sizeof(real_packet->helptext))) {
    RECEIVE_PACKET_FIELD_ERROR(helptext);
  }

  log_packet("packet_ruleset_road_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_road_100(struct connection *pc, const struct packet_ruleset_road *packet)
{
  const struct packet_ruleset_road *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_ROAD);

  log_packet("packet_ruleset_road_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);
  dio_put_string(&dout, "activity_gfx", real_packet->activity_gfx);
  dio_put_string(&dout, "act_gfx_alt", real_packet->act_gfx_alt);
  dio_put_uint8(&dout, "move_cost", real_packet->move_cost);
  dio_put_uint8(&dout, "move_mode", real_packet->move_mode);
  dio_put_uint8(&dout, "build_time", real_packet->build_time);
  dio_put_uint8(&dout, "defense_bonus", real_packet->defense_bonus);
  dio_put_bool8(&dout, "buildable", real_packet->buildable);
  dio_put_bool8(&dout, "pillageable", real_packet->pillageable);

    {
        dio_put_array_uint32(&dout, "tile_incr_const", (void *)real_packet->tile_incr_const, O_LAST);
    } 

    {
        dio_put_array_uint32(&dout, "tile_incr", (void *)real_packet->tile_incr, O_LAST);
    } 

    {
        dio_put_array_uint32(&dout, "tile_bonus", (void *)real_packet->tile_bonus, O_LAST);
    } 
  dio_put_uint8(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_uint8(&dout, "compat", real_packet->compat);
DIO_BV_PUT(&dout, "native_to", packet->native_to);
DIO_BV_PUT(&dout, "hidden_by", packet->hidden_by);
DIO_BV_PUT(&dout, "flags", packet->flags);
  dio_put_string(&dout, "helptext", real_packet->helptext);

  SEND_PACKET_END(PACKET_RULESET_ROAD);
}

static void ensure_valid_variant_packet_ruleset_road(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_ROAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_ROAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_ROAD] = variant;
}

struct packet_ruleset_road *receive_packet_ruleset_road(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_road at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_road(pc);

  switch(pc->phs.variant[PACKET_RULESET_ROAD]) {
  case 100:
    return receive_packet_ruleset_road_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_ROAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_road(struct connection *pc, const struct packet_ruleset_road *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_road from the client.");
  }
  ensure_valid_variant_packet_ruleset_road(pc);

  switch(pc->phs.variant[PACKET_RULESET_ROAD]) {

  case 100:
    return send_packet_ruleset_road_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_ROAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_road(struct conn_list *dest, const struct packet_ruleset_road *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_road(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_disaster *receive_packet_ruleset_disaster_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_disaster, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  if (!dio_get_uint8(pc->json_packet, "reqs_count", &real_packet->reqs_count)) {
    RECEIVE_PACKET_FIELD_ERROR(reqs_count);
  }
  
  {
    int i;
  
    if (real_packet->reqs_count > MAX_NUM_REQS) {
      RECEIVE_PACKET_FIELD_ERROR(reqs, ": truncation array");
    }
    for (i = 0; i < real_packet->reqs_count; i++) {
      if (!dio_get_requirement(pc->json_packet, "reqs", &real_packet->reqs[i])) {
        RECEIVE_PACKET_FIELD_ERROR(reqs);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "frequency", &real_packet->frequency)) {
    RECEIVE_PACKET_FIELD_ERROR(frequency);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->effects)) {
    RECEIVE_PACKET_FIELD_ERROR(effects);
  }
  #endif

  log_packet("packet_ruleset_disaster_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_disaster_100(struct connection *pc, const struct packet_ruleset_disaster *packet)
{
  const struct packet_ruleset_disaster *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_DISASTER);

  log_packet("packet_ruleset_disaster_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);
  dio_put_uint8(&dout, "reqs_count", real_packet->reqs_count);

    {
          dio_put_requirement(&dout, "reqs", (struct requirement *)real_packet->reqs, real_packet->reqs_count);
    } 
  dio_put_uint8(&dout, "frequency", real_packet->frequency);
DIO_BV_PUT(&dout, "effects", packet->effects);

  SEND_PACKET_END(PACKET_RULESET_DISASTER);
}

static void ensure_valid_variant_packet_ruleset_disaster(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_DISASTER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_DISASTER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_DISASTER] = variant;
}

struct packet_ruleset_disaster *receive_packet_ruleset_disaster(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_disaster at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_disaster(pc);

  switch(pc->phs.variant[PACKET_RULESET_DISASTER]) {
  case 100:
    return receive_packet_ruleset_disaster_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_DISASTER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_disaster(struct connection *pc, const struct packet_ruleset_disaster *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_disaster from the client.");
  }
  ensure_valid_variant_packet_ruleset_disaster(pc);

  switch(pc->phs.variant[PACKET_RULESET_DISASTER]) {

  case 100:
    return send_packet_ruleset_disaster_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_DISASTER variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_disaster(struct conn_list *dest, const struct packet_ruleset_disaster *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_disaster(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_trade *receive_packet_ruleset_trade_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_trade, real_packet);
  if (!dio_get_uint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_uint32(pc->json_packet, "trade_pct", &real_packet->trade_pct)) {
    RECEIVE_PACKET_FIELD_ERROR(trade_pct);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "cancelling", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(cancelling);
    }
    real_packet->cancelling = readin;
  }

  log_packet("packet_ruleset_trade_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_trade_100(struct connection *pc, const struct packet_ruleset_trade *packet)
{
  const struct packet_ruleset_trade *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_TRADE);

  log_packet("packet_ruleset_trade_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_uint32(&dout, "trade_pct", real_packet->trade_pct);
  dio_put_uint8(&dout, "cancelling", real_packet->cancelling);

  SEND_PACKET_END(PACKET_RULESET_TRADE);
}

static void ensure_valid_variant_packet_ruleset_trade(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_TRADE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_TRADE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_TRADE] = variant;
}

struct packet_ruleset_trade *receive_packet_ruleset_trade(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_trade at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_trade(pc);

  switch(pc->phs.variant[PACKET_RULESET_TRADE]) {
  case 100:
    return receive_packet_ruleset_trade_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_TRADE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_trade(struct connection *pc, const struct packet_ruleset_trade *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_trade from the client.");
  }
  ensure_valid_variant_packet_ruleset_trade(pc);

  switch(pc->phs.variant[PACKET_RULESET_TRADE]) {

  case 100:
    return send_packet_ruleset_trade_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_TRADE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_trade(struct conn_list *dest, const struct packet_ruleset_trade *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_trade(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_control *receive_packet_ruleset_control_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_control, real_packet);
  if (!dio_get_uint32(pc->json_packet, "num_unit_classes", &real_packet->num_unit_classes)) {
    RECEIVE_PACKET_FIELD_ERROR(num_unit_classes);
  }
  if (!dio_get_uint32(pc->json_packet, "num_unit_types", &real_packet->num_unit_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_unit_types);
  }
  if (!dio_get_uint32(pc->json_packet, "num_impr_types", &real_packet->num_impr_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_impr_types);
  }
  if (!dio_get_uint32(pc->json_packet, "num_tech_types", &real_packet->num_tech_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_tech_types);
  }
  if (!dio_get_uint32(pc->json_packet, "num_base_types", &real_packet->num_base_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_base_types);
  }
  if (!dio_get_uint32(pc->json_packet, "num_road_types", &real_packet->num_road_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_road_types);
  }
  if (!dio_get_uint32(pc->json_packet, "num_disaster_types", &real_packet->num_disaster_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_disaster_types);
  }
  if (!dio_get_uint32(pc->json_packet, "government_count", &real_packet->government_count)) {
    RECEIVE_PACKET_FIELD_ERROR(government_count);
  }
  if (!dio_get_uint32(pc->json_packet, "nation_count", &real_packet->nation_count)) {
    RECEIVE_PACKET_FIELD_ERROR(nation_count);
  }
  if (!dio_get_uint32(pc->json_packet, "styles_count", &real_packet->styles_count)) {
    RECEIVE_PACKET_FIELD_ERROR(styles_count);
  }
  if (!dio_get_uint32(pc->json_packet, "terrain_count", &real_packet->terrain_count)) {
    RECEIVE_PACKET_FIELD_ERROR(terrain_count);
  }
  if (!dio_get_uint32(pc->json_packet, "resource_count", &real_packet->resource_count)) {
    RECEIVE_PACKET_FIELD_ERROR(resource_count);
  }
  if (!dio_get_uint32(pc->json_packet, "num_specialist_types", &real_packet->num_specialist_types)) {
    RECEIVE_PACKET_FIELD_ERROR(num_specialist_types);
  }
  if (!dio_get_string(pc->json_packet, "prefered_tileset", real_packet->prefered_tileset, sizeof(real_packet->prefered_tileset))) {
    RECEIVE_PACKET_FIELD_ERROR(prefered_tileset);
  }
  if (!dio_get_string(pc->json_packet, "prefered_soundset", real_packet->prefered_soundset, sizeof(real_packet->prefered_soundset))) {
    RECEIVE_PACKET_FIELD_ERROR(prefered_soundset);
  }
  if (!dio_get_bool8(pc->json_packet, "popup_tech_help", &real_packet->popup_tech_help)) {
    RECEIVE_PACKET_FIELD_ERROR(popup_tech_help);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "description", real_packet->description, sizeof(real_packet->description))) {
    RECEIVE_PACKET_FIELD_ERROR(description);
  }

  log_packet("packet_ruleset_control_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_control_100(struct connection *pc, const struct packet_ruleset_control *packet)
{
  const struct packet_ruleset_control *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_CONTROL);

  log_packet("packet_ruleset_control_100: sending info about ()");

  dio_put_uint32(&dout, "num_unit_classes", real_packet->num_unit_classes);
  dio_put_uint32(&dout, "num_unit_types", real_packet->num_unit_types);
  dio_put_uint32(&dout, "num_impr_types", real_packet->num_impr_types);
  dio_put_uint32(&dout, "num_tech_types", real_packet->num_tech_types);
  dio_put_uint32(&dout, "num_base_types", real_packet->num_base_types);
  dio_put_uint32(&dout, "num_road_types", real_packet->num_road_types);
  dio_put_uint32(&dout, "num_disaster_types", real_packet->num_disaster_types);
  dio_put_uint32(&dout, "government_count", real_packet->government_count);
  dio_put_uint32(&dout, "nation_count", real_packet->nation_count);
  dio_put_uint32(&dout, "styles_count", real_packet->styles_count);
  dio_put_uint32(&dout, "terrain_count", real_packet->terrain_count);
  dio_put_uint32(&dout, "resource_count", real_packet->resource_count);
  dio_put_uint32(&dout, "num_specialist_types", real_packet->num_specialist_types);
  dio_put_string(&dout, "prefered_tileset", real_packet->prefered_tileset);
  dio_put_string(&dout, "prefered_soundset", real_packet->prefered_soundset);
  dio_put_bool8(&dout, "popup_tech_help", real_packet->popup_tech_help);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "description", real_packet->description);

  SEND_PACKET_END(PACKET_RULESET_CONTROL);
}

static void ensure_valid_variant_packet_ruleset_control(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_CONTROL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_CONTROL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_CONTROL] = variant;
}

struct packet_ruleset_control *receive_packet_ruleset_control(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_control at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_control(pc);

  switch(pc->phs.variant[PACKET_RULESET_CONTROL]) {
  case 100:
    return receive_packet_ruleset_control_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_CONTROL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_control(struct connection *pc, const struct packet_ruleset_control *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_control from the client.");
  }
  ensure_valid_variant_packet_ruleset_control(pc);

  switch(pc->phs.variant[PACKET_RULESET_CONTROL]) {

  case 100:
    return send_packet_ruleset_control_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_CONTROL variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_control(struct conn_list *dest, const struct packet_ruleset_control *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_control(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_single_want_hack_req *receive_packet_single_want_hack_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_single_want_hack_req, real_packet);
  if (!dio_get_string(pc->json_packet, "token", real_packet->token, sizeof(real_packet->token))) {
    RECEIVE_PACKET_FIELD_ERROR(token);
  }

  log_packet("packet_single_want_hack_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_single_want_hack_req_100(struct connection *pc, const struct packet_single_want_hack_req *packet)
{
  const struct packet_single_want_hack_req *real_packet = packet;
  SEND_PACKET_START(PACKET_SINGLE_WANT_HACK_REQ);

  log_packet("packet_single_want_hack_req_100: sending info about ()");

  dio_put_string(&dout, "token", real_packet->token);

  SEND_PACKET_END(PACKET_SINGLE_WANT_HACK_REQ);
}

static void ensure_valid_variant_packet_single_want_hack_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SINGLE_WANT_HACK_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SINGLE_WANT_HACK_REQ] = variant;
}

struct packet_single_want_hack_req *receive_packet_single_want_hack_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_single_want_hack_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_single_want_hack_req(pc);

  switch(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REQ]) {
  case 100:
    return receive_packet_single_want_hack_req_100(pc);
  default:
    log_debug("Unknown PACKET_SINGLE_WANT_HACK_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_single_want_hack_req(struct connection *pc, const struct packet_single_want_hack_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_single_want_hack_req from the server.");
  }
  ensure_valid_variant_packet_single_want_hack_req(pc);

  switch(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REQ]) {

  case 100:
    return send_packet_single_want_hack_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SINGLE_WANT_HACK_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_single_want_hack_reply *receive_packet_single_want_hack_reply_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_single_want_hack_reply, real_packet);
  if (!dio_get_bool8(pc->json_packet, "you_have_hack", &real_packet->you_have_hack)) {
    RECEIVE_PACKET_FIELD_ERROR(you_have_hack);
  }

  log_packet("packet_single_want_hack_reply_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_single_want_hack_reply_100(struct connection *pc, const struct packet_single_want_hack_reply *packet)
{
  const struct packet_single_want_hack_reply *real_packet = packet;
  SEND_PACKET_START(PACKET_SINGLE_WANT_HACK_REPLY);

  log_packet("packet_single_want_hack_reply_100: sending info about ()");

  dio_put_bool8(&dout, "you_have_hack", real_packet->you_have_hack);

  SEND_PACKET_END(PACKET_SINGLE_WANT_HACK_REPLY);
}

static void ensure_valid_variant_packet_single_want_hack_reply(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REPLY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SINGLE_WANT_HACK_REPLY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SINGLE_WANT_HACK_REPLY] = variant;
}

struct packet_single_want_hack_reply *receive_packet_single_want_hack_reply(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_single_want_hack_reply at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_single_want_hack_reply(pc);

  switch(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REPLY]) {
  case 100:
    return receive_packet_single_want_hack_reply_100(pc);
  default:
    log_debug("Unknown PACKET_SINGLE_WANT_HACK_REPLY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_single_want_hack_reply(struct connection *pc, const struct packet_single_want_hack_reply *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_single_want_hack_reply from the client.");
  }
  ensure_valid_variant_packet_single_want_hack_reply(pc);

  switch(pc->phs.variant[PACKET_SINGLE_WANT_HACK_REPLY]) {

  case 100:
    return send_packet_single_want_hack_reply_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SINGLE_WANT_HACK_REPLY variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_single_want_hack_reply(struct connection *pc, bool you_have_hack)
{
  struct packet_single_want_hack_reply packet, *real_packet = &packet;

  real_packet->you_have_hack = you_have_hack;
  
  return send_packet_single_want_hack_reply(pc, real_packet);
}

static struct packet_ruleset_choices *receive_packet_ruleset_choices_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_choices, real_packet);
  if (!dio_get_uint8(pc->json_packet, "ruleset_count", &real_packet->ruleset_count)) {
    RECEIVE_PACKET_FIELD_ERROR(ruleset_count);
  }
  
  {
    int i;
  
    if (real_packet->ruleset_count > MAX_NUM_RULESETS) {
      RECEIVE_PACKET_FIELD_ERROR(rulesets, ": truncation array");
    }
    for (i = 0; i < real_packet->ruleset_count; i++) {
      if (!dio_get_string(pc->json_packet, "rulesets", real_packet->rulesets[i], sizeof(real_packet->rulesets[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(rulesets);
      }
    }
  }

  log_packet("packet_ruleset_choices_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_choices_100(struct connection *pc, const struct packet_ruleset_choices *packet)
{
  const struct packet_ruleset_choices *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_CHOICES);

  log_packet("packet_ruleset_choices_100: sending info about ()");

  dio_put_uint8(&dout, "ruleset_count", real_packet->ruleset_count);

    {
        /* dio_put_string(&dout, "rulesets", real_packet->rulesets[i]); */
    } 

  SEND_PACKET_END(PACKET_RULESET_CHOICES);
}

static void ensure_valid_variant_packet_ruleset_choices(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_CHOICES] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_CHOICES variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_CHOICES] = variant;
}

struct packet_ruleset_choices *receive_packet_ruleset_choices(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_choices at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_choices(pc);

  switch(pc->phs.variant[PACKET_RULESET_CHOICES]) {
  case 100:
    return receive_packet_ruleset_choices_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_CHOICES variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_choices(struct connection *pc, const struct packet_ruleset_choices *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_choices from the client.");
  }
  ensure_valid_variant_packet_ruleset_choices(pc);

  switch(pc->phs.variant[PACKET_RULESET_CHOICES]) {

  case 100:
    return send_packet_ruleset_choices_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_CHOICES variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_game_load *receive_packet_game_load_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_game_load, real_packet);
  if (!dio_get_bool8(pc->json_packet, "load_successful", &real_packet->load_successful)) {
    RECEIVE_PACKET_FIELD_ERROR(load_successful);
  }
  if (!dio_get_string(pc->json_packet, "load_filename", real_packet->load_filename, sizeof(real_packet->load_filename))) {
    RECEIVE_PACKET_FIELD_ERROR(load_filename);
  }

  log_packet("packet_game_load_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_game_load_100(struct connection *pc, const struct packet_game_load *packet)
{
  const struct packet_game_load *real_packet = packet;
  SEND_PACKET_START(PACKET_GAME_LOAD);

  log_packet("packet_game_load_100: sending info about ()");

  dio_put_bool8(&dout, "load_successful", real_packet->load_successful);
  dio_put_string(&dout, "load_filename", real_packet->load_filename);

  SEND_PACKET_END(PACKET_GAME_LOAD);
}

static void ensure_valid_variant_packet_game_load(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_GAME_LOAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_GAME_LOAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_GAME_LOAD] = variant;
}

struct packet_game_load *receive_packet_game_load(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_game_load at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_game_load(pc);

  switch(pc->phs.variant[PACKET_GAME_LOAD]) {
  case 100:
    return receive_packet_game_load_100(pc);
  default:
    log_debug("Unknown PACKET_GAME_LOAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_game_load(struct connection *pc, const struct packet_game_load *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_game_load from the client.");
  }
  ensure_valid_variant_packet_game_load(pc);

  switch(pc->phs.variant[PACKET_GAME_LOAD]) {

  case 100:
    return send_packet_game_load_100(pc, packet);
  default:
    log_debug("Unknown PACKET_GAME_LOAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_game_load(struct conn_list *dest, const struct packet_game_load *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_game_load(pconn, packet);
  } conn_list_iterate_end;
}

int dsend_packet_game_load(struct connection *pc, bool load_successful, const char *load_filename)
{
  struct packet_game_load packet, *real_packet = &packet;

  real_packet->load_successful = load_successful;
  sz_strlcpy(real_packet->load_filename, load_filename);
  
  return send_packet_game_load(pc, real_packet);
}

void dlsend_packet_game_load(struct conn_list *dest, bool load_successful, const char *load_filename)
{
  struct packet_game_load packet, *real_packet = &packet;

  real_packet->load_successful = load_successful;
  sz_strlcpy(real_packet->load_filename, load_filename);
  
  lsend_packet_game_load(dest, real_packet);
}

static struct packet_server_setting_control *receive_packet_server_setting_control_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_control, real_packet);
  if (!dio_get_uint32(pc->json_packet, "settings_num", &real_packet->settings_num)) {
    RECEIVE_PACKET_FIELD_ERROR(settings_num);
  }
  if (!dio_get_uint8(pc->json_packet, "categories_num", &real_packet->categories_num)) {
    RECEIVE_PACKET_FIELD_ERROR(categories_num);
  }
  
  {
    int i;
  
    if (real_packet->categories_num > 256) {
      RECEIVE_PACKET_FIELD_ERROR(category_names, ": truncation array");
    }
    for (i = 0; i < real_packet->categories_num; i++) {
      if (!dio_get_string(pc->json_packet, "category_names", real_packet->category_names[i], sizeof(real_packet->category_names[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(category_names);
      }
    }
  }

  log_packet("packet_server_setting_control_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_control_100(struct connection *pc, const struct packet_server_setting_control *packet)
{
  const struct packet_server_setting_control *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_CONTROL);

  log_packet("packet_server_setting_control_100: sending info about ()");

  dio_put_uint32(&dout, "settings_num", real_packet->settings_num);
  dio_put_uint8(&dout, "categories_num", real_packet->categories_num);

    {
        /* dio_put_string(&dout, "category_names", real_packet->category_names[i]); */
    } 

  SEND_PACKET_END(PACKET_SERVER_SETTING_CONTROL);
}

static void ensure_valid_variant_packet_server_setting_control(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_CONTROL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_CONTROL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_CONTROL] = variant;
}

struct packet_server_setting_control *receive_packet_server_setting_control(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_control at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_control(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_CONTROL]) {
  case 100:
    return receive_packet_server_setting_control_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_CONTROL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_control(struct connection *pc, const struct packet_server_setting_control *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_control from the client.");
  }
  ensure_valid_variant_packet_server_setting_control(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_CONTROL]) {

  case 100:
    return send_packet_server_setting_control_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_CONTROL variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_const *receive_packet_server_setting_const_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_const, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "short_help", real_packet->short_help, sizeof(real_packet->short_help))) {
    RECEIVE_PACKET_FIELD_ERROR(short_help);
  }
  if (!dio_get_uint8(pc->json_packet, "category", &real_packet->category)) {
    RECEIVE_PACKET_FIELD_ERROR(category);
  }

  log_packet("packet_server_setting_const_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_const_100(struct connection *pc, const struct packet_server_setting_const *packet)
{
  const struct packet_server_setting_const *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_CONST);

  log_packet("packet_server_setting_const_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "short_help", real_packet->short_help);
  dio_put_uint8(&dout, "category", real_packet->category);

  SEND_PACKET_END(PACKET_SERVER_SETTING_CONST);
}

static void ensure_valid_variant_packet_server_setting_const(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_CONST] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_CONST variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_CONST] = variant;
}

struct packet_server_setting_const *receive_packet_server_setting_const(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_const at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_const(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_CONST]) {
  case 100:
    return receive_packet_server_setting_const_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_CONST variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_const(struct connection *pc, const struct packet_server_setting_const *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_const from the client.");
  }
  ensure_valid_variant_packet_server_setting_const(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_CONST]) {

  case 100:
    return send_packet_server_setting_const_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_CONST variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_bool *receive_packet_server_setting_bool_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_bool, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "is_visible", &real_packet->is_visible)) {
    RECEIVE_PACKET_FIELD_ERROR(is_visible);
  }
  if (!dio_get_bool8(pc->json_packet, "is_changeable", &real_packet->is_changeable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_changeable);
  }
  if (!dio_get_bool8(pc->json_packet, "initial_setting", &real_packet->initial_setting)) {
    RECEIVE_PACKET_FIELD_ERROR(initial_setting);
  }
  if (!dio_get_bool8(pc->json_packet, "val", &real_packet->val)) {
    RECEIVE_PACKET_FIELD_ERROR(val);
  }
  if (!dio_get_bool8(pc->json_packet, "default_val", &real_packet->default_val)) {
    RECEIVE_PACKET_FIELD_ERROR(default_val);
  }

  log_packet("packet_server_setting_bool_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_bool_100(struct connection *pc, const struct packet_server_setting_bool *packet)
{
  const struct packet_server_setting_bool *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_BOOL);

  log_packet("packet_server_setting_bool_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "is_visible", real_packet->is_visible);
  dio_put_bool8(&dout, "is_changeable", real_packet->is_changeable);
  dio_put_bool8(&dout, "initial_setting", real_packet->initial_setting);
  dio_put_bool8(&dout, "val", real_packet->val);
  dio_put_bool8(&dout, "default_val", real_packet->default_val);

  SEND_PACKET_END(PACKET_SERVER_SETTING_BOOL);
}

static void ensure_valid_variant_packet_server_setting_bool(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_BOOL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_BOOL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_BOOL] = variant;
}

struct packet_server_setting_bool *receive_packet_server_setting_bool(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_bool at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_bool(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_BOOL]) {
  case 100:
    return receive_packet_server_setting_bool_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_BOOL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_bool(struct connection *pc, const struct packet_server_setting_bool *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_bool from the client.");
  }
  ensure_valid_variant_packet_server_setting_bool(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_BOOL]) {

  case 100:
    return send_packet_server_setting_bool_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_BOOL variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_int *receive_packet_server_setting_int_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_int, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "is_visible", &real_packet->is_visible)) {
    RECEIVE_PACKET_FIELD_ERROR(is_visible);
  }
  if (!dio_get_bool8(pc->json_packet, "is_changeable", &real_packet->is_changeable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_changeable);
  }
  if (!dio_get_bool8(pc->json_packet, "initial_setting", &real_packet->initial_setting)) {
    RECEIVE_PACKET_FIELD_ERROR(initial_setting);
  }
  if (!dio_get_sint32(pc->json_packet, "val", &real_packet->val)) {
    RECEIVE_PACKET_FIELD_ERROR(val);
  }
  if (!dio_get_sint32(pc->json_packet, "default_val", &real_packet->default_val)) {
    RECEIVE_PACKET_FIELD_ERROR(default_val);
  }
  if (!dio_get_sint32(pc->json_packet, "min_val", &real_packet->min_val)) {
    RECEIVE_PACKET_FIELD_ERROR(min_val);
  }
  if (!dio_get_sint32(pc->json_packet, "max_val", &real_packet->max_val)) {
    RECEIVE_PACKET_FIELD_ERROR(max_val);
  }

  log_packet("packet_server_setting_int_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_int_100(struct connection *pc, const struct packet_server_setting_int *packet)
{
  const struct packet_server_setting_int *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_INT);

  log_packet("packet_server_setting_int_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "is_visible", real_packet->is_visible);
  dio_put_bool8(&dout, "is_changeable", real_packet->is_changeable);
  dio_put_bool8(&dout, "initial_setting", real_packet->initial_setting);
  dio_put_sint32(&dout, "val", real_packet->val);
  dio_put_sint32(&dout, "default_val", real_packet->default_val);
  dio_put_sint32(&dout, "min_val", real_packet->min_val);
  dio_put_sint32(&dout, "max_val", real_packet->max_val);

  SEND_PACKET_END(PACKET_SERVER_SETTING_INT);
}

static void ensure_valid_variant_packet_server_setting_int(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_INT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_INT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_INT] = variant;
}

struct packet_server_setting_int *receive_packet_server_setting_int(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_int at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_int(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_INT]) {
  case 100:
    return receive_packet_server_setting_int_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_INT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_int(struct connection *pc, const struct packet_server_setting_int *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_int from the client.");
  }
  ensure_valid_variant_packet_server_setting_int(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_INT]) {

  case 100:
    return send_packet_server_setting_int_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_INT variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_str *receive_packet_server_setting_str_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_str, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "is_visible", &real_packet->is_visible)) {
    RECEIVE_PACKET_FIELD_ERROR(is_visible);
  }
  if (!dio_get_bool8(pc->json_packet, "is_changeable", &real_packet->is_changeable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_changeable);
  }
  if (!dio_get_bool8(pc->json_packet, "initial_setting", &real_packet->initial_setting)) {
    RECEIVE_PACKET_FIELD_ERROR(initial_setting);
  }
  if (!dio_get_string(pc->json_packet, "val", real_packet->val, sizeof(real_packet->val))) {
    RECEIVE_PACKET_FIELD_ERROR(val);
  }
  if (!dio_get_string(pc->json_packet, "default_val", real_packet->default_val, sizeof(real_packet->default_val))) {
    RECEIVE_PACKET_FIELD_ERROR(default_val);
  }

  log_packet("packet_server_setting_str_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_str_100(struct connection *pc, const struct packet_server_setting_str *packet)
{
  const struct packet_server_setting_str *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_STR);

  log_packet("packet_server_setting_str_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "is_visible", real_packet->is_visible);
  dio_put_bool8(&dout, "is_changeable", real_packet->is_changeable);
  dio_put_bool8(&dout, "initial_setting", real_packet->initial_setting);
  dio_put_string(&dout, "val", real_packet->val);
  dio_put_string(&dout, "default_val", real_packet->default_val);

  SEND_PACKET_END(PACKET_SERVER_SETTING_STR);
}

static void ensure_valid_variant_packet_server_setting_str(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_STR] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_STR variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_STR] = variant;
}

struct packet_server_setting_str *receive_packet_server_setting_str(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_str at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_str(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_STR]) {
  case 100:
    return receive_packet_server_setting_str_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_STR variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_str(struct connection *pc, const struct packet_server_setting_str *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_str from the client.");
  }
  ensure_valid_variant_packet_server_setting_str(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_STR]) {

  case 100:
    return send_packet_server_setting_str_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_STR variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_enum *receive_packet_server_setting_enum_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_enum, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "is_visible", &real_packet->is_visible)) {
    RECEIVE_PACKET_FIELD_ERROR(is_visible);
  }
  if (!dio_get_bool8(pc->json_packet, "is_changeable", &real_packet->is_changeable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_changeable);
  }
  if (!dio_get_bool8(pc->json_packet, "initial_setting", &real_packet->initial_setting)) {
    RECEIVE_PACKET_FIELD_ERROR(initial_setting);
  }
  if (!dio_get_sint8(pc->json_packet, "val", &real_packet->val)) {
    RECEIVE_PACKET_FIELD_ERROR(val);
  }
  if (!dio_get_sint8(pc->json_packet, "default_val", &real_packet->default_val)) {
    RECEIVE_PACKET_FIELD_ERROR(default_val);
  }
  if (!dio_get_sint8(pc->json_packet, "values_num", &real_packet->values_num)) {
    RECEIVE_PACKET_FIELD_ERROR(values_num);
  }
  
  {
    int i;
  
    if (real_packet->values_num > 64) {
      RECEIVE_PACKET_FIELD_ERROR(support_names, ": truncation array");
    }
    for (i = 0; i < real_packet->values_num; i++) {
      if (!dio_get_string(pc->json_packet, "support_names", real_packet->support_names[i], sizeof(real_packet->support_names[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(support_names);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->values_num > 64) {
      RECEIVE_PACKET_FIELD_ERROR(pretty_names, ": truncation array");
    }
    for (i = 0; i < real_packet->values_num; i++) {
      if (!dio_get_string(pc->json_packet, "pretty_names", real_packet->pretty_names[i], sizeof(real_packet->pretty_names[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(pretty_names);
      }
    }
  }

  log_packet("packet_server_setting_enum_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_enum_100(struct connection *pc, const struct packet_server_setting_enum *packet)
{
  const struct packet_server_setting_enum *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_ENUM);

  log_packet("packet_server_setting_enum_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "is_visible", real_packet->is_visible);
  dio_put_bool8(&dout, "is_changeable", real_packet->is_changeable);
  dio_put_bool8(&dout, "initial_setting", real_packet->initial_setting);
  dio_put_sint8(&dout, "val", real_packet->val);
  dio_put_sint8(&dout, "default_val", real_packet->default_val);
  dio_put_sint8(&dout, "values_num", real_packet->values_num);

    {
        /* dio_put_string(&dout, "support_names", real_packet->support_names[i]); */
    } 

    {
        /* dio_put_string(&dout, "pretty_names", real_packet->pretty_names[i]); */
    } 

  SEND_PACKET_END(PACKET_SERVER_SETTING_ENUM);
}

static void ensure_valid_variant_packet_server_setting_enum(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_ENUM] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_ENUM variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_ENUM] = variant;
}

struct packet_server_setting_enum *receive_packet_server_setting_enum(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_enum at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_enum(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_ENUM]) {
  case 100:
    return receive_packet_server_setting_enum_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_ENUM variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_enum(struct connection *pc, const struct packet_server_setting_enum *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_enum from the client.");
  }
  ensure_valid_variant_packet_server_setting_enum(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_ENUM]) {

  case 100:
    return send_packet_server_setting_enum_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_ENUM variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_server_setting_bitwise *receive_packet_server_setting_bitwise_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_server_setting_bitwise, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "is_visible", &real_packet->is_visible)) {
    RECEIVE_PACKET_FIELD_ERROR(is_visible);
  }
  if (!dio_get_bool8(pc->json_packet, "is_changeable", &real_packet->is_changeable)) {
    RECEIVE_PACKET_FIELD_ERROR(is_changeable);
  }
  if (!dio_get_bool8(pc->json_packet, "initial_setting", &real_packet->initial_setting)) {
    RECEIVE_PACKET_FIELD_ERROR(initial_setting);
  }
  if (!dio_get_uint32(pc->json_packet, "val", &real_packet->val)) {
    RECEIVE_PACKET_FIELD_ERROR(val);
  }
  if (!dio_get_uint32(pc->json_packet, "default_val", &real_packet->default_val)) {
    RECEIVE_PACKET_FIELD_ERROR(default_val);
  }
  if (!dio_get_uint8(pc->json_packet, "bits_num", &real_packet->bits_num)) {
    RECEIVE_PACKET_FIELD_ERROR(bits_num);
  }
  
  {
    int i;
  
    if (real_packet->bits_num > 64) {
      RECEIVE_PACKET_FIELD_ERROR(support_names, ": truncation array");
    }
    for (i = 0; i < real_packet->bits_num; i++) {
      if (!dio_get_string(pc->json_packet, "support_names", real_packet->support_names[i], sizeof(real_packet->support_names[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(support_names);
      }
    }
  }
  
  {
    int i;
  
    if (real_packet->bits_num > 64) {
      RECEIVE_PACKET_FIELD_ERROR(pretty_names, ": truncation array");
    }
    for (i = 0; i < real_packet->bits_num; i++) {
      if (!dio_get_string(pc->json_packet, "pretty_names", real_packet->pretty_names[i], sizeof(real_packet->pretty_names[i]))) {
        RECEIVE_PACKET_FIELD_ERROR(pretty_names);
      }
    }
  }

  log_packet("packet_server_setting_bitwise_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_server_setting_bitwise_100(struct connection *pc, const struct packet_server_setting_bitwise *packet)
{
  const struct packet_server_setting_bitwise *real_packet = packet;
  SEND_PACKET_START(PACKET_SERVER_SETTING_BITWISE);

  log_packet("packet_server_setting_bitwise_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "is_visible", real_packet->is_visible);
  dio_put_bool8(&dout, "is_changeable", real_packet->is_changeable);
  dio_put_bool8(&dout, "initial_setting", real_packet->initial_setting);
  dio_put_uint32(&dout, "val", real_packet->val);
  dio_put_uint32(&dout, "default_val", real_packet->default_val);
  dio_put_uint8(&dout, "bits_num", real_packet->bits_num);

    {
        /* dio_put_string(&dout, "support_names", real_packet->support_names[i]); */
    } 

    {
        /* dio_put_string(&dout, "pretty_names", real_packet->pretty_names[i]); */
    } 

  SEND_PACKET_END(PACKET_SERVER_SETTING_BITWISE);
}

static void ensure_valid_variant_packet_server_setting_bitwise(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SERVER_SETTING_BITWISE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SERVER_SETTING_BITWISE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SERVER_SETTING_BITWISE] = variant;
}

struct packet_server_setting_bitwise *receive_packet_server_setting_bitwise(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_server_setting_bitwise at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_server_setting_bitwise(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_BITWISE]) {
  case 100:
    return receive_packet_server_setting_bitwise_100(pc);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_BITWISE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_server_setting_bitwise(struct connection *pc, const struct packet_server_setting_bitwise *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_server_setting_bitwise from the client.");
  }
  ensure_valid_variant_packet_server_setting_bitwise(pc);

  switch(pc->phs.variant[PACKET_SERVER_SETTING_BITWISE]) {

  case 100:
    return send_packet_server_setting_bitwise_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SERVER_SETTING_BITWISE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_ruleset_effect *receive_packet_ruleset_effect_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_effect, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "effect_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(effect_type);
    }
    real_packet->effect_type = readin;
  }
  if (!dio_get_sint32(pc->json_packet, "effect_value", &real_packet->effect_value)) {
    RECEIVE_PACKET_FIELD_ERROR(effect_value);
  }

  log_packet("packet_ruleset_effect_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_effect_100(struct connection *pc, const struct packet_ruleset_effect *packet)
{
  const struct packet_ruleset_effect *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_EFFECT);

  log_packet("packet_ruleset_effect_100: sending info about ()");

  dio_put_uint8(&dout, "effect_type", real_packet->effect_type);
  dio_put_sint32(&dout, "effect_value", real_packet->effect_value);

  SEND_PACKET_END(PACKET_RULESET_EFFECT);
}

static void ensure_valid_variant_packet_ruleset_effect(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_EFFECT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_EFFECT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_EFFECT] = variant;
}

struct packet_ruleset_effect *receive_packet_ruleset_effect(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_effect at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_effect(pc);

  switch(pc->phs.variant[PACKET_RULESET_EFFECT]) {
  case 100:
    return receive_packet_ruleset_effect_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_EFFECT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_effect(struct connection *pc, const struct packet_ruleset_effect *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_effect from the client.");
  }
  ensure_valid_variant_packet_ruleset_effect(pc);

  switch(pc->phs.variant[PACKET_RULESET_EFFECT]) {

  case 100:
    return send_packet_ruleset_effect_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_EFFECT variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_effect(struct conn_list *dest, const struct packet_ruleset_effect *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_effect(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_effect_req *receive_packet_ruleset_effect_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_effect_req, real_packet);
  if (!dio_get_uint32(pc->json_packet, "effect_id", &real_packet->effect_id)) {
    RECEIVE_PACKET_FIELD_ERROR(effect_id);
  }
  if (!dio_get_bool8(pc->json_packet, "neg", &real_packet->neg)) {
    RECEIVE_PACKET_FIELD_ERROR(neg);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "source_type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(source_type);
    }
    real_packet->source_type = readin;
  }
  if (!dio_get_sint32(pc->json_packet, "source_value", &real_packet->source_value)) {
    RECEIVE_PACKET_FIELD_ERROR(source_value);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "range", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(range);
    }
    real_packet->range = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "survives", &real_packet->survives)) {
    RECEIVE_PACKET_FIELD_ERROR(survives);
  }
  if (!dio_get_bool8(pc->json_packet, "present", &real_packet->present)) {
    RECEIVE_PACKET_FIELD_ERROR(present);
  }

  log_packet("packet_ruleset_effect_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_effect_req_100(struct connection *pc, const struct packet_ruleset_effect_req *packet)
{
  const struct packet_ruleset_effect_req *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_EFFECT_REQ);

  log_packet("packet_ruleset_effect_req_100: sending info about ()");

  dio_put_uint32(&dout, "effect_id", real_packet->effect_id);
  dio_put_bool8(&dout, "neg", real_packet->neg);
  dio_put_uint8(&dout, "source_type", real_packet->source_type);
  dio_put_sint32(&dout, "source_value", real_packet->source_value);
  dio_put_uint8(&dout, "range", real_packet->range);
  dio_put_bool8(&dout, "survives", real_packet->survives);
  dio_put_bool8(&dout, "present", real_packet->present);

  SEND_PACKET_END(PACKET_RULESET_EFFECT_REQ);
}

static void ensure_valid_variant_packet_ruleset_effect_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_EFFECT_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_EFFECT_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_EFFECT_REQ] = variant;
}

struct packet_ruleset_effect_req *receive_packet_ruleset_effect_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_effect_req at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_effect_req(pc);

  switch(pc->phs.variant[PACKET_RULESET_EFFECT_REQ]) {
  case 100:
    return receive_packet_ruleset_effect_req_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_EFFECT_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_effect_req(struct connection *pc, const struct packet_ruleset_effect_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_effect_req from the client.");
  }
  ensure_valid_variant_packet_ruleset_effect_req(pc);

  switch(pc->phs.variant[PACKET_RULESET_EFFECT_REQ]) {

  case 100:
    return send_packet_ruleset_effect_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_EFFECT_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_effect_req(struct conn_list *dest, const struct packet_ruleset_effect_req *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_effect_req(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_ruleset_resource *receive_packet_ruleset_resource_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_ruleset_resource, real_packet);
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(id);
    }
    real_packet->id = readin;
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "rule_name", real_packet->rule_name, sizeof(real_packet->rule_name))) {
    RECEIVE_PACKET_FIELD_ERROR(rule_name);
  }
  
  {
    int i;
  
    for (i = 0; i < O_LAST; i++) {
      if (!dio_get_uint8(pc->json_packet, "output", &real_packet->output[i])) {
        RECEIVE_PACKET_FIELD_ERROR(output);
      }
    }
  }
  if (!dio_get_string(pc->json_packet, "graphic_str", real_packet->graphic_str, sizeof(real_packet->graphic_str))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_str);
  }
  if (!dio_get_string(pc->json_packet, "graphic_alt", real_packet->graphic_alt, sizeof(real_packet->graphic_alt))) {
    RECEIVE_PACKET_FIELD_ERROR(graphic_alt);
  }

  log_packet("packet_ruleset_resource_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_ruleset_resource_100(struct connection *pc, const struct packet_ruleset_resource *packet)
{
  const struct packet_ruleset_resource *real_packet = packet;
  SEND_PACKET_START(PACKET_RULESET_RESOURCE);

  log_packet("packet_ruleset_resource_100: sending info about ()");

  dio_put_uint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "rule_name", real_packet->rule_name);

    {
        dio_put_array_uint8(&dout, "output", (void *)real_packet->output, O_LAST);
    } 
  dio_put_string(&dout, "graphic_str", real_packet->graphic_str);
  dio_put_string(&dout, "graphic_alt", real_packet->graphic_alt);

  SEND_PACKET_END(PACKET_RULESET_RESOURCE);
}

static void ensure_valid_variant_packet_ruleset_resource(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_RULESET_RESOURCE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_RULESET_RESOURCE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_RULESET_RESOURCE] = variant;
}

struct packet_ruleset_resource *receive_packet_ruleset_resource(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_ruleset_resource at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_ruleset_resource(pc);

  switch(pc->phs.variant[PACKET_RULESET_RESOURCE]) {
  case 100:
    return receive_packet_ruleset_resource_100(pc);
  default:
    log_debug("Unknown PACKET_RULESET_RESOURCE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_ruleset_resource(struct connection *pc, const struct packet_ruleset_resource *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_ruleset_resource from the client.");
  }
  ensure_valid_variant_packet_ruleset_resource(pc);

  switch(pc->phs.variant[PACKET_RULESET_RESOURCE]) {

  case 100:
    return send_packet_ruleset_resource_100(pc, packet);
  default:
    log_debug("Unknown PACKET_RULESET_RESOURCE variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_ruleset_resource(struct conn_list *dest, const struct packet_ruleset_resource *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_ruleset_resource(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_scenario_info *receive_packet_scenario_info_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_scenario_info, real_packet);
  if (!dio_get_bool8(pc->json_packet, "is_scenario", &real_packet->is_scenario)) {
    RECEIVE_PACKET_FIELD_ERROR(is_scenario);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "description", real_packet->description, sizeof(real_packet->description))) {
    RECEIVE_PACKET_FIELD_ERROR(description);
  }
  if (!dio_get_bool8(pc->json_packet, "players", &real_packet->players)) {
    RECEIVE_PACKET_FIELD_ERROR(players);
  }

  log_packet("packet_scenario_info_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_scenario_info_100(struct connection *pc, const struct packet_scenario_info *packet)
{
  const struct packet_scenario_info *real_packet = packet;
  SEND_PACKET_START(PACKET_SCENARIO_INFO);

  log_packet("packet_scenario_info_100: sending info about ()");

  dio_put_bool8(&dout, "is_scenario", real_packet->is_scenario);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "description", real_packet->description);
  dio_put_bool8(&dout, "players", real_packet->players);

  SEND_PACKET_END(PACKET_SCENARIO_INFO);
}

static void ensure_valid_variant_packet_scenario_info(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SCENARIO_INFO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SCENARIO_INFO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SCENARIO_INFO] = variant;
}

struct packet_scenario_info *receive_packet_scenario_info(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  ensure_valid_variant_packet_scenario_info(pc);

  switch(pc->phs.variant[PACKET_SCENARIO_INFO]) {
  case 100:
    return receive_packet_scenario_info_100(pc);
  default:
    log_debug("Unknown PACKET_SCENARIO_INFO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_scenario_info(struct connection *pc, const struct packet_scenario_info *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  ensure_valid_variant_packet_scenario_info(pc);

  switch(pc->phs.variant[PACKET_SCENARIO_INFO]) {

  case 100:
    return send_packet_scenario_info_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SCENARIO_INFO variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_save_scenario *receive_packet_save_scenario_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_save_scenario, real_packet);
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }

  log_packet("packet_save_scenario_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_save_scenario_100(struct connection *pc, const struct packet_save_scenario *packet)
{
  const struct packet_save_scenario *real_packet = packet;
  SEND_PACKET_START(PACKET_SAVE_SCENARIO);

  log_packet("packet_save_scenario_100: sending info about ()");

  dio_put_string(&dout, "name", real_packet->name);

  SEND_PACKET_END(PACKET_SAVE_SCENARIO);
}

static void ensure_valid_variant_packet_save_scenario(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_SAVE_SCENARIO] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_SAVE_SCENARIO variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_SAVE_SCENARIO] = variant;
}

struct packet_save_scenario *receive_packet_save_scenario(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_save_scenario at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_save_scenario(pc);

  switch(pc->phs.variant[PACKET_SAVE_SCENARIO]) {
  case 100:
    return receive_packet_save_scenario_100(pc);
  default:
    log_debug("Unknown PACKET_SAVE_SCENARIO variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_save_scenario(struct connection *pc, const struct packet_save_scenario *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_save_scenario from the server.");
  }
  ensure_valid_variant_packet_save_scenario(pc);

  switch(pc->phs.variant[PACKET_SAVE_SCENARIO]) {

  case 100:
    return send_packet_save_scenario_100(pc, packet);
  default:
    log_debug("Unknown PACKET_SAVE_SCENARIO variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_save_scenario(struct connection *pc, const char *name)
{
  struct packet_save_scenario packet, *real_packet = &packet;

  sz_strlcpy(real_packet->name, name);
  
  return send_packet_save_scenario(pc, real_packet);
}

static struct packet_vote_new *receive_packet_vote_new_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_vote_new, real_packet);
  if (!dio_get_uint32(pc->json_packet, "vote_no", &real_packet->vote_no)) {
    RECEIVE_PACKET_FIELD_ERROR(vote_no);
  }
  if (!dio_get_string(pc->json_packet, "user", real_packet->user, sizeof(real_packet->user))) {
    RECEIVE_PACKET_FIELD_ERROR(user);
  }
  if (!dio_get_string(pc->json_packet, "desc", real_packet->desc, sizeof(real_packet->desc))) {
    RECEIVE_PACKET_FIELD_ERROR(desc);
  }
  if (!dio_get_uint8(pc->json_packet, "percent_required", &real_packet->percent_required)) {
    RECEIVE_PACKET_FIELD_ERROR(percent_required);
  }
  if (!dio_get_uint32(pc->json_packet, "flags", &real_packet->flags)) {
    RECEIVE_PACKET_FIELD_ERROR(flags);
  }

  log_packet("packet_vote_new_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_vote_new_100(struct connection *pc, const struct packet_vote_new *packet)
{
  const struct packet_vote_new *real_packet = packet;
  SEND_PACKET_START(PACKET_VOTE_NEW);

  log_packet("packet_vote_new_100: sending info about ()");

  dio_put_uint32(&dout, "vote_no", real_packet->vote_no);
  dio_put_string(&dout, "user", real_packet->user);
  dio_put_string(&dout, "desc", real_packet->desc);
  dio_put_uint8(&dout, "percent_required", real_packet->percent_required);
  dio_put_uint32(&dout, "flags", real_packet->flags);

  SEND_PACKET_END(PACKET_VOTE_NEW);
}

static void ensure_valid_variant_packet_vote_new(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_VOTE_NEW] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_VOTE_NEW variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_VOTE_NEW] = variant;
}

struct packet_vote_new *receive_packet_vote_new(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_vote_new at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_vote_new(pc);

  switch(pc->phs.variant[PACKET_VOTE_NEW]) {
  case 100:
    return receive_packet_vote_new_100(pc);
  default:
    log_debug("Unknown PACKET_VOTE_NEW variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_vote_new(struct connection *pc, const struct packet_vote_new *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_vote_new from the client.");
  }
  ensure_valid_variant_packet_vote_new(pc);

  switch(pc->phs.variant[PACKET_VOTE_NEW]) {

  case 100:
    return send_packet_vote_new_100(pc, packet);
  default:
    log_debug("Unknown PACKET_VOTE_NEW variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_vote_update *receive_packet_vote_update_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_vote_update, real_packet);
  if (!dio_get_uint32(pc->json_packet, "vote_no", &real_packet->vote_no)) {
    RECEIVE_PACKET_FIELD_ERROR(vote_no);
  }
  if (!dio_get_uint8(pc->json_packet, "yes", &real_packet->yes)) {
    RECEIVE_PACKET_FIELD_ERROR(yes);
  }
  if (!dio_get_uint8(pc->json_packet, "no", &real_packet->no)) {
    RECEIVE_PACKET_FIELD_ERROR(no);
  }
  if (!dio_get_uint8(pc->json_packet, "abstain", &real_packet->abstain)) {
    RECEIVE_PACKET_FIELD_ERROR(abstain);
  }
  if (!dio_get_uint8(pc->json_packet, "num_voters", &real_packet->num_voters)) {
    RECEIVE_PACKET_FIELD_ERROR(num_voters);
  }

  log_packet("packet_vote_update_100: got info about (%d)",
    real_packet->vote_no);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_vote_update_100(struct connection *pc, const struct packet_vote_update *packet)
{
  const struct packet_vote_update *real_packet = packet;
  SEND_PACKET_START(PACKET_VOTE_UPDATE);

  log_packet("packet_vote_update_100: sending info about (%d)",
    real_packet->vote_no);

  dio_put_uint32(&dout, "vote_no", real_packet->vote_no);
  dio_put_uint8(&dout, "yes", real_packet->yes);
  dio_put_uint8(&dout, "no", real_packet->no);
  dio_put_uint8(&dout, "abstain", real_packet->abstain);
  dio_put_uint8(&dout, "num_voters", real_packet->num_voters);

  SEND_PACKET_END(PACKET_VOTE_UPDATE);
}

static void ensure_valid_variant_packet_vote_update(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_VOTE_UPDATE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_VOTE_UPDATE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_VOTE_UPDATE] = variant;
}

struct packet_vote_update *receive_packet_vote_update(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_vote_update at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_vote_update(pc);

  switch(pc->phs.variant[PACKET_VOTE_UPDATE]) {
  case 100:
    return receive_packet_vote_update_100(pc);
  default:
    log_debug("Unknown PACKET_VOTE_UPDATE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_vote_update(struct connection *pc, const struct packet_vote_update *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_vote_update from the client.");
  }
  ensure_valid_variant_packet_vote_update(pc);

  switch(pc->phs.variant[PACKET_VOTE_UPDATE]) {

  case 100:
    return send_packet_vote_update_100(pc, packet);
  default:
    log_debug("Unknown PACKET_VOTE_UPDATE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_vote_remove *receive_packet_vote_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_vote_remove, real_packet);
  if (!dio_get_uint32(pc->json_packet, "vote_no", &real_packet->vote_no)) {
    RECEIVE_PACKET_FIELD_ERROR(vote_no);
  }

  log_packet("packet_vote_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_vote_remove_100(struct connection *pc, const struct packet_vote_remove *packet)
{
  const struct packet_vote_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_VOTE_REMOVE);

  log_packet("packet_vote_remove_100: sending info about ()");

  dio_put_uint32(&dout, "vote_no", real_packet->vote_no);

  SEND_PACKET_END(PACKET_VOTE_REMOVE);
}

static void ensure_valid_variant_packet_vote_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_VOTE_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_VOTE_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_VOTE_REMOVE] = variant;
}

struct packet_vote_remove *receive_packet_vote_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_vote_remove at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_vote_remove(pc);

  switch(pc->phs.variant[PACKET_VOTE_REMOVE]) {
  case 100:
    return receive_packet_vote_remove_100(pc);
  default:
    log_debug("Unknown PACKET_VOTE_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_vote_remove(struct connection *pc, const struct packet_vote_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_vote_remove from the client.");
  }
  ensure_valid_variant_packet_vote_remove(pc);

  switch(pc->phs.variant[PACKET_VOTE_REMOVE]) {

  case 100:
    return send_packet_vote_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_VOTE_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_vote_resolve *receive_packet_vote_resolve_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_vote_resolve, real_packet);
  if (!dio_get_uint32(pc->json_packet, "vote_no", &real_packet->vote_no)) {
    RECEIVE_PACKET_FIELD_ERROR(vote_no);
  }
  if (!dio_get_bool8(pc->json_packet, "passed", &real_packet->passed)) {
    RECEIVE_PACKET_FIELD_ERROR(passed);
  }

  log_packet("packet_vote_resolve_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_vote_resolve_100(struct connection *pc, const struct packet_vote_resolve *packet)
{
  const struct packet_vote_resolve *real_packet = packet;
  SEND_PACKET_START(PACKET_VOTE_RESOLVE);

  log_packet("packet_vote_resolve_100: sending info about ()");

  dio_put_uint32(&dout, "vote_no", real_packet->vote_no);
  dio_put_bool8(&dout, "passed", real_packet->passed);

  SEND_PACKET_END(PACKET_VOTE_RESOLVE);
}

static void ensure_valid_variant_packet_vote_resolve(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_VOTE_RESOLVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_VOTE_RESOLVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_VOTE_RESOLVE] = variant;
}

struct packet_vote_resolve *receive_packet_vote_resolve(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_vote_resolve at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_vote_resolve(pc);

  switch(pc->phs.variant[PACKET_VOTE_RESOLVE]) {
  case 100:
    return receive_packet_vote_resolve_100(pc);
  default:
    log_debug("Unknown PACKET_VOTE_RESOLVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_vote_resolve(struct connection *pc, const struct packet_vote_resolve *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_vote_resolve from the client.");
  }
  ensure_valid_variant_packet_vote_resolve(pc);

  switch(pc->phs.variant[PACKET_VOTE_RESOLVE]) {

  case 100:
    return send_packet_vote_resolve_100(pc, packet);
  default:
    log_debug("Unknown PACKET_VOTE_RESOLVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_vote_submit *receive_packet_vote_submit_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_vote_submit, real_packet);
  if (!dio_get_uint32(pc->json_packet, "vote_no", &real_packet->vote_no)) {
    RECEIVE_PACKET_FIELD_ERROR(vote_no);
  }
  if (!dio_get_sint8(pc->json_packet, "value", &real_packet->value)) {
    RECEIVE_PACKET_FIELD_ERROR(value);
  }

  log_packet("packet_vote_submit_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_vote_submit_100(struct connection *pc, const struct packet_vote_submit *packet)
{
  const struct packet_vote_submit *real_packet = packet;
  SEND_PACKET_START(PACKET_VOTE_SUBMIT);

  log_packet("packet_vote_submit_100: sending info about ()");

  dio_put_uint32(&dout, "vote_no", real_packet->vote_no);
  dio_put_sint8(&dout, "value", real_packet->value);

  SEND_PACKET_END(PACKET_VOTE_SUBMIT);
}

static void ensure_valid_variant_packet_vote_submit(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_VOTE_SUBMIT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_VOTE_SUBMIT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_VOTE_SUBMIT] = variant;
}

struct packet_vote_submit *receive_packet_vote_submit(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_vote_submit at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_vote_submit(pc);

  switch(pc->phs.variant[PACKET_VOTE_SUBMIT]) {
  case 100:
    return receive_packet_vote_submit_100(pc);
  default:
    log_debug("Unknown PACKET_VOTE_SUBMIT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_vote_submit(struct connection *pc, const struct packet_vote_submit *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_vote_submit from the server.");
  }
  ensure_valid_variant_packet_vote_submit(pc);

  switch(pc->phs.variant[PACKET_VOTE_SUBMIT]) {

  case 100:
    return send_packet_vote_submit_100(pc, packet);
  default:
    log_debug("Unknown PACKET_VOTE_SUBMIT variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_mode *receive_packet_edit_mode_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_mode, real_packet);
  if (!dio_get_bool8(pc->json_packet, "state", &real_packet->state)) {
    RECEIVE_PACKET_FIELD_ERROR(state);
  }

  log_packet("packet_edit_mode_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_mode_100(struct connection *pc, const struct packet_edit_mode *packet)
{
  const struct packet_edit_mode *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_MODE);

  log_packet("packet_edit_mode_100: sending info about ()");

  dio_put_bool8(&dout, "state", real_packet->state);

  SEND_PACKET_END(PACKET_EDIT_MODE);
}

static void ensure_valid_variant_packet_edit_mode(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_MODE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_MODE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_MODE] = variant;
}

struct packet_edit_mode *receive_packet_edit_mode(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_mode at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_mode(pc);

  switch(pc->phs.variant[PACKET_EDIT_MODE]) {
  case 100:
    return receive_packet_edit_mode_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_MODE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_mode(struct connection *pc, const struct packet_edit_mode *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_mode from the server.");
  }
  ensure_valid_variant_packet_edit_mode(pc);

  switch(pc->phs.variant[PACKET_EDIT_MODE]) {

  case 100:
    return send_packet_edit_mode_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_MODE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_mode(struct connection *pc, bool state)
{
  struct packet_edit_mode packet, *real_packet = &packet;

  real_packet->state = state;
  
  return send_packet_edit_mode(pc, real_packet);
}

static struct packet_edit_recalculate_borders *receive_packet_edit_recalculate_borders_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_recalculate_borders, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_edit_recalculate_borders_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_recalculate_borders_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_EDIT_RECALCULATE_BORDERS);

  log_packet("packet_edit_recalculate_borders_100: sending info about ()");
  SEND_PACKET_END(PACKET_EDIT_RECALCULATE_BORDERS);
}

static void ensure_valid_variant_packet_edit_recalculate_borders(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_RECALCULATE_BORDERS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_RECALCULATE_BORDERS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_RECALCULATE_BORDERS] = variant;
}

struct packet_edit_recalculate_borders *receive_packet_edit_recalculate_borders(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_recalculate_borders at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_recalculate_borders(pc);

  switch(pc->phs.variant[PACKET_EDIT_RECALCULATE_BORDERS]) {
  case 100:
    return receive_packet_edit_recalculate_borders_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_RECALCULATE_BORDERS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_recalculate_borders(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_recalculate_borders from the server.");
  }
  ensure_valid_variant_packet_edit_recalculate_borders(pc);

  switch(pc->phs.variant[PACKET_EDIT_RECALCULATE_BORDERS]) {

  case 100:
    return send_packet_edit_recalculate_borders_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_RECALCULATE_BORDERS variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_check_tiles *receive_packet_edit_check_tiles_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_check_tiles, real_packet);
  real_packet->__dummy = 0xff;
  log_packet("packet_edit_check_tiles_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_check_tiles_100(struct connection *pc)
{
  SEND_PACKET_START(PACKET_EDIT_CHECK_TILES);

  log_packet("packet_edit_check_tiles_100: sending info about ()");
  SEND_PACKET_END(PACKET_EDIT_CHECK_TILES);
}

static void ensure_valid_variant_packet_edit_check_tiles(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_CHECK_TILES] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_CHECK_TILES variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_CHECK_TILES] = variant;
}

struct packet_edit_check_tiles *receive_packet_edit_check_tiles(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_check_tiles at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_check_tiles(pc);

  switch(pc->phs.variant[PACKET_EDIT_CHECK_TILES]) {
  case 100:
    return receive_packet_edit_check_tiles_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_CHECK_TILES variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_check_tiles(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_check_tiles from the server.");
  }
  ensure_valid_variant_packet_edit_check_tiles(pc);

  switch(pc->phs.variant[PACKET_EDIT_CHECK_TILES]) {

  case 100:
    return send_packet_edit_check_tiles_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_CHECK_TILES variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_toggle_fogofwar *receive_packet_edit_toggle_fogofwar_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_toggle_fogofwar, real_packet);
  if (!dio_get_sint8(pc->json_packet, "player", &real_packet->player)) {
    RECEIVE_PACKET_FIELD_ERROR(player);
  }

  log_packet("packet_edit_toggle_fogofwar_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_toggle_fogofwar_100(struct connection *pc, const struct packet_edit_toggle_fogofwar *packet)
{
  const struct packet_edit_toggle_fogofwar *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TOGGLE_FOGOFWAR);

  log_packet("packet_edit_toggle_fogofwar_100: sending info about ()");

  dio_put_sint8(&dout, "player", real_packet->player);

  SEND_PACKET_END(PACKET_EDIT_TOGGLE_FOGOFWAR);
}

static void ensure_valid_variant_packet_edit_toggle_fogofwar(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TOGGLE_FOGOFWAR] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TOGGLE_FOGOFWAR variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TOGGLE_FOGOFWAR] = variant;
}

struct packet_edit_toggle_fogofwar *receive_packet_edit_toggle_fogofwar(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_toggle_fogofwar at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_toggle_fogofwar(pc);

  switch(pc->phs.variant[PACKET_EDIT_TOGGLE_FOGOFWAR]) {
  case 100:
    return receive_packet_edit_toggle_fogofwar_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TOGGLE_FOGOFWAR variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_toggle_fogofwar(struct connection *pc, const struct packet_edit_toggle_fogofwar *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_toggle_fogofwar from the server.");
  }
  ensure_valid_variant_packet_edit_toggle_fogofwar(pc);

  switch(pc->phs.variant[PACKET_EDIT_TOGGLE_FOGOFWAR]) {

  case 100:
    return send_packet_edit_toggle_fogofwar_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TOGGLE_FOGOFWAR variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_toggle_fogofwar(struct connection *pc, int player)
{
  struct packet_edit_toggle_fogofwar packet, *real_packet = &packet;

  real_packet->player = player;
  
  return send_packet_edit_toggle_fogofwar(pc, real_packet);
}

static struct packet_edit_tile_terrain *receive_packet_edit_tile_terrain_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile_terrain, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "terrain", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(terrain);
    }
    real_packet->terrain = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_tile_terrain_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_terrain_100(struct connection *pc, const struct packet_edit_tile_terrain *packet)
{
  const struct packet_edit_tile_terrain *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE_TERRAIN);

  log_packet("packet_edit_tile_terrain_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint8(&dout, "terrain", real_packet->terrain);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_TILE_TERRAIN);
}

static void ensure_valid_variant_packet_edit_tile_terrain(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE_TERRAIN] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE_TERRAIN variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE_TERRAIN] = variant;
}

struct packet_edit_tile_terrain *receive_packet_edit_tile_terrain(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile_terrain at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile_terrain(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_TERRAIN]) {
  case 100:
    return receive_packet_edit_tile_terrain_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_TERRAIN variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile_terrain(struct connection *pc, const struct packet_edit_tile_terrain *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile_terrain from the server.");
  }
  ensure_valid_variant_packet_edit_tile_terrain(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_TERRAIN]) {

  case 100:
    return send_packet_edit_tile_terrain_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_TERRAIN variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_tile_terrain(struct connection *pc, int tile, Terrain_type_id terrain, int size)
{
  struct packet_edit_tile_terrain packet, *real_packet = &packet;

  real_packet->tile = tile;
  real_packet->terrain = terrain;
  real_packet->size = size;
  
  return send_packet_edit_tile_terrain(pc, real_packet);
}

static struct packet_edit_tile_resource *receive_packet_edit_tile_resource_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile_resource, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "resource", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(resource);
    }
    real_packet->resource = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_tile_resource_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_resource_100(struct connection *pc, const struct packet_edit_tile_resource *packet)
{
  const struct packet_edit_tile_resource *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE_RESOURCE);

  log_packet("packet_edit_tile_resource_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint8(&dout, "resource", real_packet->resource);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_TILE_RESOURCE);
}

static void ensure_valid_variant_packet_edit_tile_resource(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE_RESOURCE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE_RESOURCE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE_RESOURCE] = variant;
}

struct packet_edit_tile_resource *receive_packet_edit_tile_resource(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile_resource at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile_resource(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_RESOURCE]) {
  case 100:
    return receive_packet_edit_tile_resource_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_RESOURCE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile_resource(struct connection *pc, const struct packet_edit_tile_resource *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile_resource from the server.");
  }
  ensure_valid_variant_packet_edit_tile_resource(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_RESOURCE]) {

  case 100:
    return send_packet_edit_tile_resource_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_RESOURCE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_tile_resource(struct connection *pc, int tile, Resource_type_id resource, int size)
{
  struct packet_edit_tile_resource packet, *real_packet = &packet;

  real_packet->tile = tile;
  real_packet->resource = resource;
  real_packet->size = size;
  
  return send_packet_edit_tile_resource(pc, real_packet);
}

static struct packet_edit_tile_special *receive_packet_edit_tile_special_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile_special, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_uint32(pc->json_packet, "special", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(special);
    }
    real_packet->special = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "remove", &real_packet->remove)) {
    RECEIVE_PACKET_FIELD_ERROR(remove);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_tile_special_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_special_100(struct connection *pc, const struct packet_edit_tile_special *packet)
{
  const struct packet_edit_tile_special *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE_SPECIAL);

  log_packet("packet_edit_tile_special_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint32(&dout, "special", real_packet->special);
  dio_put_bool8(&dout, "remove", real_packet->remove);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_TILE_SPECIAL);
}

static void ensure_valid_variant_packet_edit_tile_special(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE_SPECIAL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE_SPECIAL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE_SPECIAL] = variant;
}

struct packet_edit_tile_special *receive_packet_edit_tile_special(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile_special at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile_special(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_SPECIAL]) {
  case 100:
    return receive_packet_edit_tile_special_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_SPECIAL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile_special(struct connection *pc, const struct packet_edit_tile_special *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile_special from the server.");
  }
  ensure_valid_variant_packet_edit_tile_special(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_SPECIAL]) {

  case 100:
    return send_packet_edit_tile_special_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_SPECIAL variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_tile_special(struct connection *pc, int tile, enum tile_special_type special, bool remove, int size)
{
  struct packet_edit_tile_special packet, *real_packet = &packet;

  real_packet->tile = tile;
  real_packet->special = special;
  real_packet->remove = remove;
  real_packet->size = size;
  
  return send_packet_edit_tile_special(pc, real_packet);
}

static struct packet_edit_tile_base *receive_packet_edit_tile_base_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile_base, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "base_type_id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(base_type_id);
    }
    real_packet->base_type_id = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "remove", &real_packet->remove)) {
    RECEIVE_PACKET_FIELD_ERROR(remove);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_tile_base_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_base_100(struct connection *pc, const struct packet_edit_tile_base *packet)
{
  const struct packet_edit_tile_base *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE_BASE);

  log_packet("packet_edit_tile_base_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "base_type_id", real_packet->base_type_id);
  dio_put_bool8(&dout, "remove", real_packet->remove);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_TILE_BASE);
}

static void ensure_valid_variant_packet_edit_tile_base(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE_BASE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE_BASE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE_BASE] = variant;
}

struct packet_edit_tile_base *receive_packet_edit_tile_base(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile_base at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile_base(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_BASE]) {
  case 100:
    return receive_packet_edit_tile_base_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_BASE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile_base(struct connection *pc, const struct packet_edit_tile_base *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile_base from the server.");
  }
  ensure_valid_variant_packet_edit_tile_base(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_BASE]) {

  case 100:
    return send_packet_edit_tile_base_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_BASE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_tile_base(struct connection *pc, int tile, Base_type_id base_type_id, bool remove, int size)
{
  struct packet_edit_tile_base packet, *real_packet = &packet;

  real_packet->tile = tile;
  real_packet->base_type_id = base_type_id;
  real_packet->remove = remove;
  real_packet->size = size;
  
  return send_packet_edit_tile_base(pc, real_packet);
}

static struct packet_edit_tile_road *receive_packet_edit_tile_road_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile_road, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "road_type_id", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(road_type_id);
    }
    real_packet->road_type_id = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "remove", &real_packet->remove)) {
    RECEIVE_PACKET_FIELD_ERROR(remove);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_tile_road_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_road_100(struct connection *pc, const struct packet_edit_tile_road *packet)
{
  const struct packet_edit_tile_road *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE_ROAD);

  log_packet("packet_edit_tile_road_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_sint8(&dout, "road_type_id", real_packet->road_type_id);
  dio_put_bool8(&dout, "remove", real_packet->remove);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_TILE_ROAD);
}

static void ensure_valid_variant_packet_edit_tile_road(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE_ROAD] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE_ROAD variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE_ROAD] = variant;
}

struct packet_edit_tile_road *receive_packet_edit_tile_road(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile_road at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile_road(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_ROAD]) {
  case 100:
    return receive_packet_edit_tile_road_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_ROAD variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile_road(struct connection *pc, const struct packet_edit_tile_road *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile_road from the server.");
  }
  ensure_valid_variant_packet_edit_tile_road(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE_ROAD]) {

  case 100:
    return send_packet_edit_tile_road_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE_ROAD variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_tile_road(struct connection *pc, int tile, Road_type_id road_type_id, bool remove, int size)
{
  struct packet_edit_tile_road packet, *real_packet = &packet;

  real_packet->tile = tile;
  real_packet->road_type_id = road_type_id;
  real_packet->remove = remove;
  real_packet->size = size;
  
  return send_packet_edit_tile_road(pc, real_packet);
}

static struct packet_edit_startpos *receive_packet_edit_startpos_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_startpos, real_packet);
  if (!dio_get_sint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "remove", &real_packet->remove)) {
    RECEIVE_PACKET_FIELD_ERROR(remove);
  }
  if (!dio_get_sint32(pc->json_packet, "tag", &real_packet->tag)) {
    RECEIVE_PACKET_FIELD_ERROR(tag);
  }

  log_packet("packet_edit_startpos_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_startpos_100(struct connection *pc, const struct packet_edit_startpos *packet)
{
  const struct packet_edit_startpos *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_STARTPOS);

  log_packet("packet_edit_startpos_100: sending info about ()");

  dio_put_sint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "remove", real_packet->remove);
  dio_put_sint32(&dout, "tag", real_packet->tag);

  SEND_PACKET_END(PACKET_EDIT_STARTPOS);
}

static void ensure_valid_variant_packet_edit_startpos(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_STARTPOS] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_STARTPOS variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_STARTPOS] = variant;
}

struct packet_edit_startpos *receive_packet_edit_startpos(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  ensure_valid_variant_packet_edit_startpos(pc);

  switch(pc->phs.variant[PACKET_EDIT_STARTPOS]) {
  case 100:
    return receive_packet_edit_startpos_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_STARTPOS variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_startpos(struct connection *pc, const struct packet_edit_startpos *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  ensure_valid_variant_packet_edit_startpos(pc);

  switch(pc->phs.variant[PACKET_EDIT_STARTPOS]) {

  case 100:
    return send_packet_edit_startpos_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_STARTPOS variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_startpos(struct connection *pc, int id, bool remove, int tag)
{
  struct packet_edit_startpos packet, *real_packet = &packet;

  real_packet->id = id;
  real_packet->remove = remove;
  real_packet->tag = tag;
  
  return send_packet_edit_startpos(pc, real_packet);
}

static struct packet_edit_startpos_full *receive_packet_edit_startpos_full_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_startpos_full, real_packet);
  if (!dio_get_sint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_bool8(pc->json_packet, "exclude", &real_packet->exclude)) {
    RECEIVE_PACKET_FIELD_ERROR(exclude);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->nations)) {
    RECEIVE_PACKET_FIELD_ERROR(nations);
  }
  #endif

  log_packet("packet_edit_startpos_full_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_startpos_full_100(struct connection *pc, const struct packet_edit_startpos_full *packet)
{
  const struct packet_edit_startpos_full *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_STARTPOS_FULL);

  log_packet("packet_edit_startpos_full_100: sending info about ()");

  dio_put_sint32(&dout, "id", real_packet->id);
  dio_put_bool8(&dout, "exclude", real_packet->exclude);
DIO_BV_PUT(&dout, "nations", packet->nations);

  SEND_PACKET_END(PACKET_EDIT_STARTPOS_FULL);
}

static void ensure_valid_variant_packet_edit_startpos_full(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_STARTPOS_FULL] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_STARTPOS_FULL variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_STARTPOS_FULL] = variant;
}

struct packet_edit_startpos_full *receive_packet_edit_startpos_full(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  ensure_valid_variant_packet_edit_startpos_full(pc);

  switch(pc->phs.variant[PACKET_EDIT_STARTPOS_FULL]) {
  case 100:
    return receive_packet_edit_startpos_full_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_STARTPOS_FULL variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_startpos_full(struct connection *pc, const struct packet_edit_startpos_full *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  ensure_valid_variant_packet_edit_startpos_full(pc);

  switch(pc->phs.variant[PACKET_EDIT_STARTPOS_FULL]) {

  case 100:
    return send_packet_edit_startpos_full_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_STARTPOS_FULL variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_tile *receive_packet_edit_tile_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_tile, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->specials)) {
    RECEIVE_PACKET_FIELD_ERROR(specials);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->roads)) {
    RECEIVE_PACKET_FIELD_ERROR(roads);
  }
  #endif
  #if 0
  if (!DIO_BV_GET(&din, real_packet->bases)) {
    RECEIVE_PACKET_FIELD_ERROR(bases);
  }
  #endif
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "resource", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(resource);
    }
    real_packet->resource = readin;
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "terrain", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(terrain);
    }
    real_packet->terrain = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "startpos_nation", &real_packet->startpos_nation)) {
    RECEIVE_PACKET_FIELD_ERROR(startpos_nation);
  }
  if (!dio_get_string(pc->json_packet, "label", real_packet->label, sizeof(real_packet->label))) {
    RECEIVE_PACKET_FIELD_ERROR(label);
  }

  log_packet("packet_edit_tile_100: got info about (%d)",
    real_packet->tile);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_tile_100(struct connection *pc, const struct packet_edit_tile *packet)
{
  const struct packet_edit_tile *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_TILE);

  log_packet("packet_edit_tile_100: sending info about (%d)",
    real_packet->tile);

  dio_put_sint32(&dout, "tile", real_packet->tile);
DIO_BV_PUT(&dout, "specials", packet->specials);
DIO_BV_PUT(&dout, "roads", packet->roads);
DIO_BV_PUT(&dout, "bases", packet->bases);
  dio_put_uint8(&dout, "resource", real_packet->resource);
  dio_put_uint8(&dout, "terrain", real_packet->terrain);
  dio_put_uint32(&dout, "startpos_nation", real_packet->startpos_nation);
  dio_put_string(&dout, "label", real_packet->label);

  SEND_PACKET_END(PACKET_EDIT_TILE);
}

static void ensure_valid_variant_packet_edit_tile(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_TILE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_TILE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_TILE] = variant;
}

struct packet_edit_tile *receive_packet_edit_tile(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_tile at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_tile(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE]) {
  case 100:
    return receive_packet_edit_tile_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_TILE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_tile(struct connection *pc, const struct packet_edit_tile *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_tile from the server.");
  }
  ensure_valid_variant_packet_edit_tile(pc);

  switch(pc->phs.variant[PACKET_EDIT_TILE]) {

  case 100:
    return send_packet_edit_tile_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_TILE variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_unit_create *receive_packet_edit_unit_create_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_unit_create, real_packet);
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "count", &real_packet->count)) {
    RECEIVE_PACKET_FIELD_ERROR(count);
  }
  if (!dio_get_sint32(pc->json_packet, "tag", &real_packet->tag)) {
    RECEIVE_PACKET_FIELD_ERROR(tag);
  }

  log_packet("packet_edit_unit_create_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_unit_create_100(struct connection *pc, const struct packet_edit_unit_create *packet)
{
  const struct packet_edit_unit_create *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_UNIT_CREATE);

  log_packet("packet_edit_unit_create_100: sending info about ()");

  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint8(&dout, "count", real_packet->count);
  dio_put_sint32(&dout, "tag", real_packet->tag);

  SEND_PACKET_END(PACKET_EDIT_UNIT_CREATE);
}

static void ensure_valid_variant_packet_edit_unit_create(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_UNIT_CREATE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_UNIT_CREATE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_UNIT_CREATE] = variant;
}

struct packet_edit_unit_create *receive_packet_edit_unit_create(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_unit_create at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_unit_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_CREATE]) {
  case 100:
    return receive_packet_edit_unit_create_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_CREATE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_unit_create(struct connection *pc, const struct packet_edit_unit_create *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_unit_create from the server.");
  }
  ensure_valid_variant_packet_edit_unit_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_CREATE]) {

  case 100:
    return send_packet_edit_unit_create_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_CREATE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_unit_create(struct connection *pc, int owner, int tile, Unit_type_id type, int count, int tag)
{
  struct packet_edit_unit_create packet, *real_packet = &packet;

  real_packet->owner = owner;
  real_packet->tile = tile;
  real_packet->type = type;
  real_packet->count = count;
  real_packet->tag = tag;
  
  return send_packet_edit_unit_create(pc, real_packet);
}

static struct packet_edit_unit_remove *receive_packet_edit_unit_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_unit_remove, real_packet);
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "type", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(type);
    }
    real_packet->type = readin;
  }
  if (!dio_get_uint8(pc->json_packet, "count", &real_packet->count)) {
    RECEIVE_PACKET_FIELD_ERROR(count);
  }

  log_packet("packet_edit_unit_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_unit_remove_100(struct connection *pc, const struct packet_edit_unit_remove *packet)
{
  const struct packet_edit_unit_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_UNIT_REMOVE);

  log_packet("packet_edit_unit_remove_100: sending info about ()");

  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint8(&dout, "type", real_packet->type);
  dio_put_uint8(&dout, "count", real_packet->count);

  SEND_PACKET_END(PACKET_EDIT_UNIT_REMOVE);
}

static void ensure_valid_variant_packet_edit_unit_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_UNIT_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_UNIT_REMOVE] = variant;
}

struct packet_edit_unit_remove *receive_packet_edit_unit_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_unit_remove at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_unit_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE]) {
  case 100:
    return receive_packet_edit_unit_remove_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_unit_remove(struct connection *pc, const struct packet_edit_unit_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_unit_remove from the server.");
  }
  ensure_valid_variant_packet_edit_unit_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE]) {

  case 100:
    return send_packet_edit_unit_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_unit_remove(struct connection *pc, int owner, int tile, Unit_type_id type, int count)
{
  struct packet_edit_unit_remove packet, *real_packet = &packet;

  real_packet->owner = owner;
  real_packet->tile = tile;
  real_packet->type = type;
  real_packet->count = count;
  
  return send_packet_edit_unit_remove(pc, real_packet);
}

static struct packet_edit_unit_remove_by_id *receive_packet_edit_unit_remove_by_id_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_unit_remove_by_id, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }

  log_packet("packet_edit_unit_remove_by_id_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_unit_remove_by_id_100(struct connection *pc, const struct packet_edit_unit_remove_by_id *packet)
{
  const struct packet_edit_unit_remove_by_id *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_UNIT_REMOVE_BY_ID);

  log_packet("packet_edit_unit_remove_by_id_100: sending info about ()");

  dio_put_uint32(&dout, "id", real_packet->id);

  SEND_PACKET_END(PACKET_EDIT_UNIT_REMOVE_BY_ID);
}

static void ensure_valid_variant_packet_edit_unit_remove_by_id(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE_BY_ID] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_UNIT_REMOVE_BY_ID variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_UNIT_REMOVE_BY_ID] = variant;
}

struct packet_edit_unit_remove_by_id *receive_packet_edit_unit_remove_by_id(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_unit_remove_by_id at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_unit_remove_by_id(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE_BY_ID]) {
  case 100:
    return receive_packet_edit_unit_remove_by_id_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_REMOVE_BY_ID variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_unit_remove_by_id(struct connection *pc, const struct packet_edit_unit_remove_by_id *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_unit_remove_by_id from the server.");
  }
  ensure_valid_variant_packet_edit_unit_remove_by_id(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT_REMOVE_BY_ID]) {

  case 100:
    return send_packet_edit_unit_remove_by_id_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT_REMOVE_BY_ID variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_unit_remove_by_id(struct connection *pc, int id)
{
  struct packet_edit_unit_remove_by_id packet, *real_packet = &packet;

  real_packet->id = id;
  
  return send_packet_edit_unit_remove_by_id(pc, real_packet);
}

static struct packet_edit_unit *receive_packet_edit_unit_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_unit, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "utype", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(utype);
    }
    real_packet->utype = readin;
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_uint32(pc->json_packet, "homecity", &real_packet->homecity)) {
    RECEIVE_PACKET_FIELD_ERROR(homecity);
  }
  if (!dio_get_uint8(pc->json_packet, "moves_left", &real_packet->moves_left)) {
    RECEIVE_PACKET_FIELD_ERROR(moves_left);
  }
  if (!dio_get_uint8(pc->json_packet, "hp", &real_packet->hp)) {
    RECEIVE_PACKET_FIELD_ERROR(hp);
  }
  if (!dio_get_uint8(pc->json_packet, "veteran", &real_packet->veteran)) {
    RECEIVE_PACKET_FIELD_ERROR(veteran);
  }
  if (!dio_get_uint8(pc->json_packet, "fuel", &real_packet->fuel)) {
    RECEIVE_PACKET_FIELD_ERROR(fuel);
  }
  {
    int readin;
    
    if (!dio_get_uint8(pc->json_packet, "activity", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity);
    }
    real_packet->activity = readin;
  }
  if (!dio_get_uint32(pc->json_packet, "activity_count", &real_packet->activity_count)) {
    RECEIVE_PACKET_FIELD_ERROR(activity_count);
  }
  {
    int readin;
    
    if (!dio_get_sint8(pc->json_packet, "activity_base", &readin)) {
      RECEIVE_PACKET_FIELD_ERROR(activity_base);
    }
    real_packet->activity_base = readin;
  }
  if (!dio_get_bool8(pc->json_packet, "debug", &real_packet->debug)) {
    RECEIVE_PACKET_FIELD_ERROR(debug);
  }
  if (!dio_get_bool8(pc->json_packet, "moved", &real_packet->moved)) {
    RECEIVE_PACKET_FIELD_ERROR(moved);
  }
  if (!dio_get_bool8(pc->json_packet, "paradropped", &real_packet->paradropped)) {
    RECEIVE_PACKET_FIELD_ERROR(paradropped);
  }
  if (!dio_get_bool8(pc->json_packet, "done_moving", &real_packet->done_moving)) {
    RECEIVE_PACKET_FIELD_ERROR(done_moving);
  }
  if (!dio_get_uint32(pc->json_packet, "transported_by", &real_packet->transported_by)) {
    RECEIVE_PACKET_FIELD_ERROR(transported_by);
  }

  log_packet("packet_edit_unit_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_unit_100(struct connection *pc, const struct packet_edit_unit *packet)
{
  const struct packet_edit_unit *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_UNIT);

  log_packet("packet_edit_unit_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_uint8(&dout, "utype", real_packet->utype);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_uint32(&dout, "homecity", real_packet->homecity);
  dio_put_uint8(&dout, "moves_left", real_packet->moves_left);
  dio_put_uint8(&dout, "hp", real_packet->hp);
  dio_put_uint8(&dout, "veteran", real_packet->veteran);
  dio_put_uint8(&dout, "fuel", real_packet->fuel);
  dio_put_uint8(&dout, "activity", real_packet->activity);
  dio_put_uint32(&dout, "activity_count", real_packet->activity_count);
  dio_put_sint8(&dout, "activity_base", real_packet->activity_base);
  dio_put_bool8(&dout, "debug", real_packet->debug);
  dio_put_bool8(&dout, "moved", real_packet->moved);
  dio_put_bool8(&dout, "paradropped", real_packet->paradropped);
  dio_put_bool8(&dout, "done_moving", real_packet->done_moving);
  dio_put_uint32(&dout, "transported_by", real_packet->transported_by);

  SEND_PACKET_END(PACKET_EDIT_UNIT);
}

static void ensure_valid_variant_packet_edit_unit(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_UNIT] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_UNIT variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_UNIT] = variant;
}

struct packet_edit_unit *receive_packet_edit_unit(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_unit at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_unit(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT]) {
  case 100:
    return receive_packet_edit_unit_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_unit(struct connection *pc, const struct packet_edit_unit *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_unit from the server.");
  }
  ensure_valid_variant_packet_edit_unit(pc);

  switch(pc->phs.variant[PACKET_EDIT_UNIT]) {

  case 100:
    return send_packet_edit_unit_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_UNIT variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_city_create *receive_packet_edit_city_create_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_city_create, real_packet);
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }
  if (!dio_get_sint32(pc->json_packet, "tag", &real_packet->tag)) {
    RECEIVE_PACKET_FIELD_ERROR(tag);
  }

  log_packet("packet_edit_city_create_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_city_create_100(struct connection *pc, const struct packet_edit_city_create *packet)
{
  const struct packet_edit_city_create *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_CITY_CREATE);

  log_packet("packet_edit_city_create_100: sending info about ()");

  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_uint8(&dout, "size", real_packet->size);
  dio_put_sint32(&dout, "tag", real_packet->tag);

  SEND_PACKET_END(PACKET_EDIT_CITY_CREATE);
}

static void ensure_valid_variant_packet_edit_city_create(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_CITY_CREATE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_CITY_CREATE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_CITY_CREATE] = variant;
}

struct packet_edit_city_create *receive_packet_edit_city_create(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_city_create at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_city_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY_CREATE]) {
  case 100:
    return receive_packet_edit_city_create_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_CITY_CREATE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_city_create(struct connection *pc, const struct packet_edit_city_create *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_city_create from the server.");
  }
  ensure_valid_variant_packet_edit_city_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY_CREATE]) {

  case 100:
    return send_packet_edit_city_create_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_CITY_CREATE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_city_create(struct connection *pc, int owner, int tile, int size, int tag)
{
  struct packet_edit_city_create packet, *real_packet = &packet;

  real_packet->owner = owner;
  real_packet->tile = tile;
  real_packet->size = size;
  real_packet->tag = tag;
  
  return send_packet_edit_city_create(pc, real_packet);
}

static struct packet_edit_city_remove *receive_packet_edit_city_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_city_remove, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }

  log_packet("packet_edit_city_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_city_remove_100(struct connection *pc, const struct packet_edit_city_remove *packet)
{
  const struct packet_edit_city_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_CITY_REMOVE);

  log_packet("packet_edit_city_remove_100: sending info about ()");

  dio_put_uint32(&dout, "id", real_packet->id);

  SEND_PACKET_END(PACKET_EDIT_CITY_REMOVE);
}

static void ensure_valid_variant_packet_edit_city_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_CITY_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_CITY_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_CITY_REMOVE] = variant;
}

struct packet_edit_city_remove *receive_packet_edit_city_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_city_remove at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_city_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY_REMOVE]) {
  case 100:
    return receive_packet_edit_city_remove_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_CITY_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_city_remove(struct connection *pc, const struct packet_edit_city_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_city_remove from the server.");
  }
  ensure_valid_variant_packet_edit_city_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY_REMOVE]) {

  case 100:
    return send_packet_edit_city_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_CITY_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_city_remove(struct connection *pc, int id)
{
  struct packet_edit_city_remove packet, *real_packet = &packet;

  real_packet->id = id;
  
  return send_packet_edit_city_remove(pc, real_packet);
}

static struct packet_edit_city *receive_packet_edit_city_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_city, real_packet);
  if (!dio_get_uint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_sint8(pc->json_packet, "owner", &real_packet->owner)) {
    RECEIVE_PACKET_FIELD_ERROR(owner);
  }
  if (!dio_get_sint8(pc->json_packet, "original", &real_packet->original)) {
    RECEIVE_PACKET_FIELD_ERROR(original);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }
  
  {
    int i;
  
    for (i = 0; i < 5; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_happy", &real_packet->ppl_happy[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_happy);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < 5; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_content", &real_packet->ppl_content[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_content);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < 5; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_unhappy", &real_packet->ppl_unhappy[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_unhappy);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < 5; i++) {
      if (!dio_get_uint8(pc->json_packet, "ppl_angry", &real_packet->ppl_angry[i])) {
        RECEIVE_PACKET_FIELD_ERROR(ppl_angry);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "specialists_size", &real_packet->specialists_size)) {
    RECEIVE_PACKET_FIELD_ERROR(specialists_size);
  }
  
  {
    int i;
  
    if (real_packet->specialists_size > SP_MAX) {
      RECEIVE_PACKET_FIELD_ERROR(specialists, ": truncation array");
    }
    for (i = 0; i < real_packet->specialists_size; i++) {
      if (!dio_get_uint8(pc->json_packet, "specialists", &real_packet->specialists[i])) {
        RECEIVE_PACKET_FIELD_ERROR(specialists);
      }
    }
  }
  
  {
    int i;
  
    for (i = 0; i < MAX_TRADE_ROUTES; i++) {
      if (!dio_get_uint32(pc->json_packet, "trade", &real_packet->trade[i])) {
        RECEIVE_PACKET_FIELD_ERROR(trade);
      }
    }
  }
  if (!dio_get_uint32(pc->json_packet, "food_stock", &real_packet->food_stock)) {
    RECEIVE_PACKET_FIELD_ERROR(food_stock);
  }
  if (!dio_get_uint32(pc->json_packet, "shield_stock", &real_packet->shield_stock)) {
    RECEIVE_PACKET_FIELD_ERROR(shield_stock);
  }
  if (!dio_get_bool8(pc->json_packet, "airlift", &real_packet->airlift)) {
    RECEIVE_PACKET_FIELD_ERROR(airlift);
  }
  if (!dio_get_bool8(pc->json_packet, "debug", &real_packet->debug)) {
    RECEIVE_PACKET_FIELD_ERROR(debug);
  }
  if (!dio_get_bool8(pc->json_packet, "did_buy", &real_packet->did_buy)) {
    RECEIVE_PACKET_FIELD_ERROR(did_buy);
  }
  if (!dio_get_bool8(pc->json_packet, "did_sell", &real_packet->did_sell)) {
    RECEIVE_PACKET_FIELD_ERROR(did_sell);
  }
  if (!dio_get_bool8(pc->json_packet, "was_happy", &real_packet->was_happy)) {
    RECEIVE_PACKET_FIELD_ERROR(was_happy);
  }
  if (!dio_get_uint8(pc->json_packet, "anarchy", &real_packet->anarchy)) {
    RECEIVE_PACKET_FIELD_ERROR(anarchy);
  }
  if (!dio_get_uint8(pc->json_packet, "rapture", &real_packet->rapture)) {
    RECEIVE_PACKET_FIELD_ERROR(rapture);
  }
  if (!dio_get_uint8(pc->json_packet, "steal", &real_packet->steal)) {
    RECEIVE_PACKET_FIELD_ERROR(steal);
  }
  if (!dio_get_sint16(pc->json_packet, "turn_founded", &real_packet->turn_founded)) {
    RECEIVE_PACKET_FIELD_ERROR(turn_founded);
  }
  if (!dio_get_sint16(pc->json_packet, "turn_last_built", &real_packet->turn_last_built)) {
    RECEIVE_PACKET_FIELD_ERROR(turn_last_built);
  }
  
  {
    int i;
  
    for (i = 0; i < B_LAST; i++) {
      if (!dio_get_sint32(pc->json_packet, "built", &real_packet->built[i])) {
        RECEIVE_PACKET_FIELD_ERROR(built);
      }
    }
  }
  if (!dio_get_uint8(pc->json_packet, "production_kind", &real_packet->production_kind)) {
    RECEIVE_PACKET_FIELD_ERROR(production_kind);
  }
  if (!dio_get_uint8(pc->json_packet, "production_value", &real_packet->production_value)) {
    RECEIVE_PACKET_FIELD_ERROR(production_value);
  }
  if (!dio_get_uint32(pc->json_packet, "last_turns_shield_surplus", &real_packet->last_turns_shield_surplus)) {
    RECEIVE_PACKET_FIELD_ERROR(last_turns_shield_surplus);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->city_options)) {
    RECEIVE_PACKET_FIELD_ERROR(city_options);
  }
  #endif

  log_packet("packet_edit_city_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_city_100(struct connection *pc, const struct packet_edit_city *packet)
{
  const struct packet_edit_city *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_CITY);

  log_packet("packet_edit_city_100: sending info about (%d)",
    real_packet->id);

  dio_put_uint32(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_sint8(&dout, "owner", real_packet->owner);
  dio_put_sint8(&dout, "original", real_packet->original);
  dio_put_uint8(&dout, "size", real_packet->size);

    {
        dio_put_array_uint8(&dout, "ppl_happy", (void *)real_packet->ppl_happy, 5);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_content", (void *)real_packet->ppl_content, 5);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_unhappy", (void *)real_packet->ppl_unhappy, 5);
    } 

    {
        dio_put_array_uint8(&dout, "ppl_angry", (void *)real_packet->ppl_angry, 5);
    } 
  dio_put_uint8(&dout, "specialists_size", real_packet->specialists_size);

    {
        dio_put_array_uint8(&dout, "specialists", (void *)real_packet->specialists, real_packet->specialists_size);
    } 

    {
        dio_put_array_uint32(&dout, "trade", (void *)real_packet->trade, MAX_TRADE_ROUTES);
    } 
  dio_put_uint32(&dout, "food_stock", real_packet->food_stock);
  dio_put_uint32(&dout, "shield_stock", real_packet->shield_stock);
  dio_put_bool8(&dout, "airlift", real_packet->airlift);
  dio_put_bool8(&dout, "debug", real_packet->debug);
  dio_put_bool8(&dout, "did_buy", real_packet->did_buy);
  dio_put_bool8(&dout, "did_sell", real_packet->did_sell);
  dio_put_bool8(&dout, "was_happy", real_packet->was_happy);
  dio_put_uint8(&dout, "anarchy", real_packet->anarchy);
  dio_put_uint8(&dout, "rapture", real_packet->rapture);
  dio_put_uint8(&dout, "steal", real_packet->steal);
  dio_put_sint16(&dout, "turn_founded", real_packet->turn_founded);
  dio_put_sint16(&dout, "turn_last_built", real_packet->turn_last_built);

    {
        dio_put_array_sint32(&dout, "built", (void *)real_packet->built, B_LAST);
    } 
  dio_put_uint8(&dout, "production_kind", real_packet->production_kind);
  dio_put_uint8(&dout, "production_value", real_packet->production_value);
  dio_put_uint32(&dout, "last_turns_shield_surplus", real_packet->last_turns_shield_surplus);
DIO_BV_PUT(&dout, "city_options", packet->city_options);

  SEND_PACKET_END(PACKET_EDIT_CITY);
}

static void ensure_valid_variant_packet_edit_city(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_CITY] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_CITY variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_CITY] = variant;
}

struct packet_edit_city *receive_packet_edit_city(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_city at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_city(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY]) {
  case 100:
    return receive_packet_edit_city_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_CITY variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_city(struct connection *pc, const struct packet_edit_city *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_city from the server.");
  }
  ensure_valid_variant_packet_edit_city(pc);

  switch(pc->phs.variant[PACKET_EDIT_CITY]) {

  case 100:
    return send_packet_edit_city_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_CITY variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_player_create *receive_packet_edit_player_create_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_player_create, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tag", &real_packet->tag)) {
    RECEIVE_PACKET_FIELD_ERROR(tag);
  }

  log_packet("packet_edit_player_create_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_player_create_100(struct connection *pc, const struct packet_edit_player_create *packet)
{
  const struct packet_edit_player_create *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_PLAYER_CREATE);

  log_packet("packet_edit_player_create_100: sending info about ()");

  dio_put_sint32(&dout, "tag", real_packet->tag);

  SEND_PACKET_END(PACKET_EDIT_PLAYER_CREATE);
}

static void ensure_valid_variant_packet_edit_player_create(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_PLAYER_CREATE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_PLAYER_CREATE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_PLAYER_CREATE] = variant;
}

struct packet_edit_player_create *receive_packet_edit_player_create(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_player_create at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_player_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_CREATE]) {
  case 100:
    return receive_packet_edit_player_create_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_CREATE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_player_create(struct connection *pc, const struct packet_edit_player_create *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_player_create from the server.");
  }
  ensure_valid_variant_packet_edit_player_create(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_CREATE]) {

  case 100:
    return send_packet_edit_player_create_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_CREATE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_player_create(struct connection *pc, int tag)
{
  struct packet_edit_player_create packet, *real_packet = &packet;

  real_packet->tag = tag;
  
  return send_packet_edit_player_create(pc, real_packet);
}

static struct packet_edit_player_remove *receive_packet_edit_player_remove_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_player_remove, real_packet);
  if (!dio_get_sint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }

  log_packet("packet_edit_player_remove_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_player_remove_100(struct connection *pc, const struct packet_edit_player_remove *packet)
{
  const struct packet_edit_player_remove *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_PLAYER_REMOVE);

  log_packet("packet_edit_player_remove_100: sending info about ()");

  dio_put_sint8(&dout, "id", real_packet->id);

  SEND_PACKET_END(PACKET_EDIT_PLAYER_REMOVE);
}

static void ensure_valid_variant_packet_edit_player_remove(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_PLAYER_REMOVE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_PLAYER_REMOVE] = variant;
}

struct packet_edit_player_remove *receive_packet_edit_player_remove(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_player_remove at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_player_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_REMOVE]) {
  case 100:
    return receive_packet_edit_player_remove_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_player_remove(struct connection *pc, const struct packet_edit_player_remove *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_player_remove from the server.");
  }
  ensure_valid_variant_packet_edit_player_remove(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_REMOVE]) {

  case 100:
    return send_packet_edit_player_remove_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_REMOVE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_player_remove(struct connection *pc, int id)
{
  struct packet_edit_player_remove packet, *real_packet = &packet;

  real_packet->id = id;
  
  return send_packet_edit_player_remove(pc, real_packet);
}

static struct packet_edit_player *receive_packet_edit_player_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_player, real_packet);
  if (!dio_get_sint8(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }
  if (!dio_get_string(pc->json_packet, "name", real_packet->name, sizeof(real_packet->name))) {
    RECEIVE_PACKET_FIELD_ERROR(name);
  }
  if (!dio_get_string(pc->json_packet, "username", real_packet->username, sizeof(real_packet->username))) {
    RECEIVE_PACKET_FIELD_ERROR(username);
  }
  if (!dio_get_string(pc->json_packet, "ranked_username", real_packet->ranked_username, sizeof(real_packet->ranked_username))) {
    RECEIVE_PACKET_FIELD_ERROR(ranked_username);
  }
  if (!dio_get_sint16(pc->json_packet, "user_turns", &real_packet->user_turns)) {
    RECEIVE_PACKET_FIELD_ERROR(user_turns);
  }
  if (!dio_get_bool8(pc->json_packet, "is_male", &real_packet->is_male)) {
    RECEIVE_PACKET_FIELD_ERROR(is_male);
  }
  if (!dio_get_uint8(pc->json_packet, "government", &real_packet->government)) {
    RECEIVE_PACKET_FIELD_ERROR(government);
  }
  if (!dio_get_uint8(pc->json_packet, "target_government", &real_packet->target_government)) {
    RECEIVE_PACKET_FIELD_ERROR(target_government);
  }
  if (!dio_get_uint32(pc->json_packet, "nation", &real_packet->nation)) {
    RECEIVE_PACKET_FIELD_ERROR(nation);
  }
  if (!dio_get_uint8(pc->json_packet, "team", &real_packet->team)) {
    RECEIVE_PACKET_FIELD_ERROR(team);
  }
  if (!dio_get_bool8(pc->json_packet, "phase_done", &real_packet->phase_done)) {
    RECEIVE_PACKET_FIELD_ERROR(phase_done);
  }
  if (!dio_get_sint16(pc->json_packet, "nturns_idle", &real_packet->nturns_idle)) {
    RECEIVE_PACKET_FIELD_ERROR(nturns_idle);
  }
  if (!dio_get_bool8(pc->json_packet, "is_alive", &real_packet->is_alive)) {
    RECEIVE_PACKET_FIELD_ERROR(is_alive);
  }
  if (!dio_get_sint16(pc->json_packet, "revolution_finishes", &real_packet->revolution_finishes)) {
    RECEIVE_PACKET_FIELD_ERROR(revolution_finishes);
  }
  if (!dio_get_bool8(pc->json_packet, "capital", &real_packet->capital)) {
    RECEIVE_PACKET_FIELD_ERROR(capital);
  }
  #if 0
  if (!DIO_BV_GET(&din, real_packet->embassy)) {
    RECEIVE_PACKET_FIELD_ERROR(embassy);
  }
  #endif
  if (!dio_get_uint8(pc->json_packet, "city_style", &real_packet->city_style)) {
    RECEIVE_PACKET_FIELD_ERROR(city_style);
  }
  if (!dio_get_uint32(pc->json_packet, "gold", &real_packet->gold)) {
    RECEIVE_PACKET_FIELD_ERROR(gold);
  }
  if (!dio_get_uint32(pc->json_packet, "tax", &real_packet->tax)) {
    RECEIVE_PACKET_FIELD_ERROR(tax);
  }
  if (!dio_get_uint32(pc->json_packet, "science", &real_packet->science)) {
    RECEIVE_PACKET_FIELD_ERROR(science);
  }
  if (!dio_get_uint32(pc->json_packet, "luxury", &real_packet->luxury)) {
    RECEIVE_PACKET_FIELD_ERROR(luxury);
  }
  if (!dio_get_uint32(pc->json_packet, "future_tech", &real_packet->future_tech)) {
    RECEIVE_PACKET_FIELD_ERROR(future_tech);
  }
  if (!dio_get_uint8(pc->json_packet, "researching", &real_packet->researching)) {
    RECEIVE_PACKET_FIELD_ERROR(researching);
  }
  if (!dio_get_uint32(pc->json_packet, "bulbs_researched", &real_packet->bulbs_researched)) {
    RECEIVE_PACKET_FIELD_ERROR(bulbs_researched);
  }
  
  {
    int i;
  
    for (i = 0; i < A_LAST+1; i++) {
      if (!dio_get_bool8(pc->json_packet, "inventions", &real_packet->inventions[i])) {
        RECEIVE_PACKET_FIELD_ERROR(inventions);
      }
    }
  }
  if (!dio_get_bool8(pc->json_packet, "ai", &real_packet->ai)) {
    RECEIVE_PACKET_FIELD_ERROR(ai);
  }

  log_packet("packet_edit_player_100: got info about (%d)",
    real_packet->id);
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_player_100(struct connection *pc, const struct packet_edit_player *packet)
{
  const struct packet_edit_player *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_PLAYER);

  log_packet("packet_edit_player_100: sending info about (%d)",
    real_packet->id);

  dio_put_sint8(&dout, "id", real_packet->id);
  dio_put_string(&dout, "name", real_packet->name);
  dio_put_string(&dout, "username", real_packet->username);
  dio_put_string(&dout, "ranked_username", real_packet->ranked_username);
  dio_put_sint16(&dout, "user_turns", real_packet->user_turns);
  dio_put_bool8(&dout, "is_male", real_packet->is_male);
  dio_put_uint8(&dout, "government", real_packet->government);
  dio_put_uint8(&dout, "target_government", real_packet->target_government);
  dio_put_uint32(&dout, "nation", real_packet->nation);
  dio_put_uint8(&dout, "team", real_packet->team);
  dio_put_bool8(&dout, "phase_done", real_packet->phase_done);
  dio_put_sint16(&dout, "nturns_idle", real_packet->nturns_idle);
  dio_put_bool8(&dout, "is_alive", real_packet->is_alive);
  dio_put_sint16(&dout, "revolution_finishes", real_packet->revolution_finishes);
  dio_put_bool8(&dout, "capital", real_packet->capital);
DIO_BV_PUT(&dout, "embassy", packet->embassy);
  dio_put_uint8(&dout, "city_style", real_packet->city_style);
  dio_put_uint32(&dout, "gold", real_packet->gold);
  dio_put_uint32(&dout, "tax", real_packet->tax);
  dio_put_uint32(&dout, "science", real_packet->science);
  dio_put_uint32(&dout, "luxury", real_packet->luxury);
  dio_put_uint32(&dout, "future_tech", real_packet->future_tech);
  dio_put_uint8(&dout, "researching", real_packet->researching);
  dio_put_uint32(&dout, "bulbs_researched", real_packet->bulbs_researched);

    {
        dio_put_array_bool8(&dout, "inventions", (void *)real_packet->inventions, A_LAST+1);
    } 
  dio_put_bool8(&dout, "ai", real_packet->ai);

  SEND_PACKET_END(PACKET_EDIT_PLAYER);
}

static void ensure_valid_variant_packet_edit_player(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_PLAYER] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_PLAYER variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_PLAYER] = variant;
}

struct packet_edit_player *receive_packet_edit_player(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_player at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_player(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER]) {
  case 100:
    return receive_packet_edit_player_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_player(struct connection *pc, const struct packet_edit_player *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_player from the server.");
  }
  ensure_valid_variant_packet_edit_player(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER]) {

  case 100:
    return send_packet_edit_player_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER variant for connection %s", conn_description(pc));
    return -1;
  }
}
void lsend_packet_edit_player(struct conn_list *dest, const struct packet_edit_player *packet)
{
  conn_list_iterate(dest, pconn) {
    send_packet_edit_player(pconn, packet);
  } conn_list_iterate_end;
}

static struct packet_edit_player_vision *receive_packet_edit_player_vision_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_player_vision, real_packet);
  if (!dio_get_sint8(pc->json_packet, "player", &real_packet->player)) {
    RECEIVE_PACKET_FIELD_ERROR(player);
  }
  if (!dio_get_sint32(pc->json_packet, "tile", &real_packet->tile)) {
    RECEIVE_PACKET_FIELD_ERROR(tile);
  }
  if (!dio_get_bool8(pc->json_packet, "known", &real_packet->known)) {
    RECEIVE_PACKET_FIELD_ERROR(known);
  }
  if (!dio_get_uint8(pc->json_packet, "size", &real_packet->size)) {
    RECEIVE_PACKET_FIELD_ERROR(size);
  }

  log_packet("packet_edit_player_vision_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_player_vision_100(struct connection *pc, const struct packet_edit_player_vision *packet)
{
  const struct packet_edit_player_vision *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_PLAYER_VISION);

  log_packet("packet_edit_player_vision_100: sending info about ()");

  dio_put_sint8(&dout, "player", real_packet->player);
  dio_put_sint32(&dout, "tile", real_packet->tile);
  dio_put_bool8(&dout, "known", real_packet->known);
  dio_put_uint8(&dout, "size", real_packet->size);

  SEND_PACKET_END(PACKET_EDIT_PLAYER_VISION);
}

static void ensure_valid_variant_packet_edit_player_vision(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_PLAYER_VISION] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_PLAYER_VISION variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_PLAYER_VISION] = variant;
}

struct packet_edit_player_vision *receive_packet_edit_player_vision(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_player_vision at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_player_vision(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_VISION]) {
  case 100:
    return receive_packet_edit_player_vision_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_VISION variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_player_vision(struct connection *pc, const struct packet_edit_player_vision *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_player_vision from the server.");
  }
  ensure_valid_variant_packet_edit_player_vision(pc);

  switch(pc->phs.variant[PACKET_EDIT_PLAYER_VISION]) {

  case 100:
    return send_packet_edit_player_vision_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_PLAYER_VISION variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_player_vision(struct connection *pc, int player, int tile, bool known, int size)
{
  struct packet_edit_player_vision packet, *real_packet = &packet;

  real_packet->player = player;
  real_packet->tile = tile;
  real_packet->known = known;
  real_packet->size = size;
  
  return send_packet_edit_player_vision(pc, real_packet);
}

static struct packet_edit_game *receive_packet_edit_game_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_game, real_packet);
  if (!dio_get_sint32(pc->json_packet, "year", &real_packet->year)) {
    RECEIVE_PACKET_FIELD_ERROR(year);
  }
  if (!dio_get_bool8(pc->json_packet, "scenario", &real_packet->scenario)) {
    RECEIVE_PACKET_FIELD_ERROR(scenario);
  }
  if (!dio_get_string(pc->json_packet, "scenario_name", real_packet->scenario_name, sizeof(real_packet->scenario_name))) {
    RECEIVE_PACKET_FIELD_ERROR(scenario_name);
  }
  if (!dio_get_string(pc->json_packet, "scenario_desc", real_packet->scenario_desc, sizeof(real_packet->scenario_desc))) {
    RECEIVE_PACKET_FIELD_ERROR(scenario_desc);
  }
  if (!dio_get_bool8(pc->json_packet, "scenario_players", &real_packet->scenario_players)) {
    RECEIVE_PACKET_FIELD_ERROR(scenario_players);
  }

  log_packet("packet_edit_game_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_game_100(struct connection *pc, const struct packet_edit_game *packet)
{
  const struct packet_edit_game *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_GAME);

  log_packet("packet_edit_game_100: sending info about ()");

  dio_put_sint32(&dout, "year", real_packet->year);
  dio_put_bool8(&dout, "scenario", real_packet->scenario);
  dio_put_string(&dout, "scenario_name", real_packet->scenario_name);
  dio_put_string(&dout, "scenario_desc", real_packet->scenario_desc);
  dio_put_bool8(&dout, "scenario_players", real_packet->scenario_players);

  SEND_PACKET_END(PACKET_EDIT_GAME);
}

static void ensure_valid_variant_packet_edit_game(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_GAME] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_GAME variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_GAME] = variant;
}

struct packet_edit_game *receive_packet_edit_game(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_edit_game at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_game(pc);

  switch(pc->phs.variant[PACKET_EDIT_GAME]) {
  case 100:
    return receive_packet_edit_game_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_GAME variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_game(struct connection *pc, const struct packet_edit_game *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_edit_game from the server.");
  }
  ensure_valid_variant_packet_edit_game(pc);

  switch(pc->phs.variant[PACKET_EDIT_GAME]) {

  case 100:
    return send_packet_edit_game_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_GAME variant for connection %s", conn_description(pc));
    return -1;
  }
}
static struct packet_edit_object_created *receive_packet_edit_object_created_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_edit_object_created, real_packet);
  if (!dio_get_sint32(pc->json_packet, "tag", &real_packet->tag)) {
    RECEIVE_PACKET_FIELD_ERROR(tag);
  }
  if (!dio_get_sint32(pc->json_packet, "id", &real_packet->id)) {
    RECEIVE_PACKET_FIELD_ERROR(id);
  }

  log_packet("packet_edit_object_created_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_edit_object_created_100(struct connection *pc, const struct packet_edit_object_created *packet)
{
  const struct packet_edit_object_created *real_packet = packet;
  SEND_PACKET_START(PACKET_EDIT_OBJECT_CREATED);

  log_packet("packet_edit_object_created_100: sending info about ()");

  dio_put_sint32(&dout, "tag", real_packet->tag);
  dio_put_sint32(&dout, "id", real_packet->id);

  SEND_PACKET_END(PACKET_EDIT_OBJECT_CREATED);
}

static void ensure_valid_variant_packet_edit_object_created(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_EDIT_OBJECT_CREATED] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_EDIT_OBJECT_CREATED variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_EDIT_OBJECT_CREATED] = variant;
}

struct packet_edit_object_created *receive_packet_edit_object_created(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_edit_object_created at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_edit_object_created(pc);

  switch(pc->phs.variant[PACKET_EDIT_OBJECT_CREATED]) {
  case 100:
    return receive_packet_edit_object_created_100(pc);
  default:
    log_debug("Unknown PACKET_EDIT_OBJECT_CREATED variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_edit_object_created(struct connection *pc, const struct packet_edit_object_created *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_edit_object_created from the client.");
  }
  ensure_valid_variant_packet_edit_object_created(pc);

  switch(pc->phs.variant[PACKET_EDIT_OBJECT_CREATED]) {

  case 100:
    return send_packet_edit_object_created_100(pc, packet);
  default:
    log_debug("Unknown PACKET_EDIT_OBJECT_CREATED variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_edit_object_created(struct connection *pc, int tag, int id)
{
  struct packet_edit_object_created packet, *real_packet = &packet;

  real_packet->tag = tag;
  real_packet->id = id;
  
  return send_packet_edit_object_created(pc, real_packet);
}

static struct packet_info_text_req *receive_packet_info_text_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_info_text_req, real_packet);
  if (!dio_get_sint32(pc->json_packet, "loc", &real_packet->loc)) {
    RECEIVE_PACKET_FIELD_ERROR(loc);
  }
  if (!dio_get_uint32(pc->json_packet, "visible_unit", &real_packet->visible_unit)) {
    RECEIVE_PACKET_FIELD_ERROR(visible_unit);
  }

  log_packet("packet_info_text_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_info_text_req_100(struct connection *pc, const struct packet_info_text_req *packet)
{
  const struct packet_info_text_req *real_packet = packet;
  SEND_PACKET_START(PACKET_INFO_TEXT_REQ);

  log_packet("packet_info_text_req_100: sending info about ()");

  dio_put_sint32(&dout, "loc", real_packet->loc);
  dio_put_uint32(&dout, "visible_unit", real_packet->visible_unit);

  SEND_PACKET_END(PACKET_INFO_TEXT_REQ);
}

static void ensure_valid_variant_packet_info_text_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_INFO_TEXT_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_INFO_TEXT_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_INFO_TEXT_REQ] = variant;
}

struct packet_info_text_req *receive_packet_info_text_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_info_text_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_info_text_req(pc);

  switch(pc->phs.variant[PACKET_INFO_TEXT_REQ]) {
  case 100:
    return receive_packet_info_text_req_100(pc);
  default:
    log_debug("Unknown PACKET_INFO_TEXT_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_info_text_req(struct connection *pc, const struct packet_info_text_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_info_text_req from the server.");
  }
  ensure_valid_variant_packet_info_text_req(pc);

  switch(pc->phs.variant[PACKET_INFO_TEXT_REQ]) {

  case 100:
    return send_packet_info_text_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_INFO_TEXT_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_info_text_req(struct connection *pc, int loc, int visible_unit)
{
  struct packet_info_text_req packet, *real_packet = &packet;

  real_packet->loc = loc;
  real_packet->visible_unit = visible_unit;
  
  return send_packet_info_text_req(pc, real_packet);
}

static struct packet_info_text_message *receive_packet_info_text_message_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_info_text_message, real_packet);
  if (!dio_get_string(pc->json_packet, "message", real_packet->message, sizeof(real_packet->message))) {
    RECEIVE_PACKET_FIELD_ERROR(message);
  }

  log_packet("packet_info_text_message_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_info_text_message_100(struct connection *pc, const struct packet_info_text_message *packet)
{
  const struct packet_info_text_message *real_packet = packet;
  SEND_PACKET_START(PACKET_INFO_TEXT_MESSAGE);

  log_packet("packet_info_text_message_100: sending info about ()");

  dio_put_string(&dout, "message", real_packet->message);

  SEND_PACKET_END(PACKET_INFO_TEXT_MESSAGE);
}

static void ensure_valid_variant_packet_info_text_message(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_INFO_TEXT_MESSAGE] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_INFO_TEXT_MESSAGE variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_INFO_TEXT_MESSAGE] = variant;
}

struct packet_info_text_message *receive_packet_info_text_message(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_info_text_message at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_info_text_message(pc);

  switch(pc->phs.variant[PACKET_INFO_TEXT_MESSAGE]) {
  case 100:
    return receive_packet_info_text_message_100(pc);
  default:
    log_debug("Unknown PACKET_INFO_TEXT_MESSAGE variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_info_text_message(struct connection *pc, const struct packet_info_text_message *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_info_text_message from the client.");
  }
  ensure_valid_variant_packet_info_text_message(pc);

  switch(pc->phs.variant[PACKET_INFO_TEXT_MESSAGE]) {

  case 100:
    return send_packet_info_text_message_100(pc, packet);
  default:
    log_debug("Unknown PACKET_INFO_TEXT_MESSAGE variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_info_text_message(struct connection *pc, const char *message)
{
  struct packet_info_text_message packet, *real_packet = &packet;

  sz_strlcpy(real_packet->message, message);
  
  return send_packet_info_text_message(pc, real_packet);
}

static struct packet_goto_path_req *receive_packet_goto_path_req_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_goto_path_req, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_sint32(pc->json_packet, "goal", &real_packet->goal)) {
    RECEIVE_PACKET_FIELD_ERROR(goal);
  }

  log_packet("packet_goto_path_req_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_goto_path_req_100(struct connection *pc, const struct packet_goto_path_req *packet)
{
  const struct packet_goto_path_req *real_packet = packet;
  SEND_PACKET_START(PACKET_GOTO_PATH_REQ);

  log_packet("packet_goto_path_req_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_sint32(&dout, "goal", real_packet->goal);

  SEND_PACKET_END(PACKET_GOTO_PATH_REQ);
}

static void ensure_valid_variant_packet_goto_path_req(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_GOTO_PATH_REQ] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_GOTO_PATH_REQ variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_GOTO_PATH_REQ] = variant;
}

struct packet_goto_path_req *receive_packet_goto_path_req(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (!is_server()) {
    log_packet("Receiving packet_goto_path_req at the client.");
    return NULL;
  }
  ensure_valid_variant_packet_goto_path_req(pc);

  switch(pc->phs.variant[PACKET_GOTO_PATH_REQ]) {
  case 100:
    return receive_packet_goto_path_req_100(pc);
  default:
    log_debug("Unknown PACKET_GOTO_PATH_REQ variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_goto_path_req(struct connection *pc, const struct packet_goto_path_req *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (is_server()) {
    log_error("Sending packet_goto_path_req from the server.");
  }
  ensure_valid_variant_packet_goto_path_req(pc);

  switch(pc->phs.variant[PACKET_GOTO_PATH_REQ]) {

  case 100:
    return send_packet_goto_path_req_100(pc, packet);
  default:
    log_debug("Unknown PACKET_GOTO_PATH_REQ variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_goto_path_req(struct connection *pc, int unit_id, int goal)
{
  struct packet_goto_path_req packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->goal = goal;
  
  return send_packet_goto_path_req(pc, real_packet);
}

static struct packet_goto_path *receive_packet_goto_path_100(struct connection *pc)
{
  RECEIVE_PACKET_START(packet_goto_path, real_packet);
  if (!dio_get_uint32(pc->json_packet, "unit_id", &real_packet->unit_id)) {
    RECEIVE_PACKET_FIELD_ERROR(unit_id);
  }
  if (!dio_get_uint32(pc->json_packet, "length", &real_packet->length)) {
    RECEIVE_PACKET_FIELD_ERROR(length);
  }
  
  {
    int i;
  
    if (real_packet->length > MAX_LEN_ROUTE) {
      RECEIVE_PACKET_FIELD_ERROR(dir, ": truncation array");
    }
    for (i = 0; i < real_packet->length; i++) {
      {
        int readin;
    
        if (!dio_get_sint8(pc->json_packet, "dir", &readin)) {
          RECEIVE_PACKET_FIELD_ERROR(dir);
        }
        real_packet->dir[i] = readin;
      }
    }
  }
  if (!dio_get_sint32(pc->json_packet, "dest", &real_packet->dest)) {
    RECEIVE_PACKET_FIELD_ERROR(dest);
  }
  if (!dio_get_uint32(pc->json_packet, "turns", &real_packet->turns)) {
    RECEIVE_PACKET_FIELD_ERROR(turns);
  }

  log_packet("packet_goto_path_100: got info about ()");
  RECEIVE_PACKET_END(real_packet);
}

static int send_packet_goto_path_100(struct connection *pc, const struct packet_goto_path *packet)
{
  const struct packet_goto_path *real_packet = packet;
  SEND_PACKET_START(PACKET_GOTO_PATH);

  log_packet("packet_goto_path_100: sending info about ()");

  dio_put_uint32(&dout, "unit_id", real_packet->unit_id);
  dio_put_uint32(&dout, "length", real_packet->length);

    {
        dio_put_array_sint8(&dout, "dir", (void *)real_packet->dir, real_packet->length);
    } 
  dio_put_sint32(&dout, "dest", real_packet->dest);
  dio_put_uint32(&dout, "turns", real_packet->turns);

  SEND_PACKET_END(PACKET_GOTO_PATH);
}

static void ensure_valid_variant_packet_goto_path(struct connection *pc)
{
  int variant = -1;

  if(pc->phs.variant[PACKET_GOTO_PATH] != -1) {
    return;
  }

  if(FALSE) {
  } else if(TRUE) {
    variant = 100;
  } else {
    log_error("Unknown PACKET_GOTO_PATH variant for connection %s", conn_description(pc));
    variant = -2;       /* Keep something invalid. */
  }
  pc->phs.variant[PACKET_GOTO_PATH] = variant;
}

struct packet_goto_path *receive_packet_goto_path(struct connection *pc)
{
  if(!pc->used) {
    log_error("WARNING: trying to read data from the closed connection %s",
              conn_description(pc));
    return NULL;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, NULL);
  if (is_server()) {
    log_packet("Receiving packet_goto_path at the server.");
    return NULL;
  }
  ensure_valid_variant_packet_goto_path(pc);

  switch(pc->phs.variant[PACKET_GOTO_PATH]) {
  case 100:
    return receive_packet_goto_path_100(pc);
  default:
    log_debug("Unknown PACKET_GOTO_PATH variant for connection %s", conn_description(pc));
    return NULL;
  }
}
int send_packet_goto_path(struct connection *pc, const struct packet_goto_path *packet)
{
  if(!pc->used) {
    log_error("WARNING: trying to send data to the closed connection %s",
              conn_description(pc));
    return -1;
  }
  fc_assert_ret_val(NULL != pc->phs.variant, -1);
  if (!is_server()) {
    log_error("Sending packet_goto_path from the client.");
  }
  ensure_valid_variant_packet_goto_path(pc);

  switch(pc->phs.variant[PACKET_GOTO_PATH]) {

  case 100:
    return send_packet_goto_path_100(pc, packet);
  default:
    log_debug("Unknown PACKET_GOTO_PATH variant for connection %s", conn_description(pc));
    return -1;
  }
}
int dsend_packet_goto_path(struct connection *pc, int unit_id, int length, const enum direction8 *dir, int dest, int turns)
{
  struct packet_goto_path packet, *real_packet = &packet;

  real_packet->unit_id = unit_id;
  real_packet->length = length;
  {
    int i; /* this is for put. */

    for (i = 0; i < real_packet->length; i++) {
      real_packet->dir[i] = dir[i];
    }
  }
  real_packet->dest = dest;
  real_packet->turns = turns;
  
  return send_packet_goto_path(pc, real_packet);
}

