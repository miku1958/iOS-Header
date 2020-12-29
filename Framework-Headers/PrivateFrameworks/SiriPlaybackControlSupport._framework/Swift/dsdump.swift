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
 protocol SiriPlaybackControlSupport.PlaybackControlling // 21 requirements
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
	var initializationSignpost : ¡1 // +0x0 (0x0)
	var loadQueue : OS_dispatch_queue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1d7e in binary!
WARNING: couldn't find offset 0x1d7e in binary!
WARNING: couldn't find address 0x1d8200009af0 (0x58200009af0) in binary!
	0x0  @objc HomeManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2bcfffed730  @objc HomeManager.(null) <stripped>

	// Swift methods
	0x3120  func <stripped> // method 
 }

 struct SiriPlaybackControlSupport.HomeData {

	// Properties
	let hmHomeManager : HMHomeManager // +0x0
 }

 class SiriPlaybackControlSupport.PlaybackController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let nowPlayingQueue : OS_dispatch_queue // +0x8 (0x8)
	let assistantDiscovery : MPCAssistantDiscovery // +0x10 (0x8)
	let mediaRemoteCommandToStringMap : [Int : String] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1d5e in binary!
WARNING: couldn't find offset 0x1d5e in binary!
WARNING: couldn't find address 0x1d6200009ad0 (0x56200009ad0) in binary!
	0x0  @objc PlaybackController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16279616c50  @objc PlaybackController.(null) <stripped>

	// Swift methods
	0x4410  func <stripped> // method 
	0x4470  func <stripped> // method 
	0x4b50  func <stripped> // method 
	0x4d20  func <stripped> // method 
	0x54e0  func <stripped> // method 
	0x56a0  func <stripped> // method 
	0x6b90  func <stripped> // method 
	0x6bd0  func <stripped> // method 
	0x6e30  func <stripped> // method 
	0x73c0  func <stripped> // method 
	0x75f0  func <stripped> // method 
	0x7db0  func <stripped> // method 
	0x90a0  func <stripped> // method 
	0x94f0  func <stripped> // method 
	0x9930  func <stripped> // method 
	0x9f10  func <stripped> // method 
	0xa490  func <stripped> // method 
	0xa9e0  func <stripped> // method 
	0xadd0  func <stripped> // method 
	0xb9a0  func <stripped> // method 
	0xc540  func <stripped> // method 
	0xc9f0  func <stripped> // method 
	0xca00  func <stripped> // method 
	0xd480  func <stripped> // method 
	0xdf00  func <stripped> // method 
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
	0x185a0  func <stripped> // method 
 }

 enum SiriPlaybackControlSupport.LanguageGroup {

	// Properties
	case subtitles  
	case audio  
 }

 enum SiriPlaybackControlSupport.LanguageError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unknown : E/
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

 enum SiriPlaybackControlSupport.VolumeControllingError {

	// Properties
	case unknown  
	case alreadyMuted  
	case alreadyUnmuted  
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
