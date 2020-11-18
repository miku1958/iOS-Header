 protocol SiriPlaybackControlSupport.DeviceSelecting // 1 requirements
 {
	// method
 }
 protocol SiriPlaybackControlSupport.HomeManagerWrapper // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol SiriPlaybackControlSupport.HomeDataWrapper // 8 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlSupport.HomeWrapper // 10 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlSupport.RoomWrapper // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlSupport.ZoneWrapper // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlSupport.AccessoryWrapper // 11 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriPlaybackControlSupport.PlaybackControlling // 19 requirements
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
	// method
	// method
	// method
	// method
	// method
	// method
 }

 class __C.CFString {
 class __C.CFArray {
 class __C.CFData {
 class __C.CFError {
 struct __C.HMHomeManagerOptions {

	// Properties
	let rawValue : UInt
 }

 class SiriPlaybackControlSupport.HomeManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var hmHomeManager : HMHomeManager? // +0x8 (0x8)
	var homeData : HomeData // +0x10 (0x8)
	var loadSucceeded : Bool? // +0x18 (0x1)
	let readyGroup : OS_dispatch_group // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initializationSignpost : �/ // +0x0 (0x0)
	var loadQueue : OS_dispatch_queue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1c82000093c0 (0x482000093c0) in binary!
	0x1c7e  @objc HomeManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x38cfffee5e0  @objc HomeManager.(null) <stripped>

	// Swift methods
	0x27a0  func <stripped> // method 
 }

 struct SiriPlaybackControlSupport.HomeData {

	// Properties
	let hmHomeManager : HMHomeManager // +0x0
 }

 class SiriPlaybackControlSupport.PlaybackController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let nowPlayingQueue : OS_dispatch_queue // +0x8 (0x8)
	let mediaRemoteCommandToStringMap : [Int : String] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1c62000093a0 (0x462000093a0) in binary!
	0x1c5e  @objc PlaybackController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16279616c50  @objc PlaybackController.(null) <stripped>

	// Swift methods
	0x3a80  func <stripped> // method 
	0x3ae0  func <stripped> // method 
	0x41f0  func <stripped> // method 
	0x43c0  func <stripped> // method 
	0x4b80  func <stripped> // method 
	0x4d40  func <stripped> // method 
	0x6230  func <stripped> // method 
	0x6270  func <stripped> // method 
	0x64d0  func <stripped> // method 
	0x6a60  func <stripped> // method 
	0x6c90  func <stripped> // method 
	0x7450  func <stripped> // method 
	0x8740  func <stripped> // method 
	0x8b90  func <stripped> // method 
	0x8fe0  func <stripped> // method 
	0x95c0  func <stripped> // method 
	0x9b40  func <stripped> // method 
	0xa090  func <stripped> // method 
	0xa480  func <stripped> // method 
	0xb050  func <stripped> // method 
	0xbbf0  func <stripped> // method 
	0xc0a0  func <stripped> // method 
 }

 struct SiriPlaybackControlSupport.FilteringPredicate {

	// Properties
	var deviceName : String? // +0x0
	var deviceTypes : DeviceCategory // +0x10
	var room : Location // +0x18
	var home : Location // +0x28
	var zoneName : String? // +0x38
	var routeId : String? // +0x48
 }

 enum SiriPlaybackControlSupport.Location {

	// Properties
	case named : (value: String)
	case current  
 }

 struct SiriPlaybackControlSupport.DeviceCategory {

	// Properties
	let rawValue : Int // +0x0
 }

 class SiriPlaybackControlSupport.DeviceSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let homeProvider : HomeProvider

	// Swift methods
	0x15270  func <stripped> // method 
 }

 enum SiriPlaybackControlSupport.LanguageGroup {

	// Properties
	case subtitles  
	case audio  
 }

 enum SiriPlaybackControlSupport.LanguageError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unknown : .
	case missingResponse  
	case languageEmpty  
	case optionTypeNotMatched  
	case unsupported  
	case unsupportedPlatform  
 }

 enum SiriPlaybackControlSupport.PlaybackControllingError {

	// Properties
	case unknown  
	case skipLimitExceeded  
	case adSkippingDisallowed  
	case unsupportedPlatform  
	case unsupportedCommand  
 }

 struct SiriPlaybackControlSupport.LanguageOption {

	// Properties
	let identifier : String // +0x0
	let languageTag : String // +0x10
	let displayName : String // +0x20
	let languageCharacteristics : [String] // +0x30
	var isActive : Bool // +0x38
 }

 struct SiriPlaybackControlSupport.DurationInfo {

	// Properties
	let duration : Double // +0x0
	let elapsedDuration : Double // +0x8
 }

 enum SiriPlaybackControlSupport.ShuffleMode {

	// Properties
	case shuffleOn  
	case shuffleOff  
 }

 enum SiriPlaybackControlSupport.RepeatMode {

	// Properties
	case repeatOff  
	case repeatOne  
	case repeatAll  
	case repeatUknown  
 }

 enum SiriPlaybackControlSupport.PlaybackState {

	// Properties
	case unknown  
	case playing  
	case paused  
	case stopped  
	case interrupted  
	case seeking  
 }

 enum SiriPlaybackControlSupport.LanguageCharacteristic {

	// Properties
	case DEFAULT  
	case SDH  
	case CC  
	case AD  
 }

 struct SiriPlaybackControlSupport.Zone {

	// Properties
	let hmZone : HMZone // +0x0
 }

 struct SiriPlaybackControlSupport.Accessory {

	// Properties
	let hmAccessory : HMAccessory // +0x0
 }

 struct SiriPlaybackControlSupport.Room {

	// Properties
	let hmRoom : HMRoom // +0x0
 }

 struct SiriPlaybackControlSupport.Home {

	// Properties
	let hmHome : HMHome // +0x0
 }

 struct SiriPlaybackControlSupport.HomeProvider {

	// Properties
	let manager : A
 }

 enum SiriPlaybackControlSupport.ControlsError {

	// Properties
	case unknown  
 }

 struct SiriPlaybackControlSupport.Device {

	// Properties
	var identifier : String? // +0x0
	var name : String? // +0x10
	var roomName : String? // +0x20
	var type : String? // +0x30
 }