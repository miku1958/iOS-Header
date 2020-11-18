 protocol FMNetworking.FMNAuthenticationProviding // 2 requirements
 {
	// method
	// method
 }
 protocol FMNetworking.FMNFileUploadRepresentable // 7 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
 }
 protocol FMNetworking.FMNRequestContentRepresentable // 7 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
 }
 protocol FMNetworking.FMNResponseSerializable // 6 requirements
 {
	// class base protocol
	// class base protocol
	// class method
	// getter
	// getter
	// class getter
 }
 protocol FMNetworking.FMNRequestCredential // 11 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
 }
 protocol FMNetworking.Task // 5 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol FMNetworking.FMNetworkingURLSession // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol FMNetworking.FMNRequestConfigurating // 2 requirements
 {
	// getter
	// getter
 }
 protocol FMNetworking.FMNAPSTokenProviding // 1 requirements
 {
	// method
 }

 enum __C.AuthChallengeDisposition { }

 struct FMNetworking.AnyDecodableKeys {

	// Properties
	var stringValue : String // +0x0
	var intValue : Int? // +0x10
 }

 struct FMNetworking.FMNMockClientURLResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : M{ // +0x0
	let response : NSHTTPURLResponse? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let error : k~ // +0x18
 }

 class FMNetworking.FMNAuthenticationCredential : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var authToken : String // +0x10 (0x10)
	var personId : String // +0x20 (0x10)
	var hostName : String // +0x30 (0x10)
	var accountType : FMNAccountType // +0x40 (0x1)

	// Swift methods
	0x8400  func FMNAuthenticationCredential.authToken.getter // getter 
	0x8440  func FMNAuthenticationCredential.authToken.setter // setter 
	0x8480  func FMNAuthenticationCredential.authToken.modify // modifyCoroutine 
	0x84b0  func FMNAuthenticationCredential.personId.getter // getter 
	0x84f0  func FMNAuthenticationCredential.personId.setter // setter 
	0x8530  func FMNAuthenticationCredential.personId.modify // modifyCoroutine 
	0x8560  func FMNAuthenticationCredential.hostName.getter // getter 
	0x85a0  func FMNAuthenticationCredential.hostName.setter // setter 
	0x85e0  func FMNAuthenticationCredential.hostName.modify // modifyCoroutine 
	0x8610  func FMNAuthenticationCredential.accountType.getter // getter 
	0x8640  func FMNAuthenticationCredential.accountType.setter // setter 
	0x8670  func FMNAuthenticationCredential.accountType.modify // modifyCoroutine 
	0x8de0  func FMNAuthenticationCredential.authHeaders.getter // getter 
	0x9260  class func FMNAuthenticationCredential.__allocating_init(accountType:authToken:personId:hostName:) // init 
	0x93e0  class func FMNAuthenticationCredential.__allocating_init(from:) // init 
	0x9740  func FMNAuthenticationCredential.encode(to:) // method 
 }

 enum FMNetworking.FMNAuthenticationCredentialError {

	// Properties
	case invalidAccountType  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case authToken  
	case personId  
	case hostName  
	case accountType  
 }

 struct FMNetworking.FMNServerCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : +y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : =y
	let headers : [String : String]
 }

 enum FMNetworking.FMNAccountType {

	// Properties
	case fmf  
	case fmfApp  
	case fmip  
	case setup  
	case searchParty  
	case pairingLock  
	case fmipPlaceholderForSP  
	case none  
 }

 enum FMNetworking.FMNAuthenticationProviderError {

	// Properties
	case iCloudSignedOut  
	case missingPersonId  
	case missingHostName  
	case missingCredential  
	case missingToken  
	case cannotReadDataClassProperties  
	case autoRenewalLimitReached  
	case managedAccount  
	case cannotReadBundleId  
	case unsupportedSecurityLevel  
 }

 enum FMNetworking.FMNAuthenticationOverride {

	// Properties
	case fmip  
	case fmf  
 }

 class FMNetworking.FMNAuthenticationProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FMNAuthenticationProviding {

	// Properties
	var autoRenewalLimit : Int // +0x10 (0x8)
	let serialQueue : OS_dispatch_queue // +0x18 (0x8)
	var bundleId : String? // +0x20 (0x10)
	var $__lazy_storage_$_accountStore : ACAccountStore? // +0x30 (0x8)
	var credential : FMNAuthenticationCredential // +0x38 (0x8)

	// Swift methods
	0xe3a0  func FMNAuthenticationProvider.autoRenewalLimit.getter // getter 
	0xe3d0  func FMNAuthenticationProvider.autoRenewalLimit.setter // setter 
	0xe400  func FMNAuthenticationProvider.autoRenewalLimit.modify // modifyCoroutine 
	0xe440  func FMNAuthenticationProvider.bundleId.getter // getter 
	0xe480  func FMNAuthenticationProvider.bundleId.setter // setter 
	0xe4f0  func FMNAuthenticationProvider.bundleId.modify // modifyCoroutine 
	0xe520  class func FMNAuthenticationProvider.__allocating_init() // init 
	0xe800  func FMNAuthenticationProvider.credential(accountType:completion:) // method 
	0xf110  func FMNAuthenticationProvider.credentialDidFail(credential:error:completion:) // method 
	0x10820  func <stripped> // method 
 }

 struct FMNetworking.FMNHTTPArchiveReader {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : +y
 }

 struct FMNetworking.FMNMockingPreferences {

	// Properties
	let domain : String // +0x0
	let filePath : String // +0x10
 }

 struct FMNetworking.FMNResponseSerializableCodingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateDecodingStrategy : Kw
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateEncodingStrategy : [w
 }

 struct FMNetworking.OptionalDecodable {

	// Properties
	let content : A?
 }

 enum FMNetworking.FMNRequestMethod {

	// Properties
	case GET  
	case POST  
	case PUT  
	case DELETE  
 }

 enum FMNetworking.TaskSerializationError {

	// Properties
	case unknown  
	case missingAuthHeaders  
 }

 struct FMNetworking.FMNFileUploadRequest: Task {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let fileURL : +y
	let method : FMNRequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : +y
	let additionalHeaderFields : [String : String]
	let credential : FMNRequestCredential
 }

 enum FMNetworking.SerializationError {

	// Properties
	case unknown  
	case missingAuthHeaders  
 }

 struct FMNetworking.FMNRequest: Task {

	// Properties
	let method : FMNRequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : +y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let body : =y
	let additionalHeaderFields : [String : String]
	let credential : FMNRequestCredential
 }

 struct FMNetworking.FMNRedirectedHost {

	// Properties
	let host : String // +0x0
	let personId : String // +0x10
 }

 struct FMNetworking.FMNRedirectHostStore {

	// Properties
	let serialQueue : OS_dispatch_queue // +0x0
	let redirectedHostKeychain : (FMKeychainManager, String, String) // +0x8
	let credential : FMNRequestCredential // +0x30
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case host  
	case personId  
 }

 enum FMNetworking.FMNPreferenceKey {

	// Properties
	case useFileServer  
 }

 class FMNetworking.FMNURLSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mockSessionCreationBlock : FMNetworkingURLSession // +0x10 (0x10)
	let preferences : FMNMockingPreferences // +0x20 (0x20)

	// Swift methods
	0x1ea20  class func FMNURLSessionFactory.__allocating_init(mockSessionCreationBlock:preferences:) // init 
	0x1eac0  func FMNURLSessionFactory.session(_:_:) // method 
	0x1efd0  func FMNURLSessionFactory.fileServer(fileURL:) // method 
 }

 enum FMNetworking.URLSessionFactoryError {

	// Properties
	case missingMockSessionCreationBlock  
 }

 class FMNetworking.MockURLDataTask : NSURLSessionDataTask /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let executionBlock : () // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x1f530  @objc MockURLDataTask.resume <stripped>
	0x1f5c0  @objc MockURLDataTask.init <stripped>
	0x1f5a0  @objc MockURLDataTask..cxx_destruct <stripped>

	// Swift methods
 }

 class FMNetworking.FMNServerInteractionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let authenticationProvider : FMNAuthenticationProviding // +0x10 (0x10)
	let mockingPreferences : FMNMockingPreferences // +0x20 (0x20)
	let urlSessionFactory : FMNURLSessionFactory // +0x40 (0x8)

	// Swift methods
	0x1faa0  class func FMNServerInteractionController.__allocating_init(authenticationProvider:mockingPreferences:urlSessionFactory:) // init 
	0x1fcc0  func FMNServerInteractionController.upload(endpoint:content:source:responseHandler:) // method 
	0x1fce0  func FMNServerInteractionController.retryUpload(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
	0x1fd10  func FMNServerInteractionController.sendRequest(endpoint:content:source:responseHandler:) // method 
	0x1fd90  func FMNServerInteractionController.sendRequest(endpoint:content:source:responseHandler:) // method 
	0x1fdb0  func FMNServerInteractionController.retryRequest(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
	0x1fe90  func FMNServerInteractionController.retryRequest(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
 }

 enum FMNetworking.FMNServerInteractionError {

	// Properties
	case unknown  
	case invalidResponse  
	case credentialUnauthorized  
	case missingAccountCredential  
	case timedOut  
	case redirected  
	case noAuthenticationProvider  
 }

 class FMNetworking.FMNHTTPRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var credential : FMNRequestCredential // +0x10 (0x28)
	var accountType : FMNAccountType // +0x38 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlComponents : …u // +0x0 (0x0)

	// Swift methods
	0x20b60  func FMNHTTPRequest.credential.getter // getter 
	0x20ba0  func FMNHTTPRequest.credential.setter // setter 
	0x20c40  func FMNHTTPRequest.credential.modify // modifyCoroutine 
	0x20c80  func FMNHTTPRequest.accountType.getter // getter 
	0x20cb0  func FMNHTTPRequest.accountType.setter // setter 
	0x20ce0  func FMNHTTPRequest.accountType.modify // modifyCoroutine 
	0x20d10  func FMNHTTPRequest.urlComponents.getter // getter 
	0x20d60  func FMNHTTPRequest.urlComponents.setter // setter 
	0x20dc0  func FMNHTTPRequest.urlComponents.modify // modifyCoroutine 
	0x20e00  class func FMNHTTPRequest.__allocating_init(hostName:scheme:path:) // init 
	0x20ec0  func FMNHTTPRequest.redirect(host:) // method 
	0x20f20  func FMNHTTPRequest.debugDescription.getter // getter 
 }

 class FMNetworking.FMNHttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : AuthChallengeDisposition // +0x8 (0x10)
	var bundleIdentifierFallback : String // +0x18 (0x10)
	let httpSuccessCodeMin : Int // +0x28 (0x8)
	let httpSuccessCodeMax : Int // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let urlComponents : …u // +0x0 (0x0)
	let credential : FMNRequestCredential // +0x0 (0x28)
	let urlSessionFactory : FMNURLSessionFactory // +0x0 (0x8)
	var statusCodeHandlers : [Int : (_:_:)] // +0x0 (0x8)
	let statusCodeHandlerQueue : OS_dispatch_queue // +0x0 (0x8)
	var session : FMNetworkingURLSession // +0x0 (0x28)

	// ObjC -> Swift bridged methods
	0x24790  @objc FMNHttpClient.init <stripped>
	0x247f0  @objc FMNHttpClient..cxx_destruct <stripped>

	// Swift methods
	0x21cf0  func FMNHttpClient.authenticationChallengeHandler.getter // getter 
	0x21d40  func FMNHttpClient.authenticationChallengeHandler.setter // setter 
	0x21da0  func FMNHttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x21de0  func FMNHttpClient.bundleIdentifierFallback.getter // getter 
	0x21e30  func FMNHttpClient.bundleIdentifierFallback.setter // setter 
	0x21e80  func FMNHttpClient.bundleIdentifierFallback.modify // modifyCoroutine 
	0x21520  class func FMNHttpClient.__allocating_init(urlComponents:credential:urlSessionFactory:) // init 
	0x21f00  func FMNHttpClient.registerHandler(for:handler:) // method 
	0x22220  func <stripped> // method 
	0x22470  func FMNHttpClient.invalidate() // method 
	0x22550  func FMNHttpClient.upload(requestContent:completionHandler:) // method 
	0x229d0  func FMNHttpClient.fetch(requestContent:completionHandler:) // method 
	0x23ac0  func <stripped> // method 
	0x23bc0  func <stripped> // method 
	0x23fb0  func <stripped> // method 
	0x24160  func <stripped> // method 
 }

 enum FMNetworking.ErrorCode { }

 enum FMNetworking.StatusCode { }

 enum FMNetworking.ClientError {

	// Properties
	case unknown  
	case malformedURL  
	case missingInformationsToSignBody  
	case signatureFailed  
	case signatureNotSupported  
	case nonHTTPResponse  
	case missingResponseData  
 }

 struct FMNetworking.HARv1dot2 {

	// Properties
	let log : HARLog // +0x0
 }

 struct FMNetworking.HAREntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startedDateTime : ¹s
	let request : HARRequest
	let response : HARResponse
 }

 struct FMNetworking.HARHeader {

	// Properties
	let name : String // +0x0
	let value : String // +0x10
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case startedDateTime  
	case request  
	case response  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case log  
 }

 struct FMNetworking.HARLog {

	// Properties
	let version : String // +0x0
	let entries : HAREntry // +0x10
	let creator : HARCreator // +0x18
 }

 struct FMNetworking.HARResponse {

	// Properties
	let status : Int // +0x0
	let statusText : String // +0x8
	let httpVersion : String // +0x18
	let headers : HARHeader // +0x28
	let content : HARContent // +0x30
 }

 struct FMNetworking.HARRequest {

	// Properties
	let method : String // +0x0
	let url : String // +0x10
	let httpVersion : String // +0x20
	let cookies : [String] // +0x30
	let headers : HARHeader // +0x38
	let queryString : [String] // +0x40
	let headerSize : Int // +0x48
	let bodySize : Int // +0x50
	let comment : String? // +0x58
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case name  
	case value  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case status  
	case statusText  
	case httpVersion  
	case headers  
	case content  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case method  
	case url  
	case httpVersion  
	case cookies  
	case headers  
	case queryString  
	case headerSize  
	case bodySize  
	case comment  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case version  
	case entries  
	case creator  
 }

 struct FMNetworking.HARCreator {

	// Properties
	let name : String // +0x0
	let version : String // +0x10
 }

 struct FMNetworking.HARContent {

	// Properties
	let text : String? // +0x0
	let mimeType : String? // +0x10
	let size : Int // +0x20
	let comment : String? // +0x28
	let encoding : String? // +0x38
 }

 enum FMNetworking.ContentError {

	// Properties
	case invalidData  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case text  
	case mimeType  
	case size  
	case comment  
	case encoding  
 }

 enum FMNetworking.CodingKeys {

	// Properties
	case name  
	case version  
 }

 struct FMNetworking.FMNHTTPClientStatusCodeHandler {

	// Properties
	var client : FMNHttpClient
	let authenticationProvider : FMNAuthenticationProviding
	let consolidatedContent : A
	let credential : FMNRequestCredential
	let redirectedHostStore : FMNRedirectHostStore
	var serverInteractionController : FMNServerInteractionController
	let retryCount : Int
 }

 class FMNetworking.FMNPushNotificatonHandler : NSObject /usr/lib/libobjc.A.dylib, FMNAPSTokenProviding {

	// Properties
	let topic : String // +0x8 (0x10)
	let apsQueue : OS_dispatch_queue // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pendingTopicTokenFutures :  empty-list  // +0x20 (0x8)
	var topicAPSToken : String? // +0x28 (0x10)
	var publicAPSToken : String? // +0x38 (0x10)
	var _apsConnection : APSConnection? // +0x48 (0x8)
	var $__lazy_storage_$_apsConnection : APSConnection?? // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x329d0  @objc FMNPushNotificatonHandler.dealloc <stripped>
	0x33390  @objc FMNPushNotificatonHandler.init <stripped>
	0x329f0  @objc FMNPushNotificatonHandler..cxx_destruct <stripped>

	// Swift methods
	0x32a80  func <stripped> // method 
	0x330a0  func <stripped> // method 
 }

 class FMNetworking.FMNMockClientURLSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : +y // +0x5 (0x0)
	let responseReadQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlResponseByURL :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x36350  class func FMNMockClientURLSession.__allocating_init(httpArchiveFileURL:) // init 
	0x369d0  func FMNMockClientURLSession.uploadTask(with:fromFile:completionHandler:) // method 
	0x36a70  func FMNMockClientURLSession.dataTask(with:completionHandler:) // method 
	0x36ea0  func FMNMockClientURLSession.finishTasksAndInvalidate() // method 
	0x37290  func <stripped> // method 
	0x37890  func <stripped> // method 
 }

 enum FMNetworking.FMNClientError {

	// Properties
	case unknown  
	case malformedURL  
	case noMockResponse  
	case unsupported  
 }

 class FMNetworking.FMNHTTPArchiveWriter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x39910  class func FMNHTTPArchiveWriter.__allocating_init() // init 
	0x39940  func FMNHTTPArchiveWriter.encodeResponses(mockResponses:) // method 
	0x3a310  func FMNHTTPArchiveWriter.saveResponses(mockResponses:fileURL:) // method 
 }
