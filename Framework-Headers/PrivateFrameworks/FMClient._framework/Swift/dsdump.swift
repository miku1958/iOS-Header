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
	0x1e40  @objc Session.registerAuthenticationProvider: <stripped>
	0x1ed0  @objc Session.invalidate <stripped>
	0x21c0  @objc Session.init <stripped>
	0x1fa0  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x1a70  func <stripped> // getter 
	0x1cb0  func Session.registerAuthenticationProvider(_:) // method 
	0x1e90  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5c90  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x60d0  @objc PlaySoundDevice.serverId <stripped>
	0x6110  @objc PlaySoundDevice.locality <stripped>
	0x61c0  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x62d0  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x6570  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x69c0  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x69f0  @objc PlaySoundDevice.debugDescription <stripped>
	0x6a50  @objc PlaySoundDevice.description <stripped>
	0x6d30  @objc PlaySoundDevice.init <stripped>
	0x6ca0  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x61f0  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x6380  func PlaySoundDevice.encode(with:) // method 
	0x65c0  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x6ef0  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x7170  func PlaySoundDevice.encode(to:) // method 
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
	0x77b0  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x77f0  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x7820  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x7850  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x7980  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x7b80  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x7ea0  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x8340  @objc ClientConfiguration.initWithCoder: <stripped>
	0x8370  @objc ClientConfiguration.description <stripped>
	0x8a00  @objc ClientConfiguration.init <stripped>
	0x8990  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x79b0  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x7cb0  func ClientConfiguration.encode(with:) // method 
	0x7ef0  class func ClientConfiguration.__allocating_init(coder:) // init 
	0x8c00  class func ClientConfiguration.__allocating_init(from:) // init 
	0x8f20  func ClientConfiguration.encode(to:) // method 
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
	0x9a40  @objc SearchFilter.encodeWithCoder: <stripped>
	0x9eb0  @objc SearchFilter.initWithCoder: <stripped>
	0xa080  @objc SearchFilter.init: <stripped>
	0xa190  @objc SearchFilter.init <stripped>
	0xa120  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0x9820  func SearchFilter.encode(with:) // method 
	0x9a90  class func SearchFilter.__allocating_init(coder:) // init 
	0x9ee0  func SearchFilter.devices.getter // getter 
	0x9f20  func SearchFilter.devices.setter // setter 
	0x9f70  func SearchFilter.devices.modify // modifyCoroutine 
	0x9fc0  class func SearchFilter.__allocating_init(_:) // init 
	0xa2f0  class func SearchFilter.__allocating_init(from:) // init 
	0xa560  func SearchFilter.encode(to:) // method 
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
	0xc820  @objc VoiceAssistantSyncResult.devices <stripped>
	0xc8b0  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xc9e0  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xcc90  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xd0c0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xd0f0  @objc VoiceAssistantSyncResult.description <stripped>
	0xd450  @objc VoiceAssistantSyncResult.init <stripped>
	0xd3d0  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xc930  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xcaa0  func VoiceAssistantSyncResult.encode(with:) // method 
	0xcce0  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xd5f0  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xd850  func VoiceAssistantSyncResult.encode(to:) // method 
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
	0x10940  @objc AuthenticationCredential.authToken <stripped>
	0x10980  @objc AuthenticationCredential.personId <stripped>
	0x109c0  @objc AuthenticationCredential.hostName <stripped>
	0x10b90  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x10e40  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x112d0  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x113d0  @objc AuthenticationCredential.init <stripped>
	0x11330  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x10a70  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x10c50  func AuthenticationCredential.encode(with:) // method 
	0x10e90  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x11580  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x11830  func AuthenticationCredential.encode(to:) // method 
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
	0x120a0  @objc SessionInfo.encodeWithCoder: <stripped>
	0x12510  @objc SessionInfo.initWithCoder: <stripped>
	0x12590  @objc SessionInfo.init <stripped>
	0x129b0  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x11d40  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x11eb0  func SessionInfo.encode(with:) // method 
	0x120f0  class func SessionInfo.__allocating_init(coder:) // init 
	0x12730  class func SessionInfo.__allocating_init(from:) // init 
	0x129f0  func SessionInfo.encode(to:) // method 
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
	0x133e0  @objc FMClientXPCConnection.init <stripped>
	0x13540  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x13560  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x13590  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

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
	0x149c0  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x14a00  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x14a40  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x14c30  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x14ef0  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x153a0  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x153d0  @objc VoiceAssistantDeviceName.syncAnchor <stripped>
	0x15520  @objc VoiceAssistantDeviceName.setSyncAnchor: <stripped>
	0x15970  @objc VoiceAssistantDeviceName.hash <stripped>
	0x15b30  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x15bc0  @objc VoiceAssistantDeviceName.description <stripped>
	0x15eb0  @objc VoiceAssistantDeviceName.init <stripped>
	0x15e00  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x14af0  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x14d00  func VoiceAssistantDeviceName.encode(with:) // method 
	0x14f40  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x15490  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x15560  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x15880  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x16070  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x16330  func VoiceAssistantDeviceName.encode(to:) // method 
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
	0x17840  @objc DiscoveredDevice.deviceName <stripped>
	0x17880  @objc DiscoveredDevice.discoveryId <stripped>
	0x17a20  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x17dd0  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x18240  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x18270  @objc DiscoveredDevice.hash <stripped>
	0x183a0  @objc DiscoveredDevice.isEqual: <stripped>
	0x18430  @objc DiscoveredDevice.description <stripped>
	0x185d0  @objc DiscoveredDevice.debugDescription <stripped>
	0x18760  @objc DiscoveredDevice.init <stripped>
	0x186d0  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x17930  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x17be0  func DiscoveredDevice.encode(with:) // method 
	0x17e20  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x18900  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x18b60  func DiscoveredDevice.encode(to:) // method 
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
	0x19360  @objc SearchResult.devices <stripped>
	0x19410  @objc SearchResult.setDevices: <stripped>
	0x19500  @objc SearchResult.resultCode <stripped>
	0x19570  @objc SearchResult.setResultCode: <stripped>
	0x199c0  @objc SearchResult.encodeWithCoder: <stripped>
	0x19e70  @objc SearchResult.initWithCoder: <stripped>
	0x19ea0  @objc SearchResult.debugDescription <stripped>
	0x19f00  @objc SearchResult.description <stripped>
	0x1a170  @objc SearchResult.init <stripped>
	0x1a100  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x193d0  func SearchResult.devices.getter // getter 
	0x19470  func SearchResult.devices.setter // setter 
	0x194c0  func SearchResult.devices.modify // modifyCoroutine 
	0x19540  func SearchResult.resultCode.getter // getter 
	0x195b0  func SearchResult.resultCode.setter // setter 
	0x195f0  func SearchResult.resultCode.modify // modifyCoroutine 
	0x19640  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x197d0  func SearchResult.encode(with:) // method 
	0x19a10  class func SearchResult.__allocating_init(coder:) // init 
	0x1a310  class func SearchResult.__allocating_init(from:) // init 
	0x1a630  func SearchResult.encode(to:) // method 
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
	0x1ccd0  @objc HttpClient.init <stripped>
	0x1cc10  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1af80  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1afd0  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1b030  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1b080  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1b360  func HttpClient.registerHandler(for:handler:) // method 
	0x1b660  func <stripped> // getter 
	0x1b730  func HttpClient.invalidate() // method 
	0x1b780  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x1ca60  func <stripped> // method 
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
	0x1ecd0  @objc SearchResultDevice.firstName <stripped>
	0x1ed10  @objc SearchResultDevice.lastName <stripped>
	0x1ed50  @objc SearchResultDevice.ownerDsid <stripped>
	0x1ed90  @objc SearchResultDevice.serverId <stripped>
	0x1ee10  @objc SearchResultDevice.deviceName <stripped>
	0x1ee50  @objc SearchResultDevice.deviceClass <stripped>
	0x1ee90  @objc SearchResultDevice.productName <stripped>
	0x1eed0  @objc SearchResultDevice.discoveryId <stripped>
	0x1ef10  @objc SearchResultDevice.productType <stripped>
	0x1efe0  @objc SearchResultDevice.thisDevice <stripped>
	0x1f010  @objc SearchResultDevice.needsSafety <stripped>
	0x1f040  @objc SearchResultDevice.pairedDevices <stripped>
	0x1f380  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x1f880  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x1fea0  @objc SearchResultDevice.initWithCoder: <stripped>
	0x1fed0  @objc SearchResultDevice.description <stripped>
	0x20a40  @objc SearchResultDevice.init <stripped>
	0x20910  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x1f0e0  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x1f690  func SearchResultDevice.encode(with:) // method 
	0x1f8d0  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x20d20  class func SearchResultDevice.__allocating_init(from:) // init 
	0x213e0  func SearchResultDevice.encode(to:) // method 
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
	0x21e40  @objc SearchFilterDevice.ownerName <stripped>
	0x21e80  @objc SearchFilterDevice.ownerDsid <stripped>
	0x21ec0  @objc SearchFilterDevice.deviceName <stripped>
	0x21f00  @objc SearchFilterDevice.deviceClass <stripped>
	0x21f40  @objc SearchFilterDevice.productName <stripped>
	0x21f80  @objc SearchFilterDevice.productType <stripped>
	0x22200  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x22600  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x22b40  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x22b70  @objc SearchFilterDevice.description <stripped>
	0x23300  @objc SearchFilterDevice.init <stripped>
	0x23220  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x22050  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x22410  func SearchFilterDevice.encode(with:) // method 
	0x22650  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x23520  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x23950  func SearchFilterDevice.encode(to:) // method 
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
