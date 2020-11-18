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
	let clientBundleId : String? // +0x8 (0x10)
	let clientProcessName : String // +0x18 (0x10)
	var _activeConnection : NSXPCConnection? // +0x28 (0x8)
	var $__lazy_storage_$_serverProxy : ServerSessionProtocol?? // +0x30 (0x8)
	var authenticationProvider : AuthenticationProviding? // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x1e70  @objc Session.registerAuthenticationProvider: <stripped>
	0x1f00  @objc Session.invalidate <stripped>
	0x21f0  @objc Session.init <stripped>
	0x1fd0  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x1aa0  func <stripped> // getter 
	0x1ce0  func Session.registerAuthenticationProvider(_:) // method 
	0x1ec0  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5cc0  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x6100  @objc PlaySoundDevice.serverId <stripped>
	0x6140  @objc PlaySoundDevice.locality <stripped>
	0x61f0  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x6300  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x65a0  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x69f0  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x6a20  @objc PlaySoundDevice.debugDescription <stripped>
	0x6a80  @objc PlaySoundDevice.description <stripped>
	0x6d60  @objc PlaySoundDevice.init <stripped>
	0x6cd0  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x6220  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x63b0  func PlaySoundDevice.encode(with:) // method 
	0x65f0  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x6f20  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x71a0  func PlaySoundDevice.encode(to:) // method 
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
	let deviceNameSyncInterval : y< // +0xfeedfacf (0x0)
	let deviceNameSyncEnabled : Bool // +0x3 (0x1)

	// ObjC -> Swift bridged methods
	0x77e0  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x7820  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x7850  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x7880  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x79b0  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x7bb0  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x7ed0  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x8370  @objc ClientConfiguration.initWithCoder: <stripped>
	0x83a0  @objc ClientConfiguration.description <stripped>
	0x8a30  @objc ClientConfiguration.init <stripped>
	0x89c0  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x79e0  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x7ce0  func ClientConfiguration.encode(with:) // method 
	0x7f20  class func ClientConfiguration.__allocating_init(coder:) // init 
	0x8c30  class func ClientConfiguration.__allocating_init(from:) // init 
	0x8f50  func ClientConfiguration.encode(to:) // method 
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
	var devices : SearchFilterDevice // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x9a70  @objc SearchFilter.encodeWithCoder: <stripped>
	0x9ee0  @objc SearchFilter.initWithCoder: <stripped>
	0xa0b0  @objc SearchFilter.init: <stripped>
	0xa1c0  @objc SearchFilter.init <stripped>
	0xa150  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0x9850  func SearchFilter.encode(with:) // method 
	0x9ac0  class func SearchFilter.__allocating_init(coder:) // init 
	0x9f10  func SearchFilter.devices.getter // getter 
	0x9f50  func SearchFilter.devices.setter // setter 
	0x9fa0  func SearchFilter.devices.modify // modifyCoroutine 
	0x9ff0  class func SearchFilter.__allocating_init(_:) // init 
	0xa320  class func SearchFilter.__allocating_init(from:) // init 
	0xa590  func SearchFilter.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
 }

 class FMClient.VoiceAssistantSyncResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let devices : VoiceAssistantDeviceName // +0x8 (0x8)
	let anchor : String // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0xc850  @objc VoiceAssistantSyncResult.devices <stripped>
	0xc8e0  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xca10  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xccc0  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xd0f0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xd120  @objc VoiceAssistantSyncResult.description <stripped>
	0xd480  @objc VoiceAssistantSyncResult.init <stripped>
	0xd400  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xc960  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xcad0  func VoiceAssistantSyncResult.encode(with:) // method 
	0xcd10  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xd620  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xd880  func VoiceAssistantSyncResult.encode(to:) // method 
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
	let path : ç:
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
	let authToken : String // +0x8 (0x10)
	let personId : String // +0x18 (0x10)
	let hostName : String // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x10970  @objc AuthenticationCredential.authToken <stripped>
	0x109b0  @objc AuthenticationCredential.personId <stripped>
	0x109f0  @objc AuthenticationCredential.hostName <stripped>
	0x10bc0  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x10e70  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x11300  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x11400  @objc AuthenticationCredential.init <stripped>
	0x11360  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x10aa0  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x10c80  func AuthenticationCredential.encode(with:) // method 
	0x10ec0  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x115b0  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x11860  func AuthenticationCredential.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case authToken  
	case personId  
	case hostName  
 }

 class FMClient.SessionInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let bundleId : String? // +0x8 (0x10)
	let processName : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x120d0  @objc SessionInfo.encodeWithCoder: <stripped>
	0x12540  @objc SessionInfo.initWithCoder: <stripped>
	0x125c0  @objc SessionInfo.init <stripped>
	0x129e0  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x11d70  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x11ee0  func SessionInfo.encode(with:) // method 
	0x12120  class func SessionInfo.__allocating_init(coder:) // init 
	0x12760  class func SessionInfo.__allocating_init(from:) // init 
	0x12a20  func SessionInfo.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case bundleId  
	case processName  
 }

 struct FMClient.ServerCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ç:
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : ë9
	let headers : [String : String]
 }

 class FMClient.FMClientXPCConnection : NSXPCConnection /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
	0x13410  @objc FMClientXPCConnection.init <stripped>
	0x13570  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x13590  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x135c0  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

	// Swift methods
 }

 enum FMClient.Outcome {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error :  first-element-marker 
 }

 class FMClient.VoiceAssistantDeviceName : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceName : String // +0x8 (0x10)
	let ownerFirstName : String // +0x18 (0x10)
	let ownerLastName : String // +0x28 (0x10)
	var $__lazy_storage_$_syncAnchor : String? // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x149e0  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x14a20  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x14a60  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x14c50  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x14f10  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x153c0  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x153f0  @objc VoiceAssistantDeviceName.syncAnchor <stripped>
	0x15540  @objc VoiceAssistantDeviceName.setSyncAnchor: <stripped>
	0x15990  @objc VoiceAssistantDeviceName.hash <stripped>
	0x15b50  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x15be0  @objc VoiceAssistantDeviceName.description <stripped>
	0x15ed0  @objc VoiceAssistantDeviceName.init <stripped>
	0x15e20  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x14b10  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x14d20  func VoiceAssistantDeviceName.encode(with:) // method 
	0x14f60  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x154b0  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x15580  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x158a0  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x16090  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x16350  func VoiceAssistantDeviceName.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case deviceName  
	case ownerFirstName  
	case ownerLastName  
 }

 class FMClient.DiscoveredDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceName : String // +0x8 (0x10)
	let discoveryId : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x17860  @objc DiscoveredDevice.deviceName <stripped>
	0x178a0  @objc DiscoveredDevice.discoveryId <stripped>
	0x17a40  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x17df0  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x18260  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x18290  @objc DiscoveredDevice.hash <stripped>
	0x183c0  @objc DiscoveredDevice.isEqual: <stripped>
	0x18450  @objc DiscoveredDevice.description <stripped>
	0x185f0  @objc DiscoveredDevice.debugDescription <stripped>
	0x18780  @objc DiscoveredDevice.init <stripped>
	0x186f0  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x17950  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x17c00  func DiscoveredDevice.encode(with:) // method 
	0x17e40  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x18920  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x18b80  func DiscoveredDevice.encode(to:) // method 
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
	var devices : SearchResultDevice // +0x8 (0x8)
	var resultCode : ResultCode // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x19380  @objc SearchResult.devices <stripped>
	0x19430  @objc SearchResult.setDevices: <stripped>
	0x19520  @objc SearchResult.resultCode <stripped>
	0x19590  @objc SearchResult.setResultCode: <stripped>
	0x199e0  @objc SearchResult.encodeWithCoder: <stripped>
	0x19e90  @objc SearchResult.initWithCoder: <stripped>
	0x19ec0  @objc SearchResult.debugDescription <stripped>
	0x19f20  @objc SearchResult.description <stripped>
	0x1a190  @objc SearchResult.init <stripped>
	0x1a120  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x193f0  func SearchResult.devices.getter // getter 
	0x19490  func SearchResult.devices.setter // setter 
	0x194e0  func SearchResult.devices.modify // modifyCoroutine 
	0x19560  func SearchResult.resultCode.getter // getter 
	0x195d0  func SearchResult.resultCode.setter // setter 
	0x19610  func SearchResult.resultCode.modify // modifyCoroutine 
	0x19660  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x197f0  func SearchResult.encode(with:) // method 
	0x19a30  class func SearchResult.__allocating_init(coder:) // init 
	0x1a330  class func SearchResult.__allocating_init(from:) // init 
	0x1a650  func SearchResult.encode(to:) // method 
 }

 enum FMClient.ResultCode { }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
	case resultCode  
 }

 class FMClient.HttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : AuthChallengeDisposition // +0x8 (0x10)
	let httpSuccessCodeMin : Int // +0x18 (0x8)
	let httpSuccessCodeMax : Int // +0x20 (0x8)
	let endpoint : EndpointConfigurating // +0x28 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var statusCodeHandlers :  empty-list  // +0x50 (0x8)
	let statusCodeHandlerQueue : OS_dispatch_queue // +0x58 (0x8)
	var $__lazy_storage_$_session : ClientURLSession // +0x60 (0x28)

	// ObjC -> Swift bridged methods
	0x1ccf0  @objc HttpClient.init <stripped>
	0x1cc30  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1afa0  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1aff0  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1b050  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1b0a0  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1b380  func HttpClient.registerHandler(for:handler:) // method 
	0x1b680  func <stripped> // getter 
	0x1b750  func HttpClient.invalidate() // method 
	0x1b7a0  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x1ca80  func <stripped> // method 
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
	let firstName : String? // +0x8 (0x10)
	let lastName : String? // +0x18 (0x10)
	let ownerDsid : String? // +0x28 (0x10)
	let serverId : String // +0x38 (0x10)
	let deviceName : String? // +0x48 (0x10)
	let deviceClass : String? // +0x58 (0x10)
	let productName : String? // +0x68 (0x10)
	let discoveryId : String? // +0x78 (0x10)
	let productType : String? // +0x88 (0x10)
	let thisDevice : Bool // +0x98 (0x1)
	let needsSafety : Bool // +0x99 (0x1)
	let pairedDevices : SearchResultDevice // +0xa0 (0x8)

	// ObjC -> Swift bridged methods
	0x1ecf0  @objc SearchResultDevice.firstName <stripped>
	0x1ed30  @objc SearchResultDevice.lastName <stripped>
	0x1ed70  @objc SearchResultDevice.ownerDsid <stripped>
	0x1edb0  @objc SearchResultDevice.serverId <stripped>
	0x1ee30  @objc SearchResultDevice.deviceName <stripped>
	0x1ee70  @objc SearchResultDevice.deviceClass <stripped>
	0x1eeb0  @objc SearchResultDevice.productName <stripped>
	0x1eef0  @objc SearchResultDevice.discoveryId <stripped>
	0x1ef30  @objc SearchResultDevice.productType <stripped>
	0x1f000  @objc SearchResultDevice.thisDevice <stripped>
	0x1f030  @objc SearchResultDevice.needsSafety <stripped>
	0x1f060  @objc SearchResultDevice.pairedDevices <stripped>
	0x1f3a0  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x1f8a0  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x1fec0  @objc SearchResultDevice.initWithCoder: <stripped>
	0x1fef0  @objc SearchResultDevice.description <stripped>
	0x20a60  @objc SearchResultDevice.init <stripped>
	0x20930  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x1f100  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x1f6b0  func SearchResultDevice.encode(with:) // method 
	0x1f8f0  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x20d40  class func SearchResultDevice.__allocating_init(from:) // init 
	0x21400  func SearchResultDevice.encode(to:) // method 
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
	let ownerName : String? // +0x8 (0x10)
	let ownerDsid : String? // +0x18 (0x10)
	let deviceName : String? // +0x28 (0x10)
	let deviceClass : String? // +0x38 (0x10)
	let productName : String? // +0x48 (0x10)
	let productType : String? // +0x58 (0x10)

	// ObjC -> Swift bridged methods
	0x21e60  @objc SearchFilterDevice.ownerName <stripped>
	0x21ea0  @objc SearchFilterDevice.ownerDsid <stripped>
	0x21ee0  @objc SearchFilterDevice.deviceName <stripped>
	0x21f20  @objc SearchFilterDevice.deviceClass <stripped>
	0x21f60  @objc SearchFilterDevice.productName <stripped>
	0x21fa0  @objc SearchFilterDevice.productType <stripped>
	0x22220  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x22620  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x22b60  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x22b90  @objc SearchFilterDevice.description <stripped>
	0x23320  @objc SearchFilterDevice.init <stripped>
	0x23240  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x22070  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x22430  func SearchFilterDevice.encode(with:) // method 
	0x22670  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x23540  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x23970  func SearchFilterDevice.encode(to:) // method 
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
