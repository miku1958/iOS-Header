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
	let data : Ås // +0x0
	let response : NSHTTPURLResponse? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let error : Ov // +0x18
 }

 class FMNetworking.FMNAuthenticationCredential : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var authToken : String
	var personId : String
	var hostName : String
	var accountType : FMNAccountType

	// Swift methods
	0x6460  func <stripped> // getter 
	0x64a0  func <stripped> // setter 
	0x64e0  func <stripped> // modifyCoroutine 
	0x65b0  func <stripped> // getter 
	0x65f0  func <stripped> // setter 
	0x6630  func <stripped> // modifyCoroutine 
	0x6700  func <stripped> // getter 
	0x6740  func <stripped> // setter 
	0x6780  func <stripped> // modifyCoroutine 
	0x6860  func <stripped> // getter 
	0x68c0  func <stripped> // setter 
	0x6920  func <stripped> // modifyCoroutine 
	0x7600  func <stripped> // getter 
	0x79d0  class func FMNAuthenticationCredential.__allocating_init(accountType:authToken:personId:hostName:) // init 
	0x7b70  class func FMNAuthenticationCredential.__allocating_init(from:) // init 
	0x7ed0  func <stripped> // method 
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
	let url : ep
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : wp
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
	0xff00  func <stripped> // getter 
	0xff30  func <stripped> // setter 
	0xff60  func <stripped> // modifyCoroutine 
	0x10050  func <stripped> // getter 
	0x10090  func <stripped> // setter 
	0x100d0  func <stripped> // modifyCoroutine 
	0x10100  func <stripped> // getter 
	0x10170  class func FMNAuthenticationProvider.__allocating_init() // init 
	0x104a0  func <stripped> // method 
	0x10e00  func <stripped> // method 
	0x11aa0  func <stripped> // method 
	0x11c00  func <stripped> // method 
 }

 struct FMNetworking.FMNHTTPArchiveReader {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : ep
 }

 struct FMNetworking.FMNMockingPreferences {

	// Properties
	let domain : String // +0x0
	let filePath : String // +0x10
 }

 struct FMNetworking.FMNResponseSerializableCodingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateDecodingStrategy : Qn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateEncodingStrategy : in
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
	let fileURL : ep
	let method : FMNRequestMethod
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ep
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
	let url : ep
WARNING: couldn't find address 0x0 (0x0) in binary!
	let body : wp
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
	let decoder : mm // +0x30
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
	0x20820  class func FMNURLSessionFactory.__allocating_init(mockSessionCreationBlock:preferences:) // init 
	0x208a0  func <stripped> // method 
	0x20d40  func <stripped> // method 
 }

 enum FMNetworking.URLSessionFactoryError {

	// Properties
	case missingMockSessionCreationBlock  
 }

 class FMNetworking.MockURLDataTask : NSURLSessionDataTask /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let executionBlock : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50d00000f730 (0xd00000f730) in binary!
	0x50cc  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50b80000f5a8 (0xb80000f5a8) in binary!
	0x38000000c  @objc MockURLDataTask.(null) <stripped>
WARNING: couldn't find address 0x50a00000f6a0 (0xa00000f6a0) in binary!
	0x509c  @objc MockURLDataTask.(null) <stripped>

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
	0x21810  class func FMNServerInteractionController.__allocating_init(authenticationProvider:mockingPreferences:urlSessionFactory:) // init 
	0x21a20  func <stripped> // method 
	0x21a40  func <stripped> // method 
	0x21a80  func <stripped> // method 
	0x21b00  func <stripped> // method 
	0x21b20  func <stripped> // method 
	0x21c20  func <stripped> // method 
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
	var urlComponents : yl // +0x19 (0x0)

	// Swift methods
	0x22d10  func <stripped> // getter 
	0x22d50  func <stripped> // setter 
	0x22da0  func <stripped> // modifyCoroutine 
	0x22e60  func <stripped> // getter 
	0x22ea0  func <stripped> // setter 
	0x22ee0  func <stripped> // modifyCoroutine 
	0x22f90  func <stripped> // getter 
	0x22fe0  func <stripped> // setter 
	0x23040  func <stripped> // modifyCoroutine 
	0x23080  class func FMNHTTPRequest.__allocating_init(hostName:scheme:path:) // init 
	0x23140  func <stripped> // method 
	0x231a0  func <stripped> // getter 
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
	var sessionLock : il

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50a00000f6a0 (0xa00000f6a0) in binary!
	0x509c  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x50880000f578 (0x880000f578) in binary!
	0x18000000c  @objc FMNHttpClient.(null) <stripped>
WARNING: couldn't find address 0x544c0000f558 (0x44c0000f558) in binary!
	0x38000000c  @objc FMNHttpClient.(null) <stripped>

	// Swift methods
	0x245c0  func <stripped> // getter 
	0x24610  func <stripped> // setter 
	0x24670  func <stripped> // modifyCoroutine 
	0x24770  func <stripped> // getter 
	0x247c0  func <stripped> // setter 
	0x24810  func <stripped> // modifyCoroutine 
	0x238c0  class func FMNHttpClient.__allocating_init(credential:urlSessionFactory:) // init 
	0x24a70  func <stripped> // method 
	0x24d80  func <stripped> // method 
	0x24f90  func <stripped> // method 
	0x25100  func <stripped> // method 
	0x255d0  func <stripped> // method 
	0x26900  func <stripped> // method 
	0x26ba0  func <stripped> // method 
	0x26e00  func <stripped> // method 
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
	let startedDateTime : uj
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
WARNING: couldn't find address 0x50580000f658 (0x580000f658) in binary!
	0x5054  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x50400000f530 (0x400000f530) in binary!
	0x38000000c  @objc FMNPushNotificatonHandler.(null) <stripped>
WARNING: couldn't find address 0x59540000f508 (0x1540000f508) in binary!
	0x5958  @objc FMNPushNotificatonHandler.(null) <stripped>

	// Swift methods
	0x30fb0  func <stripped> // getter 
	0x31190  func <stripped> // method 
	0x317c0  func <stripped> // method 
 }

 class FMNetworking.FMNMockClientURLSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let httpArchiveFileURL : ep // +0x44000 (0x0)
	let responseReadQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlResponseByURL :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x34540  class func FMNMockClientURLSession.__allocating_init(httpArchiveFileURL:) // init 
	0x34c40  func <stripped> // method 
	0x34ce0  func <stripped> // method 
	0x351d0  func <stripped> // method 
	0x35630  func <stripped> // method 
	0x35ce0  func <stripped> // method 
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
	0x370a0  class func FMNHTTPArchiveWriter.__allocating_init() // init 
	0x370d0  func <stripped> // method 
	0x37a90  func <stripped> // method 
 }
