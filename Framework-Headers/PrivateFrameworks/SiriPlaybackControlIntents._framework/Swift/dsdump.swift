 protocol SiriPlaybackControlIntents.DeviceNLContextProviding // 1 requirements
 {
	// class base protocol
 }
 protocol SiriPlaybackControlIntents.AnalyticsService // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriPlaybackControlIntents.SlotDisambiguatingIntent // 1 requirements
 {
	// class getter
 }
 protocol SiriPlaybackControlIntents.ContextItem // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol SiriPlaybackControlIntents.HomeAutomationCapableIntent // 9 requirements
 {
	// class base protocol
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlIntents.DeviceDisambiguationProvider // 1 requirements
 {
	// class base protocol
 }
 protocol SiriPlaybackControlIntents.DisambiguationProvider // 3 requirements
 {
	// class method
	// class method
	// class method
 }
 protocol SiriPlaybackControlIntents.DeviceSelectableIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.AppBundleIdentifiers // 15 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.ControlsDialogParameters // 12 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.SmartControlsDialogParameters // 7 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.DeviceQueryableIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.ContextProviding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriPlaybackControlIntents.NLContextProviding // 12 requirements
 {
	// class associated type access function
	// class getter
	// class getter
	// class getter
	// class getter
	// class getter
	// class getter
	// class getter
	// class getter
	// class getter
	// class method
	// class method
 }

 struct SiriPlaybackControlIntents.DeviceContextProvider {

	// Properties
	let analyticsService : AnalyticsService // +0x0
 }

 class SiriPlaybackControlIntents.DeviceSelectingUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceSelector : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : ˚
	let contextUtil : ContextUtil
	let analyticsService : AnalyticsService

	// Swift methods
	0x6550  func <stripped> // method 
	0x6970  func <stripped> // method 
	0x7850  func <stripped> // method 
	0x9410  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.Speaker {

	// Properties
	var hasRoutes : Bool // +0x0
	var hasThreeOrMoreRooms : Bool // +0x1
	var isAllSpeakers : Bool // +0x2
	var isInHere : Bool // +0x3
	var firstSpeakerName : String? // +0x8
	var secondSpeakerName : String? // +0x18
	var firstRoom : String? // +0x28
	var secondRoom : String? // +0x38
	var otherRoomsCount : Int? // +0x48
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case hasRoutes  
	case hasThreeOrMoreRooms  
	case isAllSpeakers  
	case isInHere  
	case firstSpeakerName  
	case secondSpeakerName  
	case firstRoom  
	case secondRoom  
	case otherRoomsCount  
 }

 class SiriPlaybackControlIntents.AnalyticsServiceImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AnalyticsService {
	// Swift methods
 }

 class SiriPlaybackControlIntents.SkipContentIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfea4000378d8 (0x6a4000378d8) in binary!
	0xea78  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xea6c00037798 (0x26c00037798) in binary!
	0xea60  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd84600037770 (0x4600037770) in binary!
	0x58000000c  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe5c00037890 (0x65c00037890) in binary!
	0xea30  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xea2400037730 (0x22400037730) in binary!
	0xea18  @objc SkipContentIntentHandler.(null) <stripped>

	// Swift methods
	0x1b0e0  func <stripped> // method 
	0x1b390  func <stripped> // method 
	0x1b710  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfe5c00037890 (0x65c00037890) in binary!
	0xea30  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xea2400037730 (0x22400037730) in binary!
	0xea18  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd7fe00037728 (0x7fe00037728) in binary!
	0x18000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe14000378e0 (0x614000378e0) in binary!
	0x68000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfdfc00037830 (0x5fc00037830) in binary!
	0xe9d0  @objc SetRepeatStateIntentHandler.(null) <stripped>

	// Swift methods
	0x1cbc0  func <stripped> // method 
	0x1ce70  func <stripped> // method 
	0x1d1f0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.PauseMediaFlowDelegate {
 class SiriPlaybackControlIntents.PauseDialogTemplatingService {
 class SiriPlaybackControlIntents.PauseAceViewProvider {
 class SiriPlaybackControlIntents.PauseMediaContextProvider {
 enum SiriPlaybackControlIntents.DeviceSelectionControlType {

	// Properties
	case pausable  
	case resumable  
	case videoControls  
	case any  
 }

 struct SiriPlaybackControlIntents.SimulatedContextProvider { }

 class SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfdfc00037830 (0x5fc00037830) in binary!
	0xe9d0  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe9c4000376b8 (0x1c4000376b8) in binary!
	0xe9b8  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe9ac00037690 (0x1ac00037690) in binary!
	0xd792  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x65cfff6e4b8  @objc SkipTimeIntentHandler.(null) <stripped>
	0x634fff6f850  @objc SkipTimeIntentHandler.ã]Iº¯ˇˇˇˇˇˇ <stripped>
	0xfff6fe38  @objc SkipTimeIntentHandler.¿HâM–âU¥HâuêIâˇLãm LãuHã]Iº¯ˇˇˇˇˇˇ <stripped>

	// Swift methods
	0x2a240  func <stripped> // method 
	0x2a4f0  func <stripped> // method 
	0x2a630  func <stripped> // method 
	0x2a9b0  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.ControlsFlowProvider { }

 enum SiriPlaybackControlIntents.ControlsFlowFrameProvider { }

 class SiriPlaybackControlIntents.ControlsAppResolutionService {
 struct SiriPlaybackControlIntents.HomeAutomationNodes { }

 enum SiriPlaybackControlIntents.DeviceType {

	// Properties
	case appleTv  
	case television  
	case homepod  
	case speaker  
	case airportExpress  
	case iPad  
	case iPhone  
	case airplaySpeaker  
	case bluetoothSpeaker  
 }

 enum SiriPlaybackControlIntents.PlaceHint {

	// Properties
	case here  
	case house  
 }

 enum SiriPlaybackControlIntents.MediaDeviceNLContextProvider { }

 class SiriPlaybackControlIntents.BaseDialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let testMode : Bool
	let testGlobals : [String : Any]
	let globals : [String : Any]

	// Swift methods
	0x3a0a0  func <stripped> // method 
	0x3a860  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.ResumeMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
	let aceServiceHelper : AceServiceHelper

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfdac000377e0 (0x5ac000377e0) in binary!
	0xe980  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe97400037648 (0x17400037648) in binary!
	0xe968  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd74e00037678 (0x74e00037678) in binary!
	0x68000000c  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfd6400037798 (0x56400037798) in binary!
	0xe938  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe92c000375e8 (0x12c000375e8) in binary!
	0xe920  @objc ResumeMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x3afe0  func <stripped> // method 
	0x3bfc0  func <stripped> // method 
	0x3c340  func <stripped> // method 
	0x3c440  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfd6400037798 (0x56400037798) in binary!
	0xe938  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe92c000375e8 (0x12c000375e8) in binary!
	0xe920  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe914000375c0 (0x114000375c0) in binary!
	0xd6fa  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7ff70  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x574fff80778  @objc SetAudioLanguageIntentHandler.(null) <stripped>
	0x54cfff80de0  @objc SetAudioLanguageIntentHandler.  <stripped>

	// Swift methods
	0x3eeb0  func <stripped> // method 
	0x3f1d0  func <stripped> // method 
	0x3fd30  func <stripped> // method 
	0x40010  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.LanguageNLContextProvider { }

 class SiriPlaybackControlIntents.WhatDidTheySayFlowDelegate {
 class SiriPlaybackControlIntents.WhatDidTheySayDialogTemplatingService {
 class SiriPlaybackControlIntents.WhatDidTheySayAceViewProvider {
 class SiriPlaybackControlIntents.WhatDidTheySayContextProvider {
 class SiriPlaybackControlIntents.SetAudioLanguageFlowDelegate {
 class SiriPlaybackControlIntents.SetAudioLanguageDialogTemplatingService {
 class SiriPlaybackControlIntents.SetAudioLanguageAceViewProvider {
 class SiriPlaybackControlIntents.SetAudioLanguageContextProvider {
 class SiriPlaybackControlIntents.SetShuffleStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfcfc00037730 (0x4fc00037730) in binary!
	0xe8d0  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe8c400037560 (0xc400037560) in binary!
	0xe8b8  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd69e000375c8 (0x69e000375c8) in binary!
	0x58000000c  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfcb4000376e8 (0x4b4000376e8) in binary!
	0xe888  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe87c00037500 (0x7c00037500) in binary!
	0xe870  @objc SetShuffleStateIntentHandler.(null) <stripped>

	// Swift methods
	0x4d350  func <stripped> // method 
	0x4d600  func <stripped> // method 
	0x4d980  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.MediaPlayerDeviceDisambiguationProvider { }

 class SiriPlaybackControlIntents.SkipTimeFlowDelegate {
 class SiriPlaybackControlIntents.SkipTimeDialogTemplatingService {
 class SiriPlaybackControlIntents.SkipTimeAceViewProvider {
 class SiriPlaybackControlIntents.SkipTimeContextProvider {
 class SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	var timer : OS_dispatch_source_timer?
	var queue : OS_dispatch_queue?
	var assertion : RBSAssertion?
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfcb4000376e8 (0x4b4000376e8) in binary!
	0xe888  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe87c00037500 (0x7c00037500) in binary!
	0xe870  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd65600037580 (0x65600037580) in binary!
	0x28000000c  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe8c000375e0 (0x68c000375e0) in binary!
	0xfc60  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x494fffa3418  @objc WhatDidTheySayIntentHandler.(null) <stripped>

	// Swift methods
	0x54820  func <stripped> // method 
	0x55380  func <stripped> // method 
	0x56760  func <stripped> // method 
	0x56860  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.AceServiceHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : ˚
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : üÍ

	// Swift methods
 }

 class SiriPlaybackControlIntents.LanguageControlsDialogProvider : BaseDialogProvider {
	// Swift methods
 }

 struct SiriPlaybackControlIntents.WhatDidTheySayHandledParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var isSameRoomOnly : Bool // +0x59
	var smartControlFarRooms : Bool // +0x5a
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationWhatDidTheySayParameters {

	// Properties
	let rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.ConfirmWhatDidTheySayParameters {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.AudioSetSuccessfullyParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var isSameRoomOnly : Bool // +0x59
	var smartControlFarRooms : Bool // +0x5a
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationAudioLanguageParameters {

	// Properties
	let rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.AudioAlreadySetParameters {

	// Properties
	var requestedLanguage : String? // +0x0
 }

 struct SiriPlaybackControlIntents.AudioLanguageNotAvailableParameters {

	// Properties
	var requestedLanguage : String? // +0x0
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSetAudioLanguageParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.SubtitleSetSuccessfullyParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var isSameRoomOnly : Bool // +0x59
	var smartControlFarRooms : Bool // +0x5a
	var isOn : Bool // +0x5b
	var isClosedCaptionRequest : Bool // +0x5c
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSubtitlesParameters {

	// Properties
	let rooms : [String] // +0x0
	let isEnable : Bool // +0x8
	var isClosedCaptionRequest : Bool // +0x9
	var hasInHere : Bool // +0xa
 }

 struct SiriPlaybackControlIntents.NoRelevantDeviceParameters {

	// Properties
	var deviceIsInferred : Bool // +0x0
 }

 struct SiriPlaybackControlIntents.SubtitleAlreadyOnParameters {

	// Properties
	var requestedLanguage : String? // +0x0
 }

 struct SiriPlaybackControlIntents.SubtitleLanguageNotAvailableParameters {

	// Properties
	var requestedLanguage : String? // +0x0
	var isClosedCaptionRequest : Bool // +0x10
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSetSubtitleStateParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableSubtitles : Bool // +0x8
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case requestedLanguage  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case requestedLanguage  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isOn  
	case isClosedCaptionRequest  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnable  
	case isClosedCaptionRequest  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case deviceIsInferred  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case requestedLanguage  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case requestedLanguage  
	case isClosedCaptionRequest  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnableSubtitles  
 }

 class SiriPlaybackControlIntents.SkipContentFlowDelegate {
 class SiriPlaybackControlIntents.SkipContentDialogTemplatingService {
 class SiriPlaybackControlIntents.SkipContentAceViewProvider {
 class SiriPlaybackControlIntents.SkipContentContextProvider {
 class SiriPlaybackControlIntents.SeekTimeFlowDelegate {
 class SiriPlaybackControlIntents.SeekToTimeDialogTemplatingService {
 class SiriPlaybackControlIntents.SeekToTimeAceViewProvider {
 class SiriPlaybackControlIntents.SeekTimeContextProvider {
 struct SiriPlaybackControlIntents.MusicBundleIds: AppBundleIdentifiers {

	// Properties
	var iOS : String // +0x0
	var homePod : String // +0x10
	var appleTV : String // +0x20
	var macOS : String // +0x30
	var watchOS : String // +0x40
 }

 struct SiriPlaybackControlIntents.PodcastsBundleIds: AppBundleIdentifiers {

	// Properties
	var iOS : String // +0x0
	var homePod : String // +0x10
	var appleTV : String // +0x20
	var macOS : String // +0x30
	var watchOS : String // +0x40
 }

 struct SiriPlaybackControlIntents.AudioBooksBundleIds: AppBundleIdentifiers {

	// Properties
	var iOS : String // +0x0
	var homePod : String // +0x10
	var appleTV : String // +0x20
	var macOS : String // +0x30
	var watchOS : String // +0x40
 }

 class SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfc4c00037680 (0x44c00037680) in binary!
	0xe820  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe81400037480 (0x1400037480) in binary!
	0xe808  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe7fc00037458 (0x7fc00037458) in binary!
	0xd5e2  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe1f38  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x40cffff5f90  @objc SetSubtitleStateIntentHandler.(null) <stripped>
	0x3e4ffff67c8  @objc SetSubtitleStateIntentHandler.ç=ö¥ <stripped>

	// Swift methods
	0x700a0  func <stripped> // method 
	0x703c0  func <stripped> // method 
	0x70f20  func <stripped> // method 
	0x71200  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.MediaDeviceDisambiguationProvider { }

 enum SiriPlaybackControlIntents.LanguageDisambiguationProvider { }

 class SiriPlaybackControlIntents.SetSubtitleStateFlowDelegate {
 class SiriPlaybackControlIntents.SetSubtitleStateDialogTemplatingService {
 class SiriPlaybackControlIntents.SetSubtitleStateAceViewProvider {
 class SiriPlaybackControlIntents.SetSubtitleStateContextProvider {
 class SiriPlaybackControlIntents.SetRepeatStateFlowDelegate {
 class SiriPlaybackControlIntents.SetRepeatStateDialogTemplatingService {
 class SiriPlaybackControlIntents.SetRepeatStateAceViewProvider {
 class SiriPlaybackControlIntents.SetRepeatStateContextProvider {
 class SiriPlaybackControlIntents.SetShuffleStateFlowDelegate {
 class SiriPlaybackControlIntents.SetShuffleStateDialogTemplatingService {
 class SiriPlaybackControlIntents.SetShuffleStateAceViewProvider {
 class SiriPlaybackControlIntents.SetShuffleStateContextProvider {
 enum SiriPlaybackControlIntents.ControlsError {

	// Properties
	case unknown  
 }

 enum SiriPlaybackControlIntents.MediaPlayerDeviceNLContextProvider { }

 struct SiriPlaybackControlIntents.MediaPlayerNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : âÿ
 }

 enum SiriPlaybackControlIntents.ConfirmationStateValue {

	// Properties
	case yes  
	case no  
	case cancel  
 }

 enum SiriPlaybackControlIntents.Attributes {

	// Properties
	case again  
	case ending  
 }

 enum SiriPlaybackControlIntents.BoolSettingState {

	// Properties
	case on  
	case off  
 }

 enum SiriPlaybackControlIntents.BoolSettingVerb {

	// Properties
	case toggle  
	case set  
	case enable  
	case disable  
 }

 enum SiriPlaybackControlIntents.MediaType {

	// Properties
	case music  
	case podcast  
	case playlist  
	case musicVideo  
	case song  
	case audioBook  
	case video  
	case iTunesU  
	case compilation  
	case album  
	case tvShow  
	case show  
	case radioShow  
	case podcastStation  
	case musicPlaylist  
	case station  
	case episode  
	case extendedPlay  
	case longPlay  
	case single  
	case genre  
	case news  
	case ringtone  
	case sounds  
	case movie  
 }

 enum SiriPlaybackControlIntents.Verb {

	// Properties
	case pause  
	case resume  
	case stop  
	case skip  
	case previous  
	case seek  
	case skipForward  
	case skipBackward  
	case repeat  
	case shuffle  
 }

 enum SiriPlaybackControlIntents.MobileGestalt { }

 enum SiriPlaybackControlIntents.DeviceType {

	// Properties
	case iPhone  
	case iPad  
	case homePod  
	case appleTV  
	case mac  
	case watch  
 }

 class SiriPlaybackControlIntents.ResumeMediaFlowDelegate {
 class SiriPlaybackControlIntents.ResumeDialogTemplatingService {
 class SiriPlaybackControlIntents.ResumeAceViewProvider {
 class SiriPlaybackControlIntents.ResumeMediaContextProvider {
 class SiriPlaybackControlIntents.DialogProvider : BaseDialogProvider {
	// Swift methods
 }

 struct SiriPlaybackControlIntents.PausedParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationPauseParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.IntentConfirmationPauseParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.SkipBackwardParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	let skipBackwardDuration : Duration // +0x60
 }

 struct SiriPlaybackControlIntents.SkipForwardParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	let skipForwardDuration : Duration // +0x60
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSkipTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var isFastForward : Bool // +0x8
	var hasInHere : Bool // +0x9
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSkipTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var isFastForward : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.SkipToPreviousParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
 }

 struct SiriPlaybackControlIntents.SkipToNextParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSkipContentParams {

	// Properties
	var rooms : [String] // +0x0
	var isSkipPrevious : Bool // +0x8
	var hasInHere : Bool // +0x9
 }

 struct SiriPlaybackControlIntents.SkipErrorParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var isMultipleSpeakers : Bool // +0x5c
 }

 struct SiriPlaybackControlIntents.CannotSkipLimitExceededParameters {

	// Properties
	var appName : String? // +0x0
 }

 struct SiriPlaybackControlIntents.CannotSkipAdvertisementParameters {

	// Properties
	var appName : String? // +0x0
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSkipContentParams {

	// Properties
	var rooms : [String] // +0x0
	var isSkipToPrevious : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.SeekParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	let playheadPosition : Duration // +0x60
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSeekTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSeekParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.SeekErrorParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var isMultipleSpeakers : Bool // +0x5c
 }

 struct SiriPlaybackControlIntents.ToggleRepeatParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var repeatMode : RepeatMode // +0x5c
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationRepeatParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.RepeatErrorParameter {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var isMultipleSpeakers : Bool // +0x5c
	var isEnableRepeat : Bool // +0x5d
 }

 struct SiriPlaybackControlIntents.IntentConfirmationRepeatParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableRepeat : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.ToggleShuffleParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var shuffleEnabled : Bool // +0x5c
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationShuffleStateParams {

	// Properties
	var rooms : [String] // +0x0
	var isShuffleEnabled : Bool // +0x8
	var hasInHere : Bool // +0x9
 }

 struct SiriPlaybackControlIntents.ShuffleErrorParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var requestedStateIsCurrentState : Bool // +0x59
	var isSameRoomOnly : Bool // +0x5a
	var smartControlFarRooms : Bool // +0x5b
	var isMultipleSpeakers : Bool // +0x5c
	var isEnableShuffle : Bool // +0x5d
 }

 struct SiriPlaybackControlIntents.IntentConfirmationShuffleParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableShuffle : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.ResumeParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var isSameRoomOnly : Bool // +0x59
	var smartControlFarRooms : Bool // +0x5a
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationResumeParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationResumeParams {

	// Properties
	var rooms : [String] // +0x0
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case skipBackwardDuration  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case skipForwardDuration  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isFastForward  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isFastForward  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isSkipPrevious  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isMultipleSpeakers  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case appName  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case appName  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isSkipToPrevious  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case playheadPosition  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isMultipleSpeakers  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case repeatMode  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isMultipleSpeakers  
	case isEnableRepeat  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnableRepeat  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case shuffleEnabled  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isShuffleEnabled  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isMultipleSpeakers  
	case isEnableShuffle  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnableShuffle  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case isSameRoomOnly  
	case smartControlFarRooms  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
 }

 struct SiriPlaybackControlIntents.Duration {

	// Properties
	let secs : Int // +0x0
 }

 enum SiriPlaybackControlIntents.RepeatMode {

	// Properties
	case none  
	case one  
	case all  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case secs  
 }

 class SiriPlaybackControlIntents.ContextUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let analyticsService : AnalyticsService
	let resumeLongWindowDuration : Double
	let resumeShortWindowDuration : Double
	let autoResumableProximitiesInLongWindow : DeviceProximity
	let autoResumableProximitiesInShortWindow : DeviceProximity

	// Swift methods
	0xb0230  func <stripped> // getter 
	0xb0330  func <stripped> // getter 
	0xb2ed0  func <stripped> // method 
	0xb34b0  func <stripped> // method 
	0xb4280  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.DeviceGroup {

	// Properties
	var groupControlDevice : Device // +0x0
	var roomCount : Int // +0x8
 }

 class SiriPlaybackControlIntents.LocUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriPlaybackControlIntents.PauseMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
	let aceServiceHelper : AceServiceHelper

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfbe400037618 (0x3e400037618) in binary!
	0xe7b8  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe7ac000373f8 (0x7ac000373f8) in binary!
	0xe7a0  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd586000374b0 (0x586000374b0) in binary!
	0x68000000c  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfb9c000375d0 (0x39c000375d0) in binary!
	0xe770  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe76400037398 (0x76400037398) in binary!
	0xe758  @objc PauseMediaIntentHandler.(null) <stripped>

	// Swift methods
	0xc2c80  func <stripped> // method 
	0xc3100  func <stripped> // method 
	0xc3480  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : âÿ
 }

 enum SiriPlaybackControlIntents.ConfirmationStateValue {

	// Properties
	case yes  
	case no  
	case cancel  
 }

 enum SiriPlaybackControlIntents.QuestionAttributes {

	// Properties
	case previousAudio  
 }

 enum SiriPlaybackControlIntents.ViewOption {

	// Properties
	case audio  
	case subtitles  
	case closedCaptioning  
	case subtitlesForDeafHardHearing  
 }

 enum SiriPlaybackControlIntents.Verb {

	// Properties
	case enable  
	case disable  
	case getAttributeValue  
 }

 class SiriPlaybackControlIntents.SeekTimeIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : Ì˙
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfb9c000375d0 (0x39c000375d0) in binary!
	0xe770  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe76400037398 (0x76400037398) in binary!
	0xe758  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe74c00037370 (0x74c00037370) in binary!
	0xd532  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x6b63616279616c50 (0x16279616c50) in binary!
	0x3746e65746e  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x3a5443454a4f5250 (0x3454a4f5250) in binary!
	0x7436b636162  @objc SeekTimeIntentHandler.(null) <stripped>

	// Swift methods
	0xc7850  func <stripped> // method 
	0xc7b00  func <stripped> // method 
	0xc7e20  func <stripped> // method 
	0xc8920  func <stripped> // method 
 }

 enum __C.NowPlayingMediaType { }

 enum __C.NowPlayingState { }

 enum __C.NLMediaType { }

 enum __C.DeviceProximity { }

 enum __C.INIntentSlotValueType { }
