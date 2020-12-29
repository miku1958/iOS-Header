 protocol SiriPlaybackControlIntents.DefaultConfirmIntentStrategy // 10 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// method
	// method
 }
 protocol SiriPlaybackControlIntents.DeviceDisambiguationStrategy // 11 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// method
	// method
 }
 protocol SiriPlaybackControlIntents.DeviceNLContextProviding // 1 requirements
 {
	// class base protocol
 }
 protocol SiriPlaybackControlIntents.UserDefaultsProvider // 4 requirements
 {
	// method
	// method
	// method
	// method
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
 protocol SiriPlaybackControlIntents.ContextIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.ConfirmableIntent // 2 requirements
 {
	// method
	// getter
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
 protocol SiriPlaybackControlIntents.InProcessHandlingStrategy // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// class getter
 }
 protocol SiriPlaybackControlIntents.HomeAutomationCapableIntent // 10 requirements
 {
	// class base protocol
	// class init
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
 protocol SiriPlaybackControlIntents.DialogProviding // 1 requirements
 {
	// method
 }
 protocol SiriPlaybackControlIntents.DisambiguationProvider // 3 requirements
 {
	// class method
	// class method
	// class method
 }
 protocol SiriPlaybackControlIntents.AudioSessionProviding // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol SiriPlaybackControlIntents.RCHNamespace // 1 requirements
 {
	// class method
 }
 protocol SiriPlaybackControlIntents.LanguageSelectableIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.DeviceDisambiguatableIntent // 1 requirements
 {
	// method
 }
 protocol SiriPlaybackControlIntents.DeviceSelectableIntent // 5 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.SingleDeviceSelectableIntent // 5 requirements
 {
	// class base protocol
	// class base protocol
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
 protocol SiriPlaybackControlIntents.DefaultNeedsConfirmationStrategy // 5 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
 }
 protocol SiriPlaybackControlIntents.DeviceQueryableIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriPlaybackControlIntents.ConfirmationCapableNLIntent // 3 requirements
 {
	// getter
	// getter
	// class init
 }
 protocol SiriPlaybackControlIntents.ContextProviding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriPlaybackControlIntents.ControlsFlowFactory // 13 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
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

 enum __C.DeviceProximity { }

 enum __C.NowPlayingMediaType { }

 enum __C.NowPlayingState { }

 enum __C.NLMediaType { }

 enum __C.SetVolumeLevelIntentResponseCode { }

 enum __C.INIntentSlotValueType { }

 struct __C.Port {

	// Properties
	var _rawValue : NSString
 }

 class SiriPlaybackControlIntents.SkipTimeFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x3b90  func <stripped> // method 
	0x3de0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.ResumeMediaDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 struct SiriPlaybackControlIntents.DeviceContextProvider {

	// Properties
	let analyticsService : AnalyticsService // +0x0
 }

 class SiriPlaybackControlIntents.DeviceSelectingUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceSelector : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let contextUtil : ContextUtil
	let analyticsService : AnalyticsService

	// Swift methods
	0x1e7b0  func <stripped> // method 
	0x1ebd0  func <stripped> // method 
	0x1f700  func <stripped> // method 
	0x20650  func <stripped> // method 
	0x223d0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.PauseMediaHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)

	// Swift methods
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

 class SiriPlaybackControlIntents.PauseMediaDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 struct SiriPlaybackControlIntents.SettingsFlowProvider {

	// Properties
	let flowFactory : ControlsFlowFactory // +0x0
 }

 struct SiriPlaybackControlIntents.UserDefaultsProviderImpl: UserDefaultsProvider {

	// Properties
	let userDefaults : NSUserDefaults? // +0x0
 }

 class SiriPlaybackControlIntents.SetVolumeLevelIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let userDefaultsProvider : UserDefaultsProvider
	let audioSession : AudioSessionProviding

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16d6c0004a3c8 (0x56c0004a3c8) in binary!
	0x154a0  @objc SetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x154940004a238 (0x4940004a238) in binary!
	0x15488  @objc SetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1547c0004a210 (0x47c0004a210) in binary!
	0x14292  @objc SetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x1d4fff47008  @objc SetVolumeLevelIntentHandler.(null) <stripped>
	0x1acfff47670  @objc SetVolumeLevelIntentHandler. <stripped>
	0xfff47808  @objc SetVolumeLevelIntentHandler. <stripped>

	// Swift methods
	0x3c4e0  func <stripped> // method 
	0x3d4f0  func <stripped> // method 
	0x3d6d0  func <stripped> // method 
	0x3e9f0  func <stripped> // method 
	0x3fa70  func <stripped> // method 
	0x406a0  func <stripped> // method 
	0x40bf0  func <stripped> // method 
	0x41390  func <stripped> // method 
	0x415a0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.AnalyticsServiceImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AnalyticsService {
	// Swift methods
 }

 class SiriPlaybackControlIntents.VolumeLevelNeedsValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let volumeControlsDialogProvider : VolumeControlsDialogProvider

	// Swift methods
	0x495d0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SkipContentIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16d1c0004a378 (0x51c0004a378) in binary!
	0x15450  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x154440004a1c0 (0x4440004a1c0) in binary!
	0x15438  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1424e0004a1b8 (0x24e0004a1b8) in binary!
	0x58000000c  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16cd40004a330 (0x4d40004a330) in binary!
	0x15408  @objc SkipContentIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x153fc0004a160 (0x3fc0004a160) in binary!
	0x153f0  @objc SkipContentIntentHandler.(null) <stripped>

	// Swift methods
	0x4b020  func <stripped> // method 
	0x4b2d0  func <stripped> // method 
	0x4b650  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.LanguageDisambiguationStrategy {
 class SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16cd40004a330 (0x4d40004a330) in binary!
	0x15408  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x153fc0004a160 (0x3fc0004a160) in binary!
	0x153f0  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x142060004a170 (0x2060004a170) in binary!
	0x18000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16c8c0004a3e8 (0x48c0004a3e8) in binary!
	0x68000000c  @objc SetRepeatStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16c740004a2d0 (0x4740004a2d0) in binary!
	0x153a8  @objc SetRepeatStateIntentHandler.(null) <stripped>

	// Swift methods
	0x4f730  func <stripped> // method 
	0x4f9e0  func <stripped> // method 
	0x4fd60  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.ResumeMediaFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x510e0  func <stripped> // method 
	0x51330  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetVolumeLevelHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let volumeControlsDialogs : VolumeControlsDialogProvider // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x38 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.VolumeLevelNeedsConfirmationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let volumeControlsDialogProvider : VolumeControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SkipTimeDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
	0x57750  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.DeviceSelectionControlType {

	// Properties
	case pausable  
	case resumable  
	case videoControls  
	case volumeControls  
	case any  
 }

 class SiriPlaybackControlIntents.SetSubtitleStateUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetVolumeLevelUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let volumeControlsDialogProvider : VolumeControlsDialogProvider

	// Swift methods
	0x5acf0  func <stripped> // method 
	0x5af60  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.SimulatedContextProvider { }

 class SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16c740004a2d0 (0x4740004a2d0) in binary!
	0x153a8  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1539c0004a0e8 (0x39c0004a0e8) in binary!
	0x15390  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x153840004a0c0 (0x3840004a0c0) in binary!
	0x1419a  @objc SkipTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x8cfff70a10  @objc SkipTimeIntentHandler.(null) <stripped>
	0x64fff71da8  @objc SkipTimeIntentHandler.‹-J; <stripped>
	0xfff72390  @objc SkipTimeIntentHandler. <stripped>

	// Swift methods
	0x5c630  func <stripped> // method 
	0x5c8e0  func <stripped> // method 
	0x5ca20  func <stripped> // method 
	0x5cda0  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.MediaPlayerFlowProvider {

	// Properties
	let flowFactory : ControlsFlowFactory // +0x0
 }

 struct SiriPlaybackControlIntents.ControlsFlowProvider {

	// Properties
	let flowFactory : ControlsFlowFactory // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig // +0x28
	let contextProvider : ContextProviding // +0x50
	let contextUtil : ContextUtil // +0x78
	let settingsFlowProvider : SettingsFlowProvider // +0x80
	let mediaFlowProvider : MediaFlowProvider // +0xa8
	let mediaPlayerFlowProvider : MediaPlayerFlowProvider // +0xd0
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

 class SiriPlaybackControlIntents.GetVolumeLevelFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x68fc0  func <stripped> // method 
	0x69150  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SkipContentDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.ResumeMediaHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.ResumeMediaConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.BaseDialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DialogProviding {

	// Properties
	let testMode : Bool
	let testGlobals : [String : Any]
	let globals : [String : Any]

	// Swift methods
	0x73be0  func <stripped> // method 
	0x743d0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.ResumeMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
	let aceServiceHelper : AceServiceHelper

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16c240004a280 (0x4240004a280) in binary!
	0x15358  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1534c0004a078 (0x34c0004a078) in binary!
	0x15340  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x141560004a0c0 (0x1560004a0c0) in binary!
	0x68000000c  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16bdc0004a238 (0x3dc0004a238) in binary!
	0x15310  @objc ResumeMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x153040004a018 (0x3040004a018) in binary!
	0x152f8  @objc ResumeMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x74b20  func <stripped> // method 
	0x75b00  func <stripped> // method 
	0x75e80  func <stripped> // method 
	0x75f80  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetRepeatStateConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16bdc0004a238 (0x3dc0004a238) in binary!
	0x15310  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x153040004a018 (0x3040004a018) in binary!
	0x152f8  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x152ec00049ff0 (0x2ec00049ff0) in binary!
	0x14102  @objc SetAudioLanguageIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7bcfff7ac78  @objc SetAudioLanguageIntentHandler.(null) <stripped>
	0x794fff7c8e0  @objc SetAudioLanguageIntentHandler. <stripped>
	0xfff7cb88  @objc SetAudioLanguageIntentHandler. <stripped>

	// Swift methods
	0x793b0  func <stripped> // method 
	0x796d0  func <stripped> // method 
	0x7a340  func <stripped> // method 
	0x7a620  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetAudioLanguageHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let languageDialogProvider : LanguageControlsDialogProvider // +0x38 (0x28)

	// Swift methods
 }

 enum SiriPlaybackControlIntents.LanguageNLContextProvider { }

 class SiriPlaybackControlIntents.WhatDidTheySayHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let languageDialogProvider : LanguageControlsDialogProvider // +0x38 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.GetVolumeLevelIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16b8c0004a1e8 (0x38c0004a1e8) in binary!
	0x152c0  @objc GetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x152b400049fa8 (0x2b400049fa8) in binary!
	0x152a8  @objc GetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x140be0004a028 (0xbe0004a028) in binary!
	0x18000000c  @objc GetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16b440004a2a0 (0x3440004a2a0) in binary!
	0x58000000c  @objc GetVolumeLevelIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16b2c0004a188 (0x32c0004a188) in binary!
	0x15260  @objc GetVolumeLevelIntentHandler.(null) <stripped>

	// Swift methods
	0x7ee20  func <stripped> // method 
	0x7f730  func <stripped> // method 
	0x80a80  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.PauseMediaFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x829d0  func <stripped> // method 
	0x82c40  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetShuffleStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16b2c0004a188 (0x32c0004a188) in binary!
	0x15260  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1525400049f30 (0x25400049f30) in binary!
	0x15248  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1405e00049fc8 (0x5e00049fc8) in binary!
	0x58000000c  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16ae40004a140 (0x2e40004a140) in binary!
	0x15218  @objc SetShuffleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1520c00049ed0 (0x20c00049ed0) in binary!
	0x15200  @objc SetShuffleStateIntentHandler.(null) <stripped>

	// Swift methods
	0x83b30  func <stripped> // method 
	0x83de0  func <stripped> // method 
	0x84160  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetAudioLanguageConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.GetVolumeLevelUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let volumeControlsDialogProvider : VolumeControlsDialogProvider

	// Swift methods
 }

 struct SiriPlaybackControlIntents.MediaFlowProvider {

	// Properties
	let flowFactory : ControlsFlowFactory // +0x0
 }

 enum SiriPlaybackControlIntents.MediaPlayerDeviceDisambiguationProvider { }

 class SiriPlaybackControlIntents.SetRepeatStateDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SkipTimeHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig // +0x68 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetShuffleStateFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x8b0f0  func <stripped> // method 
	0x8b340  func <stripped> // method 
 }

 enum SiriPlaybackControlIntents.FloatSettingName {

	// Properties
	case volume  
	case voice  
	case mediaType  
 }

 enum SiriPlaybackControlIntents.Verb {

	// Properties
	case read  
	case set  
 }

 enum SiriPlaybackControlIntents.ConfirmationStateValue {

	// Properties
	case yes  
	case no  
	case cancel  
 }

 enum SiriPlaybackControlIntents.NumericSettingState {

	// Properties
	case less  
	case maximum  
	case mean  
	case minimum  
	case more  
	case mute  
	case unmute  
 }

 enum SiriPlaybackControlIntents.NumericSettingQualifier {

	// Properties
	case aLittle  
	case aLot  
 }

 enum SiriPlaybackControlIntents.SettingAttribute {

	// Properties
	case referentialTo  
 }

 enum SiriPlaybackControlIntents.NumericSettingUnit {

	// Properties
	case percent  
 }

 struct SiriPlaybackControlIntents.SettingNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : ‡Z
 }

 class SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	var timer : OS_dispatch_source_timer?
	var queue : OS_dispatch_queue?
	var assertion : RBSAssertion?
	let analyticsService : AnalyticsService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16ae40004a140 (0x2e40004a140) in binary!
	0x15218  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1520c00049ed0 (0x20c00049ed0) in binary!
	0x15200  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1401600049f80 (0x1600049f80) in binary!
	0x28000000c  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x16cbc0004a018 (0x4bc0004a018) in binary!
	0x16a90  @objc WhatDidTheySayIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x664fffac338  @objc WhatDidTheySayIntentHandler.(null) <stripped>

	// Swift methods
	0x90170  func <stripped> // method 
	0x90e10  func <stripped> // method 
	0x92510  func <stripped> // method 
	0x92610  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SeekTimeFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0x94ad0  func <stripped> // method 
	0x94d20  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SeekTimeHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig // +0x68 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.AceServiceHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : çO

	// Swift methods
 }

 struct SiriPlaybackControlIntents.VolumeControlsDialogProvider {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 struct SiriPlaybackControlIntents.GetVolumeLevelParams {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var requestedStateIsCurrentState : Bool // +0x3
	var isSameRoomOnly : Bool // +0x4
	var smartControlFarRooms : Bool // +0x5
	let volumeLevel : Int // +0x8
	var speaker : Speaker // +0x10
	var preferSpeakerName : Bool // +0x61
 }

 struct SiriPlaybackControlIntents.SetVolumeParameters {

	// Properties
	var requestedVolumeLevel : Int? // +0x0
	var isMediaPlaying : Bool // +0x9
	var isIncreaseLevel : Bool // +0xa
	var isDecreaseLevel : Bool // +0xb
 }

 struct SiriPlaybackControlIntents.SetVolumeLevelErrorParameters {

	// Properties
	var isSameRoomOnly : Bool // +0x0
	var smartControlFarRooms : Bool // +0x1
	var isIOS : Bool // +0x2
	var isTV : Bool // +0x3
	var isHomePodLocalOnly : Bool // +0x4
	var speaker : Speaker // +0x8
	var preferSpeakerName : Bool // +0x59
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case requestedStateIsCurrentState  
	case isSameRoomOnly  
	case smartControlFarRooms  
	case volumeLevel  
	case speaker  
	case preferSpeakerName  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case requestedVolumeLevel  
	case isMediaPlaying  
	case isIncreaseLevel  
	case isDecreaseLevel  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case isSameRoomOnly  
	case smartControlFarRooms  
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case preferSpeakerName  
 }

 class SiriPlaybackControlIntents.AudioSessionProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AudioSessionProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var deviceState : Ùp // +0x10 (0x28)
	let audioSession : AVAudioSession // +0x38 (0x8)

	// Swift methods
	0x9ba40  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.LanguageControlsDialogProvider {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationAudioLanguageParameters {

	// Properties
	let rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.ConfirmWhatDidTheySayParameters {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.AudioLanguageNotAvailableParameters {

	// Properties
	var requestedLanguage : String? // +0x0
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSetSubtitleStateParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableSubtitles : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSubtitlesParameters {

	// Properties
	let rooms : [String] // +0x0
	let isEnable : Bool // +0x8
	var isClosedCaptionRequest : Bool // +0x9
	var hasInHere : Bool // +0xa
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

 struct SiriPlaybackControlIntents.SubtitleFailedToToggleParameters {

	// Properties
	var isOn : Bool // +0x0
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationWhatDidTheySayParameters {

	// Properties
	let rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSetAudioLanguageParams {

	// Properties
	var rooms : [String] // +0x0
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

 struct SiriPlaybackControlIntents.AudioSetSuccessfullyParameters {

	// Properties
	var isIOS : Bool // +0x0
	var isTV : Bool // +0x1
	var isHomePodLocalOnly : Bool // +0x2
	var speaker : Speaker // +0x8
	var isSameRoomOnly : Bool // +0x59
	var smartControlFarRooms : Bool // +0x5a
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
	case requestedLanguage  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnableSubtitles  
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
	case isOn  
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
	case isIOS  
	case isTV  
	case isHomePodLocalOnly  
	case speaker  
	case isSameRoomOnly  
	case smartControlFarRooms  
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

 class SiriPlaybackControlIntents.SkipTimeConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetVolumeLevelFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xa3560  func <stripped> // method 
	0xa36f0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.GetVolumeLevelHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let volumeControlsDialogs : VolumeControlsDialogProvider // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x38 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.WhatDidTheySayFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xa5550  func <stripped> // method 
	0xa57a0  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SkipContentFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xa62c0  func <stripped> // method 
	0xa6510  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.WhatDidTheySayDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SeekTimeUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetSubtitleStateHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let languageDialogProvider : LanguageControlsDialogProvider // +0x38 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetSubtitleStateFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xab720  func <stripped> // method 
	0xab970  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.PauseMediaConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

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

 class SiriPlaybackControlIntents.SetSubtitleStateDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16a7c0004a0d8 (0x27c0004a0d8) in binary!
	0x151b0  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x151a400049e50 (0x1a400049e50) in binary!
	0x15198  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1518c00049e28 (0x18c00049e28) in binary!
	0x13fa2  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd94e8  @objc SetSubtitleStateIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x5dcfffeee90  @objc SetSubtitleStateIntentHandler.(null) <stripped>
	0x5b4fffef6c8  @objc SetSubtitleStateIntentHandler.Ñ <stripped>

	// Swift methods
	0xb05f0  func <stripped> // method 
	0xb0910  func <stripped> // method 
	0xb1580  func <stripped> // method 
	0xb1860  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetShuffleStateHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetSubtitleStateConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 enum SiriPlaybackControlIntents.ControlsError {

	// Properties
	case unknown  
 }

 class SiriPlaybackControlIntents.SetAudioLanguageUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetShuffleStateDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SetRepeatStateHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.WhatDidTheySayUnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 enum SiriPlaybackControlIntents.MediaPlayerDeviceNLContextProvider { }

 class SiriPlaybackControlIntents.SetAudioLanguageFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xbf9e0  func <stripped> // method 
	0xbfc30  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SetRepeatStateFlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contextProvider : ContextProviding

	// Swift methods
	0xc0610  func <stripped> // method 
	0xc0860  func <stripped> // method 
 }

 class SiriPlaybackControlIntents.SeekTimeDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 struct SiriPlaybackControlIntents.MediaPlayerNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : ‡Z
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
	case play  
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

 class SiriPlaybackControlIntents.SeekTimeConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.ResumeMediaFlowDelegate {
 class SiriPlaybackControlIntents.ResumeDialogTemplatingService {
 class SiriPlaybackControlIntents.ResumeAceViewProvider {
 class SiriPlaybackControlIntents.ResumeMediaContextProvider {
 class SiriPlaybackControlIntents.WhatDidTheySayConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.DialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dialogProvider : DialogProviding

	// Swift methods
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSkipTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var isFastForward : Bool // +0x8
	var hasInHere : Bool // +0x9
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

 struct SiriPlaybackControlIntents.IntentConfirmationShuffleParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableShuffle : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSeekParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationSeekTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
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

 struct SiriPlaybackControlIntents.DeviceDisambiguationShuffleStateParams {

	// Properties
	var rooms : [String] // +0x0
	var isShuffleEnabled : Bool // +0x8
	var hasInHere : Bool // +0x9
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

 struct SiriPlaybackControlIntents.IntentConfirmationPauseParams {

	// Properties
	var rooms : [String] // +0x0
 }

 struct SiriPlaybackControlIntents.IntentConfirmationSkipTimeParams {

	// Properties
	var rooms : [String] // +0x0
	var isFastForward : Bool // +0x8
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

 struct SiriPlaybackControlIntents.DeviceDisambiguationRepeatParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationRepeatParams {

	// Properties
	var rooms : [String] // +0x0
	var isEnableRepeat : Bool // +0x8
 }

 struct SiriPlaybackControlIntents.IntentConfirmationResumeParams {

	// Properties
	var rooms : [String] // +0x0
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

 struct SiriPlaybackControlIntents.DeviceDisambiguationSkipContentParams {

	// Properties
	var rooms : [String] // +0x0
	var isSkipPrevious : Bool // +0x8
	var hasInHere : Bool // +0x9
 }

 struct SiriPlaybackControlIntents.DeviceDisambiguationPauseParams {

	// Properties
	var rooms : [String] // +0x0
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

 struct SiriPlaybackControlIntents.DeviceDisambiguationResumeParams {

	// Properties
	var rooms : [String] // +0x0
	var hasInHere : Bool // +0x8
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isFastForward  
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
	case rooms  
	case isEnableShuffle  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
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
	case repeatMode  
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
	case shuffleEnabled  
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
	case playheadPosition  
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
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case isEnableRepeat  
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
	case isSkipPrevious  
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
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case rooms  
	case hasInHere  
 }

 enum SiriPlaybackControlIntents.RepeatMode {

	// Properties
	case none  
	case one  
	case all  
 }

 struct SiriPlaybackControlIntents.Duration {

	// Properties
	let secs : Int // +0x0
 }

 enum SiriPlaybackControlIntents.CodingKeys {

	// Properties
	case secs  
 }

 class SiriPlaybackControlIntents.SetShuffleStateConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SkipContentConfirmIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.ContextUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let analyticsService : AnalyticsService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let resumeLongWindowDuration : Double
	let resumeShortWindowDuration : Double
	let autoResumableProximitiesInLongWindow : DeviceProximity
	let autoResumableProximitiesInShortWindow : DeviceProximity

	// Swift methods
	0xdff80  func <stripped> // getter 
	0xe0080  func <stripped> // getter 
	0xe28e0  func <stripped> // method 
	0xe46e0  func <stripped> // method 
	0xe4900  func <stripped> // method 
	0xe4ca0  func <stripped> // method 
	0xe56d0  func <stripped> // method 
	0xe5c90  func <stripped> // method 
	0xe6a30  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.DeviceGroup {

	// Properties
	var groupControlDevice : Device // +0x0
	var roomCount : Int // +0x8
 }

 class SiriPlaybackControlIntents.SetAudioLanguageDeviceDisambiguationStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp
	let dialogProvider : DialogProvider
	let languageDialogProvider : LanguageControlsDialogProvider

	// Swift methods
 }

 class SiriPlaybackControlIntents.SkipContentHandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ùp // +0x10 (0x28)
	let dialogProvider : DialogProvider // +0x38 (0x8)
	let userDefaultsProvider : UserDefaultsProvider // +0x40 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig // +0x68 (0x28)

	// Swift methods
 }

 class SiriPlaybackControlIntents.LocUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriPlaybackControlIntents.PauseMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService
	let aceServiceHelper : AceServiceHelper

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16a140004a070 (0x2140004a070) in binary!
	0x15148  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1513c00049dc8 (0x13c00049dc8) in binary!
	0x15130  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13f4600049eb0 (0x74600049eb0) in binary!
	0x68000000c  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x169cc0004a028 (0x1cc0004a028) in binary!
	0x15100  @objc PauseMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x150f400049d68 (0xf400049d68) in binary!
	0x150e8  @objc PauseMediaIntentHandler.(null) <stripped>

	// Swift methods
	0xf31b0  func <stripped> // method 
	0xf3630  func <stripped> // method 
	0xf39b0  func <stripped> // method 
 }

 struct SiriPlaybackControlIntents.ControlsFlowFactoryImpl: ControlsFlowFactory { }

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

 enum SiriPlaybackControlIntents.ConfirmationStateValue {

	// Properties
	case yes  
	case no  
	case cancel  
 }

 struct SiriPlaybackControlIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : ‡Z
 }

 enum SiriPlaybackControlIntents.SettingNLContextProvider { }

 class SiriPlaybackControlIntents.SeekTimeIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackController : ig
	let deviceSelector : DeviceSelectingUtil
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x169cc0004a028 (0x1cc0004a028) in binary!
	0x15100  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x150f400049d68 (0xf400049d68) in binary!
	0x150e8  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x150dc00049d40 (0xdc00049d40) in binary!
	0x13ef2  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x6b63616279616c50 (0x16279616c50) in binary!
	0x3746e65746e  @objc SeekTimeIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x3a5443454a4f5250 (0x3454a4f5250) in binary!
	0x7436b636162  @objc SeekTimeIntentHandler.(null) <stripped>

	// Swift methods
	0xfe8d0  func <stripped> // method 
	0xfeb80  func <stripped> // method 
	0xfeea0  func <stripped> // method 
	0xff9a0  func <stripped> // method 
 }
