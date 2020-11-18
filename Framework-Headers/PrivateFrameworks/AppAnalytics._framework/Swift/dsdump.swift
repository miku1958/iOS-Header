 protocol AppAnalytics.ExternalAnalyticsUploaderType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.EventType // 3 requirements
 {
	// class getter
	// class getter
	// class init
 }
 protocol AppAnalytics.SignerType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadClient // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadClientFactory // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadTask // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol AppAnalytics.BridgedEventProcessorProviderType // 1 requirements
 {
	// getter
 }
 protocol AppAnalytics.SigningServiceType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.Lock // 2 requirements
 {
	// method
	// method
 }
 protocol AppAnalytics.ActiveSessionType // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol AppAnalytics.UploadServiceType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.DataEventStackType // 4 requirements
 {
	// getter
	// getter
	// method
	// method
 }
 protocol AppAnalytics.DataEventType // 3 requirements
 {
	// class base protocol
	// class base protocol
	// method
 }
 protocol AppAnalytics.ProxyEventProcessorProviderType // 1 requirements
 {
	// getter
 }
 protocol AppAnalytics.ResourceType // 4 requirements
 {
	// class getter
	// getter
	// getter
	// method
 }
 protocol AppAnalytics.TrackerDelegate // 11 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol AppAnalytics.RestartTimerType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.LoggingEventProcessorFormatterType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadDropboxType // 8 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol AppAnalytics.Uploadable // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadManagerType // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol AppAnalytics.SnapshotType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.EventPropertyType // 5 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol AppAnalytics.UploadDropboxFileManagerType // 11 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol AppAnalytics.EventProcessorType // 8 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol AppAnalytics.AppSessionProviding // 1 requirements
 {
	// getter
 }
 protocol AppAnalytics.AppSessionManagerType // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol AppAnalytics.SessionProviderType // 1 requirements
 {
	// getter
 }
 protocol AppAnalytics.UploadDropboxPathProviderType // 2 requirements
 {
	// getter
	// getter
 }
 protocol AppAnalytics.ProcessEventType // 5 requirements
 {
	// class base protocol
	// getter
	// getter
	// getter
	// getter
 }

 struct __C.WritingOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.os_unfair_lock_options_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ◊Ø
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ◊Ø
 }

 struct __C.z_stream_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_in :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_in : ◊Ø
	var total_in : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_out :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_out : ◊Ø
	var total_out : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var msg :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : sÆ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var zalloc :  first-element-marker 
	var zfree : @convention(c) (_:_:)?
	var opaque : UnsafeMutableRawPointer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data_type : ÎÆ
	var adler : UInt
	var reserved : UInt
 }

 class AppAnalytics.ProcessorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessionProvider : SessionProviderType
	let accessQueue : OS_dispatch_queue
	var eventProcessors : EventProcessorType

	// Swift methods
 }

 class AppAnalytics.DeferredBackgroundResuming : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let completion : ()

	// Swift methods
 }

 class AppAnalytics.ExternalAnalyticsUploader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExternalAnalyticsUploaderType {

	// Properties
	let session : NSURLSession

	// Swift methods
	0x3fd0  class func ExternalAnalyticsUploader.__allocating_init() // init 
 }

 enum AppAnalytics.Errors {

	// Properties
	case invalidResponse  
 }

 enum AppAnalytics.BridgedSessionKind { }

 class AppAnalytics.BridgedSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	let kind : BridgedSessionKind // +0x18 (0x8)
	let name : String? // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ® // +0xfeedfacf (0x0)
	let sessionData : [String : Any] // +0x3 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x757c00022d00 (0x57c00022d00) in binary!
	0x801c  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x756400022e20 (0x56400022e20) in binary!
	0x7558  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x754c00022ce8 (0x54c00022ce8) in binary!
	0x7540  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x99d400022cd8 (0x1d400022cd8) in binary!
	0x48000000c  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x74fc00022cc8 (0x4fc00022cc8) in binary!
	0x7504  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x750400022e28 (0x50400022e28) in binary!
	0x9998  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8c170  @objc BridgedSession.(null) <stripped>

	// Swift methods
 }

 struct AppAnalytics.Batch {

	// Properties
	let sessionData : [String : Any] // +0x0
	var events : [[String : Any]] // +0x8
	let identifier : String // +0x10
 }

 class AppAnalytics.BridgedEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventProcessor : AAEventProcessorType

	// Swift methods
 }

 struct AppAnalytics.BridgedEvent { }

 struct AppAnalytics.EventData {

	// Properties
	let eventID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventTimestamp : ®
	let eventPath : String
	let sessionID : String
	let appSessionID : String?
 }

 enum AppAnalytics.CodingKeys {

	// Properties
	case eventID  
	case eventTimestamp  
	case eventPath  
	case sessionID  
	case appSessionID  
 }

 class AppAnalytics.BridgedFlushManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let flushManager : FlushManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74fc00022cc8 (0x4fc00022cc8) in binary!
	0x7504  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x750400022e28 (0x50400022e28) in binary!
	0x9998  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8c170  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x664fff8c0b8  @objc BridgedFlushManager.(null) <stripped>

	// Swift methods
	0x6c00  class func BridgedFlushManager.__allocating_init(appSessionManager:client:endpoint:config:) // init 
 }

 class AppAnalytics.BridgedRawDataEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let dictionary : [String : Any]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x843800022c88 (0x43800022c88) in binary!
	0x74c0  @objc BridgedRawDataEvent.(null) <stripped>
WARNING: couldn't find address 0x74b400022dd8 (0x4b400022dd8) in binary!
	0x9948  @objc BridgedRawDataEvent.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x454fff8c370  @objc BridgedRawDataEvent.(null) <stripped>
	0x44cfff8c458  @objc BridgedRawDataEvent.ëô	 <stripped>

	// Swift methods
	0x7670  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool
	var unique : Bool
	var discardWhenPresent : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76a000022c58 (0x6a000022c58) in binary!
	0x75b2  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x768800022c50 (0x68800022c50) in binary!
	0x759a  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x767000022c48 (0x67000022c48) in binary!
	0x7582  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x744c00022d70 (0x44c00022d70) in binary!
	0xc8000000c  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x7ee800022c28 (0x6e800022c28) in binary!
	0x7edc  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x84e400022c20 (0x4e400022c20) in binary!
	0x761c  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x740400022c18 (0x40400022c18) in binary!
	0x73f8  @objc BridgedDataEventTraits.(null) <stripped>

	// Swift methods
	0x7a40  func <stripped> // getter 
	0x7a80  func <stripped> // setter 
	0x7ae0  func <stripped> // modifyCoroutine 
	0x7b40  func <stripped> // getter 
	0x7b80  func <stripped> // setter 
	0x7be0  func <stripped> // modifyCoroutine 
	0x7c70  func <stripped> // getter 
	0x7d20  func <stripped> // setter 
	0x7e40  func <stripped> // modifyCoroutine 
	0x8010  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ee800022c28 (0x6e800022c28) in binary!
	0x7edc  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x84e400022c20 (0x4e400022c20) in binary!
	0x761c  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x740400022c18 (0x40400022c18) in binary!
	0x73f8  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x73ec00022c10 (0x3ec00022c10) in binary!
	0x73e0  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x73d400022c08 (0x3d400022c08) in binary!
	0x75e4  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x73bc00022ce0 (0x3bc00022ce0) in binary!
	0x9850  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8e2a8  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff957d0  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff950c8  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff95ea0  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff94f48  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff97c50  @objc JSON.(null) <stripped>

	// Swift methods
	0x8590  class func JSON.__allocating_init(_:) // init 
	0x8710  func <stripped> // getter 
	0x88e0  func <stripped> // getter 
	0x8ac0  func <stripped> // getter 
	0x8b60  func <stripped> // getter 
	0x8c30  func <stripped> // getter 
	0x8ca0  func <stripped> // getter 
	0x8d10  func <stripped> // getter 
	0x8d80  func <stripped> // getter 
	0x8e50  func <stripped> // getter 
	0x90c0  func <stripped> // getter 
	0x94f0  func <stripped> // getter 
	0x9660  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : EventMirrorProperty

	// Swift methods
	0x10210  func <stripped> // method 
 }

 class AppAnalytics.FlushManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appSessionManager : AppSessionManagerType
	let client : Client
	let endpoint : AAEndpointType
	let contentType : ContentType
	let config : UploadBatchEventConfig
	let clientFactory : UploadClientFactory
	let signingService : SigningServiceType
	let uploadDropboxPathProvider : UploadDropboxPathProviderType
	let fileManager : UploadDropboxFileManagerType
	var state : State
	let flushQueue : OS_dispatch_queue

	// Swift methods
	0x13640  func <stripped> // method 
	0x13dc0  func <stripped> // method 
	0x14950  func <stripped> // method 
	0x15500  func <stripped> // method 
 }

 enum AppAnalytics.State {

	// Properties
	case idle  
	case flushing  
	case flushed  
 }

 struct AppAnalytics.SnapshotEvent {

	// Properties
	let isValid : Bool
	let entries : SnapshotEntry
	let missingData : MissingData
 }

 enum AppAnalytics.MissingData {

	// Properties
	case required : Any.Type
	case optional : Any.Type
 }

 enum AppAnalytics.BridgedEventPropertyRequirement { }

 class AppAnalytics.MescalSigner : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SignerType {
	// Swift methods
 }

 class AppAnalytics.Contract : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let bag : AMSBag

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72f400022c18 (0x2f400022c18) in binary!
	0x9788  @objc Contract.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x384fff9f1e0  @objc Contract.(null) <stripped>
 }

 struct AppAnalytics.SessionData {

	// Properties
	let key : String
	let data : A
 }

 enum AppAnalytics.Keys {

	// Properties
	case key  
	case data  
 }

 struct AppAnalytics.URLSessionUploadClientFactory: UploadClientFactory { }

 struct AppAnalytics.URLSessionUploadClient: UploadClient {

	// Properties
	let urlSession : NSURLSession // +0x0
 }

 struct AppAnalytics.ProxyURLSessionUploadTask: UploadTask {

	// Properties
	let realTask : NSURLSessionUploadTask // +0x0
 }

 class AppAnalytics.SessionGroupManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let accessQueue : OS_dispatch_queue
	var sessionMapping : Key
	var appSessionMapping : Key

	// Swift methods
	0x18d90  class func SessionGroupManager.__allocating_init(accessQueue:) // init 
 }

 struct AppAnalytics.Key {

	// Properties
	let identifier : String // +0x0
	let groupName : String // +0x10
 }

 struct AppAnalytics.UploadResponse {

	// Properties
	let statusCode : Int // +0x0
	let headers : [String : String] // +0x8
 }

 enum AppAnalytics.CodingKeys {

	// Properties
	case statusCode  
	case headers  
 }

 struct AppAnalytics.BridgedRawEventMirrorProperty {

	// Properties
	let rawEventProperty : BridgedRawEventProperty // +0x0
 }

 class AppAnalytics.Client : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	let name : String // +0x18 (0x10)
	let version : String // +0x28 (0x10)
	let build : Int // +0x38 (0x8)
	let buildNumber : String // +0x40 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72d400022a58 (0x2d400022a58) in binary!
	0x72c8  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x72bc00022b00 (0x2bc00022b00) in binary!
	0x7d5c  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x72a400022af8 (0x2a400022af8) in binary!
	0x7298  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x7d4000022af0 (0x54000022af0) in binary!
	0x7260  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x7d3400022ae0 (0x53400022ae0) in binary!
	0x7268  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x96fc00022a00 (0x6fc00022a00) in binary!
	0x18000000c  @objc Client.(null) <stripped>
WARNING: couldn't find address 0xb6d800022b20 (0x6d800022b20) in binary!
	0x68000000c  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x722c00022ae8 (0x22c00022ae8) in binary!
	0x7220  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x721400022a88 (0x21400022a88) in binary!
	0x7208  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x71fc00022b20 (0x1fc00022b20) in binary!
	0x9690  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x25cfffa9598  @objc Client.(null) <stripped>

	// Swift methods
	0x1ac60  func <stripped> // getter 
	0x1ade0  class func Client.__allocating_init(identifier:name:version:buildNumber:) // init 
 }

 class AppAnalytics.SHA1Base64SigningService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SigningServiceType {

	// Properties
	let signer : SignerType

	// Swift methods
 }

 enum AppAnalytics.ContentType { }

 class AppAnalytics.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var unfairLock : os_unfair_lock_s
	let options : os_unfair_lock_options_t

	// Swift methods
 }

 class AppAnalytics.SessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let tracker : Tracker
	let processorManager : ProcessorManager
	var appSessionProvider : AppSessionProviding
	let accessQueue : OS_dispatch_queue
	let sessionGroupManager : SessionGroupManager
	var suspendCount : AtomicCounter
	var state : SessionState
	var dataStacks : DataEventStackType
	var observers : SessionObserver
	let options : Options
	let flushProcessor : FlushProcessor

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb6d800022b20 (0x6d800022b20) in binary!
	0x68000000c  @objc SessionManager.(null) <stripped>

	// Swift methods
	0x1d690  class func SessionManager.__allocating_init(accessQueue:sessionGroupManager:options:flushProcessor:) // init 
 }

 struct AppAnalytics.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.AccessSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessionManager : SessionManager

	// Swift methods
 }

 enum AppAnalytics.SessionState {

	// Properties
	case active : ActiveSession
	case finished : Session
	case none  
 }

 enum AppAnalytics.LoggingEventProcessorFormat {

	// Properties
	case json : WritingOptions
	case custom : LoggingEventProcessorFormatterType
	case default  
 }

 class AppAnalytics.BridgedProcessEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let version : String
	let json : JSON
	let groupName : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x722c00022ae8 (0x22c00022ae8) in binary!
	0x7220  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x721400022a88 (0x21400022a88) in binary!
	0x7208  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x71fc00022b20 (0x1fc00022b20) in binary!
	0x9690  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x25cfffa9598  @objc BridgedProcessEvent.(null) <stripped>
	0x314fffa9a20  @objc BridgedProcessEvent._]√Lçm–æ <stripped>
	0x144fffa9c28  @objc BridgedProcessEvent.}e∂u–Lçm»HãU¿HãM∏LãE∞Ëç  <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x814800022a60 (0x14800022a60) in binary!
	0x8150  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x816400022a58 (0x16400022a58) in binary!
	0xbb98  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x71ac00022ad0 (0x1ac00022ad0) in binary!
	0x9640  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2dcfffaa528  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
	0x10cfffaa670  @objc BridgedUploadBatchEventProcessor.jÎ <stripped>
	0x15400022a78  @objc BridgedUploadBatchEventProcessor.Hçu»A∏ <stripped>

	// Swift methods
	0x24d20  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x25000  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
	0x25230  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:contentType:config:) // init 
 }

 class AppAnalytics.ActiveSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ActiveSessionType {

	// Properties
	let identifier : String // +0x10 (0x10)
	let kind : Kind // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ® // +0x22 (0x0)
	let appSessionIdentifier : String? // +0x6100085 (0x10)

	// Swift methods
 }

 enum AppAnalytics.DataEventError {

	// Properties
	case invalidTopLevelJson  
	case internalError  
	case dataNotSerializable  
	case dataArrayValueNotSerializable  
	case dataDictKeyNotSerializable  
	case dataDictValueNotSerializable  
 }

 enum AppAnalytics.BridgedLoggingEventProcessorFormat { }

 class AppAnalytics.BridgingLoggingEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x825400022a28 (0x25400022a28) in binary!
	0xbb60  @objc BridgingLoggingEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x717400022a98 (0x17400022a98) in binary!
	0x9608  @objc BridgingLoggingEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xecfffaeaf0  @objc BridgingLoggingEventProcessor.(null) <stripped>
	0x3f400022790  @objc BridgingLoggingEventProcessor._ <stripped>

	// Swift methods
	0x25d00  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
 }

 class AppAnalytics.UploadService {
 enum AppAnalytics.ProcessError {

	// Properties
	case jsonError  
 }

 class AppAnalytics.BridgedAccessTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessTracker : AccessTracker
	let eventMirrorStore : BridgedEventMirrorStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x715400022a78 (0x15400022a78) in binary!
	0x95e8  @objc BridgedAccessTracker.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x77cfffb12e0  @objc BridgedAccessTracker.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.SessionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject?
	var sessionChangeTracker : AccessTracker
	let block : AccessTracker

	// Swift methods
 }

 enum AppAnalytics.SessionObserverChange {

	// Properties
	case didStart : ActiveSession
	case willEnd : ActiveSession
	case didEnd : Session
	case willStart  
 }

 class AppAnalytics.DelayedToken : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let block : ()
	var sealed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x947c00022880 (0x47c00022880) in binary!
	0x6fd0  @objc DelayedToken.(null) <stripped>
WARNING: couldn't find address 0x946400022768 (0x46400022768) in binary!
	0x28000000c  @objc DelayedToken.(null) <stripped>
WARNING: couldn't find address 0x6fac000228d0 (0x7ac000228d0) in binary!
	0x9440  @objc DelayedToken.(null) <stripped>

	// Swift methods
	0x32d50  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType

	// Swift methods
	0x32f20  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
 }

 enum AppAnalytics.GZIPError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : ç¶
 }

 enum AppAnalytics.ExternalResult {

	// Properties
	case success : (value: A)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : E¶
 }

 struct AppAnalytics.AnyDataEventEntry {

	// Properties
	let key : String // +0x0
	let data : DataEventType // +0x10
	let traits : DataEventTrait // +0x38
	let file : String // +0x40
	let line : Int // +0x50
 }

 struct AppAnalytics.Entry {

	// Properties
	let data : A1
	let traits : DataEventTrait
	let file : String
	let line : Int
 }

 struct AppAnalytics.DataEventStack: DataEventStackType {

	// Properties
	var stack : Entry
	let stackKey : String
 }

 class AppAnalytics.BridgedProcessorManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let processorManager : ProcessorManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6fac000228d0 (0x7ac000228d0) in binary!
	0x9440  @objc BridgedProcessorManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5cfffbb7c8  @objc BridgedProcessorManager.(null) <stripped>

	// Swift methods
 }

 struct AppAnalytics.SessionManagerConfiguration {

	// Properties
	let options : Options // +0x0
	let flushProcessor : FlushProcessor // +0x8
 }

 class AppAnalytics.BridgedEventData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let eventID : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventDate : ® // +0x19 (0x0)
	let eventPath : String // +0x45545f5f (0x10)
	let sessionID : String // +0x0 (0x10)
	let appSessionID : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6f3c000227e8 (0x73c000227e8) in binary!
	0x6f30  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6f24000226a0 (0x724000226a0) in binary!
	0x6f18  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6f0c00022678 (0x70c00022678) in binary!
	0x6f00  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6ef400022818 (0x6f400022818) in binary!
	0x9388  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x64cfffbc670  @objc BridgedEventData.(null) <stripped>
	0x654fffbc858  @objc BridgedEventData.A\A]A^A_]√f.Ñ <stripped>
	0x33c00022450  @objc BridgedEventData.ﬁË˙ <stripped>
WARNING: couldn't find address 0x227a4fffc1a18 (0x7a4fffc1a18) in binary!
	0x6400022430  @objc BridgedEventData.(null) <stripped>

	// Swift methods
	0x38030  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let identifier : String?
	let tracker : Tracker
	let eventMirrorStore : BridgedEventMirrorStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ed400022790 (0x6d400022790) in binary!
	0x6ec8  @objc BridgedTracker.(null) <stripped>
WARNING: couldn't find address 0x6ebc000227e0 (0x6bc000227e0) in binary!
	0x9350  @objc BridgedTracker.(null) <stripped>
WARNING: couldn't find address 0x338000000c (0x338000000c) in binary!
	0x7a4fffc1a18  @objc BridgedTracker.(null) <stripped>
	0x41cfffc1790  @objc BridgedTracker.ˇHâù(ˇˇˇHã!Q	 <stripped>

	// Swift methods
 }

 enum AppAnalytics.SessionGroup {

	// Properties
	case custom : String
	case default  
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ® // +0x92000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : ® // +0x0 (0x0)
	let duration : Double // +0x92000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c14000223a8 (0x414000223a8) in binary!
	0x6c08  @objc BridgedTimedData.(null) <stripped>
	0x6bf0  dispatch thunk of EventType.init()
WARNING: couldn't find address 0x6be400022508 (0x3e400022508) in binary!
	0x9078  @objc BridgedTimedData.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4dcfffc4ef0  @objc BridgedTimedData.(null) <stripped>
	0xfffc52a8  @objc BridgedTimedData.√Ä <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x444fffc6d60  @objc BridgedTimedData.(null) <stripped>

	// Swift methods
	0x3f170  func <stripped> // method 
 }

 struct AppAnalytics.Session {

	// Properties
	let identifier : String
	let appSessionID : String?
	let kind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ®
	let sessionData : [String : Any]
 }

 enum AppAnalytics.Kind {

	// Properties
	case custom : String
	case userEvents  
	case telemetry  
	case realtime  
 }

 class AppAnalytics.EventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : EventMirrorProperty

	// Swift methods
	0x400a0  func <stripped> // method 
 }

 struct AppAnalytics.SnapshotEntry {

	// Properties
	let name : String // +0x0
	let dataEntry : AnyDataEventEntry // +0x10
 }

 class AppAnalytics.BridgedRawEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let properties : BridgedRawEventProperty

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b3000022318 (0x33000022318) in binary!
	0x6bb8  @objc BridgedRawEvent.(null) <stripped>
WARNING: couldn't find address 0x904c00022350 (0x4c00022350) in binary!
	0x68000000c  @objc BridgedRawEvent.(null) <stripped>
WARNING: couldn't find address 0x6b94000225a8 (0x394000225a8) in binary!
	0x6b88  @objc BridgedRawEvent.(null) <stripped>

	// Swift methods
	0x40db0  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
 }

 enum AppAnalytics.PushEvent {

	// Properties
	case actual : A
	case bridged : (A, String)
 }

 class AppAnalytics.Endpoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ¶ // +0x5 (0x0)
	let name : String // +0x15 (0x10)
	let sharedContainerIdentifier : String? // +0x65745f5f (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b94000225a8 (0x394000225a8) in binary!
	0x6b88  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x6b7c000222c8 (0x37c000222c8) in binary!
	0x7af0  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x6b6400022488 (0x36400022488) in binary!
	0x8ff8  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd8340  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x254fffd8358  @objc Endpoint.(null) <stripped>
	0x22cfffd83c0  @objc Endpoint.Iâ÷Hâ˚øˇ <stripped>

	// Swift methods
	0x42eb0  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
 }

 enum AppAnalytics.UploadBatchQueueKey {

	// Properties
	case session : (sessionID: String)
	case group : (sessionID: String, groupID: String)
 }

 enum AppAnalytics.SubmitResult {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : Ø£
 }

 class AppAnalytics.Tracker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : TrackerName
	let identifier : String?
	var delegate : TrackerDelegate
	let accessQueue : OS_dispatch_queue
	var eventMirrorStore : EventMirrorStore
	var timers : Timer
	var restartTimers : RestartTimerType
	var dataStacks : DataEventStackType
	var parentTracker : Tracker
	var groupStack : Group
	var currentActionEntries : Entry
	let previousActionSequence : ActionSequence
	var willSubmitObservers : TrackerWillSubmitObserver

	// Swift methods
	0x45820  func <stripped> // getter 
	0x47050  func <stripped> // method 
 }

 class AppAnalytics.AccessTracker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var tracker : Tracker

	// Swift methods
 }

 class AppAnalytics.Token : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct AppAnalytics.TrackerWillSubmitObserver {

	// Properties
	let address : UInt // +0x0
	let block : Tracker // +0x8
 }

 struct AppAnalytics.Timer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startTime : ®
 }

 enum AppAnalytics.TrackerName {

	// Properties
	case path : String
	case hidden  
 }

 struct AppAnalytics.RestartTimer: RestartTimerType {

	// Properties
	let eventSubmit : EventSubmit
 }

 struct AppAnalytics.DefaultLoggingEventProcessorFormatter: LoggingEventProcessorFormatterType { }

 struct AppAnalytics.JSONLoggingEventProcessorFormatter: LoggingEventProcessorFormatterType {

	// Properties
	let writingOptions : WritingOptions // +0x0
	let fallbackFormatter : LoggingEventProcessorFormatterType // +0x8
 }

 class AppAnalytics.UploadBatchEventConfig : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let maxEventsPerSessionBatch : Int
	let maxByteSizePerSessionBatch : Int
	let debuggingEnabled : Bool
	let maxUploadTries : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75d800022268 (0x5d800022268) in binary!
	0x75cc  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x6d2000022240 (0x52000022240) in binary!
	0x75b4  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x985d00022218 (0x5d00022218) in binary!
	0x7bb8  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x7bac000221f0 (0x3ac000221f0) in binary!
	0x9852  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x7b94000221c8 (0x394000221c8) in binary!
	0x6ac0  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x8f5400022258 (0x75400022258) in binary!
	0x38000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x997f00022188 (0x17f00022188) in binary!
	0x6a90  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x8f2400022228 (0x72400022228) in binary!
	0x18000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0xaf0000022348 (0x70000022348) in binary!
	0x48000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x6a5400022310 (0x25400022310) in binary!
	0x6a48  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x6a3c00022360 (0x23c00022360) in binary!
	0x8ed0  @objc UploadBatchEventConfig.(null) <stripped>

	// Swift methods
	0x54460  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
 }

 class AppAnalytics.Lazy {
 struct AppAnalytics.LazyOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.BridgedRawEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataName : String
	let requirement : BridgedEventPropertyRequirement

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x997f00022188 (0x17f00022188) in binary!
	0x6a90  @objc BridgedRawEventProperty.(null) <stripped>
WARNING: couldn't find address 0x8f2400022228 (0x72400022228) in binary!
	0x18000000c  @objc BridgedRawEventProperty.(null) <stripped>
WARNING: couldn't find address 0xaf0000022348 (0x70000022348) in binary!
	0x48000000c  @objc BridgedRawEventProperty.(null) <stripped>

	// Swift methods
	0x55060  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
 }

 class AppAnalytics.UploadDropbox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxType {

	// Properties
	let config : UploadBatchEventConfig // +0x10 (0x8)
	let debugging : Lazy // +0x18 (0x8)
	var files : UploadDropboxFile // +0x20 (0x8)
	var currentSession : Session // +0x0 (0x0)
	let pathProvider : UploadDropboxPathProviderType // +0x0 (0x28)
	let fileManager : UploadDropboxFileManagerType // +0x0 (0x28)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 enum AppAnalytics.Debugging {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case enabled : ú
	case none  
 }

 enum AppAnalytics.Errors {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case emptyBatchFile :  first-element-marker 
	case malformedBatchFileEntry : [String : Any]
	case failedToDecodeFile  
	case failedToDecodeEntryUTF8  
	case failedToDecodeEntryJSON  
	case failedToFindSessionData  
	case fileClosed  
 }

 struct AppAnalytics.BridgedEventMirrorProperty {

	// Properties
	let bridgedEventProperty : BridgedEventProperty // +0x0
 }

 class AppAnalytics.UploadManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadManagerType {

	// Properties
	let service : UploadServiceType
	let dropbox : UploadDropboxType
	let config : UploadBatchEventConfig
	var batchIdentifiers : UploadBatchQueueKey
	var flushQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaf0000022348 (0x70000022348) in binary!
	0x48000000c  @objc UploadManager.(null) <stripped>

	// Swift methods
 }

 enum AppAnalytics.TimestampGranularity {

	// Properties
	case precise  
	case day  
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ® // +0x0 (0x0)
	var count : Int // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a5400022310 (0x25400022310) in binary!
	0x6a48  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x6a3c00022360 (0x23c00022360) in binary!
	0x8ed0  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffed208  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0xdcfffef8d0  @objc Group.(null) <stripped>

	// Swift methods
 }

 struct AppAnalytics.Snapshot: SnapshotType {

	// Properties
	let policy : SnapshotPolicy
	let levels : SnapshotLevel
	let eventMirrorStore : EventMirrorStore
 }

 enum AppAnalytics.EventProperty {

	// Properties
	case required  
	case optional  
 }

 enum AppAnalytics.UploadDropboxFileState {

	// Properties
	case closed : (try: Int)
	case noFile  
	case open  
 }

 class AppAnalytics.UploadDropboxFile : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ¶ // +0x0 (0x0)
	var eventCount : Int // +0x2140 (0x8)
	var byteSize : Int // +0x77f6a (0x8)
	var state : UploadDropboxFileState // +0x0 (0xa)
	var fileHandle : NSFileHandle? // +0x0 (0x8)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 class AppAnalytics.UploadDropboxFileManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxFileManagerType {
	// Swift methods
	0x60540  func <stripped> // method 
 }

 enum AppAnalytics.Errors {

	// Properties
	case failedToReadFile  
 }

 enum AppAnalytics.SnapshotPolicy {

	// Properties
	case now  
	case all  
 }

 struct AppAnalytics.EventMirrorProperty {

	// Properties
	let name : String // +0x0
	let eventProperty : EventPropertyType // +0x10
 }

 enum AppAnalytics.TrackerError {

	// Properties
	case eventMissingData : MissingData
	case noSession  
 }

 struct AppAnalytics.MissingData {

	// Properties
	let key : String // +0x0
	let type : Any.Type // +0x10
 }

 struct AppAnalytics.FoundData {

	// Properties
	let key : String // +0x0
	let data : Any // +0x10
 }

 class AppAnalytics.AppSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AppSessionManagerType,  AppSessionProviding {

	// Properties
	var $__lazy_storage_$_sessionGroupManager : SessionGroupManager
	let accessQueue : OS_dispatch_queue
	var _appSessionID : String?
	var _sessionManagers : WeakSessionManager

	// Swift methods
	0x64060  class func AppSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.WeakSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessionManager : SessionManager

	// Swift methods
 }

 class AppAnalytics.AtomicCounter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Int
	var lock : UnfairLock

	// Swift methods
 }

 enum AppAnalytics.ExtendedAttributeError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case posixError : Sü
	case noSuchFileOrDirectory  
 }

 enum AppAnalytics.EventSubmitResult {

	// Properties
	case success : ProcessEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : Ø£
 }

 enum AppAnalytics.EventSubmit {

	// Properties
	case actual : EventMirrorStore
	case bridged : BridgedEventMirrorStore
	case raw : BridgedRawEvent
 }

 class AppAnalytics.UploadBatchEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uploadManager : UploadManagerType // +0x10 (0x10)
	var currentSession : Session // +0x0 (0x0)
	let isEnabled : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaeb0000222f8 (0x6b0000222f8) in binary!
	0x68000000c  @objc UploadBatchEventProcessor.(null) <stripped>

	// Swift methods
 }

 enum AppAnalytics.Errors {

	// Properties
	case noCurrentSession  
 }

 class AppAnalytics.BridgedAppSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let appSessionManager : AppSessionManager // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a0400022328 (0x20400022328) in binary!
	0x69f8  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x8e8c000220c8 (0x68c000220c8) in binary!
	0x69d4  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x8e74000220a0 (0x674000220a0) in binary!
	0x8e68  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2ccffff1520  @objc BridgedAppSessionManager.(null) <stripped>
	0xffff15f8  @objc BridgedAppSessionManager. <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff19f0  @objc BridgedAppSessionManager.(null) <stripped>
 }

 struct AppAnalytics.FlushEvents {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.FlushProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessionManager : SessionManager
	let sessionEndFlushGroup : OS_dispatch_group
	let flushEvents : FlushEvents
	let flushInterval : Double
	var timer : OS_dispatch_source_timer?

	// Swift methods
	0x6c250  func <stripped> // getter 
	0x6c280  func <stripped> // setter 
	0x6c2d0  func <stripped> // modifyCoroutine 
	0x6bef0  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x6c510  func <stripped> // method 
	0x6c630  func <stripped> // method 
	0x6c740  func <stripped> // method 
	0x6c9e0  func <stripped> // method 
	0x6c9f0  func <stripped> // method 
	0x6ca00  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb39400022078 (0x39400022078) in binary!
	0x69a8  @objc BridgedSessionObserver.(null) <stripped>
WARNING: couldn't find address 0x8e3c00022140 (0x63c00022140) in binary!
	0x18000000c  @objc BridgedSessionObserver.(null) <stripped>
WARNING: couldn't find address 0xae1800022260 (0x61800022260) in binary!
	0x38000000c  @objc BridgedSessionObserver.(null) <stripped>

	// Swift methods
	0x6d690  func <stripped> // method 
 }

 class AppAnalytics.ProxyEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventProcessor : AAEventProcessorType
	let proxyEventProcessor : EventProcessorType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xae1800022260 (0x61800022260) in binary!
	0x38000000c  @objc ProxyEventProcessor.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.DocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ò
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ò
	let environmentName : String
	let fileManager : UploadDropboxFileManagerType
	let staticPathProvider : UploadDropboxPathProviderType

	// Swift methods
	0x6dcb0  func <stripped> // getter 
	0x6de00  func <stripped> // getter 
 }

 class AppAnalytics.BaseDocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURL : ¶
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugBaseURL : ¶

	// Swift methods
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ò
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURLProvider : ˇó
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugURLProvider : ˇó
	let fileManager : UploadDropboxFileManagerType

	// Swift methods
	0x6e250  func <stripped> // getter 
	0x6e280  func <stripped> // getter 
 }

 enum AppAnalytics.DataEventTrait {

	// Properties
	case onlyOnce  
	case unique  
	case discardWhenPresent  
 }

 class AppAnalytics.BridgedSessionData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let key : String
	let data : AADataEventType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78d800022028 (0xd800022028) in binary!
	0x6960  @objc BridgedSessionData.(null) <stripped>
WARNING: couldn't find address 0x8df4000220f8 (0x5f4000220f8) in binary!
	0x38000000c  @objc BridgedSessionData.(null) <stripped>
WARNING: couldn't find address 0xb08500021ff0 (0x8500021ff0) in binary!
	0x6930  @objc BridgedSessionData.(null) <stripped>

	// Swift methods
	0x6f280  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type
	let requirement : BridgedEventPropertyRequirement
	let dataKey : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb08500021ff0 (0x8500021ff0) in binary!
	0x6930  @objc BridgedEventProperty.(null) <stripped>
WARNING: couldn't find address 0x8dc4000220c8 (0x5c4000220c8) in binary!
	0x78000000c  @objc BridgedEventProperty.(null) <stripped>
WARNING: couldn't find address 0x6b1800021fa0 (0x31800021fa0) in binary!
	0xb2e0  @objc BridgedEventProperty.(null) <stripped>

	// Swift methods
	0x6f4f0  class func BridgedEventProperty.__allocating_init(dataType:requirement:) // init 
 }

 struct AppAnalytics.SequenceEntry {

	// Properties
	let name : String // +0x0
	let data : DataEventType // +0x10
	let kind : Kind // +0x38
 }

 enum AppAnalytics.Kind {

	// Properties
	case timedData  
	case eventData  
	case userDefined  
 }

 class AppAnalytics.BridgedSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let tracker : BridgedTracker
	let processorManager : BridgedProcessorManager
	let sessionManager : SessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x68ac00021f58 (0xac00021f58) in binary!
	0x68a0  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0x6894000221b8 (0x94000221b8) in binary!
	0x733c  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0x8d1c00022020 (0x51c00022020) in binary!
	0xd8000000c  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0xacf800022140 (0x4f800022140) in binary!
	0xb113  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0xb11c00021d38 (0x11c00021d38) in binary!
	0xb110  @objc BridgedSessionManager.(null) <stripped>

	// Swift methods
	0x71710  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b1800021fa0 (0x31800021fa0) in binary!
	0xb2e0  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x651400022430 (0x51400022430) in binary!
	0x8ac2  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0xb17c00021f58 (0x17c00021f58) in binary!
	0x68d0  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x8d6400022068 (0x56400022068) in binary!
	0x58000000c  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x68ac00021f58 (0xac00021f58) in binary!
	0x68a0  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x6894000221b8 (0x94000221b8) in binary!
	0x733c  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x8d1c00022020 (0x51c00022020) in binary!
	0xd8000000c  @objc BridgedAccessSessionManager.(null) <stripped>

	// Swift methods
 }

 enum AppAnalytics.Action {

	// Properties
	case tap : String
	case present : String
	case select : String
	case swipe  
	case deepLink  
	case notification  
 }

 struct AppAnalytics.ActionSequence {

	// Properties
	let actionEntries : Entry // +0x0
 }

 struct AppAnalytics.Entry {

	// Properties
	let action : Action // +0x0
	let identifier : String? // +0x18
 }

 struct AppAnalytics.SnapshotLevel {

	// Properties
	let name : String
	let entries : A
	let timers : Timer
 }

 struct AppAnalytics.TimedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startTimestamp : ®
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endTimestamp : ®
WARNING: couldn't find address 0x0 (0x0) in binary!
	let duration : Wù
 }

 enum AppAnalytics.CodingKeys {

	// Properties
	case startTimestamp  
	case endTimestamp  
	case duration  
 }

 struct AppAnalytics.BridgedDataEvent {

	// Properties
	let object : AADataEventType // +0x0
 }

 struct AppAnalytics.ProcessEvent: ProcessEventType {

	// Properties
	let name : String
	let json : JSON
	let version : String
	let groupName : String?
 }

 class AppAnalytics.ViewingSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67bc00021f40 (0x7bc00021f40) in binary!
	0x67b0  @objc ViewingSession.(null) <stripped>
WARNING: couldn't find address 0x8c4400021f48 (0x44400021f48) in binary!
	0x68000000c  @objc ViewingSession.(null) <stripped>
WARNING: couldn't find address 0xb14c000222d8 (0x14c000222d8) in binary!
	0x63a0  @objc ViewingSession.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb14c000222d8 (0x14c000222d8) in binary!
	0x63a0  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0xb15400021de0 (0x15400021de0) in binary!
	0x8c08  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0x675c00022080 (0x75c00022080) in binary!
	0x8bf0  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x413a4d4152  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0x73636974796c616e (0x174796c616e) in binary!
	0x17070413a54  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0x312d73636974796c (0x3636974796c) in binary!
	0x0  @objc ViewingSessionManager.(null) <stripped>
 }

 class AppAnalytics.Session : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let contentIdentifier : String
	var objects : NSHashTable<Swift.AnyObject>
	var onEndClosures : ViewingSession
	var viewingSession : ViewingSession

	// Swift methods
 }
