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
	let data : ás // +0x0
	let response : NSHTTPURLResponse? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let error : ¯v // +0x18
 }

 enum FMNetworking.HeaderKeyName { }

 class FMNetworking.FMNAuthenticationCredential : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var authToken : String
	var personId : String
	var hostName : String
	var accountType : FMNAccountType

	// Swift methods
	0x6320  func <stripped> // getter 
	0x6360  func <stripped> // setter 
	0x63a0  func <stripped> // modifyCoroutine 
	0x6470  func <stripped> // getter 
	0x64b0  func <stripped> // setter 
	0x64f0  func <stripped> // modifyCoroutine 
	0x65c0  func <stripped> // getter 
	0x6600  func <stripped> // setter 
	0x6640  func <stripped> // modifyCoroutine 
	0x6720  func <stripped> // getter 
	0x6780  func <stripped> // setter 
	0x67e0  func <stripped> // modifyCoroutine 
	0x74c0  func <stripped> // getter 
	0x7890  class func FMNAuthenticationCredential.__allocating_init(accountType:authToken:personId:hostName:) // init 
	0x7a30  class func FMNAuthenticationCredential.__allocating_init(from:) // init 
	0x7d90  func <stripped> // method 
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
	let url : ¿p
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : Ñp
	let headers : [String : String]
 }

 enum FMNetworking.FMNAccountType {

	// Properties
	case accessory : (overrideHostname: String?)
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
	var autoRenewalLimit : Int
	let serialQueue : OS_dispatch_queue
	var bundleId : String?
	var $__lazy_storage_$_accountStore : ACAccountStore?
	var credential : FMNAuthenticationCredential

	// Swift methods
	0xfe10  func <stripped> // getter 
	0xfe40  func <stripped> // setter 
	0xfe70  func <stripped> // modifyCoroutine 
	0xff60  func <stripped> // getter 
	0xffa0  func <stripped> // setter 
	0xffe0  func <stripped> // modifyCoroutine 
	0x10010  func <stripped> // getter 
	0x10080  class func FMNAuthenticationProvider.__allocating_init() // init 
	0x103b0  func <stripped> // method 
	0x10d10  func <stripped> // method 
	0x119b0  func <stripped> // method 
	0x11b10  func <stripped> // method 
 }

 struct FMNetworking.FMNHTTPArchiveReader {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : ¿p
 }

 struct FMNetworking.FMNMockingPreferences {

	// Properties
	let domain : String // +0x0
	let filePath : String // +0x10
 }

 struct FMNetworking.FMNResponseSerializableCodingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateDecodingStrategy : «n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateEncodingStrategy : Ãn
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
	let fileURL : ¿p
	let method : FMNRequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ¿p
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
	let url : ¿p
WARNING: couldn't find address 0x0 (0x0) in binary!
	let body : Ñp
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
	let credential : FMNRequestCredential // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let decoder : Çm // +0x30
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
	let mockSessionCreationBlock : FMNetworkingURLSession
	let preferences : FMNMockingPreferences

	// Swift methods
	0x20730  class func FMNURLSessionFactory.__allocating_init(mockSessionCreationBlock:preferences:) // init 
	0x207b0  func <stripped> // method 
	0x20c50  func <stripped> // method 
 }

 enum FMNetworking.URLSessionFactoryError {

	// Properties
	case missingMockSessionCreationBlock  
 }

 class FMNetworking.MockURLDataTask : NSURLSessionDataTask /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let executionBlock : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x51000000f7c0 (0x1000000f7c0) in binary!
	0x50fc  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50e80000f638 (0xe80000f638) in binary!
	0x38000000c  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50d00000f730 (0xd00000f730) in binary!
	0x50cc  @objc MockURLDataTask.(null) <stripped>

	// Swift methods
 }

 class FMNetworking.FMNServerInteractionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let authenticationProvider : FMNAuthenticationProviding
	var httpClient : FMNHttpClient
	let httpClientQueue : OS_dispatch_queue
	var redirectHostStore : FMNRedirectHostStore
	let mockingPreferences : FMNMockingPreferences
	let urlSessionFactory : FMNURLSessionFactory

	// Swift methods
	0x21720  class func FMNServerInteractionController.__allocating_init(authenticationProvider:mockingPreferences:urlSessionFactory:) // init 
	0x21930  func <stripped> // method 
	0x21950  func <stripped> // method 
	0x21a20  func <stripped> // method 
	0x21aa0  func <stripped> // method 
	0x21ac0  func <stripped> // method 
	0x21bc0  func <stripped> // method 
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
	var accountType : FMNAccountType // +0x38 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlComponents : Ól // +0x19 (0x0)

	// Swift methods
	0x22c80  func <stripped> // getter 
	0x22cc0  func <stripped> // setter 
	0x22d10  func <stripped> // modifyCoroutine 
	0x22dd0  func <stripped> // getter 
	0x22e10  func <stripped> // setter 
	0x22e50  func <stripped> // modifyCoroutine 
	0x22f00  func <stripped> // getter 
	0x22f50  func <stripped> // setter 
	0x22fb0  func <stripped> // modifyCoroutine 
	0x22ff0  class func FMNHTTPRequest.__allocating_init(hostName:scheme:path:) // init 
	0x230b0  func <stripped> // method 
	0x23110  func <stripped> // getter 
 }

 class FMNetworking.FMNHttpClient : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var authenticationChallengeHandler : AuthChallengeDisposition
	var bundleIdentifierFallback : String
	let httpSuccessCodeMin : Int
	let httpSuccessCodeMax : Int
	var credential : FMNRequestCredential
	let urlSessionFactory : FMNURLSessionFactory
	var statusCodeHandlers : [Int : (_:_:)]
	let statusCodeHandlerQueue : OS_dispatch_queue
	var session : FMNetworkingURLSession
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sessionLock : Ãl

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50d00000f730 (0xd00000f730) in binary!
	0x50cc  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x50b80000f608 (0xb80000f608) in binary!
	0x18000000c  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x547c0000f5e8 (0x47c0000f5e8) in binary!
	0x38000000c  @objc FMNHttpClient.(null) <stripped>

	// Swift methods
	0x24530  func <stripped> // getter 
	0x24580  func <stripped> // setter 
	0x245e0  func <stripped> // modifyCoroutine 
	0x246e0  func <stripped> // getter 
	0x24730  func <stripped> // setter 
	0x24780  func <stripped> // modifyCoroutine 
	0x23830  class func FMNHttpClient.__allocating_init(credential:urlSessionFactory:) // init 
	0x249e0  func <stripped> // method 
	0x24cf0  func <stripped> // method 
	0x24f00  func <stripped> // method 
	0x25070  func <stripped> // method 
	0x25540  func <stripped> // method 
	0x26870  func <stripped> // method 
	0x26b10  func <stripped> // method 
	0x26d70  func <stripped> // method 
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
	let startedDateTime : Ïj
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
	let topic : String
	let apsQueue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pendingTopicTokenFutures :  empty-list 
	var topicAPSToken : String?
	var publicAPSToken : String?
	var _apsConnection : APSConnection?
	var $__lazy_storage_$_apsConnection : APSConnection??

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50880000f6e8 (0x880000f6e8) in binary!
	0x5084  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x50700000f5c0 (0x700000f5c0) in binary!
	0x38000000c  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x59840000f598 (0x1840000f598) in binary!
	0x5988  @objc FMNPushNotificatonHandler.(null) <stripped>

	// Swift methods
	0x30f20  func <stripped> // getter 
	0x31100  func <stripped> // method 
	0x31730  func <stripped> // method 
 }

 class FMNetworking.FMNMockClientURLSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : ¿p // +0x44000 (0x0)
	let responseReadQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlResponseByURL :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x344b0  class func FMNMockClientURLSession.__allocating_init(httpArchiveFileURL:) // init 
	0x34bb0  func <stripped> // method 
	0x34c50  func <stripped> // method 
	0x35140  func <stripped> // method 
	0x355a0  func <stripped> // method 
	0x35c50  func <stripped> // method 
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
	0x37010  class func FMNHTTPArchiveWriter.__allocating_init() // init 
	0x37040  func <stripped> // method 
	0x37a00  func <stripped> // method 
 }
