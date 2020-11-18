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
	0x4a90  class func ExternalAnalyticsUploader.__allocating_init() // init 
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
	0x5330  @objc BridgedSession.identifier <stripped>
	0x53b0  @objc BridgedSession.kind <stripped>
	0x53f0  @objc BridgedSession.name <stripped>
	0x54c0  @objc BridgedSession.startDate <stripped>
	0x5560  @objc BridgedSession.sessionData <stripped>
	0x5630  @objc BridgedSession.init <stripped>
	0x5710  @objc BridgedSession..cxx_destruct <stripped>

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
	0x7be0  @objc BridgedRawDataEvent.initWithName:dictionary: <stripped>
	0x7db0  @objc BridgedRawDataEvent.toDict <stripped>
	0x7e60  @objc BridgedRawDataEvent.init <stripped>
	0x7ee0  @objc BridgedRawDataEvent..cxx_destruct <stripped>

	// Swift methods
	0x7a60  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool // +0x8 (0x1)
	var unique : Bool // +0x9 (0x1)
	var discardWhenPresent : Bool // +0xa (0x1)

	// ObjC -> Swift bridged methods
	0x7f40  @objc BridgedDataEventTraits.onlyOnce <stripped>
	0x7f80  @objc BridgedDataEventTraits.setOnlyOnce: <stripped>
	0x8040  @objc BridgedDataEventTraits.unique <stripped>
	0x8080  @objc BridgedDataEventTraits.setUnique: <stripped>
	0x8140  @objc BridgedDataEventTraits.discardWhenPresent <stripped>
	0x81f0  @objc BridgedDataEventTraits.setDiscardWhenPresent: <stripped>
	0x84e0  @objc BridgedDataEventTraits.init <stripped>

	// Swift methods
	0x7f60  func <stripped> // getter 
	0x7fa0  func <stripped> // setter 
	0x8000  func <stripped> // modifyCoroutine 
	0x8060  func <stripped> // getter 
	0x80a0  func <stripped> // setter 
	0x8100  func <stripped> // modifyCoroutine 
	0x81a0  func <stripped> // getter 
	0x8270  func <stripped> // setter 
	0x8390  func <stripped> // modifyCoroutine 
	0x8590  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any? // +0x8 (0x20)

	// ObjC -> Swift bridged methods
	0x8f40  @objc JSON.initWithData: <stripped>
	0x8fb0  @objc JSON.objectForKeyedSubscript: <stripped>
	0x9040  @objc JSON.objectAtIndexedSubscript: <stripped>
	0x9280  @objc JSON.exists <stripped>
	0x9330  @objc JSON.any <stripped>
	0x93b0  @objc JSON.string <stripped>
	0x9630  @objc JSON.array <stripped>
	0x98c0  @objc JSON.object <stripped>
	0x9e60  @objc JSON.number <stripped>
	0xa200  @objc JSON.toDataWithOptions:: <stripped>
	0xa300  @objc JSON.init <stripped>
	0xa380  @objc JSON..cxx_destruct <stripped>

	// Swift methods
	0x8e70  class func JSON.__allocating_init(_:) // init 
	0x9030  func <stripped> // getter 
	0x9080  func <stripped> // getter 
	0x92f0  func <stripped> // getter 
	0x9390  func <stripped> // getter 
	0x9470  func <stripped> // getter 
	0x94e0  func <stripped> // getter 
	0x9550  func <stripped> // getter 
	0x95c0  func <stripped> // getter 
	0x96b0  func <stripped> // getter 
	0x9950  func <stripped> // getter 
	0x9ea0  func <stripped> // getter 
	0xa010  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : [String : [EventMirrorProperty]] // +0x10 (0x8)

	// Swift methods
	0xc000  func <stripped> // method 
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
	0xfa40  @objc Contract.init <stripped>
	0xfab0  @objc Contract..cxx_destruct <stripped>
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
	0x12750  @objc Client.identifier <stripped>
	0x12790  @objc Client.name <stripped>
	0x127d0  @objc Client.version <stripped>
	0x12880  @objc Client.build <stripped>
	0x128c0  @objc Client.fullVersion <stripped>
	0x12ac0  @objc Client.initWithBundle: <stripped>
	0x12ce0  @objc Client.initWithIdentifier:name:version:build: <stripped>
	0x12ea0  @objc Client.init <stripped>
	0x12f20  @objc Client..cxx_destruct <stripped>

	// Swift methods
	0x12920  func <stripped> // getter 
	0x12b00  class func Client.__allocating_init(identifier:name:version:build:) // init 
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
	0x16050  class func SessionManager.__allocating_init(accessQueue:options:flushProcessor:) // init 
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
	0x20f90  @objc BridgedProcessEvent.name <stripped>
	0x20fd0  @objc BridgedProcessEvent.version <stripped>
	0x21080  @objc BridgedProcessEvent.json <stripped>
	0x210c0  @objc BridgedProcessEvent.groupName <stripped>
	0x211a0  @objc BridgedProcessEvent.init <stripped>
	0x21250  @objc BridgedProcessEvent..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x215f0  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint: <stripped>
	0x21890  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint:config: <stripped>
	0x219c0  @objc BridgedUploadBatchEventProcessor.processEvent: <stripped>
	0x21a60  @objc BridgedUploadBatchEventProcessor.init <stripped>
	0x21ae0  @objc BridgedUploadBatchEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x21400  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x216e0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
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
	0x22580  @objc BridgingLoggingEventProcessor.initWithFormat: <stripped>
	0x225f0  @objc BridgingLoggingEventProcessor.processEvent: <stripped>
	0x22690  @objc BridgingLoggingEventProcessor.init <stripped>
	0x22710  @objc BridgingLoggingEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x221b0  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
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
	0x264b0  @objc BridgedAccessTracker.init <stripped>
	0x26560  @objc BridgedAccessTracker..cxx_destruct <stripped>

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
	0x288d0  @objc DelayedToken.commit <stripped>
	0x28980  @objc DelayedToken.init <stripped>
	0x28a30  @objc DelayedToken..cxx_destruct <stripped>

	// Swift methods
	0x28880  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType // +0x10 (0x28)

	// Swift methods
	0x28a90  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
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
	0x2c620  @objc BridgedProcessorManager.init <stripped>
	0x2c6d0  @objc BridgedProcessorManager..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedEventData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let eventID : String // +0x8 (0x10)
	let eventDate : Date // +0x6100085 (0x0)
	let eventPath : String // +0x19 (0x10)
	let sessionID : String // +0x45545f5f (0x10)

	// ObjC -> Swift bridged methods
	0x2cf20  @objc BridgedEventData.eventID <stripped>
	0x2cf60  @objc BridgedEventData.eventDate <stripped>
	0x2d000  @objc BridgedEventData.eventPath <stripped>
	0x2d040  @objc BridgedEventData.sessionID <stripped>
	0x2d190  @objc BridgedEventData.toDict <stripped>
	0x2d230  @objc BridgedEventData.init <stripped>
	0x2d2d0  @objc BridgedEventData..cxx_destruct <stripped>

	// Swift methods
	0x2d140  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let identifier : String? // +0x18 (0x10)
	let tracker : Tracker // +0x28 (0x8)
	let eventMirrorStore : BridgedEventMirrorStore // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x2d420  @objc BridgedTracker.name <stripped>
	0x2d4a0  @objc BridgedTracker.identifier <stripped>
	0x2d6b0  @objc BridgedTracker.init <stripped>
	0x2d760  @objc BridgedTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let startDate : Date // +0x0 (0x0)
	let endDate : Date // +0x0 (0x0)
	let duration : Double // +0x8d000 (0x8)

	// ObjC -> Swift bridged methods
	0x335e0  @objc BridgedTimedData.startDate <stripped>
	0x33620  @objc BridgedTimedData.endDate <stripped>
	0x33710  @objc BridgedTimedData.duration <stripped>
	0x337f0  @objc BridgedTimedData.toDict <stripped>
	0x33890  @objc BridgedTimedData.init <stripped>
	0x33930  @objc BridgedTimedData..cxx_destruct <stripped>

	// Swift methods
	0x337a0  func <stripped> // method 
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
	0x34660  func <stripped> // method 
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
	0x367f0  @objc BridgedRawEvent.initWithName:properties: <stripped>
	0x36c50  @objc BridgedRawEvent.init <stripped>
	0x36cd0  @objc BridgedRawEvent..cxx_destruct <stripped>

	// Swift methods
	0x36670  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
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
	0x38740  @objc Endpoint.url <stripped>
	0x387e0  @objc Endpoint.name <stripped>
	0x38860  @objc Endpoint.sharedContainerIdentifier <stripped>
	0x38b30  @objc Endpoint.initWithURL:name:sharedContainerIdentifier: <stripped>
	0x38cf0  @objc Endpoint.init <stripped>
	0x38d60  @objc Endpoint..cxx_destruct <stripped>

	// Swift methods
	0x388f0  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
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
	0x3ec10  func <stripped> // method 
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
	0x50810  @objc UploadBatchEventConfig.maxEventsPerSessionBatch <stripped>
	0x50850  @objc UploadBatchEventConfig.maxByteSizePerSessionBatch <stripped>
	0x50890  @objc UploadBatchEventConfig.debuggingEnabled <stripped>
	0x508d0  @objc UploadBatchEventConfig.maxUploadTries <stripped>
	0x50a60  @objc UploadBatchEventConfig.initWithBatchSize:enableDebugging: <stripped>
	0x50bb0  @objc UploadBatchEventConfig.withMaxEventsPerSessionBatch: <stripped>
	0x50d30  @objc UploadBatchEventConfig.withMaxByteSizePerSessionBatch: <stripped>
	0x50eb0  @objc UploadBatchEventConfig.withDebuggingEnabled: <stripped>
	0x51060  @objc UploadBatchEventConfig.withMaxUploadTries: <stripped>
	0x51170  @objc UploadBatchEventConfig.init <stripped>
	0x511f0  @objc UploadBatchEventConfig..cxx_destruct <stripped>

	// Swift methods
	0x50910  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
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
	0x52300  @objc BridgedRawEventProperty.initWithDataName:requirement: <stripped>
	0x523d0  @objc BridgedRawEventProperty.init <stripped>
	0x52450  @objc BridgedRawEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x521d0  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
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
	0x5c020  @objc UploadManager.flushWithCallbackQueue:completion: <stripped>

	// Swift methods
	0x5a4b0  func <stripped> // method 
	0x5a790  func <stripped> // method 
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let startDate : Date // +0x14 (0x0)

	// ObjC -> Swift bridged methods
	0x5d1d0  @objc Group.name <stripped>
	0x5d250  @objc Group.startDate <stripped>
	0x5d340  @objc Group.init <stripped>
	0x5d3e0  @objc Group..cxx_destruct <stripped>

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
	0x60eb0  func <stripped> // method 
	0x61020  func <stripped> // method 
	0x61160  func <stripped> // method 
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
	0x6a080  func <stripped> // getter 
	0x6a0b0  func <stripped> // setter 
	0x6a100  func <stripped> // modifyCoroutine 
	0x69c10  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x6a360  func <stripped> // method 
	0x6a4d0  func <stripped> // method 
	0x6a630  func <stripped> // method 
	0x6a930  func <stripped> // method 
	0x6a940  func <stripped> // method 
	0x6a950  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x6b660  @objc BridgedSessionObserver.disposeOnObject: <stripped>
	0x6b6d0  @objc BridgedSessionObserver.init <stripped>
	0x6b780  @objc BridgedSessionObserver..cxx_destruct <stripped>

	// Swift methods
	0x6b640  func <stripped> // method 
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
	0x6bc90  func <stripped> // getter 
	0x6be20  func <stripped> // getter 
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
	var $__lazy_storage_$_baseURL : URL?
	var $__lazy_storage_$_debugBaseURL : URL?
	let baseURLProvider : ()
	let debugURLProvider : ()
	let fileManager : UploadDropboxFileManagerType

	// Swift methods
	0x6c330  func <stripped> // getter 
	0x6c350  func <stripped> // getter 
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
	0x6d550  @objc BridgedSessionData.initWithKey:data: <stripped>
	0x6d670  @objc BridgedSessionData.init <stripped>
	0x6d6f0  @objc BridgedSessionData..cxx_destruct <stripped>

	// Swift methods
	0x6d3d0  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type // +0x8 (0x8)
	let requirement : BridgedEventPropertyRequirement // +0x10 (0x8)
	let dataKey : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x6d8e0  @objc BridgedEventProperty.initWithDataType:requirement: <stripped>
	0x6d9f0  @objc BridgedEventProperty.init <stripped>
	0x6da70  @objc BridgedEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x6d750  class func BridgedEventProperty.__allocating_init(dataType:requirement:) // init 
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
	0x6e130  @objc BridgedSessionManager.tracker <stripped>
	0x6e170  @objc BridgedSessionManager.processorManager <stripped>
	0x6e4b0  @objc BridgedSessionManager.init <stripped>
	0x6e560  @objc BridgedSessionManager.initWithAccessQueue: <stripped>
	0x6e5c0  @objc BridgedSessionManager..cxx_destruct <stripped>

	// Swift methods
	0x6e4d0  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
	0x6f6f0  @objc BridgedAccessSessionManager.isActive <stripped>
	0x6f960  @objc BridgedAccessSessionManager.pushSessionData: <stripped>
	0x6f9f0  @objc BridgedAccessSessionManager.pushSessionData:traits: <stripped>
	0x6fad0  @objc BridgedAccessSessionManager.pushSessionData:submitEventQueues: <stripped>
	0x6fb70  @objc BridgedAccessSessionManager.pushSessionData:traits:submitEventQueues: <stripped>
	0x6fc20  @objc BridgedAccessSessionManager.init <stripped>
	0x6fcb0  @objc BridgedAccessSessionManager..cxx_destruct <stripped>

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
	0x73bc0  @objc ViewingSession.identifier <stripped>
	0x73c90  @objc ViewingSession.init <stripped>
	0x73d00  @objc ViewingSession..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
	0x742a0  @objc ViewingSessionManager.viewingSessionForContentIdentifier:object: <stripped>
	0x74350  @objc ViewingSessionManager.removeObject:forContentIdentifier: <stripped>
	0x743f0  @objc ViewingSessionManager.endViewingSessionForContentIdentifier: <stripped>
	0x74590  @objc ViewingSessionManager.endActiveViewingSession <stripped>
	0x74850  @objc ViewingSessionManager.init <stripped>
	0x74940  @objc ViewingSessionManager..cxx_destruct <stripped>
 }

 class AppAnalytics.Session : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let contentIdentifier : String
	var objects : NSHashTable<Swift.AnyObject>
	var viewingSession : ViewingSession

	// Swift methods
 }
