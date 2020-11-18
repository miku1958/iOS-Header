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
	0x1ae0  @objc Session.registerAuthenticationProvider: <stripped>
	0x1b70  @objc Session.invalidate <stripped>
	0x1dc0  @objc Session.init <stripped>
	0x1e30  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x1700  func <stripped> // getter 
	0x1950  func Session.registerAuthenticationProvider(_:) // method 
	0x1b30  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6670  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x6a40  @objc PlaySoundDevice.serverId <stripped>
	0x6a80  @objc PlaySoundDevice.locality <stripped>
	0x6b30  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x6cf0  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x7110  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x76b0  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x76e0  @objc PlaySoundDevice.debugDescription <stripped>
	0x7740  @objc PlaySoundDevice.description <stripped>
	0x7960  @objc PlaySoundDevice.init <stripped>
	0x79e0  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x6b70  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x6e40  func PlaySoundDevice.encode(with:) // method 
	0x7160  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x7c10  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x7f10  func PlaySoundDevice.encode(to:) // method 
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
	let deviceNameSyncInterval : DateComponents? // +0xfeedfacf (0x0)
	let deviceNameSyncEnabled : Bool // +0x3 (0x1)

	// ObjC -> Swift bridged methods
	0x84c0  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x8500  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x8540  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x8580  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x86b0  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x8910  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x8d70  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x9310  @objc ClientConfiguration.initWithCoder: <stripped>
	0x9340  @objc ClientConfiguration.description <stripped>
	0x99a0  @objc ClientConfiguration.init <stripped>
	0x9a10  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x86f0  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x8aa0  func ClientConfiguration.encode(with:) // method 
	0x8dc0  class func ClientConfiguration.__allocating_init(coder:) // init 
	0x9c60  class func ClientConfiguration.__allocating_init(from:) // init 
	0xa000  func ClientConfiguration.encode(to:) // method 
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
	var devices : [SearchFilterDevice] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xabf0  @objc SearchFilter.encodeWithCoder: <stripped>
	0xb1e0  @objc SearchFilter.initWithCoder: <stripped>
	0xb3f0  @objc SearchFilter.init: <stripped>
	0xb4d0  @objc SearchFilter.init <stripped>
	0xb550  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0xa8f0  func SearchFilter.encode(with:) // method 
	0xac40  class func SearchFilter.__allocating_init(coder:) // init 
	0xb210  func SearchFilter.devices.getter // getter 
	0xb250  func SearchFilter.devices.setter // setter 
	0xb2a0  func SearchFilter.devices.modify // modifyCoroutine 
	0xb2f0  class func SearchFilter.__allocating_init(_:) // init 
	0xb740  class func SearchFilter.__allocating_init(from:) // init 
	0xba40  func SearchFilter.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
 }

 class FMClient.VoiceAssistantSyncResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let devices : Set<VoiceAssistantDeviceName> // +0x8 (0x8)
	let anchor : String // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0xde80  @objc VoiceAssistantSyncResult.devices <stripped>
	0xdf30  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xe100  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xe530  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xead0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xeb00  @objc VoiceAssistantSyncResult.description <stripped>
	0xee40  @objc VoiceAssistantSyncResult.init <stripped>
	0xeec0  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xdfb0  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xe260  func VoiceAssistantSyncResult.encode(with:) // method 
	0xe580  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xf140  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xf460  func VoiceAssistantSyncResult.encode(to:) // method 
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
	let path : URL
	let bodyDictionary : [String : Any]
	let additionalHeaderFields : [String : String]
	let credential : RequestCredential?
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
	0x12680  @objc AuthenticationCredential.authToken <stripped>
	0x126c0  @objc AuthenticationCredential.personId <stripped>
	0x12700  @objc AuthenticationCredential.hostName <stripped>
	0x129a0  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x12e00  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x133c0  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x13440  @objc AuthenticationCredential.init <stripped>
	0x134c0  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x127b0  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x12b30  func AuthenticationCredential.encode(with:) // method 
	0x12e50  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x136f0  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x139f0  func AuthenticationCredential.encode(to:) // method 
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
	0x14440  @objc SessionInfo.encodeWithCoder: <stripped>
	0x149e0  @objc SessionInfo.initWithCoder: <stripped>
	0x14a60  @objc SessionInfo.init <stripped>
	0x14fe0  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x13f00  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x14170  func SessionInfo.encode(with:) // method 
	0x14490  class func SessionInfo.__allocating_init(coder:) // init 
	0x14ce0  class func SessionInfo.__allocating_init(from:) // init 
	0x15020  func SessionInfo.encode(to:) // method 
 }

 enum FMClient.CodingKeys {

	// Properties
	case bundleId  
	case processName  
 }

 struct FMClient.ServerCommand {

	// Properties
	let url : URL
	let data : Data
	let headers : [String : String]
 }

 class FMClient.FMClientXPCConnection : NSXPCConnection /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
	0x159c0  @objc FMClientXPCConnection.init <stripped>
	0x15e30  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x15e50  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x15e80  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

	// Swift methods
 }

 enum FMClient.Outcome {

	// Properties
	case success : A
	case error : (A?, Error)
 }

 class FMClient.VoiceAssistantDeviceName : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let deviceName : String // +0x8 (0x10)
	let ownerFirstName : String // +0x18 (0x10)
	let ownerLastName : String // +0x28 (0x10)
	var $__lazy_storage_$_syncAnchor : String? // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x17260  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x172a0  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x172e0  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x175a0  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x17910  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x17f00  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x17f30  @objc VoiceAssistantDeviceName.syncAnchor <stripped>
	0x18080  @objc VoiceAssistantDeviceName.setSyncAnchor: <stripped>
	0x18540  @objc VoiceAssistantDeviceName.hash <stripped>
	0x18750  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x187f0  @objc VoiceAssistantDeviceName.description <stripped>
	0x189e0  @objc VoiceAssistantDeviceName.init <stripped>
	0x19120  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x17390  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x17640  func VoiceAssistantDeviceName.encode(with:) // method 
	0x17960  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x17ff0  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x180c0  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x18410  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x18c00  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x18f20  func VoiceAssistantDeviceName.encode(to:) // method 
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
	0x1a650  @objc DiscoveredDevice.deviceName <stripped>
	0x1a690  @objc DiscoveredDevice.discoveryId <stripped>
	0x1a8d0  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x1ae90  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x1b420  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x1b450  @objc DiscoveredDevice.hash <stripped>
	0x1b640  @objc DiscoveredDevice.isEqual: <stripped>
	0x1b6e0  @objc DiscoveredDevice.description <stripped>
	0x1b880  @objc DiscoveredDevice.debugDescription <stripped>
	0x1b9a0  @objc DiscoveredDevice.init <stripped>
	0x1ba20  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x1a740  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x1abc0  func DiscoveredDevice.encode(with:) // method 
	0x1aee0  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x1bcb0  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x1bf60  func DiscoveredDevice.encode(to:) // method 
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
	var devices : [SearchResultDevice] // +0x8 (0x8)
	var resultCode : ResultCode // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x1c6d0  @objc SearchResult.devices <stripped>
	0x1c780  @objc SearchResult.setDevices: <stripped>
	0x1c870  @objc SearchResult.resultCode <stripped>
	0x1c8e0  @objc SearchResult.setResultCode: <stripped>
	0x1ce50  @objc SearchResult.encodeWithCoder: <stripped>
	0x1d440  @objc SearchResult.initWithCoder: <stripped>
	0x1d470  @objc SearchResult.debugDescription <stripped>
	0x1d4d0  @objc SearchResult.description <stripped>
	0x1d6f0  @objc SearchResult.init <stripped>
	0x1d770  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x1c740  func SearchResult.devices.getter // getter 
	0x1c7e0  func SearchResult.devices.setter // setter 
	0x1c830  func SearchResult.devices.modify // modifyCoroutine 
	0x1c8b0  func SearchResult.resultCode.getter // getter 
	0x1c920  func SearchResult.resultCode.setter // setter 
	0x1c960  func SearchResult.resultCode.modify // modifyCoroutine 
	0x1c9b0  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x1cb80  func SearchResult.encode(with:) // method 
	0x1cea0  class func SearchResult.__allocating_init(coder:) // init 
	0x1d9e0  class func SearchResult.__allocating_init(from:) // init 
	0x1dd70  func SearchResult.encode(to:) // method 
 }

 enum FMClient.ResultCode { }

 enum FMClient.CodingKeys {

	// Properties
	case devices  
	case resultCode  
 }

 class FMClient.HttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : (_:_:)? // +0x8 (0x10)
	let httpSuccessCodeMin : Int // +0x18 (0x8)
	let httpSuccessCodeMax : Int // +0x20 (0x8)
	let endpoint : EndpointConfigurating // +0x28 (0x28)
	var statusCodeHandlers : [Int : (_:_:)] // +0x50 (0x8)
	let statusCodeHandlerQueue : OS_dispatch_queue // +0x58 (0x8)
	var $__lazy_storage_$_session : ClientURLSession? // +0x60 (0x28)

	// ObjC -> Swift bridged methods
	0x20810  @objc HttpClient.init <stripped>
	0x20890  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1e600  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1e650  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1e6b0  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1e700  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1ea90  func HttpClient.registerHandler(for:handler:) // method 
	0x1ee00  func <stripped> // getter 
	0x1ef00  func HttpClient.invalidate() // method 
	0x1ef50  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x20650  func <stripped> // method 
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
	0x22b60  @objc SearchResultDevice.firstName <stripped>
	0x22ba0  @objc SearchResultDevice.lastName <stripped>
	0x22be0  @objc SearchResultDevice.ownerDsid <stripped>
	0x22c20  @objc SearchResultDevice.serverId <stripped>
	0x22ca0  @objc SearchResultDevice.deviceName <stripped>
	0x22ce0  @objc SearchResultDevice.deviceClass <stripped>
	0x22d20  @objc SearchResultDevice.productName <stripped>
	0x22d60  @objc SearchResultDevice.discoveryId <stripped>
	0x22da0  @objc SearchResultDevice.productType <stripped>
	0x22e70  @objc SearchResultDevice.thisDevice <stripped>
	0x22eb0  @objc SearchResultDevice.needsSafety <stripped>
	0x22ef0  @objc SearchResultDevice.pairedDevices <stripped>
	0x232f0  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x23910  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x24080  @objc SearchResultDevice.initWithCoder: <stripped>
	0x240b0  @objc SearchResultDevice.description <stripped>
	0x24b30  @objc SearchResultDevice.init <stripped>
	0x25a30  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x22fb0  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x23640  func SearchResultDevice.encode(with:) // method 
	0x23960  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x24e70  class func SearchResultDevice.__allocating_init(from:) // init 
	0x25640  func SearchResultDevice.encode(to:) // method 
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
	0x26150  @objc SearchFilterDevice.ownerName <stripped>
	0x26190  @objc SearchFilterDevice.ownerDsid <stripped>
	0x261d0  @objc SearchFilterDevice.deviceName <stripped>
	0x26210  @objc SearchFilterDevice.deviceClass <stripped>
	0x26250  @objc SearchFilterDevice.productName <stripped>
	0x26290  @objc SearchFilterDevice.productType <stripped>
	0x265c0  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x26a40  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x270c0  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x270f0  @objc SearchFilterDevice.description <stripped>
	0x277e0  @objc SearchFilterDevice.init <stripped>
	0x281a0  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x26360  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x26770  func SearchFilterDevice.encode(with:) // method 
	0x26a90  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x27a60  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x27f00  func SearchFilterDevice.encode(to:) // method 
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
