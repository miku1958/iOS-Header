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

 class FMClient.Session : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let clientBundleId : String? // +0x8 (0x10)
	let clientProcessName : String // +0x18 (0x10)
	var _activeConnection : NSXPCConnection? // +0x28 (0x8)
	var serverProxy.storage : ServerSessionProtocol?? // +0x30 (0x8)
	var authenticationProvider : AuthenticationProviding? // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x2720  @objc Session.registerAuthenticationProvider: <stripped>
	0x27b0  @objc Session.invalidate <stripped>
	0x2a10  @objc Session.init <stripped>
	0x2a80  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x2350  func <stripped> // getter 
	0x2590  func Session.registerAuthenticationProvider(_:) // method 
	0x2770  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x70d0  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x74a0  @objc PlaySoundDevice.serverId <stripped>
	0x74e0  @objc PlaySoundDevice.locality <stripped>
	0x7590  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x7750  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x7b50  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x80f0  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x8120  @objc PlaySoundDevice.debugDescription <stripped>
	0x8170  @objc PlaySoundDevice.description <stripped>
	0x83a0  @objc PlaySoundDevice.init <stripped>
	0x8420  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x75d0  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x7890  func PlaySoundDevice.encode(with:) // method 
	0x7ba0  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x8650  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x8960  func PlaySoundDevice.encode(to:) // method 
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
	let deviceNameSyncInterval : DateComponents? // +0x18 (0x8)
	let deviceNameSyncEnabled : Bool // +0x20 (0x1)

	// ObjC -> Swift bridged methods
	0x8f10  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x8f50  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x8f90  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x8fd0  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x9120  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x9380  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x97d0  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x9d70  @objc ClientConfiguration.initWithCoder: <stripped>
	0x9da0  @objc ClientConfiguration.description <stripped>
	0xa410  @objc ClientConfiguration.init <stripped>
	0xa480  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x9160  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x9510  func ClientConfiguration.encode(with:) // method 
	0x9820  class func ClientConfiguration.__allocating_init(coder:) // init 
	0xa6d0  class func ClientConfiguration.__allocating_init(from:) // init 
	0xaa80  func ClientConfiguration.encode(to:) // method 
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
	0xb600  @objc SearchFilter.encodeWithCoder: <stripped>
	0xbbf0  @objc SearchFilter.initWithCoder: <stripped>
	0xbe00  @objc SearchFilter.init: <stripped>
	0xbf00  @objc SearchFilter.init <stripped>
	0xbf80  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0xb310  func SearchFilter.encode(with:) // method 
	0xb650  class func SearchFilter.__allocating_init(coder:) // init 
	0xbc20  func SearchFilter.devices.getter // getter 
	0xbc60  func SearchFilter.devices.setter // setter 
	0xbcb0  func SearchFilter.devices.modify // modifyCoroutine 
	0xbd00  class func SearchFilter.__allocating_init(_:) // init 
	0xc170  class func SearchFilter.__allocating_init(from:) // init 
	0xc460  func SearchFilter.encode(to:) // method 
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
	0xda90  @objc VoiceAssistantSyncResult.devices <stripped>
	0xdb30  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xdd30  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xe150  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xe6c0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xe6f0  @objc VoiceAssistantSyncResult.description <stripped>
	0xea30  @objc VoiceAssistantSyncResult.init <stripped>
	0xeab0  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xdbb0  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xde90  func VoiceAssistantSyncResult.encode(with:) // method 
	0xe1a0  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xed30  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xf0c0  func VoiceAssistantSyncResult.encode(to:) // method 
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
	0x122a0  @objc AuthenticationCredential.authToken <stripped>
	0x122e0  @objc AuthenticationCredential.personId <stripped>
	0x12320  @objc AuthenticationCredential.hostName <stripped>
	0x125c0  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x12a00  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x12fb0  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x13050  @objc AuthenticationCredential.init <stripped>
	0x130d0  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x123d0  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x12740  func AuthenticationCredential.encode(with:) // method 
	0x12a50  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x13300  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x13610  func AuthenticationCredential.encode(to:) // method 
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
	0x14040  @objc SessionInfo.encodeWithCoder: <stripped>
	0x145d0  @objc SessionInfo.initWithCoder: <stripped>
	0x14670  @objc SessionInfo.init <stripped>
	0x14bf0  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x13b20  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x13d80  func SessionInfo.encode(with:) // method 
	0x14090  class func SessionInfo.__allocating_init(coder:) // init 
	0x148f0  class func SessionInfo.__allocating_init(from:) // init 
	0x14c30  func SessionInfo.encode(to:) // method 
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
	0x155d0  @objc FMClientXPCConnection.init <stripped>
	0x15a20  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x15a40  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x15a70  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

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

	// ObjC -> Swift bridged methods
	0x16e40  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x16e80  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x16ec0  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x17160  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x175a0  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x17b50  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x17b80  @objc VoiceAssistantDeviceName.hash <stripped>
	0x17d90  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x17e20  @objc VoiceAssistantDeviceName.description <stripped>
	0x18020  @objc VoiceAssistantDeviceName.init <stripped>
	0x18750  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x16f70  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x172e0  func VoiceAssistantDeviceName.encode(with:) // method 
	0x175f0  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x18240  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x18550  func VoiceAssistantDeviceName.encode(to:) // method 
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
	0x198c0  @objc DiscoveredDevice.deviceName <stripped>
	0x19900  @objc DiscoveredDevice.discoveryId <stripped>
	0x19b40  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x1a0f0  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x1a680  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x1a6b0  @objc DiscoveredDevice.hash <stripped>
	0x1a8a0  @objc DiscoveredDevice.isEqual: <stripped>
	0x1a930  @objc DiscoveredDevice.description <stripped>
	0x1aad0  @objc DiscoveredDevice.debugDescription <stripped>
	0x1ac10  @objc DiscoveredDevice.init <stripped>
	0x1ac90  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x199b0  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x19e30  func DiscoveredDevice.encode(with:) // method 
	0x1a140  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x1af20  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x1b1d0  func DiscoveredDevice.encode(to:) // method 
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
	0x1b910  @objc SearchResult.devices <stripped>
	0x1b9c0  @objc SearchResult.setDevices: <stripped>
	0x1bab0  @objc SearchResult.resultCode <stripped>
	0x1bb20  @objc SearchResult.setResultCode: <stripped>
	0x1c080  @objc SearchResult.encodeWithCoder: <stripped>
	0x1c660  @objc SearchResult.initWithCoder: <stripped>
	0x1c690  @objc SearchResult.debugDescription <stripped>
	0x1c6e0  @objc SearchResult.description <stripped>
	0x1c910  @objc SearchResult.init <stripped>
	0x1c990  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x1b980  func SearchResult.devices.getter // getter 
	0x1ba20  func SearchResult.devices.setter // setter 
	0x1ba70  func SearchResult.devices.modify // modifyCoroutine 
	0x1baf0  func SearchResult.resultCode.getter // getter 
	0x1bb60  func SearchResult.resultCode.setter // setter 
	0x1bba0  func SearchResult.resultCode.modify // modifyCoroutine 
	0x1bbf0  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x1bdc0  func SearchResult.encode(with:) // method 
	0x1c0d0  class func SearchResult.__allocating_init(coder:) // init 
	0x1cc00  class func SearchResult.__allocating_init(from:) // init 
	0x1cf90  func SearchResult.encode(to:) // method 
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
	var session.storage : ClientURLSession? // +0x60 (0x28)

	// ObjC -> Swift bridged methods
	0x1fa50  @objc HttpClient.init <stripped>
	0x1fad0  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1d730  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1d780  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1d7e0  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1d830  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1dbb0  func HttpClient.registerHandler(for:handler:) // method 
	0x1df50  func <stripped> // getter 
	0x1e050  func HttpClient.invalidate() // method 
	0x1e0a0  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x1f6f0  func <stripped> // method 
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
	0x227d0  @objc SearchResultDevice.firstName <stripped>
	0x22810  @objc SearchResultDevice.lastName <stripped>
	0x22850  @objc SearchResultDevice.ownerDsid <stripped>
	0x22890  @objc SearchResultDevice.serverId <stripped>
	0x22910  @objc SearchResultDevice.deviceName <stripped>
	0x22950  @objc SearchResultDevice.deviceClass <stripped>
	0x22990  @objc SearchResultDevice.productName <stripped>
	0x229d0  @objc SearchResultDevice.discoveryId <stripped>
	0x22a10  @objc SearchResultDevice.productType <stripped>
	0x22ae0  @objc SearchResultDevice.thisDevice <stripped>
	0x22b20  @objc SearchResultDevice.needsSafety <stripped>
	0x22b60  @objc SearchResultDevice.pairedDevices <stripped>
	0x22f60  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x235a0  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x23d10  @objc SearchResultDevice.initWithCoder: <stripped>
	0x23d40  @objc SearchResultDevice.description <stripped>
	0x247d0  @objc SearchResultDevice.init <stripped>
	0x25680  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x22c20  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x232e0  func SearchResultDevice.encode(with:) // method 
	0x235f0  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x24b10  class func SearchResultDevice.__allocating_init(from:) // init 
	0x25230  func SearchResultDevice.encode(to:) // method 
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
	0x25da0  @objc SearchFilterDevice.ownerName <stripped>
	0x25de0  @objc SearchFilterDevice.ownerDsid <stripped>
	0x25e20  @objc SearchFilterDevice.deviceName <stripped>
	0x25e60  @objc SearchFilterDevice.deviceClass <stripped>
	0x25ea0  @objc SearchFilterDevice.productName <stripped>
	0x25ee0  @objc SearchFilterDevice.productType <stripped>
	0x26210  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x26680  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x26d00  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x26d30  @objc SearchFilterDevice.description <stripped>
	0x27430  @objc SearchFilterDevice.init <stripped>
	0x27da0  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x25fb0  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x263c0  func SearchFilterDevice.encode(with:) // method 
	0x266d0  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x276b0  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x27b10  func SearchFilterDevice.encode(to:) // method 
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
