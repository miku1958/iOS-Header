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
	let deviceSelector : ˜
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : üÚ
	let contextUtil : ContextUtil
	let analyticsService : AnalyticsService

	// Swift methods
	0x6100  func <stripped> // method 
	0x6520  func <stripped> // method 
	0x7400  func <stripped> // method 
	0x90b0  func <stripped> // method 
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfeb400039f48 (0x6b400039f48) in binary!
	0xea18  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xea0c00039e08 (0x20c00039e08) in binary!
	0xea00  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd7e600039de0 (0x7e600039de0) in binary!
	0x58000000c  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe6c00039f00 (0x66c00039f00) in binary!
	0xe9d0  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe9c400039da0 (0x1c400039da0) in binary!
	0xe9b8  @objc SkipContentIntentHandler.(null) <stripped>

	// Swift methods
	0x1ad50  func <stripped> // method 
	0x1b000  func <stripped> // method 
	0x1b380  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfe6c00039f00 (0x66c00039f00) in binary!
	0xe9d0  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe9c400039da0 (0x1c400039da0) in binary!
	0xe9b8  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd79e00039d98 (0x79e00039d98) in binary!
	0x18000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe2400039f50 (0x62400039f50) in binary!
	0x68000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe0c00039ea0 (0x60c00039ea0) in binary!
	0xe970  @objc SetRepeatStateIntentHandler.(null) <stripped>

	// Swift methods
	0x1c820  func <stripped> // method 
	0x1cad0  func <stripped> // method 
	0x1ce50  func <stripped> // method 
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfe0c00039ea0 (0x60c00039ea0) in binary!
	0xe970  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe96400039d28 (0x16400039d28) in binary!
	0xe958  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe94c00039d00 (0x14c00039d00) in binary!
	0xd732  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x4ccfff6f128  @objc SkipTimeIntentHandler.(null) <stripped>
	0x4a4fff70480  @objc SkipTimeIntentHandler.âˇæ <stripped>
	0xfff70a68  @objc SkipTimeIntentHandler.}êHãU–HãM¿IâŸË|ˇˇÈ´ <stripped>

	// Swift methods
	0x29d70  func <stripped> // method 
	0x2a020  func <stripped> // method 
	0x2a160  func <stripped> // method 
	0x2a4e0  func <stripped> // method 
 }

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
	0x396c0  func <stripped> // method 
	0x39e80  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.ResumeMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : sÊ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfdbc00039e50 (0x5bc00039e50) in binary!
	0xe920  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe91400039cb8 (0x11400039cb8) in binary!
	0xe908  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd6ee00039ce8 (0x6ee00039ce8) in binary!
	0x68000000c  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfd7400039e08 (0x57400039e08) in binary!
	0xe8d8  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe8cc00039c58 (0xcc00039c58) in binary!
	0xe8c0  @objc ResumeMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x3a5e0  func <stripped> // method 
	0x3b580  func <stripped> // method 
	0x3b900  func <stripped> // method 
	0x3ba00  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfd7400039e08 (0x57400039e08) in binary!
	0xe8d8  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe8cc00039c58 (0xcc00039c58) in binary!
	0xe8c0  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe8b400039c30 (0xb400039c30) in binary!
	0xd69a  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff810d0  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3e4fff818d8  @objc SetAudioLanguageIntentHandler.(null) <stripped>
	0x3bcfff81f40  @objc SetAudioLanguageIntentHandler. <stripped>

	// Swift methods
	0x3ea10  func <stripped> // method 
	0x3ed30  func <stripped> // method 
	0x3f890  func <stripped> // method 
	0x3fb70  func <stripped> // method 
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfd0c00039da0 (0x50c00039da0) in binary!
	0xe870  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe86400039bd0 (0x6400039bd0) in binary!
	0xe858  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd63e00039c38 (0x63e00039c38) in binary!
	0x58000000c  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfcc400039d58 (0x4c400039d58) in binary!
	0xe828  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe81c00039b70 (0x1c00039b70) in binary!
	0xe810  @objc SetShuffleStateIntentHandler.(null) <stripped>

	// Swift methods
	0x4ce40  func <stripped> // method 
	0x4d0f0  func <stripped> // method 
	0x4d470  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.MediaPlayerDeviceDisambiguationProvider { }

 class SiriPlaybackControlIntents.SkipTimeFlowDelegate {
 class SiriPlaybackControlIntents.SkipTimeDialogTemplatingService {
 class SiriPlaybackControlIntents.SkipTimeAceViewProvider {
 class SiriPlaybackControlIntents.SkipTimeContextProvider {
 class SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	var timer : OS_dispatch_source_timer?
	var queue : OS_dispatch_queue?
	var assertion : RBSAssertion?
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfcc400039d58 (0x4c400039d58) in binary!
	0xe828  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe81c00039b70 (0x1c00039b70) in binary!
	0xe810  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd5f600039bf0 (0x5f600039bf0) in binary!
	0x28000000c  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfe9c00039c50 (0x69c00039c50) in binary!
	0xfc70  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x304fffa3708  @objc WhatDidTheySayIntentHandler.(null) <stripped>

	// Swift methods
	0x542e0  func <stripped> // method 
	0x54e40  func <stripped> // method 
	0x56220  func <stripped> // method 
	0x56320  func <stripped> // method 
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfc5c00039cf0 (0x45c00039cf0) in binary!
	0xe7c0  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe7b400039af0 (0x7b400039af0) in binary!
	0xe7a8  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe79c00039ac8 (0x79c00039ac8) in binary!
	0xd582  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe2178  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x27cffff61c0  @objc SetSubtitleStateIntentHandler.(null) <stripped>
	0x254ffff68f8  @objc SetSubtitleStateIntentHandler.Lâˇæ <stripped>

	// Swift methods
	0x6ed20  func <stripped> // method 
	0x6f040  func <stripped> // method 
	0x6fba0  func <stripped> // method 
	0x6fe80  func <stripped> // method 
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
	var intent : 5‘
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
	0xaee00  func <stripped> // getter 
	0xaef00  func <stripped> // getter 
	0xb1aa0  func <stripped> // method 
	0xb2080  func <stripped> // method 
	0xb2e50  func <stripped> // method 
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfbf400039c88 (0x3f400039c88) in binary!
	0xe758  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe74c00039a68 (0x74c00039a68) in binary!
	0xe740  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xd52600039b20 (0x52600039b20) in binary!
	0x68000000c  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xfbac00039c40 (0x3ac00039c40) in binary!
	0xe710  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe70400039a08 (0x70400039a08) in binary!
	0xe6f8  @objc PauseMediaIntentHandler.(null) <stripped>

	// Swift methods
	0xc1840  func <stripped> // method 
	0xc1bc0  func <stripped> // method 
	0xc1f40  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : 5‘
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
	let playbackController : ]Ú
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfbac00039c40 (0x3ac00039c40) in binary!
	0xe710  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe70400039a08 (0x70400039a08) in binary!
	0xe6f8  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe6ec000399e0 (0x6ec000399e0) in binary!
	0xd4d2  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x6b63616279616c50 (0x16279616c50) in binary!
	0x3746e65746e  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x3a5443454a4f5250 (0x3454a4f5250) in binary!
	0x7436b636162  @objc SeekTimeIntentHandler.(null) <stripped>

	// Swift methods
	0xc6230  func <stripped> // method 
	0xc64e0  func <stripped> // method 
	0xc6800  func <stripped> // method 
	0xc7300  func <stripped> // method 
 }

 enum __C.NowPlayingMediaType { }

 enum __C.NowPlayingState { }

 enum __C.NLMediaType { }

 enum __C.DeviceProximity { }

 enum __C.INIntentSlotValueType { }
