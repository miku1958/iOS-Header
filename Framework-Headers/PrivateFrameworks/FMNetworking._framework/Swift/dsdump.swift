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
	let data : Data? // +0x0
	let response : NSHTTPURLResponse? // +0x10
	let error : Error? // +0x18
 }

 class FMNetworking.FMNAuthenticationCredential : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var authToken : String // +0x10 (0x10)
	var personId : String // +0x20 (0x10)
	var hostName : String // +0x30 (0x10)
	var accountType : FMNAccountType // +0x40 (0x1)

	// Swift methods
	0x96f0  func FMNAuthenticationCredential.authToken.getter // getter 
	0x9730  func FMNAuthenticationCredential.authToken.setter // setter 
	0x9770  func FMNAuthenticationCredential.authToken.modify // modifyCoroutine 
	0x97a0  func FMNAuthenticationCredential.personId.getter // getter 
	0x97e0  func FMNAuthenticationCredential.personId.setter // setter 
	0x9820  func FMNAuthenticationCredential.personId.modify // modifyCoroutine 
	0x9850  func FMNAuthenticationCredential.hostName.getter // getter 
	0x9890  func FMNAuthenticationCredential.hostName.setter // setter 
	0x98d0  func FMNAuthenticationCredential.hostName.modify // modifyCoroutine 
	0x9900  func FMNAuthenticationCredential.accountType.getter // getter 
	0x9930  func FMNAuthenticationCredential.accountType.setter // setter 
	0x9960  func FMNAuthenticationCredential.accountType.modify // modifyCoroutine 
	0xa0c0  func FMNAuthenticationCredential.authHeaders.getter // getter 
	0xa600  class func FMNAuthenticationCredential.__allocating_init(accountType:authToken:personId:hostName:) // init 
	0xa7a0  class func FMNAuthenticationCredential.__allocating_init(from:) // init 
	0xabb0  func FMNAuthenticationCredential.encode(to:) // method 
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
	let url : URL
	let data : Data
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
	var credential : FMNAuthenticationCredential? // +0x38 (0x8)

	// Swift methods
	0x100c0  func FMNAuthenticationProvider.autoRenewalLimit.getter // getter 
	0x100f0  func FMNAuthenticationProvider.autoRenewalLimit.setter // setter 
	0x10120  func FMNAuthenticationProvider.autoRenewalLimit.modify // modifyCoroutine 
	0x10160  func FMNAuthenticationProvider.bundleId.getter // getter 
	0x101a0  func FMNAuthenticationProvider.bundleId.setter // setter 
	0x101f0  func FMNAuthenticationProvider.bundleId.modify // modifyCoroutine 
	0x10220  class func FMNAuthenticationProvider.__allocating_init() // init 
	0x105d0  func FMNAuthenticationProvider.credential(accountType:completion:) // method 
	0x11010  func FMNAuthenticationProvider.credentialDidFail(credential:error:completion:) // method 
	0x128b0  func <stripped> // method 
 }

 struct FMNetworking.FMNHTTPArchiveReader {

	// Properties
	let httpArchiveFileURL : URL
 }

 struct FMNetworking.FMNMockingPreferences {

	// Properties
	let domain : String // +0x0
	let filePath : String // +0x10
 }

 struct FMNetworking.FMNResponseSerializableCodingStrategy {

	// Properties
	let dateDecodingStrategy : JSONDecoder.DateDecodingStrategy?
	let dateEncodingStrategy : JSONEncoder.DateEncodingStrategy?
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
	let fileURL : URL
	let method : FMNRequestMethod
	let url : URL
	let additionalHeaderFields : [String : String]
	let credential : FMNRequestCredential?
 }

 enum FMNetworking.SerializationError {

	// Properties
	case unknown  
	case missingAuthHeaders  
 }

 struct FMNetworking.FMNRequest: Task {

	// Properties
	let method : FMNRequestMethod
	let url : URL
	let body : Data
	let additionalHeaderFields : [String : String]
	let credential : FMNRequestCredential?
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
	let preferences : FMNMockingPreferences? // +0x20 (0x20)

	// Swift methods
	0x229c0  class func FMNURLSessionFactory.__allocating_init(mockSessionCreationBlock:preferences:) // init 
	0x22aa0  func FMNURLSessionFactory.session(_:_:) // method 
	0x23010  func FMNURLSessionFactory.fileServer(fileURL:) // method 
 }

 enum FMNetworking.URLSessionFactoryError {

	// Properties
	case missingMockSessionCreationBlock  
 }

 class FMNetworking.MockURLDataTask : NSURLSessionDataTask /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let executionBlock : () // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x234e0  @objc MockURLDataTask.resume <stripped>
	0x23530  @objc MockURLDataTask.init <stripped>
	0x235b0  @objc MockURLDataTask..cxx_destruct <stripped>

	// Swift methods
 }

 class FMNetworking.FMNServerInteractionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let authenticationProvider : FMNAuthenticationProviding? // +0x10 (0x10)
	let mockingPreferences : FMNMockingPreferences? // +0x20 (0x20)
	let urlSessionFactory : FMNURLSessionFactory // +0x40 (0x8)

	// Swift methods
	0x23b40  class func FMNServerInteractionController.__allocating_init(authenticationProvider:mockingPreferences:urlSessionFactory:) // init 
	0x23d80  func FMNServerInteractionController.upload(endpoint:content:source:responseHandler:) // method 
	0x23da0  func FMNServerInteractionController.retryUpload(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
	0x23e50  func FMNServerInteractionController.sendRequest(endpoint:content:source:responseHandler:) // method 
	0x23ed0  func FMNServerInteractionController.sendRequest(endpoint:content:source:responseHandler:) // method 
	0x23ef0  func FMNServerInteractionController.retryRequest(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
	0x23fe0  func FMNServerInteractionController.retryRequest(consolidatedContent:redirectedHostStore:responseHandler:retryCount:) // method 
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
	var credential : FMNRequestCredential? // +0x10 (0x28)
	var accountType : FMNAccountType // +0x38 (0x1)
	var urlComponents : URLComponents // +0x0 (0x0)

	// Swift methods
	0x24e40  func FMNHTTPRequest.credential.getter // getter 
	0x24e80  func FMNHTTPRequest.credential.setter // setter 
	0x24f20  func FMNHTTPRequest.credential.modify // modifyCoroutine 
	0x24f60  func FMNHTTPRequest.accountType.getter // getter 
	0x24f90  func FMNHTTPRequest.accountType.setter // setter 
	0x24fc0  func FMNHTTPRequest.accountType.modify // modifyCoroutine 
	0x24ff0  func FMNHTTPRequest.urlComponents.getter // getter 
	0x25040  func FMNHTTPRequest.urlComponents.setter // setter 
	0x250a0  func FMNHTTPRequest.urlComponents.modify // modifyCoroutine 
	0x250e0  class func FMNHTTPRequest.__allocating_init(hostName:scheme:path:) // init 
	0x251f0  func FMNHTTPRequest.redirect(host:) // method 
	0x25250  func FMNHTTPRequest.debugDescription.getter // getter 
 }

 class FMNetworking.FMNHttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : (_:_:)? // +0x8 (0x10)
	var bundleIdentifierFallback : String // +0x18 (0x10)
	let httpSuccessCodeMin : Int // +0x28 (0x8)
	let httpSuccessCodeMax : Int // +0x30 (0x8)
	let urlComponents : URLComponents // +0x0 (0x0)
	let credential : FMNRequestCredential? // +0x0 (0x28)
	let urlSessionFactory : FMNURLSessionFactory // +0x0 (0x8)
	var statusCodeHandlers : [Int : (_:_:)] // +0x0 (0x8)
	let statusCodeHandlerQueue : OS_dispatch_queue // +0x0 (0x8)
	var session : FMNetworkingURLSession? // +0x0 (0x28)

	// ObjC -> Swift bridged methods
	0x29530  @objc FMNHttpClient.init <stripped>
	0x295a0  @objc FMNHttpClient..cxx_destruct <stripped>

	// Swift methods
	0x26050  func FMNHttpClient.authenticationChallengeHandler.getter // getter 
	0x260a0  func FMNHttpClient.authenticationChallengeHandler.setter // setter 
	0x26100  func FMNHttpClient.authenticationChallengeHandler.modify // modifyCoroutine 
	0x26140  func FMNHttpClient.bundleIdentifierFallback.getter // getter 
	0x26190  func FMNHttpClient.bundleIdentifierFallback.setter // setter 
	0x261e0  func FMNHttpClient.bundleIdentifierFallback.modify // modifyCoroutine 
	0x25920  class func FMNHttpClient.__allocating_init(urlComponents:credential:urlSessionFactory:) // init 
	0x265f0  func FMNHttpClient.registerHandler(for:handler:) // method 
	0x26980  func <stripped> // method 
	0x26bf0  func FMNHttpClient.invalidate() // method 
	0x26cd0  func FMNHttpClient.upload(requestContent:completionHandler:) // method 
	0x27200  func FMNHttpClient.fetch(requestContent:completionHandler:) // method 
	0x28600  func <stripped> // method 
	0x286e0  func <stripped> // method 
	0x28bc0  func <stripped> // method 
	0x28d60  func <stripped> // method 
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
	let startedDateTime : Date
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
	let entries : [HAREntry] // +0x10
	let creator : HARCreator // +0x18
 }

 struct FMNetworking.HARResponse {

	// Properties
	let status : Int // +0x0
	let statusText : String // +0x8
	let httpVersion : String // +0x18
	let headers : [HARHeader] // +0x28
	let content : HARContent // +0x30
 }

 struct FMNetworking.HARRequest {

	// Properties
	let method : String // +0x0
	let url : String // +0x10
	let httpVersion : String // +0x20
	let cookies : [String] // +0x30
	let headers : [HARHeader] // +0x38
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
	var client : weak FMNHttpClient?
	let authenticationProvider : FMNAuthenticationProviding?
	let consolidatedContent : A
	let credential : FMNRequestCredential?
	let redirectedHostStore : FMNRedirectHostStore?
	var serverInteractionController : weak FMNServerInteractionController?
	let retryCount : Int
 }

 class FMNetworking.FMNPushNotificatonHandler : NSObject /usr/lib/libobjc.A.dylib, FMNAPSTokenProviding {

	// Properties
	let topic : String // +0x8 (0x10)
	let apsQueue : OS_dispatch_queue // +0x18 (0x8)
	var pendingTopicTokenFutures : Set<Future<String>> // +0x20 (0x8)
	var topicAPSToken : String? // +0x28 (0x10)
	var publicAPSToken : String? // +0x38 (0x10)
	var _apsConnection : APSConnection? // +0x48 (0x8)
	var $__lazy_storage_$_apsConnection : APSConnection?? // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x377b0  @objc FMNPushNotificatonHandler.dealloc <stripped>
	0x38330  @objc FMNPushNotificatonHandler.init <stripped>
	0x377d0  @objc FMNPushNotificatonHandler..cxx_destruct <stripped>

	// Swift methods
	0x37860  func <stripped> // method 
	0x37f90  func <stripped> // method 
 }

 class FMNetworking.FMNMockClientURLSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let httpArchiveFileURL : URL // +0x5 (0x0)
	let responseReadQueue : OS_dispatch_queue // +0x0 (0x8)
	var urlResponseByURL : [URL : FMNMockClientURLResponse]? // +0x0 (0x8)

	// Swift methods
	0x3b890  class func FMNMockClientURLSession.__allocating_init(httpArchiveFileURL:) // init 
	0x3c130  func FMNMockClientURLSession.uploadTask(with:fromFile:completionHandler:) // method 
	0x3c1d0  func FMNMockClientURLSession.dataTask(with:completionHandler:) // method 
	0x3c690  func FMNMockClientURLSession.finishTasksAndInvalidate() // method 
	0x3cbe0  func <stripped> // method 
	0x3d3a0  func <stripped> // method 
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
	0x3f940  class func FMNHTTPArchiveWriter.__allocating_init() // init 
	0x3f9c0  func FMNHTTPArchiveWriter.encodeResponses(mockResponses:) // method 
	0x40400  func FMNHTTPArchiveWriter.saveResponses(mockResponses:fileURL:) // method 
 }
