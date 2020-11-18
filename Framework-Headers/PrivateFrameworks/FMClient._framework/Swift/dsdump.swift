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
WARNING: couldn't find address 0x3c900000db48 (0x4900000db48) in binary!
	0x4ce8  @objc Session.(null) <stripped>
WARNING: couldn't find address 0x3a200000dd00 (0x2200000dd00) in binary!
	0x4cd0  @objc Session.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x5acfffe0778  @objc Session.(null) <stripped>
	0x4c4fffe10d0  @objc Session.¿Lãe®Lâ˜Ëw˝ <stripped>

	// Swift methods
	0x1830  func <stripped> // getter 
	0x1a50  func <stripped> // getter 
	0x1ad0  func Session.registerAuthenticationProvider(_:) // method 
	0x1cb0  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5630  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String
	let locality : String
	let safetyWarningConfirmed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x39500000dbe8 (0x1500000dbe8) in binary!
	0x3944  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x43940000dbc0 (0x3940000dbc0) in binary!
	0x3748  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x3b780000db98 (0x3780000db98) in binary!
	0x4a78  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x39080000dc38 (0x1080000dc38) in binary!
	0x38fc  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x38f00000dbd0 (0xf00000dbd0) in binary!
	0x4ba0  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe3e78  @objc PlaySoundDevice.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x2ecfffe3a00  @objc PlaySoundDevice.(null) <stripped>
	0x2c4fffe3a58  @objc PlaySoundDevice.ËgÍ <stripped>
	0x29cfffe3b60  @objc PlaySoundDevice. <stripped>
	0x2d4fffe4038  @objc PlaySoundDevice.„ˇˇæp <stripped>

	// Swift methods
	0x5ac0  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x5c70  func PlaySoundDevice.encode(with:) // method 
	0x5eb0  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x6830  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x6b20  func PlaySoundDevice.encode(to:) // method 
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
	let deviceNameSyncInterval : s; // +0xfeedfacf (0x0)
	let deviceNameSyncEnabled : Bool // +0x3 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x38b00000db00 (0xb00000db00) in binary!
	0x4308  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42fc0000dad8 (0x2fc0000dad8) in binary!
	0x3894  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42e40000dab0 (0x2e40000dab0) in binary!
	0x3888  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x3ac80000dae8 (0x2c80000dae8) in binary!
	0x49c8  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x38580000db90 (0x580000db90) in binary!
	0x384c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x4afc0000dae0 (0x2fc0000dae0) in binary!
	0x18000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42840000da78 (0x2840000da78) in binary!
	0x58000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x3a680000da88 (0x2680000da88) in binary!
	0x4968  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x495c0000da10 (0x15c0000da10) in binary!
	0x37ec  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x4a9c0000da80 (0x29c0000da80) in binary!
	0x18000000c  @objc ClientConfiguration.(null) <stripped>
WARNING: couldn't find address 0x42240000da18 (0x2240000da18) in binary!
	0x88000000c  @objc ClientConfiguration.(null) <stripped>

	// Swift methods
	0x7200  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x74c0  func ClientConfiguration.encode(with:) // method 
	0x7710  class func ClientConfiguration.__allocating_init(coder:) // init 
	0x8490  class func ClientConfiguration.__allocating_init(from:) // init 
	0x8800  func ClientConfiguration.encode(to:) // method 
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
WARNING: couldn't find address 0x3a680000da88 (0x2680000da88) in binary!
	0x4968  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x495c0000da10 (0x15c0000da10) in binary!
	0x37ec  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x4a9c0000da80 (0x29c0000da80) in binary!
	0x18000000c  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x42240000da18 (0x2240000da18) in binary!
	0x88000000c  @objc SearchFilter.(null) <stripped>
WARNING: couldn't find address 0x37b00000d9c0 (0x7b00000d9c0) in binary!
	0x37a4  @objc SearchFilter.(null) <stripped>

	// Swift methods
	0x9090  func SearchFilter.encode(with:) // method 
	0x92f0  class func SearchFilter.__allocating_init(coder:) // init 
	0x97a0  func SearchFilter.devices.getter // getter 
	0x97e0  func SearchFilter.devices.setter // setter 
	0x9830  func SearchFilter.devices.modify // modifyCoroutine 
	0x9880  class func SearchFilter.__allocating_init(_:) // init 
	0x9bb0  class func SearchFilter.__allocating_init(from:) // init 
	0x9e20  func SearchFilter.encode(to:) // method 
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
WARNING: couldn't find address 0x37b00000d9c0 (0x7b00000d9c0) in binary!
	0x37a4  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x3b280000d998 (0x3280000d998) in binary!
	0x39e4  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x48e40000d9f0 (0xe40000d9f0) in binary!
	0x3774  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x37680000da48 (0x7680000da48) in binary!
	0x4a18  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffeca10  @objc VoiceAssistantSyncResult.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x114fffec718  @objc VoiceAssistantSyncResult.(null) <stripped>
	0xecfffec780  @objc VoiceAssistantSyncResult.HãG HâE–Lão(Hãπã <stripped>
	0x164fffecbd8  @objc VoiceAssistantSyncResult.AUATSHÉÏ(Hâ˚Hâ◊Ë∞Ô <stripped>

	// Swift methods
	0xb540  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xb6d0  func VoiceAssistantSyncResult.encode(with:) // method 
	0xb910  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xc2b0  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xc540  func VoiceAssistantSyncResult.encode(to:) // method 
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
	let path : ´9
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
WARNING: couldn't find address 0x37300000d928 (0x7300000d928) in binary!
	0x3724  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x37180000d900 (0x7180000d900) in binary!
	0x3c78  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x39580000d978 (0x1580000d978) in binary!
	0x4858  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x36e80000d9c8 (0x6e80000d9c8) in binary!
	0x4998  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffedc30  @objc AuthenticationCredential.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x114fffede28  @objc AuthenticationCredential.(null) <stripped>
	0x12cfffee360  @objc AuthenticationCredential.ã≤y <stripped>
	0x6780000d958  @objc AuthenticationCredential.âE∏HçVÑ <stripped>

	// Swift methods
	0x10010  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x101e0  func AuthenticationCredential.encode(with:) // method 
	0x10420  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x10b70  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x10e20  func AuthenticationCredential.encode(to:) // method 
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
WARNING: couldn't find address 0x39080000d928 (0x1080000d928) in binary!
	0x4808  @objc SessionInfo.(null) <stripped>
WARNING: couldn't find address 0x36980000d978 (0x6980000d978) in binary!
	0x4948  @objc SessionInfo.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1f4fffef1f0  @objc SessionInfo.(null) <stripped>
	0x1ecfffef4f8  @objc SessionInfo.√Hâ‹Hç5◊ <stripped>

	// Swift methods
	0x11320  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x11480  func SessionInfo.encode(with:) // method 
	0x116c0  class func SessionInfo.__allocating_init(coder:) // init 
	0x11d60  class func SessionInfo.__allocating_init(from:) // init 
	0x12030  func SessionInfo.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case bundleId  
	case processName  
 }

 struct FMClient.ServerCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ´9
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : É8
	let headers : [String : String]
 }

 class FMClient.FMClientXPCConnection : NSXPCConnection /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x36780000d958 (0x6780000d958) in binary!
	0x47d0  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0x3da40000d9f0 (0x5a40000d9f0) in binary!
	0x47b8  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff1148  @objc FMClientXPCConnection.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x7ecffff0e00  @objc FMClientXPCConnection.(null) <stripped>

	// Swift methods
	0x12a00  class func FMClientXPCConnection.__allocating_init(exportedObject:interruptionHandler:invalidationHandler:) // init 
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
WARNING: couldn't find address 0x36280000d800 (0x6280000d800) in binary!
	0x361c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x36100000d7d8 (0x6100000d7d8) in binary!
	0x3b70  @objc VoiceAssistantDeviceName.(null) <stripped>
	0x4750  variable initialization expression of HttpClient.statusCodeHandlerQueue
WARNING: couldn't find address 0x35e00000d798 (0x5e00000d798) in binary!
	0x382c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x402c0000d9b8 (0x2c0000d9b8) in binary!
	0x4028  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35b00000d8e8 (0x5b00000d8e8) in binary!
	0x35a4  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x48540000d838 (0x540000d838) in binary!
	0x18000000c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x3fdc0000d7d0 (0x7dc0000d7d0) in binary!
	0xb8000000c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35680000d740 (0x5680000d740) in binary!
	0x355c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x38e00000d6e8 (0xe00000d6e8) in binary!
	0x379c  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x469c0000d7a8 (0x69c0000d7a8) in binary!
	0x3f90  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x3f8c0000d6c8 (0x78c0000d6c8) in binary!
	0x3514  @objc VoiceAssistantDeviceName.(null) <stripped>
WARNING: couldn't find address 0x35080000d838 (0x5080000d838) in binary!
	0x34fc  @objc VoiceAssistantDeviceName.(null) <stripped>

	// Swift methods
	0x14800  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x14a20  func VoiceAssistantDeviceName.encode(with:) // method 
	0x14c60  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x15190  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x15240  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x15440  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x15be0  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x15ed0  func VoiceAssistantDeviceName.encode(to:) // method 
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
WARNING: couldn't find address 0x35680000d740 (0x5680000d740) in binary!
	0x355c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x38e00000d6e8 (0xe00000d6e8) in binary!
	0x379c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x469c0000d7a8 (0x69c0000d7a8) in binary!
	0x3f90  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f8c0000d6c8 (0x78c0000d6c8) in binary!
	0x3514  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x35080000d838 (0x5080000d838) in binary!
	0x34fc  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x47ac0000d790 (0x7ac0000d790) in binary!
	0x18000000c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f340000d728 (0x7340000d728) in binary!
	0xa8000000c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x34c00000d6d0 (0x4c00000d6d0) in binary!
	0x370c  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x3f0c0000d630 (0x70c0000d630) in binary!
	0x3fbf  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x36e80000d708 (0x6e80000d708) in binary!
	0x45e8  @objc DiscoveredDevice.(null) <stripped>
WARNING: couldn't find address 0x34780000d7a8 (0x4780000d7a8) in binary!
	0x346c  @objc DiscoveredDevice.(null) <stripped>

	// Swift methods
	0x16f60  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x17200  func DiscoveredDevice.encode(with:) // method 
	0x17440  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x17f70  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x181d0  func DiscoveredDevice.encode(to:) // method 
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
WARNING: couldn't find address 0x34c00000d6d0 (0x4c00000d6d0) in binary!
	0x370c  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x3f0c0000d630 (0x70c0000d630) in binary!
	0x3fbf  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x36e80000d708 (0x6e80000d708) in binary!
	0x45e8  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0x34780000d7a8 (0x4780000d7a8) in binary!
	0x346c  @objc SearchResult.(null) <stripped>
	0x4710  variable initialization expression of HttpClient.httpSuccessCodeMin
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6d4ffff8a78  @objc SearchResult.(null) <stripped>
	0x15c0000d6c8  @objc SearchResult.UHâÂ1¿1“]√fD <stripped>
WARNING: couldn't find address 0xffff8da8 (0xffff8da8) in binary!
	0x6640000d658  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0xffffa590 (0xffffa590) in binary!
	0x3f00000d568  @objc SearchResult.(null) <stripped>
WARNING: couldn't find address 0xd554ffff9bf8 (0x554ffff9bf8) in binary!
	0x3d80000d540  @objc SearchResult.(null) <stripped>

	// Swift methods
	0x18a20  func SearchResult.devices.getter // getter 
	0x18ac0  func SearchResult.devices.setter // setter 
	0x18b10  func SearchResult.devices.modify // modifyCoroutine 
	0x18b90  func SearchResult.resultCode.getter // getter 
	0x18c00  func SearchResult.resultCode.setter // setter 
	0x18c40  func SearchResult.resultCode.modify // modifyCoroutine 
	0x18c90  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x18e10  func SearchResult.encode(with:) // method 
	0x19050  class func SearchResult.__allocating_init(coder:) // init 
	0x19950  class func SearchResult.__allocating_init(from:) // init 
	0x19c70  func SearchResult.encode(to:) // method 
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
	0x46f0  variable initialization expression of VoiceAssistantDeviceName.$__lazy_storage_$_syncAnchor
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff8da8  @objc HttpClient.(null) <stripped>

	// Swift methods
	0x1a470  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1a4e0  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1a540  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1a590  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1a8b0  func HttpClient.registerHandler(for:handler:) // method 
	0x1ac70  func <stripped> // getter 
	0x1ad60  func HttpClient.invalidate() // method 
	0x1adb0  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x1c230  func <stripped> // method 
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
WARNING: couldn't find address 0x33f00000d568 (0x3f00000d568) in binary!
	0x33e4  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33d80000d540 (0x3d80000d540) in binary!
	0x33cc  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33c00000d598 (0x3c00000d598) in binary!
	0x33b4  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33a80000d500 (0x3a80000d500) in binary!
	0x339c  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33900000d4e0 (0x3900000d4e0) in binary!
	0x3de0  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x3dd40000d4b8 (0x5d40000d4b8) in binary!
	0x336c  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x448c0000d490 (0x48c0000d490) in binary!
	0x35ac  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x44ac0000d5b8 (0x4ac0000d5b8) in binary!
	0x333c  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x33300000d610 (0x3300000d610) in binary!
	0x45e0  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffffd1a8  @objc SearchResultDevice.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x454ffffcc00  @objc SearchResultDevice.(null) <stripped>
	0x434ffffcc68  @objc SearchResultDevice.p <stripped>
	0x40cffffccd0  @objc SearchResultDevice.HâU»Hâu–Hâ˚Hç=™Î <stripped>
	0x51cffffcf58  @objc SearchResultDevice.ˇˇfêUHâÂAWAVAUATSHÉÏHMâÔHâU»Hâu–Hâ˚Hç=™Î <stripped>
	0x5c4ffffd8a0  @objc SearchResultDevice.â«Ëì˜ <stripped>
	0x514ffffe058  @objc SearchResultDevice.Lã5Uê <stripped>
	0x1  @objc SearchResultDevice. <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x4  @objc SearchResultDevice.(null) <stripped>

	// Swift methods
	0x1daf0  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x1e0a0  func SearchResultDevice.encode(with:) // method 
	0x1e2e0  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x1f740  class func SearchResultDevice.__allocating_init(from:) // init 
	0x1fde0  func SearchResultDevice.encode(to:) // method 
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
WARNING: couldn't find address 0x32f80000d420 (0x2f80000d420) in binary!
	0x32ec  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32e00000d4b8 (0x2e00000d4b8) in binary!
	0x32d4  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32c80000d420 (0x2c80000d420) in binary!
	0x32bc  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x454c0000d3d0 (0x54c0000d3d0) in binary!
	0x34fc  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x43fc0000d508 (0x3fc0000d508) in binary!
	0x328c  @objc SearchFilterDevice.(null) <stripped>
WARNING: couldn't find address 0x32800000d560 (0x2800000d560) in binary!
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
	0x20a00  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x20db0  func SearchFilterDevice.encode(with:) // method 
	0x20ff0  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x21ef0  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x22320  func SearchFilterDevice.encode(to:) // method 
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
