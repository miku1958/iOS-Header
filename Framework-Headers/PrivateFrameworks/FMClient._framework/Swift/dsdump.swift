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
	0x25d0  @objc Session.registerAuthenticationProvider: <stripped>
	0x2660  @objc Session.invalidate <stripped>
	0x28b0  @objc Session.init <stripped>
	0x2920  @objc Session..cxx_destruct <stripped>

	// Swift methods
	0x21f0  func <stripped> // getter 
	0x2440  func Session.registerAuthenticationProvider(_:) // method 
	0x2620  func Session.invalidate() // method 
 }

 enum FMClient.SessionError {

	// Properties
	case unknown  
	case noRegisteredAuthenticationProvider  
	case bundleIdCouldNotBeRead  
 }

 class FMClient.URLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x7150  class func static URLSessionFactory.session(_:_:) // method 
 }

 class FMClient.PlaySoundDevice : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serverId : String // +0x8 (0x10)
	let locality : String // +0x18 (0x10)
	let safetyWarningConfirmed : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x7520  @objc PlaySoundDevice.serverId <stripped>
	0x7560  @objc PlaySoundDevice.locality <stripped>
	0x7610  @objc PlaySoundDevice.safetyWarningConfirmed <stripped>
	0x77d0  @objc PlaySoundDevice.initWithServerId:locality:safetyWarningConfirmed: <stripped>
	0x7bf0  @objc PlaySoundDevice.encodeWithCoder: <stripped>
	0x8190  @objc PlaySoundDevice.initWithCoder: <stripped>
	0x81c0  @objc PlaySoundDevice.debugDescription <stripped>
	0x8220  @objc PlaySoundDevice.description <stripped>
	0x8440  @objc PlaySoundDevice.init <stripped>
	0x84c0  @objc PlaySoundDevice..cxx_destruct <stripped>

	// Swift methods
	0x7650  class func PlaySoundDevice.__allocating_init(serverId:locality:safetyWarningConfirmed:) // init 
	0x7920  func PlaySoundDevice.encode(with:) // method 
	0x7c40  class func PlaySoundDevice.__allocating_init(coder:) // init 
	0x86f0  class func PlaySoundDevice.__allocating_init(from:) // init 
	0x89f0  func PlaySoundDevice.encode(to:) // method 
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
	0x8fa0  @objc ClientConfiguration.nearbyScanDuration <stripped>
	0x8fe0  @objc ClientConfiguration.nearbyScanEnabled <stripped>
	0x9020  @objc ClientConfiguration.nearbyScanWhileAuthenticated <stripped>
	0x9060  @objc ClientConfiguration.deviceNameSyncInterval <stripped>
	0x9190  @objc ClientConfiguration.deviceNameSyncEnabled <stripped>
	0x93f0  @objc ClientConfiguration.initWithNearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled: <stripped>
	0x9850  @objc ClientConfiguration.encodeWithCoder: <stripped>
	0x9df0  @objc ClientConfiguration.initWithCoder: <stripped>
	0x9e20  @objc ClientConfiguration.description <stripped>
	0xa480  @objc ClientConfiguration.init <stripped>
	0xa4f0  @objc ClientConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x91d0  class func ClientConfiguration.__allocating_init(nearbyScanDuration:nearbyScanEnabled:nearbyScanWhileAuthenticated:deviceNameSyncInterval:deviceNameSyncEnabled:) // init 
	0x9580  func ClientConfiguration.encode(with:) // method 
	0x98a0  class func ClientConfiguration.__allocating_init(coder:) // init 
	0xa740  class func ClientConfiguration.__allocating_init(from:) // init 
	0xaae0  func ClientConfiguration.encode(to:) // method 
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
	0xb6d0  @objc SearchFilter.encodeWithCoder: <stripped>
	0xbcc0  @objc SearchFilter.initWithCoder: <stripped>
	0xbed0  @objc SearchFilter.init: <stripped>
	0xbfb0  @objc SearchFilter.init <stripped>
	0xc030  @objc SearchFilter..cxx_destruct <stripped>

	// Swift methods
	0xb3d0  func SearchFilter.encode(with:) // method 
	0xb720  class func SearchFilter.__allocating_init(coder:) // init 
	0xbcf0  func SearchFilter.devices.getter // getter 
	0xbd30  func SearchFilter.devices.setter // setter 
	0xbd80  func SearchFilter.devices.modify // modifyCoroutine 
	0xbdd0  class func SearchFilter.__allocating_init(_:) // init 
	0xc220  class func SearchFilter.__allocating_init(from:) // init 
	0xc520  func SearchFilter.encode(to:) // method 
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
	0xe930  @objc VoiceAssistantSyncResult.devices <stripped>
	0xe9e0  @objc VoiceAssistantSyncResult.anchor <stripped>
	0xebe0  @objc VoiceAssistantSyncResult.initWithDevices:anchor: <stripped>
	0xf010  @objc VoiceAssistantSyncResult.encodeWithCoder: <stripped>
	0xf5b0  @objc VoiceAssistantSyncResult.initWithCoder: <stripped>
	0xf5e0  @objc VoiceAssistantSyncResult.description <stripped>
	0xf920  @objc VoiceAssistantSyncResult.init <stripped>
	0xf9a0  @objc VoiceAssistantSyncResult..cxx_destruct <stripped>

	// Swift methods
	0xea60  class func VoiceAssistantSyncResult.__allocating_init(devices:anchor:) // init 
	0xed40  func VoiceAssistantSyncResult.encode(with:) // method 
	0xf060  class func VoiceAssistantSyncResult.__allocating_init(coder:) // init 
	0xfc20  class func VoiceAssistantSyncResult.__allocating_init(from:) // init 
	0xff40  func VoiceAssistantSyncResult.encode(to:) // method 
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
	0x13130  @objc AuthenticationCredential.authToken <stripped>
	0x13170  @objc AuthenticationCredential.personId <stripped>
	0x131b0  @objc AuthenticationCredential.hostName <stripped>
	0x13450  @objc AuthenticationCredential.initWithAuthToken:personId:hostName: <stripped>
	0x138b0  @objc AuthenticationCredential.encodeWithCoder: <stripped>
	0x13e70  @objc AuthenticationCredential.initWithCoder: <stripped>
	0x13ef0  @objc AuthenticationCredential.init <stripped>
	0x13f70  @objc AuthenticationCredential..cxx_destruct <stripped>

	// Swift methods
	0x13260  class func AuthenticationCredential.__allocating_init(authToken:personId:hostName:) // init 
	0x135e0  func AuthenticationCredential.encode(with:) // method 
	0x13900  class func AuthenticationCredential.__allocating_init(coder:) // init 
	0x141a0  class func AuthenticationCredential.__allocating_init(from:) // init 
	0x144a0  func AuthenticationCredential.encode(to:) // method 
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
	0x14ef0  @objc SessionInfo.encodeWithCoder: <stripped>
	0x15490  @objc SessionInfo.initWithCoder: <stripped>
	0x15510  @objc SessionInfo.init <stripped>
	0x15a90  @objc SessionInfo..cxx_destruct <stripped>

	// Swift methods
	0x149b0  class func SessionInfo.__allocating_init(processName:bundleId:) // init 
	0x14c20  func SessionInfo.encode(with:) // method 
	0x14f40  class func SessionInfo.__allocating_init(coder:) // init 
	0x15790  class func SessionInfo.__allocating_init(from:) // init 
	0x15ad0  func SessionInfo.encode(to:) // method 
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
	0x16470  @objc FMClientXPCConnection.init <stripped>
	0x168e0  @objc FMClientXPCConnection.initWithServiceName: <stripped>
	0x16900  @objc FMClientXPCConnection.initWithMachServiceName:options: <stripped>
	0x16930  @objc FMClientXPCConnection.initWithListenerEndpoint: <stripped>

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
	0x17d10  @objc VoiceAssistantDeviceName.deviceName <stripped>
	0x17d50  @objc VoiceAssistantDeviceName.ownerFirstName <stripped>
	0x17d90  @objc VoiceAssistantDeviceName.ownerLastName <stripped>
	0x18030  @objc VoiceAssistantDeviceName.initWithDeviceName:ownerFirstName:ownerLastName: <stripped>
	0x18490  @objc VoiceAssistantDeviceName.encodeWithCoder: <stripped>
	0x18a50  @objc VoiceAssistantDeviceName.initWithCoder: <stripped>
	0x18a80  @objc VoiceAssistantDeviceName.hash <stripped>
	0x18c90  @objc VoiceAssistantDeviceName.isEqual: <stripped>
	0x18d30  @objc VoiceAssistantDeviceName.description <stripped>
	0x18f20  @objc VoiceAssistantDeviceName.init <stripped>
	0x19640  @objc VoiceAssistantDeviceName..cxx_destruct <stripped>

	// Swift methods
	0x17e40  class func VoiceAssistantDeviceName.__allocating_init(deviceName:ownerFirstName:ownerLastName:) // init 
	0x181c0  func VoiceAssistantDeviceName.encode(with:) // method 
	0x184e0  class func VoiceAssistantDeviceName.__allocating_init(coder:) // init 
	0x19140  class func VoiceAssistantDeviceName.__allocating_init(from:) // init 
	0x19440  func VoiceAssistantDeviceName.encode(to:) // method 
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
	0x1a790  @objc DiscoveredDevice.deviceName <stripped>
	0x1a7d0  @objc DiscoveredDevice.discoveryId <stripped>
	0x1aa10  @objc DiscoveredDevice.initWithDeviceName:discoveryId: <stripped>
	0x1afd0  @objc DiscoveredDevice.encodeWithCoder: <stripped>
	0x1b560  @objc DiscoveredDevice.initWithCoder: <stripped>
	0x1b590  @objc DiscoveredDevice.hash <stripped>
	0x1b780  @objc DiscoveredDevice.isEqual: <stripped>
	0x1b820  @objc DiscoveredDevice.description <stripped>
	0x1b9c0  @objc DiscoveredDevice.debugDescription <stripped>
	0x1bae0  @objc DiscoveredDevice.init <stripped>
	0x1bb60  @objc DiscoveredDevice..cxx_destruct <stripped>

	// Swift methods
	0x1a880  class func DiscoveredDevice.__allocating_init(deviceName:discoveryId:) // init 
	0x1ad00  func DiscoveredDevice.encode(with:) // method 
	0x1b020  class func DiscoveredDevice.__allocating_init(coder:) // init 
	0x1bdf0  class func DiscoveredDevice.__allocating_init(from:) // init 
	0x1c0a0  func DiscoveredDevice.encode(to:) // method 
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
	0x1c810  @objc SearchResult.devices <stripped>
	0x1c8c0  @objc SearchResult.setDevices: <stripped>
	0x1c9b0  @objc SearchResult.resultCode <stripped>
	0x1ca20  @objc SearchResult.setResultCode: <stripped>
	0x1cf90  @objc SearchResult.encodeWithCoder: <stripped>
	0x1d580  @objc SearchResult.initWithCoder: <stripped>
	0x1d5b0  @objc SearchResult.debugDescription <stripped>
	0x1d610  @objc SearchResult.description <stripped>
	0x1d830  @objc SearchResult.init <stripped>
	0x1d8b0  @objc SearchResult..cxx_destruct <stripped>

	// Swift methods
	0x1c880  func SearchResult.devices.getter // getter 
	0x1c920  func SearchResult.devices.setter // setter 
	0x1c970  func SearchResult.devices.modify // modifyCoroutine 
	0x1c9f0  func SearchResult.resultCode.getter // getter 
	0x1ca60  func SearchResult.resultCode.setter // setter 
	0x1caa0  func SearchResult.resultCode.modify // modifyCoroutine 
	0x1caf0  class func SearchResult.__allocating_init(_:resultCode:) // init 
	0x1ccc0  func SearchResult.encode(with:) // method 
	0x1cfe0  class func SearchResult.__allocating_init(coder:) // init 
	0x1db20  class func SearchResult.__allocating_init(from:) // init 
	0x1deb0  func SearchResult.encode(to:) // method 
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
	0x20950  @objc HttpClient.init <stripped>
	0x209d0  @objc HttpClient..cxx_destruct <stripped>

	// Swift methods
	0x1e740  func HttpClient.authenticationChallengeHandler.getter // getter 
	0x1e790  func HttpClient.authenticationChallengeHandler.setter // setter 
	0x1e7f0  func HttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x1e840  class func HttpClient.__allocating_init(endpoint:) // init 
	0x1ebd0  func HttpClient.registerHandler(for:handler:) // method 
	0x1ef40  func <stripped> // getter 
	0x1f040  func HttpClient.invalidate() // method 
	0x1f090  func HttpClient.fetch(requestContent:completionHandler:) // method 
	0x20790  func <stripped> // method 
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
	0x22ca0  @objc SearchResultDevice.firstName <stripped>
	0x22ce0  @objc SearchResultDevice.lastName <stripped>
	0x22d20  @objc SearchResultDevice.ownerDsid <stripped>
	0x22d60  @objc SearchResultDevice.serverId <stripped>
	0x22de0  @objc SearchResultDevice.deviceName <stripped>
	0x22e20  @objc SearchResultDevice.deviceClass <stripped>
	0x22e60  @objc SearchResultDevice.productName <stripped>
	0x22ea0  @objc SearchResultDevice.discoveryId <stripped>
	0x22ee0  @objc SearchResultDevice.productType <stripped>
	0x22fb0  @objc SearchResultDevice.thisDevice <stripped>
	0x22ff0  @objc SearchResultDevice.needsSafety <stripped>
	0x23030  @objc SearchResultDevice.pairedDevices <stripped>
	0x23430  @objc SearchResultDevice.initWithFirstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices: <stripped>
	0x23a50  @objc SearchResultDevice.encodeWithCoder: <stripped>
	0x241c0  @objc SearchResultDevice.initWithCoder: <stripped>
	0x241f0  @objc SearchResultDevice.description <stripped>
	0x24c70  @objc SearchResultDevice.init <stripped>
	0x25b70  @objc SearchResultDevice..cxx_destruct <stripped>

	// Swift methods
	0x230f0  class func SearchResultDevice.__allocating_init(firstName:lastName:ownerDsid:serverId:deviceName:deviceClass:productName:discoveryId:productType:thisDevice:needsSafety:pairedDevices:) // init 
	0x23780  func SearchResultDevice.encode(with:) // method 
	0x23aa0  class func SearchResultDevice.__allocating_init(coder:) // init 
	0x24fb0  class func SearchResultDevice.__allocating_init(from:) // init 
	0x25780  func SearchResultDevice.encode(to:) // method 
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
	0x26290  @objc SearchFilterDevice.ownerName <stripped>
	0x262d0  @objc SearchFilterDevice.ownerDsid <stripped>
	0x26310  @objc SearchFilterDevice.deviceName <stripped>
	0x26350  @objc SearchFilterDevice.deviceClass <stripped>
	0x26390  @objc SearchFilterDevice.productName <stripped>
	0x263d0  @objc SearchFilterDevice.productType <stripped>
	0x26700  @objc SearchFilterDevice.initWithOwnerName:ownerDsid:deviceName:deviceClass:productName:productType: <stripped>
	0x26b80  @objc SearchFilterDevice.encodeWithCoder: <stripped>
	0x27200  @objc SearchFilterDevice.initWithCoder: <stripped>
	0x27230  @objc SearchFilterDevice.description <stripped>
	0x27920  @objc SearchFilterDevice.init <stripped>
	0x282e0  @objc SearchFilterDevice..cxx_destruct <stripped>

	// Swift methods
	0x264a0  class func SearchFilterDevice.__allocating_init(ownerName:ownerDsid:deviceName:deviceClass:productName:productType:) // init 
	0x268b0  func SearchFilterDevice.encode(with:) // method 
	0x26bd0  class func SearchFilterDevice.__allocating_init(coder:) // init 
	0x27ba0  class func SearchFilterDevice.__allocating_init(from:) // init 
	0x28040  func SearchFilterDevice.encode(to:) // method 
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
