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
	0x1f00  @objc Session.registerAuthenticationProvider: <stripped>
	0x1f90  @objc Session.invalidate <stripped>
	0x21e0  @objc Session.init <stripped>
	0x2250  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x1b20  func <stripped> // getter 
	0x1d70  func Session.registerAuthenticationProvider(_:) // method 
	0x1f50  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6a90  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x6e60  @objc PlaySoundDevice.serverId <stripped>
	0x6ea0  @objc PlaySoundDevice.locality <stripped>
	0x6f50  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x7110  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x7530  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x7ad0  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x7b00  @objc PlaySoundDevice.debugDescription <stripped>
	0x7b60  @objc PlaySoundDevice.description <stripped>
	0x7d80  @objc PlaySoundDevice.init <stripped>
	0x7e00  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x6f90  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x7260  func PlaySoundDevice.encode(with:) // method 
	0x7580  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x8030  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x8330  func PlaySoundDevice.encode(to:) // method 
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
	0x88e0  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x8920  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x8960  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x89a0  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x8ad0  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x8d30  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x9190  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x9730  @objc ClientConfiguration.initWithCoder: <stripped>
	0x9760  @objc ClientConfiguration.description <stripped>
	0x9dc0  @objc ClientConfiguration.init <stripped>
	0x9e30  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x8b10  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x8ec0  func ClientConfiguration.encode(with:) // method 
	0x91e0  class func ClientConfiguration.__allocating_init(coder:) // init 
	0xa080  class func ClientConfiguration.__allocating_init(from:) // init 
	0xa420  func ClientConfiguration.encode(to:) // method 
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
	0xb010  @objc SearchFilter.encodeWithCoder: <stripped>
	0xb600  @objc SearchFilter.initWithCoder: <stripped>
	0xb810  @objc SearchFilter.init: <stripped>
	0xb8f0  @objc SearchFilter.init <stripped>
	0xb970  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0xad10  func SearchFilter.encode(with:) // method 
	0xb060  class func SearchFilter.__allocating_init(coder:) // init 
	0xb630  func SearchFilter.devices.getter // getter 
	0xb670  func SearchFilter.devices.setter // setter 
	0xb6c0  func SearchFilter.devices.modify // modifyCoroutine 
	0xb710  class func SearchFilter.__allocating_init(_:) // init 
	0xbb60  class func SearchFilter.__allocating_init(from:) // init 
	0xbe60  func SearchFilter.encode(to:) // method 
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
	0xe2a0  @objc VoiceAssistantSyncResult.devices <stripped>
	0xe350  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xe520  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xe950  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xeef0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xef20  @objc VoiceAssistantSyncResult.description <stripped>
	0xf260  @objc VoiceAssistantSyncResult.init <stripped>
	0xf2e0  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xe3d0  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xe680  func VoiceAssistantSyncResult.encode(with:) // method 
	0xe9a0  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xf560  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xf880  func VoiceAssistantSyncResult.encode(to:) // method 
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
	0x12aa0  @objc AuthenticationCredential.authToken <stripped>
	0x12ae0  @objc AuthenticationCredential.personId <stripped>
	0x12b20  @objc AuthenticationCredential.hostName <stripped>
	0x12dc0  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x13220  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x137e0  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x13860  @objc AuthenticationCredential.init <stripped>
	0x138e0  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x12bd0  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x12f50  func AuthenticationCredential.encode(with:) // method 
	0x13270  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x13b10  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x13e10  func AuthenticationCredential.encode(to:) // method 
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
	0x14860  @objc SessionInfo.encodeWithCoder: <stripped>
	0x14e00  @objc SessionInfo.initWithCoder: <stripped>
	0x14e80  @objc SessionInfo.init <stripped>
	0x15400  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x14320  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x14590  func SessionInfo.encode(with:) // method 
	0x148b0  class func SessionInfo.__allocating_init(coder:) // init 
	0x15100  class func SessionInfo.__allocating_init(from:) // init 
	0x15440  func SessionInfo.encode(to:) // method 
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
	0x15de0  @objc FMClientXPCConnection.init <stripped>
	0x16250  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x16270  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x162a0  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

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
	0x17680  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x176c0  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x17700  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x179c0  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x17d30  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x18320  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x18350  @objc VoiceAssistantDeviceName.syncAnchor <stripped>
	0x184a0  @objc VoiceAssistantDeviceName.setSyncAnchor: <stripped>
	0x18960  @objc VoiceAssistantDeviceName.hash <stripped>
	0x18b70  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x18c10  @objc VoiceAssistantDeviceName.description <stripped>
	0x18e00  @objc VoiceAssistantDeviceName.init <stripped>
	0x19540  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x177b0  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x17a60  func VoiceAssistantDeviceName.encode(with:) // method 
	0x17d80  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x18410  func VoiceAssistantDeviceName.syncAnchor.getter // getter 
	0x184e0  func VoiceAssistantDeviceName.syncAnchor.setter // setter 
	0x18830  func VoiceAssistantDeviceName.syncAnchor.modify // modifyCoroutine 
	0x19020  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x19340  func VoiceAssistantDeviceName.encode(to:) // method 
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
	0x1aa70  @objc DiscoveredDevice.deviceName <stripped>
	0x1aab0  @objc DiscoveredDevice.discoveryId <stripped>
	0x1acf0  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x1b2b0  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x1b840  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x1b870  @objc DiscoveredDevice.hash <stripped>
	0x1ba60  @objc DiscoveredDevice.isEqual: <stripped>
	0x1bb00  @objc DiscoveredDevice.description <stripped>
	0x1bca0  @objc DiscoveredDevice.debugDescription <stripped>
	0x1bdc0  @objc DiscoveredDevice.init <stripped>
	0x1be40  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x1ab60  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x1afe0  func DiscoveredDevice.encode(with:) // method 
	0x1b300  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x1c0d0  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x1c380  func DiscoveredDevice.encode(to:) // method 
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
	0x1caf0  @objc SearchResult.devices <stripped>
	0x1cba0  @objc SearchResult.setDevices: <stripped>
	0x1cc90  @objc SearchResult.resultCode <stripped>
	0x1cd00  @objc SearchResult.setResultCode: <stripped>
	0x1d270  @objc SearchResult.encodeWithCoder: <stripped>
	0x1d860  @objc SearchResult.initWithCoder: <stripped>
	0x1d890  @objc SearchResult.debugDescription <stripped>
	0x1d8f0  @objc SearchResult.description <stripped>
	0x1db10  @objc SearchResult.init <stripped>
	0x1db90  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x1cb60  func SearchResult.devices.getter // getter 
	0x1cc00  func SearchResult.devices.setter // setter 
	0x1cc50  func SearchResult.devices.modify // modifyCoroutine 
	0x1ccd0  func SearchResult.resultCode.getter // getter 
	0x1cd40  func SearchResult.resultCode.setter // setter 
	0x1cd80  func SearchResult.resultCode.modify // modifyCoroutine 
	0x1cdd0  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x1cfa0  func SearchResult.encode(with:) // method 
	0x1d2c0  class func SearchResult.__allocating_init(coder:) // init 
	0x1de00  class func SearchResult.__allocating_init(from:) // init 
	0x1e190  func SearchResult.encode(to:) // method 
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
	0x20c30  @objc HttpClient.init <stripped>
	0x20cb0  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1ea20  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1ea70  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1ead0  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1eb20  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1eeb0  func HttpClient.registerHandler(for:handler:) // method 
	0x1f220  func <stripped> // getter 
	0x1f320  func HttpClient.invalidate() // method 
	0x1f370  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x20a70  func <stripped> // method 
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
	0x22f80  @objc SearchResultDevice.firstName <stripped>
	0x22fc0  @objc SearchResultDevice.lastName <stripped>
	0x23000  @objc SearchResultDevice.ownerDsid <stripped>
	0x23040  @objc SearchResultDevice.serverId <stripped>
	0x230c0  @objc SearchResultDevice.deviceName <stripped>
	0x23100  @objc SearchResultDevice.deviceClass <stripped>
	0x23140  @objc SearchResultDevice.productName <stripped>
	0x23180  @objc SearchResultDevice.discoveryId <stripped>
	0x231c0  @objc SearchResultDevice.productType <stripped>
	0x23290  @objc SearchResultDevice.thisDevice <stripped>
	0x232d0  @objc SearchResultDevice.needsSafety <stripped>
	0x23310  @objc SearchResultDevice.pairedDevices <stripped>
	0x23710  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x23d30  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x244a0  @objc SearchResultDevice.initWithCoder: <stripped>
	0x244d0  @objc SearchResultDevice.description <stripped>
	0x24f50  @objc SearchResultDevice.init <stripped>
	0x25e50  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x233d0  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x23a60  func SearchResultDevice.encode(with:) // method 
	0x23d80  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x25290  class func SearchResultDevice.__allocating_init(from:) // init 
	0x25a60  func SearchResultDevice.encode(to:) // method 
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
	0x26570  @objc SearchFilterDevice.ownerName <stripped>
	0x265b0  @objc SearchFilterDevice.ownerDsid <stripped>
	0x265f0  @objc SearchFilterDevice.deviceName <stripped>
	0x26630  @objc SearchFilterDevice.deviceClass <stripped>
	0x26670  @objc SearchFilterDevice.productName <stripped>
	0x266b0  @objc SearchFilterDevice.productType <stripped>
	0x269e0  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x26e60  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x274e0  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x27510  @objc SearchFilterDevice.description <stripped>
	0x27c00  @objc SearchFilterDevice.init <stripped>
	0x285c0  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x26780  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x26b90  func SearchFilterDevice.encode(with:) // method 
	0x26eb0  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x27e80  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x28320  func SearchFilterDevice.encode(to:) // method 
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
