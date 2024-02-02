#pragma once
#include <types.h>

//INI variables
//Player Settings
extern bool iniFriendlyFire;
extern bool iniPlayerCanJackFriendlyPeds;
extern bool iniDisarmPlayerWhenShot;
extern bool iniSprintInsideInteriors;
extern bool iniAllowWeaponsInsideSafeHouse;
extern bool iniToggleFPSWalking;
extern bool iniDisableCarMidAirAndRollControl;
extern bool iniDisableForcedCarExplosionOnImpact;
extern bool iniDisableEngineSmoke;
extern bool iniDisableEngineFire;
extern bool iniLeaveEngineOnWhenExitingVehicles;
extern bool iniDisableWheelsAutoCenterOnCarExit;
extern bool iniDisableRagdollOnVehicleRoof;
extern float iniMaxVehicleSpeed;
extern bool iniDisableShallowWaterBikeJumpOut;
extern bool iniDisableRecording;
//Peds Settings
extern bool iniDisableWrithe;
extern bool iniDisableHurt;
extern bool iniDisarmPedWhenShot;
extern int iniDisarmChance;
extern bool iniDisarmIncludeLeftHand;
extern bool iniDisablePedOnlyDamagedByPlayer;
extern bool iniDisableSittingPedsInstantDeath;
extern bool iniDisableDeadPedsJumpOutOfVehicle;

//Globals
extern Player player;
extern Ped playerPed;
extern Vector3 playerLoc;

//Constants
const int PLAYER_CONTROL = 0;
const int HUD_WANTED_STARS = 1;
const int strp3off = 1585083310;
const Hash WEAPON_UNARMED = -1569615261;
const Hash WEAPON_STUNGUN = 911657153;
const float ENGINE_DAMAGE_RADBURST = 400.0f;
const float ENGINE_DAMAGE_ONFIRE = 0.0f;

//Ped move blend ratios
const float PEDMOVEBLENDRATIO_STILL = 0.0f;
const float PEDMOVEBLENDRATIO_WALK = 1.0f;
const float PEDMOVEBLENDRATIO_RUN = 2.0f;
const float PEDMOVEBLENDRATIO_SPRINT = 3.0f;

//Enums
enum eControlAction {
	INPUT_NEXT_CAMERA = 0,
	INPUT_LOOK_LR,
	INPUT_LOOK_UD,
	INPUT_LOOK_UP_ONLY,
	INPUT_LOOK_DOWN_ONLY,
	INPUT_LOOK_LEFT_ONLY,
	INPUT_LOOK_RIGHT_ONLY,
	INPUT_CINEMATIC_SLOWMO,
	INPUT_SCRIPTED_FLY_UD,
	INPUT_SCRIPTED_FLY_LR,
	INPUT_SCRIPTED_FLY_ZUP,
	INPUT_SCRIPTED_FLY_ZDOWN,
	INPUT_WEAPON_WHEEL_UD,
	INPUT_WEAPON_WHEEL_LR,
	INPUT_WEAPON_WHEEL_NEXT,
	INPUT_WEAPON_WHEEL_PREV,
	INPUT_SELECT_NEXT_WEAPON,
	INPUT_SELECT_PREV_WEAPON,
	INPUT_SKIP_CUTSCENE,
	INPUT_CHARACTER_WHEEL,
	INPUT_MULTIPLAYER_INFO,
	INPUT_SPRINT,
	INPUT_JUMP,
	INPUT_ENTER,
	INPUT_ATTACK,
	INPUT_AIM,
	INPUT_LOOK_BEHIND,
	INPUT_PHONE,
	INPUT_SPECIAL_ABILITY,
	INPUT_SPECIAL_ABILITY_SECONDARY,
	INPUT_MOVE_LR,
	INPUT_MOVE_UD,
	INPUT_MOVE_UP_ONLY,
	INPUT_MOVE_DOWN_ONLY,
	INPUT_MOVE_LEFT_ONLY,
	INPUT_MOVE_RIGHT_ONLY,
	INPUT_DUCK,
	INPUT_SELECT_WEAPON,
	INPUT_PICKUP,
	INPUT_SNIPER_ZOOM,
	INPUT_SNIPER_ZOOM_IN_ONLY,
	INPUT_SNIPER_ZOOM_OUT_ONLY,
	INPUT_SNIPER_ZOOM_IN_SECONDARY,
	INPUT_SNIPER_ZOOM_OUT_SECONDARY,
	INPUT_COVER,
	INPUT_RELOAD,
	INPUT_TALK,
	INPUT_DETONATE,
	INPUT_HUD_SPECIAL,
	INPUT_ARREST,
	INPUT_ACCURATE_AIM,
	INPUT_CONTEXT,
	INPUT_CONTEXT_SECONDARY,
	INPUT_WEAPON_SPECIAL,
	INPUT_WEAPON_SPECIAL_TWO,
	INPUT_DIVE,
	INPUT_DROP_WEAPON,
	INPUT_DROP_AMMO,
	INPUT_THROW_GRENADE,
	INPUT_VEH_MOVE_LR,
	INPUT_VEH_MOVE_UD,
	INPUT_VEH_MOVE_UP_ONLY,
	INPUT_VEH_MOVE_DOWN_ONLY,
	INPUT_VEH_MOVE_LEFT_ONLY,
	INPUT_VEH_MOVE_RIGHT_ONLY,
	INPUT_VEH_SPECIAL,
	INPUT_VEH_GUN_LR,
	INPUT_VEH_GUN_UD,
	INPUT_VEH_AIM,
	INPUT_VEH_ATTACK,
	INPUT_VEH_ATTACK2,
	INPUT_VEH_ACCELERATE,
	INPUT_VEH_BRAKE,
	INPUT_VEH_DUCK,
	INPUT_VEH_HEADLIGHT,
	INPUT_VEH_EXIT,
	INPUT_VEH_HANDBRAKE,
	INPUT_VEH_HOTWIRE_LEFT,
	INPUT_VEH_HOTWIRE_RIGHT,
	INPUT_VEH_LOOK_BEHIND,
	INPUT_VEH_CIN_CAM,
	INPUT_VEH_NEXT_RADIO,
	INPUT_VEH_PREV_RADIO,
	INPUT_VEH_NEXT_RADIO_TRACK,
	INPUT_VEH_PREV_RADIO_TRACK,
	INPUT_VEH_RADIO_WHEEL,
	INPUT_VEH_HORN,
	INPUT_VEH_FLY_THROTTLE_UP,
	INPUT_VEH_FLY_THROTTLE_DOWN,
	INPUT_VEH_FLY_YAW_LEFT,
	INPUT_VEH_FLY_YAW_RIGHT,
	INPUT_VEH_PASSENGER_AIM,
	INPUT_VEH_PASSENGER_ATTACK,
	INPUT_VEH_SPECIAL_ABILITY_FRANKLIN,
	INPUT_VEH_STUNT_UD,
	INPUT_VEH_CINEMATIC_UD,
	INPUT_VEH_CINEMATIC_UP_ONLY,
	INPUT_VEH_CINEMATIC_DOWN_ONLY,
	INPUT_VEH_CINEMATIC_LR,
	INPUT_VEH_SELECT_NEXT_WEAPON,
	INPUT_VEH_SELECT_PREV_WEAPON,
	INPUT_VEH_ROOF,
	INPUT_VEH_JUMP,
	INPUT_VEH_GRAPPLING_HOOK,
	INPUT_VEH_SHUFFLE,
	INPUT_VEH_DROP_PROJECTILE,
	INPUT_VEH_MOUSE_CONTROL_OVERRIDE,
	INPUT_VEH_FLY_ROLL_LR,
	INPUT_VEH_FLY_ROLL_LEFT_ONLY,
	INPUT_VEH_FLY_ROLL_RIGHT_ONLY,
	INPUT_VEH_FLY_PITCH_UD,
	INPUT_VEH_FLY_PITCH_UP_ONLY,
	INPUT_VEH_FLY_PITCH_DOWN_ONLY,
	INPUT_VEH_FLY_UNDERCARRIAGE,
	INPUT_VEH_FLY_ATTACK,
	INPUT_VEH_FLY_SELECT_NEXT_WEAPON,
	INPUT_VEH_FLY_SELECT_PREV_WEAPON,
	INPUT_VEH_FLY_SELECT_TARGET_LEFT,
	INPUT_VEH_FLY_SELECT_TARGET_RIGHT,
	INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE,
	INPUT_VEH_FLY_DUCK,
	INPUT_VEH_FLY_ATTACK_CAMERA,
	INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE,
	INPUT_VEH_SUB_TURN_LR,
	INPUT_VEH_SUB_TURN_LEFT_ONLY,
	INPUT_VEH_SUB_TURN_RIGHT_ONLY,
	INPUT_VEH_SUB_PITCH_UD,
	INPUT_VEH_SUB_PITCH_UP_ONLY,
	INPUT_VEH_SUB_PITCH_DOWN_ONLY,
	INPUT_VEH_SUB_THROTTLE_UP,
	INPUT_VEH_SUB_THROTTLE_DOWN,
	INPUT_VEH_SUB_ASCEND,
	INPUT_VEH_SUB_DESCEND,
	INPUT_VEH_SUB_TURN_HARD_LEFT,
	INPUT_VEH_SUB_TURN_HARD_RIGHT,
	INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE,
	INPUT_VEH_PUSHBIKE_PEDAL,
	INPUT_VEH_PUSHBIKE_SPRINT,
	INPUT_VEH_PUSHBIKE_FRONT_BRAKE,
	INPUT_VEH_PUSHBIKE_REAR_BRAKE,
	INPUT_MELEE_ATTACK_LIGHT,
	INPUT_MELEE_ATTACK_HEAVY,
	INPUT_MELEE_ATTACK_ALTERNATE,
	INPUT_MELEE_BLOCK,
	INPUT_PARACHUTE_DEPLOY,
	INPUT_PARACHUTE_DETACH,
	INPUT_PARACHUTE_TURN_LR,
	INPUT_PARACHUTE_TURN_LEFT_ONLY,
	INPUT_PARACHUTE_TURN_RIGHT_ONLY,
	INPUT_PARACHUTE_PITCH_UD,
	INPUT_PARACHUTE_PITCH_UP_ONLY,
	INPUT_PARACHUTE_PITCH_DOWN_ONLY,
	INPUT_PARACHUTE_BRAKE_LEFT,
	INPUT_PARACHUTE_BRAKE_RIGHT,
	INPUT_PARACHUTE_SMOKE,
	INPUT_PARACHUTE_PRECISION_LANDING,
	INPUT_MAP,
	INPUT_SELECT_WEAPON_UNARMED,
	INPUT_SELECT_WEAPON_MELEE,
	INPUT_SELECT_WEAPON_HANDGUN,
	INPUT_SELECT_WEAPON_SHOTGUN,
	INPUT_SELECT_WEAPON_SMG,
	INPUT_SELECT_WEAPON_AUTO_RIFLE,
	INPUT_SELECT_WEAPON_SNIPER,
	INPUT_SELECT_WEAPON_HEAVY,
	INPUT_SELECT_WEAPON_SPECIAL,
	INPUT_SELECT_CHARACTER_MICHAEL,
	INPUT_SELECT_CHARACTER_FRANKLIN,
	INPUT_SELECT_CHARACTER_TREVOR,
	INPUT_SELECT_CHARACTER_MULTIPLAYER,
	INPUT_SAVE_REPLAY_CLIP,
	INPUT_SPECIAL_ABILITY_PC,
	INPUT_CELLPHONE_UP,
	INPUT_CELLPHONE_DOWN,
	INPUT_CELLPHONE_LEFT,
	INPUT_CELLPHONE_RIGHT,
	INPUT_CELLPHONE_SELECT,
	INPUT_CELLPHONE_CANCEL,
	INPUT_CELLPHONE_OPTION,
	INPUT_CELLPHONE_EXTRA_OPTION,
	INPUT_CELLPHONE_SCROLL_FORWARD,
	INPUT_CELLPHONE_SCROLL_BACKWARD,
	INPUT_CELLPHONE_CAMERA_FOCUS_LOCK,
	INPUT_CELLPHONE_CAMERA_GRID,
	INPUT_CELLPHONE_CAMERA_SELFIE,
	INPUT_CELLPHONE_CAMERA_DOF,
	INPUT_CELLPHONE_CAMERA_EXPRESSION,
	INPUT_FRONTEND_DOWN,
	INPUT_FRONTEND_UP,
	INPUT_FRONTEND_LEFT,
	INPUT_FRONTEND_RIGHT,
	INPUT_FRONTEND_RDOWN,
	INPUT_FRONTEND_RUP,
	INPUT_FRONTEND_RLEFT,
	INPUT_FRONTEND_RRIGHT,
	INPUT_FRONTEND_AXIS_X,
	INPUT_FRONTEND_AXIS_Y,
	INPUT_FRONTEND_RIGHT_AXIS_X,
	INPUT_FRONTEND_RIGHT_AXIS_Y,
	INPUT_FRONTEND_PAUSE,
	INPUT_FRONTEND_PAUSE_ALTERNATE,
	INPUT_FRONTEND_ACCEPT,
	INPUT_FRONTEND_CANCEL,
	INPUT_FRONTEND_X,
	INPUT_FRONTEND_Y,
	INPUT_FRONTEND_LB,
	INPUT_FRONTEND_RB,
	INPUT_FRONTEND_LT,
	INPUT_FRONTEND_RT,
	INPUT_FRONTEND_LS,
	INPUT_FRONTEND_RS,
	INPUT_FRONTEND_LEADERBOARD,
	INPUT_FRONTEND_SOCIAL_CLUB,
	INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY,
	INPUT_FRONTEND_DELETE,
	INPUT_FRONTEND_ENDSCREEN_ACCEPT,
	INPUT_FRONTEND_ENDSCREEN_EXPAND,
	INPUT_FRONTEND_SELECT,
	INPUT_SCRIPT_LEFT_AXIS_X,
	INPUT_SCRIPT_LEFT_AXIS_Y,
	INPUT_SCRIPT_RIGHT_AXIS_X,
	INPUT_SCRIPT_RIGHT_AXIS_Y,
	INPUT_SCRIPT_RUP,
	INPUT_SCRIPT_RDOWN,
	INPUT_SCRIPT_RLEFT,
	INPUT_SCRIPT_RRIGHT,
	INPUT_SCRIPT_LB,
	INPUT_SCRIPT_RB,
	INPUT_SCRIPT_LT,
	INPUT_SCRIPT_RT,
	INPUT_SCRIPT_LS,
	INPUT_SCRIPT_RS,
	INPUT_SCRIPT_PAD_UP,
	INPUT_SCRIPT_PAD_DOWN,
	INPUT_SCRIPT_PAD_LEFT,
	INPUT_SCRIPT_PAD_RIGHT,
	INPUT_SCRIPT_SELECT,
	INPUT_CURSOR_ACCEPT,
	INPUT_CURSOR_CANCEL,
	INPUT_CURSOR_X,
	INPUT_CURSOR_Y,
	INPUT_CURSOR_SCROLL_UP,
	INPUT_CURSOR_SCROLL_DOWN,
	INPUT_ENTER_CHEAT_CODE,
	INPUT_INTERACTION_MENU,
	INPUT_MP_TEXT_CHAT_ALL,
	INPUT_MP_TEXT_CHAT_TEAM,
	INPUT_MP_TEXT_CHAT_FRIENDS,
	INPUT_MP_TEXT_CHAT_CREW,
	INPUT_PC_PUSH_TO_TALK,
	INPUT_CREATOR_LS,
	INPUT_CREATOR_RS,
	INPUT_CREATOR_LT,
	INPUT_CREATOR_RT,
	INPUT_CREATOR_MENU_TOGGLE,
	INPUT_CREATOR_ACCEPT,
	INPUT_CREATOR_DELETE,
	INPUT_ATTACK2,
	INPUT_RAPPEL_JUMP,
	INPUT_RAPPEL_LONG_JUMP,
	INPUT_RAPPEL_SMASH_WINDOW,
	INPUT_PREV_WEAPON,
	INPUT_NEXT_WEAPON,
	INPUT_MELEE_ATTACK1,
	INPUT_MELEE_ATTACK2,
	INPUT_WHISTLE,
	INPUT_MOVE_LEFT,
	INPUT_MOVE_RIGHT,
	INPUT_MOVE_UP,
	INPUT_MOVE_DOWN,
	INPUT_LOOK_LEFT,
	INPUT_LOOK_RIGHT,
	INPUT_LOOK_UP,
	INPUT_LOOK_DOWN,
	INPUT_SNIPER_ZOOM_IN,
	INPUT_SNIPER_ZOOM_OUT,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE,
	INPUT_VEH_MOVE_LEFT,
	INPUT_VEH_MOVE_RIGHT,
	INPUT_VEH_MOVE_UP,
	INPUT_VEH_MOVE_DOWN,
	INPUT_VEH_GUN_LEFT,
	INPUT_VEH_GUN_RIGHT,
	INPUT_VEH_GUN_UP,
	INPUT_VEH_GUN_DOWN,
	INPUT_VEH_LOOK_LEFT,
	INPUT_VEH_LOOK_RIGHT,
	INPUT_REPLAY_START_STOP_RECORDING,
	INPUT_REPLAY_START_STOP_RECORDING_SECONDARY,
	INPUT_SCALED_LOOK_LR,
	INPUT_SCALED_LOOK_UD,
	INPUT_SCALED_LOOK_UP_ONLY,
	INPUT_SCALED_LOOK_DOWN_ONLY,
	INPUT_SCALED_LOOK_LEFT_ONLY,
	INPUT_SCALED_LOOK_RIGHT_ONLY,
	INPUT_REPLAY_MARKER_DELETE,
	INPUT_REPLAY_CLIP_DELETE,
	INPUT_REPLAY_PAUSE,
	INPUT_REPLAY_REWIND,
	INPUT_REPLAY_FFWD,
	INPUT_REPLAY_NEWMARKER,
	INPUT_REPLAY_RECORD,
	INPUT_REPLAY_SCREENSHOT,
	INPUT_REPLAY_HIDEHUD,
	INPUT_REPLAY_STARTPOINT,
	INPUT_REPLAY_ENDPOINT,
	INPUT_REPLAY_ADVANCE,
	INPUT_REPLAY_BACK,
	INPUT_REPLAY_TOOLS,
	INPUT_REPLAY_RESTART,
	INPUT_REPLAY_SHOWHOTKEY,
	INPUT_REPLAY_CYCLEMARKERLEFT,
	INPUT_REPLAY_CYCLEMARKERRIGHT,
	INPUT_REPLAY_FOVINCREASE,
	INPUT_REPLAY_FOVDECREASE,
	INPUT_REPLAY_CAMERAUP,
	INPUT_REPLAY_CAMERADOWN,
	INPUT_REPLAY_SAVE,
	INPUT_REPLAY_TOGGLETIME,
	INPUT_REPLAY_TOGGLETIPS,
	INPUT_REPLAY_PREVIEW,
	INPUT_REPLAY_TOGGLE_TIMELINE,
	INPUT_REPLAY_TIMELINE_PICKUP_CLIP,
	INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP,
	INPUT_REPLAY_TIMELINE_PLACE_CLIP,
	INPUT_REPLAY_CTRL,
	INPUT_REPLAY_TIMELINE_SAVE,
	INPUT_REPLAY_PREVIEW_AUDIO,
	INPUT_VEH_DRIVE_LOOK,
	INPUT_VEH_DRIVE_LOOK2,
	INPUT_VEH_FLY_ATTACK2,
	INPUT_RADIO_WHEEL_UD,
	INPUT_RADIO_WHEEL_LR,
	INPUT_VEH_SLOWMO_UP,
	INPUT_VEH_SLOWMO_UP_ONLY,
	INPUT_VEH_SLOWMO_DOWN_ONLY,
	INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE,
	INPUT_VEH_HYDRAULICS_CONTROL_LEFT,
	INPUT_VEH_HYDRAULICS_CONTROL_RIGHT,
	INPUT_VEH_HYDRAULICS_CONTROL_UP,
	INPUT_VEH_HYDRAULICS_CONTROL_DOWN,
	INPUT_VEH_HYDRAULICS_CONTROL_LR,
	INPUT_VEH_HYDRAULICS_CONTROL_UD,
	INPUT_SWITCH_VISOR,
	INPUT_VEH_MELEE_HOLD,
	INPUT_VEH_MELEE_LEFT,
	INPUT_VEH_MELEE_RIGHT,
	INPUT_MAP_POI,
	INPUT_REPLAY_SNAPMATIC_PHOTO,
	INPUT_VEH_CAR_JUMP,
	INPUT_VEH_ROCKET_BOOST,
	INPUT_VEH_FLY_BOOST,
	INPUT_VEH_PARACHUTE,
	INPUT_VEH_BIKE_WINGS,
	INPUT_VEH_FLY_BOMB_BAY,
	INPUT_VEH_FLY_COUNTER,
	INPUT_VEH_TRANSFORM,
	INPUT_QUAD_LOCO_REVERSE,
	INPUT_RESPAWN_FASTER,
	INPUT_HUDMARKER_SELECT,
	INPUT_EAT_SNACK,
	INPUT_USE_ARMOR,
	MAX_INPUTS
};

enum eCamViewMode {
	CAM_VIEW_MODE_THIRD_PERSON_NEAR = 0,
	CAM_VIEW_MODE_THIRD_PERSON_MEDIUM,
	CAM_VIEW_MODE_THIRD_PERSON_FAR,
	CAM_VIEW_MODE_CINEMATIC,
	CAM_VIEW_MODE_FIRST_PERSON,
	NUM_CAM_VIEW_MODES,
	CAM_VIEW_MODE_THIRD_PERSON = CAM_VIEW_MODE_THIRD_PERSON_MEDIUM
};

enum ePedFlag {
	//Ped Config Flags
	PCF_NoCriticalHits = 2,
	PCF_NeverEverTargetThisPed = 9,		//script control over player targeting
	PCF_ForceDieIfInjured = 25,			//script command so missions peds die if injured
	PCF_ForceDieInCar = 28,				//don't fall out car if killed
	PCF_WillFlyThroughWindscreen = 32,	// Ped will fly through the vehicle windscreen upon a forward impact at high velocity
	PCF_DieWhenRagdoll = 33,
	PCF_AllowLockonToFriendlyPlayers = 45,
	PCF_IsSitting = 68,					//is the ped sitting
	PCF_UNUSED_REPLACE_ME = 125,
	PCF_CanAttackFriendly = 140,		//True allows this ped to attack peds theya re friendly with
	PCF_IsInjured = 166,				//When true, the ped will use injured movement anim sets and getup animations.
	PCF_EnableWeaponBlocking = 186,		//When enabled, Non-player peds can use WeaponBlocking behaviors
	PCF_HasHurtStarted = 187,
	PCF_DisableHurt = 188,						//Will prevent the peds go into hurt combat mode
	PCF_LeaveEngineOnWhenExitingVehicles = 241,	//The player will leave the engine running when leaving vehicles
	PCF_PlayerCanJackFriendlyPlayers = 252,		//If a friendly player is driving the vehicle, if the player taps to enter, they will enter as a passenger, if they hold, they'll jack the driver
	PCF_AllowPlayerLockOnIfFriendly = 266,		//If this ped is friendly with the player, this will allow the ped to lockon
	PCF_DisableGoToWritheWhenInjured = 281,		//If set, CPed::DAMAGED_GOTOWRITHE will no longer get set.  In particular, tazer hits wil no longer kill this ped in one hit.
	PCF_IgnoreInteriorCheckForSprinting = 427,

	//Ped Reset Flags
	PRF_HurtThisFrame = 127,					//The ped has entered the hurt state this frame
	PRF_BlockRagdollFromVehicleFallOff = 274,	//Disables ped from ragdolling while ot top of vehicles
	PRF_IsInVehicleChase = 338,
	PRF_RemoveHelmet = 367,						//Forces a ped to remove its helmet.
	PRF_IsRemovingHelmet = 368,					//Returns true if ped is removing its helmet.
	PRF_NeverRagdoll = 370,						//Disable all attempts by this ped to ragdoll.
	PRF_DisableWallHitAnimation = 371,			//Disable stuck wall hit animation for the ped this frame.
	PRF_SuppressTakedownMeleeActions = 438,		//This will suppress all takedown melee actions (RA_IS_TAKEDOWN or RA_IS_STEALTH_KILL, defined in action_table.meta)
	PRF_DisableShallowWaterBikeJumpOutThisFrame = 445
};

enum eCombatAttribute {
	CA_INVALID = -1,
	CA_USE_COVER = 0,
	CA_USE_VEHICLE = 1,
	CA_DO_DRIVEBYS = 2,
	CA_LEAVE_VEHICLES = 3,
	CA_CAN_USE_DYNAMIC_STRAFE_DECISIONS = 4,
	CA_ALWAYS_FIGHT = 5,
	CA_FLEE_WHILST_IN_VEHICLE = 6,
	CA_JUST_FOLLOW_VEHICLE = 7,
	CA_PLAY_REACTION_ANIMS = 8,
	CA_WILL_SCAN_FOR_DEAD_PEDS = 9,
	CA_IS_A_GUARD = 10,
	CA_JUST_SEEK_COVER = 11,
	CA_BLIND_FIRE_IN_COVER = 12,
	CA_AGGRESSIVE = 13,
	CA_CAN_INVESTIGATE = 14,
	CA_CAN_USE_RADIO = 15,
	CA_CAN_CAPTURE_ENEMY_PEDS = 16,
	CA_ALWAYS_FLEE = 17,
	CA_CAN_TAUNT_IN_VEHICLE = 20,
	CA_CAN_CHASE_TARGET_ON_FOOT = 21,
	CA_WILL_DRAG_INJURED_PEDS_TO_SAFETY = 22,
	CA_REQUIRES_LOS_TO_SHOOT = 23,
	CA_USE_PROXIMITY_FIRING_RATE = 24,
	CA_DISABLE_SECONDARY_TARGET = 25,
	CA_DISABLE_ENTRY_REACTIONS = 26,
	CA_PERFECT_ACCURACY = 27,
	CA_CAN_USE_FRUSTRATED_ADVANCE = 28,
	CA_MOVE_TO_LOCATION_BEFORE_COVER_SEARCH = 29,
	CA_CAN_SHOOT_WITHOUT_LOS = 30,
	CA_MAINTAIN_MIN_DISTANCE_TO_TARGET = 31,
	CA_CAN_USE_PEEKING_VARIATIONS = 34,
	CA_DISABLE_PINNED_DOWN = 35,
	CA_DISABLE_PIN_DOWN_OTHERS = 36,
	CA_OPEN_COMBAT_WHEN_DEFENSIVE_AREA_IS_REACHED = 37,
	CA_DISABLE_BULLET_REACTIONS = 38,
	CA_CAN_BUST = 39,
	CA_IGNORED_BY_OTHER_PEDS_WHEN_WANTED = 40,
	CA_CAN_COMMANDEER_VEHICLES = 41,
	CA_CAN_FLANK = 42,
	CA_SWITCH_TO_ADVANCE_IF_CANT_FIND_COVER = 43,
	CA_SWITCH_TO_DEFENSIVE_IF_IN_COVER = 44,
	CA_CLEAR_PRIMARY_DEFENSIVE_AREA_WHEN_REACHED = 45,
	CA_CAN_FIGHT_ARMED_PEDS_WHEN_NOT_ARMED = 46,
	CA_ENABLE_TACTICAL_POINTS_WHEN_DEFENSIVE = 47,
	CA_DISABLE_COVER_ARC_ADJUSTMENTS = 48,
	CA_USE_ENEMY_ACCURACY_SCALING = 49,
	CA_CAN_CHARGE = 50,
	CA_REMOVE_AREA_SET_WILL_ADVANCE_WHEN_DEFENSIVE_AREA_REACHED = 51,
	CA_USE_VEHICLE_ATTACK = 52,
	CA_USE_VEHICLE_ATTACK_IF_VEHICLE_HAS_MOUNTED_GUNS = 53,
	CA_ALWAYS_EQUIP_BEST_WEAPON = 54,
	CA_CAN_SEE_UNDERWATER_PEDS = 55,
	CA_DISABLE_AIM_AT_AI_TARGETS_IN_HELIS = 56,
	CA_DISABLE_SEEK_DUE_TO_LINE_OF_SIGHT = 57,
	CA_DISABLE_FLEE_FROM_COMBAT = 58,
	CA_DISABLE_TARGET_CHANGES_DURING_VEHICLE_PURSUIT = 59,
	CA_CAN_THROW_SMOKE_GRENADE = 60,
	CA_CLEAR_AREA_SET_DEFENSIVE_IF_DEFENSIVE_CANNOT_BE_REACHED = 62,
	CA_DISABLE_BLOCK_FROM_PURSUE_DURING_VEHICLE_CHASE = 64,
	CA_DISABLE_SPIN_OUT_DURING_VEHICLE_CHASE = 65,
	CA_DISABLE_CRUISE_IN_FRONT_DURING_BLOCK_DURING_VEHICLE_CHASE = 66,
	CA_CAN_IGNORE_BLOCKED_LOS_WEIGHTING = 67,
	CA_DISABLE_REACT_TO_BUDDY_SHOT = 68,
	CA_PREFER_NAVMESH_DURING_VEHICLE_CHASE = 69,
	CA_ALLOWED_TO_AVOID_OFFROAD_DURING_VEHICLE_CHASE = 70,
	CA_PERMIT_CHARGE_BEYOND_DEFENSIVE_AREA = 71,
	CA_USE_ROCKETS_AGAINST_VEHICLES_ONLY = 72,
	CA_DISABLE_TACTICAL_POINTS_WITHOUT_CLEAR_LOS = 73,
	CA_DISABLE_PULL_ALONGSIDE_DURING_VEHICLE_CHASE = 74,
	CA_DISABLE_ALL_RANDOMS_FLEE = 78,
	CA_WILL_GENERATE_DEAD_PED_SEEN_SCRIPT_EVENTS = 79,
	CA_USE_MAX_SENSE_RANGE_WHEN_RECEIVING_EVENTS = 80,
	CA_RESTRICT_IN_VEHICLE_AIMING_TO_CURRENT_SIDE = 81,
	CA_USE_DEFAULT_BLOCKED_LOS_POSITION_AND_DIRECTION = 82,
	CA_REQUIRES_LOS_TO_AIM = 83,
	CA_CAN_CRUISE_AND_BLOCK_IN_VEHICLE = 84,
	CA_PREFER_AIR_COMBAT_WHEN_IN_AIRCRAFT = 85,
	CA_ALLOW_DOG_FIGHTING = 86,
	CA_PREFER_NON_AIRCRAFT_TARGETS = 87,
	CA_PREFER_KNOWN_TARGETS_WHEN_COMBAT_CLOSEST_TARGET = 88,
	CA_FORCE_CHECK_ATTACK_ANGLE_FOR_MOUNTED_GUNS = 89,
	CA_BLOCK_FIRE_FOR_VEHICLE_PASSENGER_MOUNTED_GUNS = 90
};

enum eDispatchType {
	DT_INVALID,
	DT_POLICE_AUTOMOBILE,
	DT_POLICE_HELICOPTER,
	DT_FIRE_DEPARTMENT,
	DT_SWAT_AUTOMOBILE,
	DT_AMBULANCE_DEPARTMENT,
	DT_POLICE_RIDERS,
	DT_POLICE_VEHICLE_REQUEST,
	DT_POLICE_ROAD_BLOCK,
	DT_POLICE_AUTOMOBILE_WAIT_PULLED_OVER,
	DT_POLICE_AUTOMOBILE_WAIT_CRUISING,
	DT_GANGS,
	DT_SWAT_HELICOPTER,
	DT_POLICE_BOAT,
	DT_ARMY_VEHICLE,
	DT_BIKER_BACKUP,
	DT_ASSASSINS
};

enum eTaskVehicleChaseBehaviorFlags {
	VEHICLE_CHASE_CANT_BLOCK = 1,
	VEHICLE_CHASE_CANT_BLOCK_FROM_PURSUE = 2,
	VEHICLE_CHASE_CANT_PURSUE = 4,
	VEHICLE_CHASE_CANT_RAM = 8,
	VEHICLE_CHASE_CANT_SPIN_OUT = 16,
	VEHICLE_CHASE_CANT_MAKE_AGGRESSIVE_MOVE = 32,
	VEHICLE_CHASE_CANT_CRUISE_IN_FRONT_DURING_BLOCK = 64,
	VEHICLE_CHASE_USE_CONTINUOUS_RAM = 128,
	VEHICLE_CHASE_CANT_PULL_ALONGSIDE = 256,
	VEHICLE_CHASE_CANT_PULL_ALONGSIDE_INFRONT = 512
};

enum eVehStuckTypes {
	VEH_STUCK_ON_ROOF = 0,
	VEH_STUCK_ON_SIDE,
	VEH_STUCK_HUNG_UP,
	VEH_STUCK_JAMMED,
	VEH_STUCK_RESET_ALL
};

enum eVehicleSearchFlag {
	VEHICLE_SEARCH_FLAG_RETURN_LAW_ENFORCER_VEHICLES = 1,						//  Don't mind if the returned vehicle is a law enforcer
	VEHICLE_SEARCH_FLAG_RETURN_MISSION_VEHICLES = 2,							//  Don't mind if the returned vehicle has been created by a script
	VEHICLE_SEARCH_FLAG_RETURN_RANDOM_VEHICLES = 4,								//  Don't mind if the returned vehicle hasn't been created by a script (You will usually want to set this)
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_GROUP_MEMBERS = 8,			//  Don't mind if the returned vehicle contains group members
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_A_PLAYER = 16,				//  Don't mind if the returned vehicle contains a player ped
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_A_DEAD_OR_DYING_PED = 32,	//  Don't mind if the returned vehicle contains a dead or dying ped
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_WITH_PEDS_ENTERING_OR_EXITING = 64,		//  Don't mind if peds are in the process of entering or exiting the returned vehicle
	VEHICLE_SEARCH_FLAG_DO_NETWORK_CHECKS = 128,								//  Don't return a network clone or a deletable network object(?)
	VEHICLE_SEARCH_FLAG_CHECK_VEHICLE_OCCUPANTS_STATES = 256,					// Only return the vehicle if all its occupants have a PedState of PED_DRIVING or PED_DEAD (not sure if it matters if this is set or not)
	VEHICLE_SEARCH_FLAG_RETURN_LAW_ENFORCER_VEHICLES_ONLY = 1024,				//  Only return law enforcement vehicles
	VEHICLE_SEARCH_FLAG_ALLOW_VEHICLE_OCCUPANTS_TO_BE_PERFORMING_A_SCRIPTED_TASK = 2048, // Usually cars are only returned if all the occupants are performing their default task  (see also PERFORMING_A_NON_DEFAULT_TASK below. It's less strict)
	VEHICLE_SEARCH_FLAG_RETURN_HELICOPTORS_ONLY = 4096,							// Only return helicoptor (can be combimed with the boats_only and planes_only flags)
	VEHICLE_SEARCH_FLAG_RETURN_BOATS_ONLY = 8192,								// Only return boats (can be combimed with the helicoptor_only and planes_only flags)
	VEHICLE_SEARCH_FLAG_RETURN_PLANES_ONLY = 16384,								// Only return planes (can be combimed with the helicoptor_only and boats_only flags)
	VEHICLE_SEARCH_FLAG_ALLOW_LAW_ENFORCER_VEHICLES_WITH_WANTED_LEVEL = 32768,	// Allow return law enforcement vehs if player has a wanted level
	VEHICLE_SEARCH_FLAG_ALLOW_VEHICLE_OCCUPANTS_TO_BE_PERFORMING_A_NON_DEFAULT_TASK = 65536,	// Usually cars are only returned if all the occupants are performing their default task (see also PERFORMING_A_SCRIPTED_TASK above. It's stricter)
	VEHICLE_SEARCH_FLAG_ALLOW_TRAILERS = 131076,	// allow trailers to be included
	VEHICLE_SEARCH_FLAG_ALLOW_BLIMPS = 262144,		// allow blimps to be included
	VEHICLE_SEARCH_FLAG_ALLOW_SUBMARINES = 524288	// allow submarines to be included
};

const int defaultVSF = (
	VEHICLE_SEARCH_FLAG_RETURN_LAW_ENFORCER_VEHICLES | VEHICLE_SEARCH_FLAG_RETURN_MISSION_VEHICLES |
	VEHICLE_SEARCH_FLAG_RETURN_RANDOM_VEHICLES | VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_GROUP_MEMBERS |
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_A_PLAYER | VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_CONTAINING_A_DEAD_OR_DYING_PED |
	VEHICLE_SEARCH_FLAG_RETURN_VEHICLES_WITH_PEDS_ENTERING_OR_EXITING | VEHICLE_SEARCH_FLAG_ALLOW_VEHICLE_OCCUPANTS_TO_BE_PERFORMING_A_NON_DEFAULT_TASK |
	VEHICLE_SEARCH_FLAG_ALLOW_TRAILERS | VEHICLE_SEARCH_FLAG_ALLOW_BLIMPS | VEHICLE_SEARCH_FLAG_ALLOW_SUBMARINES);

enum eBone {
	Invalid = -1,
	SkelRoot = 0x0,
	SkelPelvis = 0x2E28,
	SkelLeftThigh = 0xE39F,
	SkelLeftCalf = 0xF9BB,
	SkelLeftFoot = 0x3779,
	SkelLeftToe0 = 0x83C,
	EOLeftFoot = 0x84C5,
	EOLeftToe = 0x68BD,
	IKLeftFoot = 0xFEDD,
	PHLeftFoot = 0xE175,
	MHLeftKnee = 0xB3FE,
	SkelRightThigh = 0xCA72,
	SkelRightCalf = 0x9000,
	SkelRightFoot = 0xCC4D,
	SkelRightToe0 = 0x512D,
	EORightFoot = 0x1096,
	EORightToe = 0x7163,
	IKRightFoot = 0x8AAE,
	PHRightFoot = 0x60E6,
	MHRightKnee = 0x3FCF,
	RBLeftThighRoll = 0x5C57,
	RBRightThighRoll = 0x192A,
	SkelSpineRoot = 0xE0FD,
	SkelSpine0 = 0x5C01,
	SkelSpine1 = 0x60F0,
	SkelSpine2 = 0x60F1,
	SkelSpine3 = 0x60F2,
	SkelLeftClavicle = 0xFCD9,
	SkelLeftUpperArm = 0xB1C5,
	SkelLeftForearm = 0xEEEB,
	SkelLeftHand = 0x49D9,
	SkelLeftFinger00 = 0x67F2,
	SkelLeftFinger01 = 0xFF9,
	SkelLeftFinger02 = 0xFFA,
	SkelLeftFinger10 = 0x67F3,
	SkelLeftFinger11 = 0x1049,
	SkelLeftFinger12 = 0x104A,
	SkelLeftFinger20 = 0x67F4,
	SkelLeftFinger21 = 0x1059,
	SkelLeftFinger22 = 0x105A,
	SkelLeftFinger30 = 0x67F5,
	SkelLeftFinger31 = 0x1029,
	SkelLeftFinger32 = 0x102A,
	SkelLeftFinger40 = 0x67F6,
	SkelLeftFinger41 = 0x1039,
	SkelLeftFinger42 = 0x103A,
	PHLeftHand = 0xEB95,
	IKLeftHand = 0x8CBD,
	RBLeftForeArmRoll = 0xEE4F,
	RBLeftArmRoll = 0x1470,
	MHLeftElbow = 0x58B7,
	SkelRightClavicle = 0x29D2,
	SkelRightUpperArm = 0x9D4D,
	SkelRightForearm = 0x6E5C,
	SkelRightHand = 0xDEAD,
	SkelRightFinger00 = 0xE5F2,
	SkelRightFinger01 = 0xFA10,
	SkelRightFinger02 = 0xFA11,
	SkelRightFinger10 = 0xE5F3,
	SkelRightFinger11 = 0xFA60,
	SkelRightFinger12 = 0xFA61,
	SkelRightFinger20 = 0xE5F4,
	SkelRightFinger21 = 0xFA70,
	SkelRightFinger22 = 0xFA71,
	SkelRightFinger30 = 0xE5F5,
	SkelRightFinger31 = 0xFA40,
	SkelRightFinger32 = 0xFA41,
	SkelRightFinger40 = 0xE5F6,
	SkelRightFinger41 = 0xFA50,
	SkelRightFinger42 = 0xFA51,
	PHRightHand = 0x6F06,
	IKRightHand = 0x188E,
	RBRightForeArmRoll = 0xAB22,
	RBRightArmRoll = 0x90FF,
	MHRightElbow = 0xBB0,
	SkelNeck1 = 0x9995,
	SkelHead = 0x796E,
	IKHead = 0x322C,
	FacialRoot = 0xFE2C,
	FBLeftBrowOut000 = 0xE3DB,
	FBLeftLidUpper000 = 0xB2B6,
	FBLeftEye000 = 0x62AC,
	FBLeftCheekBone000 = 0x542E,
	FBLeftLipCorner000 = 0x74AC,
	FBRightLidUpper000 = 0xAA10,
	FBRightEye000 = 0x6B52,
	FBRightCheekBone000 = 0x4B88,
	FBRightBrowOut000 = 0x54C,
	FBRightLipCorner000 = 0x2BA6,
	FBBrowCentre000 = 0x9149,
	FBUpperLipRoot000 = 0x4ED2,
	FBUpperLip000 = 0xF18F,
	FBLeftLipTop000 = 0x4F37,
	FBRightLipTop000 = 0x4537,
	FBJaw000 = 0xB4A0,
	FBLowerLipRoot000 = 0x4324,
	FBLowerLip000 = 0x508F,
	FBLeftLipBot000 = 0xB93B,
	FBRightLipBot000 = 0xC33B,
	FBTongue000 = 0xB987,
	RBNeck1 = 0x8B93,
	SPRLeftBreast = 0xFC8E,
	SPRRightBreast = 0x885F,
	IKRoot = 0xDD1C,
	SkelNeck2 = 0x5FD4,
	SkelPelvis1 = 0xD003,
	SkelPelvisRoot = 0x45FC,
	SkelSADDLE = 0x9524,
	MHLeftCalfBack = 0x1013,
	MHLeftThighBack = 0x600D,
	SMLeftSkirt = 0xC419,
	MHRightCalfBack = 0xB013,
	MHRightThighBack = 0x51A3,
	SMRightSkirt = 0x7712,
	SMMBackSkirtRoll = 0xDBB,
	SMLeftBackSkirtRoll = 0x40B2,
	SMRightBackSkirtRoll = 0xC141,
	SMMFrontSkirtRoll = 0xCDBB,
	SMLeftFrontSkirtRoll = 0x9B69,
	SMRightFrontSkirtRoll = 0x86F1,
	SMCockNBallsRoot = 0xC67D,
	SMCockNBalls = 0x9D34,
	MHLeftFinger00 = 0x8C63,
	MHLeftFingerBulge00 = 0x5FB8,
	MHLeftFinger10 = 0x8C53,
	MHLeftFingerTop00 = 0xA244,
	MHLeftHandSide = 0xC78A,
	MHWatch = 0x2738,
	MHLeftSleeve = 0x933C,
	MHRightFinger00 = 0x2C63,
	MHRightFingerBulge00 = 0x69B8,
	MHRightFinger10 = 0x2C53,
	MHRightFingerTop00 = 0xEF4B,
	MHRightHandSide = 0x68FB,
	MHRightSleeve = 0x92DC,
	FacialJaw = 0xB21,
	FacialUnderChin = 0x8A95,
	FacialLeftUnderChin = 0x234E,
	FacialChin = 0xB578,
	FacialChinSkinBottom = 0x98BC,
	FacialLeftChinSkinBottom = 0x3E8F,
	FacialRightChinSkinBottom = 0x9E8F,
	FacialTongueA = 0x4A7C,
	FacialTongueB = 0x4A7D,
	FacialTongueC = 0x4A7E,
	FacialTongueD = 0x4A7F,
	FacialTongueE = 0x4A80,
	FacialLeftTongueE = 0x35F2,
	FacialRightTongueE = 0x2FF2,
	FacialLeftTongueD = 0x35F1,
	FacialRightTongueD = 0x2FF1,
	FacialLeftTongueC = 0x35F0,
	FacialRightTongueC = 0x2FF0,
	FacialLeftTongueB = 0x35EF,
	FacialRightTongueB = 0x2FEF,
	FacialLeftTongueA = 0x35EE,
	FacialRightTongueA = 0x2FEE,
	FacialChinSkinTop = 0x7226,
	FacialLeftChinSkinTop = 0x3EB3,
	FacialChinSkinMid = 0x899A,
	FacialLeftChinSkinMid = 0x4427,
	FacialLeftChinSide = 0x4A5E,
	FacialRightChinSkinMid = 0xF5AF,
	FacialRightChinSkinTop = 0xF03B,
	FacialRightChinSide = 0xAA5E,
	FacialRightUnderChin = 0x2BF4,
	FacialLeftLipLowerSDK = 0xB9E1,
	FacialLeftLipLowerAnalog = 0x244A,
	FacialLeftLipLowerThicknessV = 0xC749,
	FacialLeftLipLowerThicknessH = 0xC67B,
	FacialLipLowerSDK = 0x7285,
	FacialLipLowerAnalog = 0xD97B,
	FacialLipLowerThicknessV = 0xC5BB,
	FacialLipLowerThicknessH = 0xC5ED,
	FacialRightLipLowerSDK = 0xA034,
	FacialRightLipLowerAnalog = 0xC2D9,
	FacialRightLipLowerThicknessV = 0xC6E9,
	FacialRightLipLowerThicknessH = 0xC6DB,
	FacialNose = 0x20F1,
	FacialLeftNostril = 0x7322,
	FacialLeftNostrilThickness = 0xC15F,
	FacialNoseLower = 0xE05A,
	FacialLeftNoseLowerThickness = 0x79D5,
	FacialRightNoseLowerThickness = 0x7975,
	FacialNoseTip = 0x6A60,
	FacialRightNostril = 0x7922,
	FacialRightNostrilThickness = 0x36FF,
	FacialNoseUpper = 0xA04F,
	FacialLeftNoseUpper = 0x1FB8,
	FacialNoseBridge = 0x9BA3,
	FacialLeftNasolabialFurrow = 0x5ACA,
	FacialLeftNasolabialBulge = 0xCD78,
	FacialLeftCheekLower = 0x6907,
	FacialLeftCheekLowerBulge1 = 0xE3FB,
	FacialLeftCheekLowerBulge2 = 0xE3FC,
	FacialLeftCheekInner = 0xE7AB,
	FacialLeftCheekOuter = 0x8161,
	FacialLeftEyesackLower = 0x771B,
	FacialLeftEyeball = 0x1744,
	FacialLeftEyelidLower = 0x998C,
	FacialLeftEyelidLowerOuterSDK = 0xFE4C,
	FacialLeftEyelidLowerOuterAnalog = 0xB9AA,
	FacialLeftEyelashLowerOuter = 0xD7F6,
	FacialLeftEyelidLowerInnerSDK = 0xF151,
	FacialLeftEyelidLowerInnerAnalog = 0x8242,
	FacialLeftEyelashLowerInner = 0x4CCF,
	FacialLeftEyelidUpper = 0x97C1,
	FacialLeftEyelidUpperOuterSDK = 0xAF15,
	FacialLeftEyelidUpperOuterAnalog = 0x67FA,
	FacialLeftEyelashUpperOuter = 0x27B7,
	FacialLeftEyelidUpperInnerSDK = 0xD341,
	FacialLeftEyelidUpperInnerAnalog = 0xF092,
	FacialLeftEyelashUpperInner = 0x9B1F,
	FacialLeftEyesackUpperOuterBulge = 0xA559,
	FacialLeftEyesackUpperInnerBulge = 0x2F2A,
	FacialLeftEyesackUpperOuterFurrow = 0xC597,
	FacialLeftEyesackUpperInnerFurrow = 0x52A7,
	FacialForehead = 0x9218,
	FacialLeftForeheadInner = 0x843,
	FacialLeftForeheadInnerBulge = 0x767C,
	FacialLeftForeheadOuter = 0x8DCB,
	FacialSkull = 0x4221,
	FacialForeheadUpper = 0xF7D6,
	FacialLeftForeheadUpperInner = 0xCF13,
	FacialLeftForeheadUpperOuter = 0x509B,
	FacialRightForeheadUpperInner = 0xCEF3,
	FacialRightForeheadUpperOuter = 0x507B,
	FacialLefttemple = 0xAF79,
	FacialLeftEar = 0x19DD,
	FacialLeftEarLower = 0x6031,
	FacialLeftmasseter = 0x2810,
	FacialLeftJawRecess = 0x9C7A,
	FacialLeftCheekOuterSkin = 0x14A5,
	FacialRightCheekLower = 0xF367,
	FacialRightCheekLowerBulge1 = 0x599B,
	FacialRightCheekLowerBulge2 = 0x599C,
	FacialRightmasseter = 0x810,
	FacialRightJawRecess = 0x93D4,
	FacialRightEar = 0x1137,
	FacialRightEarLower = 0x8031,
	FacialRightEyesackLower = 0x777B,
	FacialRightNasolabialBulge = 0xD61E,
	FacialRightCheekOuter = 0xD32,
	FacialRightCheekInner = 0x737C,
	FacialRightNoseUpper = 0x1CD6,
	FacialRightForeheadInner = 0xE43,
	FacialRightForeheadInnerBulge = 0x769C,
	FacialRightForeheadOuter = 0x8FCB,
	FacialRightCheekOuterSkin = 0xB334,
	FacialRightEyesackUpperInnerFurrow = 0x9FAE,
	FacialRightEyesackUpperOuterFurrow = 0x140F,
	FacialRightEyesackUpperInnerBulge = 0xA359,
	FacialRightEyesackUpperOuterBulge = 0x1AF9,
	FacialRightNasolabialFurrow = 0x2CAA,
	FacialRightTemple = 0xAF19,
	FacialRightEyeball = 0x1944,
	FacialRightEyelidUpper = 0x7E14,
	FacialRightEyelidUpperOuterSDK = 0xB115,
	FacialRightEyelidUpperOuterAnalog = 0xF25A,
	FacialRightEyelashUpperOuter = 0xE0A,
	FacialRightEyelidUpperInnerSDK = 0xD541,
	FacialRightEyelidUpperInnerAnalog = 0x7C63,
	FacialRightEyelashUpperInner = 0x8172,
	FacialRightEyelidLower = 0x7FDF,
	FacialRightEyelidLowerOuterSDK = 0x1BD,
	FacialRightEyelidLowerOuterAnalog = 0x457B,
	FacialRightEyelashLowerOuter = 0xBE49,
	FacialRightEyelidLowerInnerSDK = 0xF351,
	FacialRightEyelidLowerInnerAnalog = 0xE13,
	FacialRightEyelashLowerInner = 0x3322,
	FacialLeftLipUpperSDK = 0x8F30,
	FacialLeftLipUpperAnalog = 0xB1CF,
	FacialLeftLipUpperThicknessH = 0x37CE,
	FacialLeftLipUpperThicknessV = 0x38BC,
	FacialLipUpperSDK = 0x1774,
	FacialLipUpperAnalog = 0xE064,
	FacialLipUpperThicknessH = 0x7993,
	FacialLipUpperThicknessV = 0x7981,
	FacialLeftLipCornerSDK = 0xB1C,
	FacialLeftLipCornerAnalog = 0xE568,
	FacialLeftLipCornerThicknessUpper = 0x7BC,
	FacialLeftLipCornerThicknessLower = 0xDD42,
	FacialRightLipUpperSDK = 0x7583,
	FacialRightLipUpperAnalog = 0x51CF,
	FacialRightLipUpperThicknessH = 0x382E,
	FacialRightLipUpperThicknessV = 0x385C,
	FacialRightLipCornerSDK = 0xB3C,
	FacialRightLipCornerAnalog = 0xEE0E,
	FacialRightLipCornerThicknessUpper = 0x54C3,
	FacialRightLipCornerThicknessLower = 0x2BBA,
	MHMulletRoot = 0x3E73,
	MHMulletScaler = 0xA1C2,
	MHHairScale = 0xC664,
	MHHairCrown = 0x1675,
	SMTorch = 0x8D6,
	FXLight = 0x8959,
	FXLightScale = 0x5038,
	FXLightSwitch = 0xE18E,
	BagRoot = 0xAD09,
	BagPivotRoot = 0xB836,
	BagPivot = 0x4D11,
	BagBody = 0xAB6D,
	BagBoneRight = 0x937,
	BagBoneLeft = 0x991,
	SMLifeSaverFront = 0x9420,
	SMRightPouchesRoot = 0x2962,
	SMRightPouches = 0x4141,
	SMLeftPouchesRoot = 0x2A02,
	SMLeftPouches = 0x4B41,
	SMSuitBackFlapper = 0xDA2D,
	SPRCopRadio = 0x8245,
	SMLifeSaverBack = 0x2127,
	MHBlushSlider = 0xA0CE,
	SkelTail01 = 0x347,
	SkelTail02 = 0x348,
	MHLeftConcertinaB = 0xC988,
	MHLeftConcertinaA = 0xC987,
	MHRightConcertinaB = 0xC8E8,
	MHRightConcertinaA = 0xC8E7,
	MHLeftShoulderBladeRoot = 0x8711,
	MHLeftShoulderBlade = 0x4EAF,
	MHRightShoulderBladeRoot = 0x3A0A,
	MHRightShoulderBlade = 0x54AF,
	FBRightEar000 = 0x6CDF,
	SPRRightEar = 0x63B6,
	FBLeftEar000 = 0x6439,
	SPRLeftEar = 0x5B10,
	FBTongueA000 = 0x4206,
	FBTongueB000 = 0x4207,
	FBTongueC000 = 0x4208,
	SkelLeftToe1 = 0x1D6B,
	SkelRightToe1 = 0xB23F,
	SkelTail03 = 0x349,
	SkelTail04 = 0x34A,
	SkelTail05 = 0x34B,
	SPRGonadsRoot = 0xBFDE,
	SPRGonads = 0x1C00,
	FBLeftBrowOut001 = 0xE3DB,
	FBLeftLidUpper001 = 0xB2B6,
	FBLeftEye001 = 0x62AC,
	FBLeftCheekBone001 = 0x542E,
	FBLeftLipCorner001 = 0x74AC,
	FBRightLidUpper001 = 0xAA10,
	FBRightEye001 = 0x6B52,
	FBRightCheekBone001 = 0x4B88,
	FBRightBrowOut001 = 0x54C,
	FBRightLipCorner001 = 0x2BA6,
	FBBrowCentre001 = 0x9149,
	FBUpperLipRoot001 = 0x4ED2,
	FBUpperLip001 = 0xF18F,
	FBLeftLipTop001 = 0x4F37,
	FBRightLipTop001 = 0x4537,
	FBJaw001 = 0xB4A0,
	FBLowerLipRoot001 = 0x4324,
	FBLowerLip001 = 0x508F,
	FBLeftLipBot001 = 0xB93B,
	FBRightLipBot001 = 0xC33B,
	FBTongue001 = 0xB987
};