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
	let data : Ñx // +0x0
	let response : NSHTTPURLResponse? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let error : Ÿ{ // +0x18
 }

 class FMNetworking.FMNAuthenticationCredential : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var authToken : String // +0x10 (0x10)
	var personId : String // +0x20 (0x10)
	var hostName : String // +0x30 (0x10)
	var accountType : FMNAccountType // +0x40 (0x1)

	// Swift methods
	0x6860  func <stripped> // getter 
	0x68a0  func <stripped> // setter 
	0x68e0  func <stripped> // modifyCoroutine 
	0x69b0  func <stripped> // getter 
	0x69f0  func <stripped> // setter 
	0x6a30  func <stripped> // modifyCoroutine 
	0x6b00  func <stripped> // getter 
	0x6b40  func <stripped> // setter 
	0x6b80  func <stripped> // modifyCoroutine 
	0x6c30  func <stripped> // getter 
	0x6c60  func <stripped> // setter 
	0x6c90  func <stripped> // modifyCoroutine 
	0x79d0  func <stripped> // getter 
	0x7da0  class func FMNAuthenticationCredential.__allocating_init(accountType:authToken:personId:hostName:) // init 
	0x7f30  class func FMNAuthenticationCredential.__allocating_init(from:) // init 
	0x8290  func <stripped> // method 
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
	let url : µu
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : Çu
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
	var autoRenewalLimit : Int
	let serialQueue : OS_dispatch_queue
	var bundleId : String?
	var $__lazy_storage_$_accountStore : ACAccountStore?
	var credential : FMNAuthenticationCredential

	// Swift methods
	0x10120  func <stripped> // getter 
	0x10150  func <stripped> // setter 
	0x10180  func <stripped> // modifyCoroutine 
	0x10270  func <stripped> // getter 
	0x102b0  func <stripped> // setter 
	0x102f0  func <stripped> // modifyCoroutine 
	0x10320  func <stripped> // getter 
	0x10390  class func FMNAuthenticationProvider.__allocating_init() // init 
	0x106c0  func <stripped> // method 
	0x10fd0  func <stripped> // method 
	0x11c10  func <stripped> // method 
	0x11d50  func <stripped> // method 
 }

 struct FMNetworking.FMNHTTPArchiveReader {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : µu
 }

 struct FMNetworking.FMNMockingPreferences {

	// Properties
	let domain : String // +0x0
	let filePath : String // +0x10
 }

 struct FMNetworking.FMNResponseSerializableCodingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateDecodingStrategy : ³s
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateEncodingStrategy : Ës
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
	let fileURL : µu
	let method : FMNRequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : µu
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
	let url : µu
WARNING: couldn't find address 0x0 (0x0) in binary!
	let body : Çu
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
	let decoder : Ïr // +0x30
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
	0x203f0  class func FMNURLSessionFactory.__allocating_init(mockSessionCreationBlock:preferences:) // init 
	0x20470  func <stripped> // method 
	0x20900  func <stripped> // method 
 }

 enum FMNetworking.URLSessionFactoryError {

	// Properties
	case missingMockSessionCreationBlock  
 }

 class FMNetworking.MockURLDataTask : NSURLSessionDataTask /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let executionBlock : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50b00000fc90 (0xb00000fc90) in binary!
	0x50ac  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50980000fb08 (0x980000fb08) in binary!
	0x38000000c  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50800000fc00 (0x800000fc00) in binary!
	0x507c  @objc MockURLDataTask.(null) <stripped>

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
	0x213d0  class func FMNServerInteractionController.__allocating_init(authenticationProvider:mockingPreferences:urlSessionFactory:) // init 
	0x215e0  func <stripped> // method 
	0x21600  func <stripped> // method 
	0x21640  func <stripped> // method 
	0x216c0  func <stripped> // method 
	0x216e0  func <stripped> // method 
	0x217e0  func <stripped> // method 
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
	var urlComponents : Ûq // +0x19 (0x0)

	// Swift methods
	0x228c0  func <stripped> // getter 
	0x22900  func <stripped> // setter 
	0x22950  func <stripped> // modifyCoroutine 
	0x229f0  func <stripped> // getter 
	0x22a20  func <stripped> // setter 
	0x22a50  func <stripped> // modifyCoroutine 
	0x22b00  func <stripped> // getter 
	0x22b50  func <stripped> // setter 
	0x22bb0  func <stripped> // modifyCoroutine 
	0x22bf0  class func FMNHTTPRequest.__allocating_init(hostName:scheme:path:) // init 
	0x22cb0  func <stripped> // method 
	0x22d10  func <stripped> // getter 
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
	var sessionLock : Ëq

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50800000fc00 (0x800000fc00) in binary!
	0x507c  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x50680000fad8 (0x680000fad8) in binary!
	0x18000000c  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x542c0000fab8 (0x42c0000fab8) in binary!
	0x38000000c  @objc FMNHttpClient.(null) <stripped>

	// Swift methods
	0x24100  func <stripped> // getter 
	0x24150  func <stripped> // setter 
	0x241b0  func <stripped> // modifyCoroutine 
	0x242b0  func <stripped> // getter 
	0x24300  func <stripped> // setter 
	0x24350  func <stripped> // modifyCoroutine 
	0x23400  class func FMNHttpClient.__allocating_init(credential:urlSessionFactory:) // init 
	0x245b0  func <stripped> // method 
	0x248c0  func <stripped> // method 
	0x24ad0  func <stripped> // method 
	0x24c40  func <stripped> // method 
	0x25110  func <stripped> // method 
	0x26440  func <stripped> // method 
	0x266e0  func <stripped> // method 
	0x26940  func <stripped> // method 
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
	let startedDateTime : ×o
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
WARNING: couldn't find address 0x50380000fbb8 (0x380000fbb8) in binary!
	0x5034  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x50200000fa90 (0x200000fa90) in binary!
	0x38000000c  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x59340000fa68 (0x1340000fa68) in binary!
	0x5938  @objc FMNPushNotificatonHandler.(null) <stripped>

	// Swift methods
	0x30a70  func <stripped> // getter 
	0x30c50  func <stripped> // method 
	0x31280  func <stripped> // method 
 }

 class FMNetworking.FMNMockClientURLSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : µu // +0x44000 (0x0)
	let responseReadQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlResponseByURL :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x34000  class func FMNMockClientURLSession.__allocating_init(httpArchiveFileURL:) // init 
	0x34700  func <stripped> // method 
	0x347a0  func <stripped> // method 
	0x34c90  func <stripped> // method 
	0x350f0  func <stripped> // method 
	0x357a0  func <stripped> // method 
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
	0x36b50  class func FMNHTTPArchiveWriter.__allocating_init() // init 
	0x36b80  func <stripped> // method 
	0x37540  func <stripped> // method 
 }
