 protocol AppAnalytics.ExternalAnalyticsUploaderType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.EventType // 1 requirements
 {
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
 protocol AppAnalytics.ActiveSessionType // 3 requirements
 {
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
 protocol AppAnalytics.ResourceType // 5 requirements
 {
	// class getter
	// class getter
	// getter
	// getter
	// method
 }
 protocol AppAnalytics.TrackerDelegate // 10 requirements
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
 }
 protocol AppAnalytics.RestartTimerType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.LoggingEventProcessorFormatterType // 1 requirements
 {
	// method
 }
 protocol AppAnalytics.UploadDropboxType // 7 requirements
 {
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
 protocol AppAnalytics.UploadManagerType // 4 requirements
 {
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
 protocol AppAnalytics.UploadDropboxFileManagerType // 9 requirements
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
	let rawValue : UInt32
 }

 struct __C.os_unfair_lock_s {

	// Properties
	var _os_unfair_lock_opaque : UInt32
 }

 struct __C.z_stream_s {

	// Properties
	var next_in : UnsafeMutablePointer<UInt8>?
	var avail_in : UInt32
	var total_in : UInt
	var next_out : UnsafeMutablePointer<UInt8>?
	var avail_out : UInt32
	var total_out : UInt
	var msg : UnsafeMutablePointer<Int8>?
	var state : OpaquePointer?
	var zalloc : @convention(c) (_:_:_:)?
	var zfree : @convention(c) (_:_:)?
	var opaque : UnsafeMutableRawPointer?
	var data_type : Int32
	var adler : UInt
	var reserved : UInt
 }

 class AppAnalytics.ProcessorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessionProvider : weak SessionProviderType?
	let accessQueue : OS_dispatch_queue
	var eventProcessors : [EventProcessorType]

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
	let session : NSURLSession // +0x10 (0x8)

	// Swift methods
	0x45a0  class func ExternalAnalyticsUploader.__allocating_init() // init 
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
	let startDate : Date // +0xfeedfacf (0x0)
	let sessionData : [String : Any] // +0x3 (0x8)

	// ObjC -> Swift bridged methods
	0x4e40  @objc BridgedSession.identifier <stripped>
	0x4ec0  @objc BridgedSession.kind <stripped>
	0x4f00  @objc BridgedSession.name <stripped>
	0x4fd0  @objc BridgedSession.startDate <stripped>
	0x5070  @objc BridgedSession.sessionData <stripped>
	0x5140  @objc BridgedSession.init <stripped>
	0x5220  @objc BridgedSession..cxx_destruct <stripped>

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
	let eventProcessor : AAEventProcessorType // +0x10 (0x8)

	// Swift methods
 }

 struct AppAnalytics.BridgedEvent { }

 struct AppAnalytics.EventData {

	// Properties
	let eventID : String
	let eventTimestamp : Date
	let eventPath : String
	let sessionID : String
 }

 enum AppAnalytics.CodingKeys {

	// Properties
	case eventID  
	case eventTimestamp  
	case eventPath  
	case sessionID  
 }

 class AppAnalytics.BridgedRawDataEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let dictionary : [String : Any] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x76f0  @objc BridgedRawDataEvent.initWithName:dictionary: <stripped>
	0x78c0  @objc BridgedRawDataEvent.toDict <stripped>
	0x7970  @objc BridgedRawDataEvent.init <stripped>
	0x79f0  @objc BridgedRawDataEvent..cxx_destruct <stripped>

	// Swift methods
	0x7570  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool // +0x8 (0x1)
	var unique : Bool // +0x9 (0x1)
	var discardWhenPresent : Bool // +0xa (0x1)

	// ObjC -> Swift bridged methods
	0x7a50  @objc BridgedDataEventTraits.onlyOnce <stripped>
	0x7a90  @objc BridgedDataEventTraits.setOnlyOnce: <stripped>
	0x7b50  @objc BridgedDataEventTraits.unique <stripped>
	0x7b90  @objc BridgedDataEventTraits.setUnique: <stripped>
	0x7c50  @objc BridgedDataEventTraits.discardWhenPresent <stripped>
	0x7d00  @objc BridgedDataEventTraits.setDiscardWhenPresent: <stripped>
	0x7ff0  @objc BridgedDataEventTraits.init <stripped>

	// Swift methods
	0x7a70  func <stripped> // getter 
	0x7ab0  func <stripped> // setter 
	0x7b10  func <stripped> // modifyCoroutine 
	0x7b70  func <stripped> // getter 
	0x7bb0  func <stripped> // setter 
	0x7c10  func <stripped> // modifyCoroutine 
	0x7cb0  func <stripped> // getter 
	0x7d80  func <stripped> // setter 
	0x7ea0  func <stripped> // modifyCoroutine 
	0x80a0  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any? // +0x8 (0x20)

	// ObjC -> Swift bridged methods
	0x8a50  @objc JSON.initWithData: <stripped>
	0x8ac0  @objc JSON.objectForKeyedSubscript: <stripped>
	0x8b50  @objc JSON.objectAtIndexedSubscript: <stripped>
	0x8d90  @objc JSON.exists <stripped>
	0x8e40  @objc JSON.any <stripped>
	0x8ec0  @objc JSON.string <stripped>
	0x9140  @objc JSON.array <stripped>
	0x93d0  @objc JSON.object <stripped>
	0x9970  @objc JSON.number <stripped>
	0x9d10  @objc JSON.toDataWithOptions:: <stripped>
	0x9e10  @objc JSON.init <stripped>
	0x9e90  @objc JSON..cxx_destruct <stripped>

	// Swift methods
	0x8980  class func JSON.__allocating_init(_:) // init 
	0x8b40  func <stripped> // getter 
	0x8b90  func <stripped> // getter 
	0x8e00  func <stripped> // getter 
	0x8ea0  func <stripped> // getter 
	0x8f80  func <stripped> // getter 
	0x8ff0  func <stripped> // getter 
	0x9060  func <stripped> // getter 
	0x90d0  func <stripped> // getter 
	0x91c0  func <stripped> // getter 
	0x9460  func <stripped> // getter 
	0x99b0  func <stripped> // getter 
	0x9b20  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : [String : [EventMirrorProperty]] // +0x10 (0x8)

	// Swift methods
	0xbb10  func <stripped> // method 
 }

 struct AppAnalytics.SnapshotEvent {

	// Properties
	let isValid : Bool
	let entries : [SnapshotEntry]
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
	0xf550  @objc Contract.init <stripped>
	0xf5c0  @objc Contract..cxx_destruct <stripped>
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

	// ObjC -> Swift bridged methods
	0x12260  @objc Client.identifier <stripped>
	0x122a0  @objc Client.name <stripped>
	0x122e0  @objc Client.version <stripped>
	0x12390  @objc Client.build <stripped>
	0x123d0  @objc Client.fullVersion <stripped>
	0x125d0  @objc Client.initWithBundle: <stripped>
	0x127f0  @objc Client.initWithIdentifier:name:version:build: <stripped>
	0x129b0  @objc Client.init <stripped>
	0x12a30  @objc Client..cxx_destruct <stripped>

	// Swift methods
	0x12430  func <stripped> // getter 
	0x12610  class func Client.__allocating_init(identifier:name:version:build:) // init 
 }

 class AppAnalytics.SHA1Base64SigningService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SigningServiceType {

	// Properties
	let signer : SignerType // +0x10 (0x28)

	// Swift methods
 }

 class AppAnalytics.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var unfairLock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)
	let options : os_unfair_lock_options_t // +0x18 (0x4)

	// Swift methods
 }

 class AppAnalytics.SessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let tracker : Tracker
	let processorManager : ProcessorManager
	let accessQueue : OS_dispatch_queue
	var suspendCount : AtomicCounter
	var state : SessionState
	var dataStacks : [String : DataEventStackType]
	var observers : [SessionObserver]
	let options : Options
	let flushProcessor : FlushProcessor

	// Swift methods
	0x15b60  class func SessionManager.__allocating_init(accessQueue:options:flushProcessor:) // init 
 }

 struct AppAnalytics.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.AccessSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessionManager : SessionManager // +0x10 (0x8)

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
	case json : (writingOptions: NSJSONWritingOptions)
	case custom : LoggingEventProcessorFormatterType
	case default  
 }

 class AppAnalytics.BridgedProcessEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let version : String // +0x18 (0x10)
	let json : JSON // +0x28 (0x8)
	let groupName : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x20aa0  @objc BridgedProcessEvent.name <stripped>
	0x20ae0  @objc BridgedProcessEvent.version <stripped>
	0x20b90  @objc BridgedProcessEvent.json <stripped>
	0x20bd0  @objc BridgedProcessEvent.groupName <stripped>
	0x20cb0  @objc BridgedProcessEvent.init <stripped>
	0x20d60  @objc BridgedProcessEvent..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x21100  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint: <stripped>
	0x213a0  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint:config: <stripped>
	0x214d0  @objc BridgedUploadBatchEventProcessor.processEvent: <stripped>
	0x21570  @objc BridgedUploadBatchEventProcessor.init <stripped>
	0x215f0  @objc BridgedUploadBatchEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x20f10  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x211f0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
 }

 class AppAnalytics.ActiveSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ActiveSessionType {

	// Properties
	let identifier : String // +0x10 (0x10)
	let kind : Session.Kind // +0x20 (0x10)
	let startDate : Date // +0x51 (0x0)

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
	var proxyEventProcessor : EventProcessorType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x22090  @objc BridgingLoggingEventProcessor.initWithFormat: <stripped>
	0x22100  @objc BridgingLoggingEventProcessor.processEvent: <stripped>
	0x221a0  @objc BridgingLoggingEventProcessor.init <stripped>
	0x22220  @objc BridgingLoggingEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x21cc0  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
 }

 class AppAnalytics.UploadService {
 enum AppAnalytics.ProcessError {

	// Properties
	case jsonError  
 }

 class AppAnalytics.BridgedAccessTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessTracker : AccessTracker // +0x8 (0x8)
	let eventMirrorStore : BridgedEventMirrorStore // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x25fc0  @objc BridgedAccessTracker.init <stripped>
	0x26070  @objc BridgedAccessTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.SessionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject? // +0x10 (0x8)
	var sessionChangeTracker : AccessTracker // +0x18 (0x8)
	let block : (_:_:) // +0x20 (0x10)

	// Swift methods
 }

 class AppAnalytics.DelayedToken : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let block : () // +0x8 (0x10)
	var sealed : Bool // +0x18 (0x1)

	// ObjC -> Swift bridged methods
	0x283e0  @objc DelayedToken.commit <stripped>
	0x28490  @objc DelayedToken.init <stripped>
	0x28540  @objc DelayedToken..cxx_destruct <stripped>

	// Swift methods
	0x28390  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType // +0x10 (0x28)

	// Swift methods
	0x285a0  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
 }

 enum AppAnalytics.GZIPError {

	// Properties
	case failed : (status: Int32)
 }

 enum AppAnalytics.ExternalResult {

	// Properties
	case success : (value: A)
	case failed : (error: Error)
 }

 struct AppAnalytics.AnyDataEventEntry {

	// Properties
	let key : String // +0x0
	let data : DataEventType // +0x10
	let traits : [DataEventTrait] // +0x38
	let file : String // +0x40
	let line : Int // +0x50
 }

 struct AppAnalytics.Entry {

	// Properties
	let data : A1
	let traits : [DataEventTrait]
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
	let processorManager : ProcessorManager // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x2c130  @objc BridgedProcessorManager.init <stripped>
	0x2c1e0  @objc BridgedProcessorManager..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedEventData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let eventID : String // +0x8 (0x10)
	let eventDate : Date // +0x6100085 (0x0)
	let eventPath : String // +0x19 (0x10)
	let sessionID : String // +0x45545f5f (0x10)

	// ObjC -> Swift bridged methods
	0x2ca30  @objc BridgedEventData.eventID <stripped>
	0x2ca70  @objc BridgedEventData.eventDate <stripped>
	0x2cb10  @objc BridgedEventData.eventPath <stripped>
	0x2cb50  @objc BridgedEventData.sessionID <stripped>
	0x2cca0  @objc BridgedEventData.toDict <stripped>
	0x2cd40  @objc BridgedEventData.init <stripped>
	0x2cde0  @objc BridgedEventData..cxx_destruct <stripped>

	// Swift methods
	0x2cc50  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let identifier : String? // +0x18 (0x10)
	let tracker : Tracker // +0x28 (0x8)
	let eventMirrorStore : BridgedEventMirrorStore // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x2cf30  @objc BridgedTracker.name <stripped>
	0x2cfb0  @objc BridgedTracker.identifier <stripped>
	0x2d1c0  @objc BridgedTracker.init <stripped>
	0x2d270  @objc BridgedTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let startDate : Date // +0x0 (0x0)
	let endDate : Date // +0x0 (0x0)
	let duration : Double // +0x8d000 (0x8)

	// ObjC -> Swift bridged methods
	0x330f0  @objc BridgedTimedData.startDate <stripped>
	0x33130  @objc BridgedTimedData.endDate <stripped>
	0x33220  @objc BridgedTimedData.duration <stripped>
	0x33300  @objc BridgedTimedData.toDict <stripped>
	0x333a0  @objc BridgedTimedData.init <stripped>
	0x33440  @objc BridgedTimedData..cxx_destruct <stripped>

	// Swift methods
	0x332b0  func <stripped> // method 
 }

 struct AppAnalytics.Session {

	// Properties
	let identifier : String
	let kind : Kind
	let startDate : Date
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
	var cache : [String : [EventMirrorProperty]] // +0x10 (0x8)

	// Swift methods
	0x34170  func <stripped> // method 
 }

 struct AppAnalytics.SnapshotEntry {

	// Properties
	let name : String // +0x0
	let dataEntry : AnyDataEventEntry // +0x10
 }

 class AppAnalytics.BridgedRawEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let properties : [String : BridgedRawEventProperty] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x36300  @objc BridgedRawEvent.initWithName:properties: <stripped>
	0x36760  @objc BridgedRawEvent.init <stripped>
	0x367e0  @objc BridgedRawEvent..cxx_destruct <stripped>

	// Swift methods
	0x36180  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
 }

 enum AppAnalytics.PushEvent {

	// Properties
	case actual : A
	case bridged : (A, String)
 }

 class AppAnalytics.Endpoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let url : URL // +0x0 (0x0)
	let name : String // +0x8d000 (0x10)
	let sharedContainerIdentifier : String? // +0x5 (0x10)

	// ObjC -> Swift bridged methods
	0x38250  @objc Endpoint.url <stripped>
	0x382f0  @objc Endpoint.name <stripped>
	0x38370  @objc Endpoint.sharedContainerIdentifier <stripped>
	0x38640  @objc Endpoint.initWithURL:name:sharedContainerIdentifier: <stripped>
	0x38800  @objc Endpoint.init <stripped>
	0x38870  @objc Endpoint..cxx_destruct <stripped>

	// Swift methods
	0x38400  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
 }

 enum AppAnalytics.UploadBatchQueueKey {

	// Properties
	case session : (sessionID: String)
	case group : (sessionID: String, groupID: String)
 }

 enum AppAnalytics.SubmitResult {

	// Properties
	case success : A
	case failed : Error
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
	var dataStacks : [String : DataEventStackType]
	var parentTracker : Tracker
	var groupStack : [Group]
	var currentActionEntries : [Action.Entry]
	let previousActionSequence : ActionSequence
	var willSubmitObservers : TrackerWillSubmitObserver

	// Swift methods
	0x3e720  func <stripped> // method 
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
	let block : (_:) // +0x8
 }

 struct AppAnalytics.Timer {

	// Properties
	let startTime : Date
 }

 enum AppAnalytics.TrackerName {

	// Properties
	case path : String
	case hidden  
 }

 struct AppAnalytics.RestartTimer: RestartTimerType {

	// Properties
	let eventSubmit : EventSubmit<A>
 }

 struct AppAnalytics.JSONLoggingEventProcessorFormatter: LoggingEventProcessorFormatterType {

	// Properties
	let writingOptions : NSJSONWritingOptions // +0x0
	let fallbackFormatter : LoggingEventProcessorFormatterType // +0x8
 }

 struct AppAnalytics.DefaultLoggingEventProcessorFormatter: LoggingEventProcessorFormatterType { }

 class AppAnalytics.UploadBatchEventConfig : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let maxEventsPerSessionBatch : Int // +0x8 (0x8)
	let maxByteSizePerSessionBatch : Int // +0x10 (0x8)
	let debuggingEnabled : Bool // +0x18 (0x1)
	let maxUploadTries : Int // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x50320  @objc UploadBatchEventConfig.maxEventsPerSessionBatch <stripped>
	0x50360  @objc UploadBatchEventConfig.maxByteSizePerSessionBatch <stripped>
	0x503a0  @objc UploadBatchEventConfig.debuggingEnabled <stripped>
	0x503e0  @objc UploadBatchEventConfig.maxUploadTries <stripped>
	0x50570  @objc UploadBatchEventConfig.initWithBatchSize:enableDebugging: <stripped>
	0x506c0  @objc UploadBatchEventConfig.withMaxEventsPerSessionBatch: <stripped>
	0x50840  @objc UploadBatchEventConfig.withMaxByteSizePerSessionBatch: <stripped>
	0x509c0  @objc UploadBatchEventConfig.withDebuggingEnabled: <stripped>
	0x50b70  @objc UploadBatchEventConfig.withMaxUploadTries: <stripped>
	0x50c80  @objc UploadBatchEventConfig.init <stripped>
	0x50d00  @objc UploadBatchEventConfig..cxx_destruct <stripped>

	// Swift methods
	0x50420  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
 }

 class AppAnalytics.Lazy {
 struct AppAnalytics.LazyOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.BridgedRawEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataName : String // +0x8 (0x10)
	let requirement : BridgedEventPropertyRequirement // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x51e10  @objc BridgedRawEventProperty.initWithDataName:requirement: <stripped>
	0x51ee0  @objc BridgedRawEventProperty.init <stripped>
	0x51f60  @objc BridgedRawEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x51ce0  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
 }

 class AppAnalytics.UploadDropbox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxType {

	// Properties
	let config : UploadBatchEventConfig // +0x10 (0x8)
	let debugging : Debugging // +0x18 (0x8)
	var files : [String : UploadDropboxFile] // +0x20 (0x8)
	let pathProvider : UploadDropboxPathProviderType // +0x28 (0x28)
	let fileManager : UploadDropboxFileManagerType // +0x50 (0x28)
	var lock : UnfairLock // +0x78 (0x8)

	// Swift methods
 }

 enum AppAnalytics.Debugging {

	// Properties
	case enabled : (baseURL: URL)
	case none  
 }

 enum AppAnalytics.Errors {

	// Properties
	case emptyBatchFile : (String, data: Data)
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
	let service : UploadServiceType // +0x10 (0x10)
	let dropbox : UploadDropboxType // +0x20 (0x28)
	var batchIdentifiers : [UploadBatchQueueKey : String] // +0x48 (0x8)
	var flushQueue : OS_dispatch_queue // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x5bb30  @objc UploadManager.flushWithCallbackQueue:completion: <stripped>

	// Swift methods
	0x59fc0  func <stripped> // method 
	0x5a2a0  func <stripped> // method 
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let startDate : Date // +0x14 (0x0)

	// ObjC -> Swift bridged methods
	0x5cce0  @objc Group.name <stripped>
	0x5cd60  @objc Group.startDate <stripped>
	0x5ce50  @objc Group.init <stripped>
	0x5cef0  @objc Group..cxx_destruct <stripped>

	// Swift methods
 }

 struct AppAnalytics.Snapshot: SnapshotType {

	// Properties
	let policy : SnapshotPolicy
	let levels : [SnapshotLevel<A>]
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
	let url : URL // +0x65745f5f (0x0)
	var eventCount : Int // +0x0 (0x8)
	var byteSize : Int // +0x45545f5f (0x8)
	var state : UploadDropboxFileState // +0x0 (0xa)
	var fileHandle : NSFileHandle? // +0x0 (0x8)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 class AppAnalytics.UploadDropboxFileManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxFileManagerType {
	// Swift methods
	0x609c0  func <stripped> // method 
	0x60b30  func <stripped> // method 
	0x60c70  func <stripped> // method 
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

 class AppAnalytics.AtomicCounter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Int // +0x10 (0x8)
	var lock : UnfairLock // +0x18 (0x8)

	// Swift methods
 }

 enum AppAnalytics.ExtendedAttributeError {

	// Properties
	case posixError : (errno: Int32, message: String)
	case noSuchFileOrDirectory  
 }

 enum AppAnalytics.EventSubmitResult {

	// Properties
	case success : ProcessEvent<A>
	case failed : Error
 }

 enum AppAnalytics.EventSubmit {

	// Properties
	case actual : (A.Type, EventMirrorStore)
	case bridged : (AAEventType.Type, BridgedEventMirrorStore)
	case raw : BridgedRawEvent
 }

 class AppAnalytics.UploadBatchEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uploadManager : UploadManagerType // +0x10 (0x10)
	var currentSession : Session? // +0x0 (0x0)
	let isEnabled : Bool // +0x0 (0x1)

	// Swift methods
 }

 enum AppAnalytics.Errors {

	// Properties
	case noCurrentSession  
 }

 struct AppAnalytics.FlushEvents {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppAnalytics.FlushProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessionManager : weak SessionManager? // +0x10 (0x8)
	let sessionEndFlushGroup : OS_dispatch_group // +0x18 (0x8)
	let flushEvents : FlushEvents // +0x20 (0x8)
	let flushInterval : Double // +0x28 (0x8)
	var timer : OS_dispatch_source_timer? // +0x30 (0x8)

	// Swift methods
	0x69b90  func <stripped> // getter 
	0x69bc0  func <stripped> // setter 
	0x69c10  func <stripped> // modifyCoroutine 
	0x69720  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x69e70  func <stripped> // method 
	0x69fe0  func <stripped> // method 
	0x6a140  func <stripped> // method 
	0x6a440  func <stripped> // method 
	0x6a450  func <stripped> // method 
	0x6a460  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x6b170  @objc BridgedSessionObserver.disposeOnObject: <stripped>
	0x6b1e0  @objc BridgedSessionObserver.init <stripped>
	0x6b290  @objc BridgedSessionObserver..cxx_destruct <stripped>

	// Swift methods
	0x6b150  func <stripped> // method 
 }

 class AppAnalytics.ProxyEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventProcessor : AAEventProcessorType // +0x10 (0x8)
	let proxyEventProcessor : EventProcessorType // +0x18 (0x10)

	// Swift methods
 }

 class AppAnalytics.DocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
	var $__lazy_storage_$_baseURL : URL?
	var $__lazy_storage_$_debugBaseURL : URL?
	let environmentName : String
	let fileManager : UploadDropboxFileManagerType
	let staticPathProvider : UploadDropboxPathProviderType

	// Swift methods
	0x6b7a0  func <stripped> // getter 
	0x6b930  func <stripped> // getter 
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
	var $__lazy_storage_$_baseURL : URL?
	var $__lazy_storage_$_debugBaseURL : URL?
	let baseURLProvider : ()
	let debugURLProvider : ()
	let fileManager : UploadDropboxFileManagerType

	// Swift methods
	0x6be40  func <stripped> // getter 
	0x6be60  func <stripped> // getter 
 }

 enum AppAnalytics.DataEventTrait {

	// Properties
	case onlyOnce  
	case unique  
	case discardWhenPresent  
 }

 class AppAnalytics.BridgedSessionData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let key : String // +0x8 (0x10)
	let data : AADataEventType // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x6d060  @objc BridgedSessionData.initWithKey:data: <stripped>
	0x6d180  @objc BridgedSessionData.init <stripped>
	0x6d200  @objc BridgedSessionData..cxx_destruct <stripped>

	// Swift methods
	0x6cee0  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type // +0x8 (0x8)
	let requirement : BridgedEventPropertyRequirement // +0x10 (0x8)
	let dataKey : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x6d3f0  @objc BridgedEventProperty.initWithDataType:requirement: <stripped>
	0x6d500  @objc BridgedEventProperty.init <stripped>
	0x6d580  @objc BridgedEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x6d260  class func BridgedEventProperty.__allocating_init(dataType:requirement:) // init 
 }

 struct AppAnalytics.SequenceEntry {

	// Properties
	let name : String // +0x0
	let data : DataEventType // +0x10
 }

 class AppAnalytics.BridgedSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let tracker : BridgedTracker
	let processorManager : BridgedProcessorManager
	let sessionManager : SessionManager

	// ObjC -> Swift bridged methods
	0x6dc40  @objc BridgedSessionManager.tracker <stripped>
	0x6dc80  @objc BridgedSessionManager.processorManager <stripped>
	0x6dfc0  @objc BridgedSessionManager.init <stripped>
	0x6e070  @objc BridgedSessionManager.initWithAccessQueue: <stripped>
	0x6e0d0  @objc BridgedSessionManager..cxx_destruct <stripped>

	// Swift methods
	0x6dfe0  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
	0x6f200  @objc BridgedAccessSessionManager.isActive <stripped>
	0x6f470  @objc BridgedAccessSessionManager.pushSessionData: <stripped>
	0x6f500  @objc BridgedAccessSessionManager.pushSessionData:traits: <stripped>
	0x6f5e0  @objc BridgedAccessSessionManager.pushSessionData:submitEventQueues: <stripped>
	0x6f680  @objc BridgedAccessSessionManager.pushSessionData:traits:submitEventQueues: <stripped>
	0x6f730  @objc BridgedAccessSessionManager.init <stripped>
	0x6f7c0  @objc BridgedAccessSessionManager..cxx_destruct <stripped>

	// Swift methods
 }

 enum AppAnalytics.Action {

	// Properties
	case tap : String
	case present : String
	case select : String
	case swipe  
	case deepLink  
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
	let timers : [String : Tracker.Timer]
 }

 struct AppAnalytics.TimedData {

	// Properties
	let startTimestamp : Date
	let endTimestamp : Date
	let duration : Int64
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
	0x736d0  @objc ViewingSession.identifier <stripped>
	0x737a0  @objc ViewingSession.init <stripped>
	0x73810  @objc ViewingSession..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
	0x73db0  @objc ViewingSessionManager.viewingSessionForContentIdentifier:object: <stripped>
	0x73e60  @objc ViewingSessionManager.removeObject:forContentIdentifier: <stripped>
	0x73f00  @objc ViewingSessionManager.endViewingSessionForContentIdentifier: <stripped>
	0x740a0  @objc ViewingSessionManager.endActiveViewingSession <stripped>
	0x74360  @objc ViewingSessionManager.init <stripped>
	0x74450  @objc ViewingSessionManager..cxx_destruct <stripped>
 }

 class AppAnalytics.Session : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let contentIdentifier : String
	var objects : NSHashTable<Swift.AnyObject>
	var viewingSession : ViewingSession

	// Swift methods
 }
