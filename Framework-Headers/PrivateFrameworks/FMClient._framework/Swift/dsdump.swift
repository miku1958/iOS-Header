 protocol FMClient.ClientURLSession // 2 requirements
 {
	// method
	// method
 }
 protocol FMClient.RequestContentRepresentable // 8 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// method
 }
 protocol FMClient.RequestCredential // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol FMClient.ResponseSerializable // 4 requirements
 {
	// class base protocol
	// class base protocol
	// class method
	// getter
 }
 protocol FMClient.EndpointConfigurating // 2 requirements
 {
	// getter
	// getter
 }

 enum __C.AuthChallengeDisposition { }

 class FMClient.Session : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let clientBundleId : String?
	let clientProcessName : String
	var _activeConnection : NSXPCConnection?
	var $__lazy_storage_$_serverProxy : ServerSessionProtocol??
	var authenticationProvider : AuthenticationProviding?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3c900000d4c8 (0x4900000d4c8) in binary!
	0x4ce8  @objc Session.(null) <stripped>
	0x4cd0  variable initialization expression of HttpClient.statusCodeHandlerQueue
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x72cfffe0678  @objc Session.(null) <stripped>
	0x644fffe0fd0  @objc Session. <stripped>

	// Swift methods
	0x1db0  func <stripped> // getter 
	0x1fd0  func <stripped> // getter 
	0x2050  func Session.registerAuthenticationProvider(_:) // method 
	0x2230  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5bc0  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String
	let locality : String
	let safetyWarningConfirmed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x39500000d568 (0x1500000d568) in binary!
	0x3944  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x43940000d540 (0x3940000d540) in binary!
	0x3748  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x3b780000d518 (0x3780000d518) in binary!
	0x4a78  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x39080000d5b8 (0x1080000d5b8) in binary!
	0x38fc  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x38f00000d550 (0xf00000d550) in binary!
	0x4ba0  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe3da8  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x46cfffe3930  @objc PlaySoundDevice.(null) <stripped>
	0x444fffe3988  @objc PlaySoundDevice.âU–IâÙHâ}»Hç=üÊ <stripped>
	0x41cfffe3a90  @objc PlaySoundDevice.F8ËıËˇˇIâF@H∏ <stripped>
	0x454fffe3f68  @objc PlaySoundDevice.@Hã~à <stripped>

	// Swift methods
	0x6050  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x6200  func PlaySoundDevice.encode(with:) // method 
	0x6440  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x6dc0  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x70d0  func PlaySoundDevice.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case serverId  
	case locality  
	case safetyWarningConfirmed  
 }

 class FMClient.ClientConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let nearbyScanDuration : Double // +0x8 (0x8)
	let nearbyScanEnabled : Bool // +0x10 (0x1)
	let nearbyScanWhileAuthenticated : Bool // +0x11 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceNameSyncInterval : Û4 // +0xfeedfacf (0x0)
	let deviceNameSyncEnabled : Bool // +0x3 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x38b00000d480 (0xb00000d480) in binary!
	0x4308  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42fc0000d458 (0x2fc0000d458) in binary!
	0x3894  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42e40000d430 (0x2e40000d430) in binary!
	0x3888  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x3ac80000d468 (0x2c80000d468) in binary!
	0x49c8  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x38580000d510 (0x580000d510) in binary!
	0x384c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x4afc0000d460 (0x2fc0000d460) in binary!
	0x18000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42840000d3f8 (0x2840000d3f8) in binary!
	0x58000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x3a680000d408 (0x2680000d408) in binary!
	0x4968  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x495c0000d390 (0x15c0000d390) in binary!
	0x37ec  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x4a9c0000d400 (0x29c0000d400) in binary!
	0x18000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42240000d398 (0x2240000d398) in binary!
	0x88000000c  @objc ClientConfiguration.(null) <stripped>

	// Swift methods
	0x77b0  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x7a70  func ClientConfiguration.encode(with:) // method 
	0x7cc0  class func ClientConfiguration.__allocating_init(coder:) // init 
	0x8a50  class func ClientConfiguration.__allocating_init(from:) // init 
	0x8dc0  func ClientConfiguration.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case nearbyScanDuration  
	case nearbyScanEnabled  
	case nearbyScanWhileAuthenticated  
	case deviceNameSyncInterval  
	case deviceNameSyncEnabled  
 }

 enum FMClient.SyncCacheType { }

 class FMClient.SearchFilter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var devices : SearchFilterDevice

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3a680000d408 (0x2680000d408) in binary!
	0x4968  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x495c0000d390 (0x15c0000d390) in binary!
	0x37ec  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x4a9c0000d400 (0x29c0000d400) in binary!
	0x18000000c  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x42240000d398 (0x2240000d398) in binary!
	0x88000000c  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x37b00000d340 (0x7b00000d340) in binary!
	0x37a4  @objc SearchFilter.(null) <stripped>

	// Swift methods
	0x9650  func SearchFilter.encode(with:) // method 
	0x98b0  class func SearchFilter.__allocating_init(coder:) // init 
	0x9d60  func SearchFilter.devices.getter // getter 
	0x9da0  func SearchFilter.devices.setter // setter 
	0x9df0  func SearchFilter.devices.modify // modifyCoroutine 
	0x9e40  class func SearchFilter.__allocating_init(_:) // init 
	0xa170  class func SearchFilter.__allocating_init(from:) // init 
	0xa3e0  func SearchFilter.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
 }

 class FMClient.VoiceAssistantSyncResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let devices : VoiceAssistantDeviceName
	let anchor : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x37b00000d340 (0x7b00000d340) in binary!
	0x37a4  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x3b280000d318 (0x3280000d318) in binary!
	0x39e4  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x48e40000d370 (0xe40000d370) in binary!
	0x3774  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x37680000d3c8 (0x7680000d3c8) in binary!
	0x4a18  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffec9b0  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x294fffec6b8  @objc VoiceAssistantSyncResult.(null) <stripped>
	0x26cfffec720  @objc VoiceAssistantSyncResult.AWAVAUATSPLâM–Mâ«IâÃIâ˝Hâ◊Ëy˚ <stripped>
	0x2e4fffecb78  @objc VoiceAssistantSyncResult.IãM]ÈÆ˝ˇˇf.Ñ <stripped>

	// Swift methods
	0xbb30  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xbcc0  func VoiceAssistantSyncResult.encode(with:) // method 
	0xbf00  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xc8a0  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xcb30  func VoiceAssistantSyncResult.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
	case anchor  
 }

 enum FMClient.RequestMethod {

	// Properties
	case GET  
	case POST  
	case PUT  
	case DELETE  
 }

 struct FMClient.Request {

	// Properties
	let method : RequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let path : +3
	let bodyDictionary : [String : Any]
	let additionalHeaderFields : [String : String]
	let credential : RequestCredential
 }

 enum FMClient.SerializationError {

	// Properties
	case unknown  
	case invalidJSONBody  
	case missingAuthHeaders  
 }

 struct FMClient.Constants { }

 class FMClient.AuthenticationCredential : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let authToken : String
	let personId : String
	let hostName : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x37300000d2a8 (0x7300000d2a8) in binary!
	0x3724  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x37180000d280 (0x7180000d280) in binary!
	0x3c78  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x39580000d2f8 (0x1580000d2f8) in binary!
	0x4858  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x36e80000d348 (0x6e80000d348) in binary!
	0x4998  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffedbd0  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x294fffeddc8  @objc AuthenticationCredential.(null) <stripped>
	0x2acfffee300  @objc AuthenticationCredential.â`Hç> <stripped>
	0x6780000d2d8  @objc AuthenticationCredential.Hâ√∆1ˇHâ∆Lãm»ˇU–HâﬂHÉƒX[A\A]A^A_]ÈÙÈ <stripped>

	// Swift methods
	0x10630  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x10800  func AuthenticationCredential.encode(with:) // method 
	0x10a40  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x11190  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x11440  func AuthenticationCredential.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case authToken  
	case personId  
	case hostName  
 }

 class FMClient.SessionInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let bundleId : String?
	let processName : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x39080000d2a8 (0x1080000d2a8) in binary!
	0x4808  @objc SessionInfo.(null) <stripped>
WARNING: couldn't find address 0x36980000d2f8 (0x6980000d2f8) in binary!
	0x4948  @objc SessionInfo.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x374fffef1a0  @objc SessionInfo.(null) <stripped>
	0x36cfffef4a8  @objc SessionInfo.¸· <stripped>

	// Swift methods
	0x11940  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x11aa0  func SessionInfo.encode(with:) // method 
	0x11ce0  class func SessionInfo.__allocating_init(coder:) // init 
	0x12380  class func SessionInfo.__allocating_init(from:) // init 
	0x12650  func SessionInfo.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case bundleId  
	case processName  
 }

 struct FMClient.ServerCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : +3
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : 2
	let headers : [String : String]
 }

 class FMClient.FMClientXPCConnection : NSXPCConnection /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x36780000d2d8 (0x6780000d2d8) in binary!
	0x47d0  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0x3da40000d370 (0x5a40000d370) in binary!
	0x47b8  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff1108  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x16cffff0dc0  @objc FMClientXPCConnection.(null) <stripped>

	// Swift methods
	0x13030  class func FMClientXPCConnection.__allocating_init(exportedObject:interruptionHandler:invalidationHandler:) // init 
 }

 enum FMClient.Outcome {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error :  first-element-marker 
 }

 class FMClient.VoiceAssistantDeviceName : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceName : String
	let ownerFirstName : String
	let ownerLastName : String
	var $__lazy_storage_$_syncAnchor : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x36280000d180 (0x6280000d180) in binary!
	0x361c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x36100000d158 (0x6100000d158) in binary!
	0x3b70  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x38500000d1f0 (0x500000d1f0) in binary!
	0x4750  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35e00000d118 (0x5e00000d118) in binary!
	0x382c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x402c0000d338 (0x2c0000d338) in binary!
	0x4028  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35b00000d268 (0x5b00000d268) in binary!
	0x35a4  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x48540000d1b8 (0x540000d1b8) in binary!
	0x18000000c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x3fdc0000d150 (0x7dc0000d150) in binary!
	0xb8000000c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35680000d0c0 (0x5680000d0c0) in binary!
	0x355c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x38e00000d068 (0xe00000d068) in binary!
	0x379c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x469c0000d128 (0x69c0000d128) in binary!
	0x3f90  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x3f8c0000d048 (0x78c0000d048) in binary!
	0x3514  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35080000d1b8 (0x5080000d1b8) in binary!
	0x34fc  @objc VoiceAssistantDeviceName.(null) <stripped>

	// Swift methods
	0x14e40  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x15060  func VoiceAssistantDeviceName.encode(with:) // method 
	0x152a0  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x157d0  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x15880  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x15a80  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x16220  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x16510  func VoiceAssistantDeviceName.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case deviceName  
	case ownerFirstName  
	case ownerLastName  
 }

 class FMClient.DiscoveredDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceName : String
	let discoveryId : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x35680000d0c0 (0x5680000d0c0) in binary!
	0x355c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x38e00000d068 (0xe00000d068) in binary!
	0x379c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x469c0000d128 (0x69c0000d128) in binary!
	0x3f90  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f8c0000d048 (0x78c0000d048) in binary!
	0x3514  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x35080000d1b8 (0x5080000d1b8) in binary!
	0x34fc  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x47ac0000d110 (0x7ac0000d110) in binary!
	0x18000000c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f340000d0a8 (0x7340000d0a8) in binary!
	0xa8000000c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x34c00000d050 (0x4c00000d050) in binary!
	0x370c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f0c0000cfb0 (0x70c0000cfb0) in binary!
	0x3fbf  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x36e80000d088 (0x6e80000d088) in binary!
	0x45e8  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x34780000d128 (0x4780000d128) in binary!
	0x346c  @objc DiscoveredDevice.(null) <stripped>

	// Swift methods
	0x175a0  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x17840  func DiscoveredDevice.encode(with:) // method 
	0x17a80  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x185b0  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x18810  func DiscoveredDevice.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case deviceName  
	case discoveryId  
 }

 enum FMClient.DiscoveredDeviceError {

	// Properties
	case unknown  
	case missingDeviceName  
	case missingDiscoveryId  
 }

 class FMClient.SearchResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var devices : SearchResultDevice
	var resultCode : ResultCode

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x34c00000d050 (0x4c00000d050) in binary!
	0x370c  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x3f0c0000cfb0 (0x70c0000cfb0) in binary!
	0x3fbf  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x36e80000d088 (0x6e80000d088) in binary!
	0x45e8  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x34780000d128 (0x4780000d128) in binary!
	0x346c  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x34600000d0c0 (0x4600000d0c0) in binary!
	0x4710  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x54ffff8a48  @objc SearchResult.(null) <stripped>
	0x15c0000d048  @objc SearchResult.UHâÂAWAVAUATSHÉÏXLâm¿Hâu»Hâ}–Iºal(_:) <stripped>
WARNING: couldn't find address 0xffff8d78 (0xffff8d78) in binary!
	0x6640000cfd8  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0xffffa590 (0xffffa590) in binary!
	0x3f00000cee8  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0xced4ffff9bf8 (0x6d4ffff9bf8) in binary!
	0x3d80000cec0  @objc SearchResult.(null) <stripped>

	// Swift methods
	0x19060  func SearchResult.devices.getter // getter 
	0x19100  func SearchResult.devices.setter // setter 
	0x19150  func SearchResult.devices.modify // modifyCoroutine 
	0x191d0  func SearchResult.resultCode.getter // getter 
	0x19240  func SearchResult.resultCode.setter // setter 
	0x19280  func SearchResult.resultCode.modify // modifyCoroutine 
	0x192d0  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x19450  func SearchResult.encode(with:) // method 
	0x19690  class func SearchResult.__allocating_init(coder:) // init 
	0x19f90  class func SearchResult.__allocating_init(from:) // init 
	0x1a2b0  func SearchResult.encode(to:) // method 
 }

 enum FMClient.ResultCode { }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
	case resultCode  
 }

 class FMClient.HttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : AuthChallengeDisposition
	let httpSuccessCodeMin : Int
	let httpSuccessCodeMax : Int
	let endpoint : EndpointConfigurating
WARNING: couldn't find address 0x0 (0x0) in binary!
	var statusCodeHandlers :  empty-list 
	let statusCodeHandlerQueue : OS_dispatch_queue
	var $__lazy_storage_$_session : ClientURLSession

	// ObjC -> Swift bridged methods
	0x46f0  Session.credential(_:)
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff8d78  @objc HttpClient.(null) <stripped>

	// Swift methods
	0x1aab0  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1ab20  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1ab80  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1abd0  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1aef0  func HttpClient.registerHandler(for:handler:) // method 
	0x1b2b0  func <stripped> // getter 
	0x1b3a0  func HttpClient.invalidate() // method 
	0x1b3f0  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x1c880  func <stripped> // method 
 }

 struct FMClient.ErrorCode { }

 struct FMClient.StatusCode { }

 enum FMClient.ClientError {

	// Properties
	case unknown  
	case malformedURL  
 }

 class FMClient.SearchResultDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let firstName : String?
	let lastName : String?
	let ownerDsid : String?
	let serverId : String
	let deviceName : String?
	let deviceClass : String?
	let productName : String?
	let discoveryId : String?
	let productType : String?
	let thisDevice : Bool
	let needsSafety : Bool
	let pairedDevices : SearchResultDevice

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x33f00000cee8 (0x3f00000cee8) in binary!
	0x33e4  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33d80000cec0 (0x3d80000cec0) in binary!
	0x33cc  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33c00000cf18 (0x3c00000cf18) in binary!
	0x33b4  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33a80000ce80 (0x3a80000ce80) in binary!
	0x339c  @objc SearchResultDevice.(null) <stripped>
	0x3de0  Session.playSound(_:completion:)
WARNING: couldn't find address 0x3dd40000ce38 (0x5d40000ce38) in binary!
	0x336c  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x448c0000ce10 (0x48c0000ce10) in binary!
	0x35ac  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x44ac0000cf38 (0x4ac0000cf38) in binary!
	0x333c  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33300000cf90 (0x3300000cf90) in binary!
	0x45e0  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffffd1a8  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x5d4ffffcc00  @objc SearchResultDevice.(null) <stripped>
	0x5b4ffffcc68  @objc SearchResultDevice. <stripped>
	0x58cffffccd0  @objc SearchResultDevice. <stripped>
	0x69cffffcf58  @objc SearchResultDevice." <stripped>
	0x744ffffd8a0  @objc SearchResultDevice.1ˇËù <stripped>
	0x694ffffe058  @objc SearchResultDevice. <stripped>
	0x1  @objc SearchResultDevice.Lãm†Hã}®Hãu∞Ë!Ì <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x4  @objc SearchResultDevice.(null) <stripped>

	// Swift methods
	0x1e170  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x1e720  func SearchResultDevice.encode(with:) // method 
	0x1e960  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x1fdc0  class func SearchResultDevice.__allocating_init(from:) // init 
	0x20460  func SearchResultDevice.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case firstName  
	case lastName  
	case ownerDsid  
	case serverId  
	case deviceName  
	case deviceClass  
	case productName  
	case discoveryId  
	case productType  
	case thisDevice  
	case needsSafety  
	case pairedDevices  
 }

 class FMClient.SearchFilterDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let ownerName : String?
	let ownerDsid : String?
	let deviceName : String?
	let deviceClass : String?
	let productName : String?
	let productType : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x32f80000cda0 (0x2f80000cda0) in binary!
	0x32ec  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32e00000ce38 (0x2e00000ce38) in binary!
	0x32d4  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32c80000cda0 (0x2c80000cda0) in binary!
	0x32bc  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x454c0000cd50 (0x54c0000cd50) in binary!
	0x34fc  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x43fc0000ce88 (0x3fc0000ce88) in binary!
	0x328c  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32800000cee0 (0x2800000cee0) in binary!
	0x4530  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x2  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x5696c434d46  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x76973736553  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x9bc80000050 (0x1bc80000050) in binary!
	0x63400005638  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x1c00000002 (0x1c00000002) in binary!
	0xf0000000a  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x120000000d (0x120000000d) in binary!
	0x1300000000  @objc SearchFilterDevice.(null) <stripped>

	// Swift methods
	0x21080  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x21430  func SearchFilterDevice.encode(with:) // method 
	0x21670  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x22570  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x229a0  func SearchFilterDevice.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case ownerName  
	case ownerDsid  
	case deviceName  
	case deviceClass  
	case productName  
	case productType  
 }
