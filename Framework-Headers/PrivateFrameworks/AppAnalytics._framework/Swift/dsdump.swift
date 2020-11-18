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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : í®
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : í®
 }

 struct __C.z_stream_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_in :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_in : í®
	var total_in : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_out :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_out : í®
	var total_out : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var msg :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : q­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var zalloc :  first-element-marker 
	var zfree : @convention(c) (_:_:)?
	var opaque : UnsafeMutableRawPointer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data_type : ñ­
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
	let session : NSURLSession // +0x10 (0x8)

	// Swift methods
	0x5450  class func ExternalAnalyticsUploader.__allocating_init() // init 
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
	let startDate : Ù¥ // +0xfeedfacf (0x0)
	let sessionData : [String : Any] // +0x3 (0x8)

	// ObjC -> Swift bridged methods
	0x5cf0  @objc BridgedSession.identifier <stripped>
	0x5d70  @objc BridgedSession.kind <stripped>
	0x5db0  @objc BridgedSession.name <stripped>
	0x5e80  @objc BridgedSession.startDate <stripped>
	0x5f20  @objc BridgedSession.sessionData <stripped>
	0x60b0  @objc BridgedSession.init <stripped>
	0x5ff0  @objc BridgedSession..cxx_destruct <stripped>

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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventTimestamp : Ù¥
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
	0x7fb0  @objc BridgedRawDataEvent.initWithName:dictionary: <stripped>
	0x8110  @objc BridgedRawDataEvent.toDict <stripped>
	0x8220  @objc BridgedRawDataEvent.init <stripped>
	0x81a0  @objc BridgedRawDataEvent..cxx_destruct <stripped>

	// Swift methods
	0x7ef0  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool // +0x8 (0x1)
	var unique : Bool // +0x9 (0x1)
	var discardWhenPresent : Bool // +0xa (0x1)

	// ObjC -> Swift bridged methods
	0x82b0  @objc BridgedDataEventTraits.onlyOnce <stripped>
	0x82f0  @objc BridgedDataEventTraits.setOnlyOnce: <stripped>
	0x83b0  @objc BridgedDataEventTraits.unique <stripped>
	0x83f0  @objc BridgedDataEventTraits.setUnique: <stripped>
	0x84b0  @objc BridgedDataEventTraits.discardWhenPresent <stripped>
	0x8550  @objc BridgedDataEventTraits.setDiscardWhenPresent: <stripped>
	0x8810  @objc BridgedDataEventTraits.init <stripped>

	// Swift methods
	0x82d0  func <stripped> // getter 
	0x8310  func <stripped> // setter 
	0x8370  func <stripped> // modifyCoroutine 
	0x83d0  func <stripped> // getter 
	0x8410  func <stripped> // setter 
	0x8470  func <stripped> // modifyCoroutine 
	0x8500  func <stripped> // getter 
	0x85b0  func <stripped> // setter 
	0x86d0  func <stripped> // modifyCoroutine 
	0x88b0  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any? // +0x8 (0x20)

	// ObjC -> Swift bridged methods
	0x9160  @objc JSON.initWithData: <stripped>
	0x91d0  @objc JSON.objectForKeyedSubscript: <stripped>
	0x9500  @objc JSON.objectAtIndexedSubscript: <stripped>
	0x96e0  @objc JSON.exists <stripped>
	0x9760  @objc JSON.any <stripped>
	0x97e0  @objc JSON.string <stripped>
	0x9a50  @objc JSON.array <stripped>
	0x9c80  @objc JSON.object <stripped>
	0xa140  @objc JSON.number <stripped>
	0xa490  @objc JSON.toDataWithOptions:: <stripped>
	0xa5e0  @objc JSON.init <stripped>
	0xa570  @objc JSON..cxx_destruct <stripped>

	// Swift methods
	0x90d0  class func JSON.__allocating_init(_:) // init 
	0x9250  func <stripped> // getter 
	0x9540  func <stripped> // getter 
	0x9720  func <stripped> // getter 
	0x97c0  func <stripped> // getter 
	0x9890  func <stripped> // getter 
	0x9900  func <stripped> // getter 
	0x9970  func <stripped> // getter 
	0x99e0  func <stripped> // getter 
	0x9ab0  func <stripped> // getter 
	0x9cf0  func <stripped> // getter 
	0xa180  func <stripped> // getter 
	0xa2f0  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : EventMirrorProperty // +0x10 (0x8)

	// Swift methods
	0xbf20  func <stripped> // method 
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
	0xf5f0  @objc Contract.init <stripped>
	0xf640  @objc Contract..cxx_destruct <stripped>
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
	0x11f60  @objc Client.identifier <stripped>
	0x11fa0  @objc Client.name <stripped>
	0x11fe0  @objc Client.version <stripped>
	0x12090  @objc Client.build <stripped>
	0x120d0  @objc Client.fullVersion <stripped>
	0x122d0  @objc Client.initWithBundle: <stripped>
	0x12420  @objc Client.initWithIdentifier:name:version:build: <stripped>
	0x125a0  @objc Client.init <stripped>
	0x12500  @objc Client..cxx_destruct <stripped>

	// Swift methods
	0x12130  func <stripped> // getter 
	0x12310  class func Client.__allocating_init(identifier:name:version:build:) // init 
 }

 class AppAnalytics.SHA1Base64SigningService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SigningServiceType {

	// Properties
	let signer : SignerType // +0x10 (0x28)

	// Swift methods
 }

 class AppAnalytics.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var unfairLock : os_unfair_lock_s // +0x10 (0x8)
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
	var dataStacks : DataEventStackType
	var observers : SessionObserver
	let options : Options
	let flushProcessor : FlushProcessor

	// Swift methods
	0x150a0  class func SessionManager.__allocating_init(accessQueue:options:flushProcessor:) // init 
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
	case json : WritingOptions
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
	0x1e5d0  @objc BridgedProcessEvent.name <stripped>
	0x1e610  @objc BridgedProcessEvent.version <stripped>
	0x1e6c0  @objc BridgedProcessEvent.json <stripped>
	0x1e700  @objc BridgedProcessEvent.groupName <stripped>
	0x1e8a0  @objc BridgedProcessEvent.init <stripped>
	0x1e7f0  @objc BridgedProcessEvent..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x1ead0  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint: <stripped>
	0x1ed30  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint:config: <stripped>
	0x1ee50  @objc BridgedUploadBatchEventProcessor.processEvent: <stripped>
	0x1ef40  @objc BridgedUploadBatchEventProcessor.init <stripped>
	0x1eed0  @objc BridgedUploadBatchEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x1e8f0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x1ebd0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
 }

 class AppAnalytics.ActiveSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ActiveSessionType {

	// Properties
	let identifier : String // +0x10 (0x10)
	let kind : Kind // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : Ù¥ // +0x59 (0x0)

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
	0x1f920  @objc BridgingLoggingEventProcessor.initWithFormat: <stripped>
	0x1f990  @objc BridgingLoggingEventProcessor.processEvent: <stripped>
	0x1fa80  @objc BridgingLoggingEventProcessor.init <stripped>
	0x1fa10  @objc BridgingLoggingEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x1f680  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
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
	0x23130  @objc BridgedAccessTracker.init <stripped>
	0x230b0  @objc BridgedAccessTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.SessionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject? // +0x10 (0x8)
	var sessionChangeTracker : AccessTracker // +0x18 (0x8)
	let block : AccessTracker // +0x20 (0x10)

	// Swift methods
 }

 class AppAnalytics.DelayedToken : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let block : () // +0x8 (0x10)
	var sealed : Bool // +0x18 (0x1)

	// ObjC -> Swift bridged methods
	0x265e0  @objc DelayedToken.commit <stripped>
	0x26710  @objc DelayedToken.init <stripped>
	0x266a0  @objc DelayedToken..cxx_destruct <stripped>

	// Swift methods
	0x265a0  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType // +0x10 (0x28)

	// Swift methods
	0x26780  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
 }

 enum AppAnalytics.GZIPError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : “¤
 }

 enum AppAnalytics.ExternalResult {

	// Properties
	case success : (value: A)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : K¤
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
	let processorManager : ProcessorManager // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x2a040  @objc BridgedProcessorManager.init <stripped>
	0x29fd0  @objc BridgedProcessorManager..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedEventData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let eventID : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventDate : Ù¥ // +0x6100085 (0x0)
	let eventPath : String // +0x19 (0x10)
	let sessionID : String // +0x45545f5f (0x10)

	// ObjC -> Swift bridged methods
	0x2a790  @objc BridgedEventData.eventID <stripped>
	0x2a7d0  @objc BridgedEventData.eventDate <stripped>
	0x2a870  @objc BridgedEventData.eventPath <stripped>
	0x2a8b0  @objc BridgedEventData.sessionID <stripped>
	0x2aa00  @objc BridgedEventData.toDict <stripped>
	0x2ab50  @objc BridgedEventData.init <stripped>
	0x2aaa0  @objc BridgedEventData..cxx_destruct <stripped>

	// Swift methods
	0x2a9b0  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let identifier : String? // +0x18 (0x10)
	let tracker : Tracker // +0x28 (0x8)
	let eventMirrorStore : BridgedEventMirrorStore // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x2ac50  @objc BridgedTracker.name <stripped>
	0x2acd0  @objc BridgedTracker.identifier <stripped>
	0x2ae70  @objc BridgedTracker.init <stripped>
	0x2adc0  @objc BridgedTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : Ù¥ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : Ù¥ // +0x0 (0x0)
	let duration : Double // +0x85000 (0x8)

	// ObjC -> Swift bridged methods
	0x30540  @objc BridgedTimedData.startDate <stripped>
	0x30580  @objc BridgedTimedData.endDate <stripped>
	0x30670  @objc BridgedTimedData.duration <stripped>
	0x30750  @objc BridgedTimedData.toDict <stripped>
	0x30890  @objc BridgedTimedData.init <stripped>
	0x307f0  @objc BridgedTimedData..cxx_destruct <stripped>

	// Swift methods
	0x30700  func <stripped> // method 
 }

 struct AppAnalytics.Session {

	// Properties
	let identifier : String
	let kind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : Ù¥
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
	var cache : EventMirrorProperty // +0x10 (0x8)

	// Swift methods
	0x31640  func <stripped> // method 
 }

 struct AppAnalytics.SnapshotEntry {

	// Properties
	let name : String // +0x0
	let dataEntry : AnyDataEventEntry // +0x10
 }

 class AppAnalytics.BridgedRawEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let properties : BridgedRawEventProperty // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x332c0  @objc BridgedRawEvent.initWithName:properties: <stripped>
	0x33700  @objc BridgedRawEvent.init <stripped>
	0x33680  @objc BridgedRawEvent..cxx_destruct <stripped>

	// Swift methods
	0x33200  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
 }

 enum AppAnalytics.PushEvent {

	// Properties
	case actual : A
	case bridged : (A, String)
 }

 class AppAnalytics.Endpoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : éš // +0x0 (0x0)
	let name : String // +0x85000 (0x10)
	let sharedContainerIdentifier : String? // +0x5 (0x10)

	// ObjC -> Swift bridged methods
	0x34dc0  @objc Endpoint.url <stripped>
	0x34e60  @objc Endpoint.name <stripped>
	0x34ee0  @objc Endpoint.sharedContainerIdentifier <stripped>
	0x350b0  @objc Endpoint.initWithURL:name:sharedContainerIdentifier: <stripped>
	0x35290  @objc Endpoint.init <stripped>
	0x351e0  @objc Endpoint..cxx_destruct <stripped>

	// Swift methods
	0x34f70  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
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
	case failed : …«
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
	0x382d0  func <stripped> // getter 
	0x3a960  func <stripped> // method 
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
	let startTime : Ù¥
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

 struct AppAnalytics.JSONLoggingEventProcessorFormatter: LoggingEventProcessorFormatterType {

	// Properties
	let writingOptions : WritingOptions // +0x0
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
	0x4b390  @objc UploadBatchEventConfig.maxEventsPerSessionBatch <stripped>
	0x4b3d0  @objc UploadBatchEventConfig.maxByteSizePerSessionBatch <stripped>
	0x4b410  @objc UploadBatchEventConfig.debuggingEnabled <stripped>
	0x4b440  @objc UploadBatchEventConfig.maxUploadTries <stripped>
	0x4b570  @objc UploadBatchEventConfig.initWithBatchSize:enableDebugging: <stripped>
	0x4b690  @objc UploadBatchEventConfig.withMaxEventsPerSessionBatch: <stripped>
	0x4b7e0  @objc UploadBatchEventConfig.withMaxByteSizePerSessionBatch: <stripped>
	0x4b930  @objc UploadBatchEventConfig.withDebuggingEnabled: <stripped>
	0x4ba80  @objc UploadBatchEventConfig.withMaxUploadTries: <stripped>
	0x4bb70  @objc UploadBatchEventConfig.init <stripped>
	0x4bbd0  @objc UploadBatchEventConfig..cxx_destruct <stripped>

	// Swift methods
	0x4b480  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
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
	0x4cc60  @objc BridgedRawEventProperty.initWithDataName:requirement: <stripped>
	0x4cd70  @objc BridgedRawEventProperty.init <stripped>
	0x4cd00  @objc BridgedRawEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x4cba0  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
 }

 class AppAnalytics.UploadDropbox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxType {

	// Properties
	let config : UploadBatchEventConfig // +0x10 (0x8)
	let debugging : Lazy // +0x18 (0x8)
	var files : UploadDropboxFile // +0x20 (0x8)
	let pathProvider : UploadDropboxPathProviderType // +0x28 (0x28)
	let fileManager : UploadDropboxFileManagerType // +0x50 (0x28)
	var lock : UnfairLock // +0x78 (0x8)

	// Swift methods
 }

 enum AppAnalytics.Debugging {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case enabled : –
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
	let service : UploadServiceType // +0x10 (0x10)
	let dropbox : UploadDropboxType // +0x20 (0x28)
	var batchIdentifiers : UploadBatchQueueKey // +0x48 (0x8)
	var flushQueue : OS_dispatch_queue // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x55b70  @objc UploadManager.flushWithCallbackQueue:completion: <stripped>

	// Swift methods
	0x54350  func <stripped> // method 
	0x54670  func <stripped> // method 
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : Ù¥ // +0x14 (0x0)

	// ObjC -> Swift bridged methods
	0x57430  @objc Group.name <stripped>
	0x574b0  @objc Group.startDate <stripped>
	0x575a0  @objc Group.init <stripped>
	0x57620  @objc Group..cxx_destruct <stripped>

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
	let url : éš // +0x65745f5f (0x0)
	var eventCount : Int // +0x0 (0x8)
	var byteSize : Int // +0x45545f5f (0x8)
	var state : UploadDropboxFileState // +0x0 (0xa)
	var fileHandle : NSFileHandle? // +0x0 (0x8)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 class AppAnalytics.UploadDropboxFileManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxFileManagerType {
	// Swift methods
	0x5ace0  func <stripped> // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case posixError : —š
	case noSuchFileOrDirectory  
 }

 enum AppAnalytics.EventSubmitResult {

	// Properties
	case success : ProcessEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : …«
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
	var sessionManager : SessionManager // +0x10 (0x8)
	let sessionEndFlushGroup : OS_dispatch_group // +0x18 (0x8)
	let flushEvents : FlushEvents // +0x20 (0x8)
	let flushInterval : Double // +0x28 (0x8)
	var timer : OS_dispatch_source_timer? // +0x30 (0x8)

	// Swift methods
	0x62740  func <stripped> // getter 
	0x62770  func <stripped> // setter 
	0x627c0  func <stripped> // modifyCoroutine 
	0x623e0  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x62a00  func <stripped> // method 
	0x62b20  func <stripped> // method 
	0x62c30  func <stripped> // method 
	0x62ed0  func <stripped> // method 
	0x62ee0  func <stripped> // method 
	0x62ef0  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x63b30  @objc BridgedSessionObserver.disposeOnObject: <stripped>
	0x63ba0  @objc BridgedSessionObserver.init <stripped>
	0x63c30  @objc BridgedSessionObserver..cxx_destruct <stripped>

	// Swift methods
	0x63b10  func <stripped> // method 
 }

 class AppAnalytics.ProxyEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventProcessor : AAEventProcessorType // +0x10 (0x8)
	let proxyEventProcessor : EventProcessorType // +0x18 (0x10)

	// Swift methods
 }

 class AppAnalytics.DocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ó‘
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ó‘
	let environmentName : String
	let fileManager : UploadDropboxFileManagerType
	let staticPathProvider : UploadDropboxPathProviderType

	// Swift methods
	0x64180  func <stripped> // getter 
	0x642c0  func <stripped> // getter 
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ó‘ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ó‘ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURLProvider : å‘ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugURLProvider : å‘ // +0x0 (0x10)
	let fileManager : UploadDropboxFileManagerType // +0x0 (0x28)

	// Swift methods
	0x64740  func <stripped> // getter 
	0x64760  func <stripped> // getter 
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
	0x657e0  @objc BridgedSessionData.initWithKey:data: <stripped>
	0x65910  @objc BridgedSessionData.init <stripped>
	0x65890  @objc BridgedSessionData..cxx_destruct <stripped>

	// Swift methods
	0x65720  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type // +0x8 (0x8)
	let requirement : BridgedEventPropertyRequirement // +0x10 (0x8)
	let dataKey : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x65b40  @objc BridgedEventProperty.initWithDataType:requirement: <stripped>
	0x65ca0  @objc BridgedEventProperty.init <stripped>
	0x65c30  @objc BridgedEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x659a0  class func BridgedEventProperty.__allocating_init(dataType:requirement:) // init 
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
	0x662a0  @objc BridgedSessionManager.tracker <stripped>
	0x662e0  @objc BridgedSessionManager.processorManager <stripped>
	0x66890  @objc BridgedSessionManager.init <stripped>
	0x66920  @objc BridgedSessionManager.initWithAccessQueue: <stripped>
	0x66990  @objc BridgedSessionManager..cxx_destruct <stripped>

	// Swift methods
	0x668b0  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
	0x67a90  @objc BridgedAccessSessionManager.isActive <stripped>
	0x67de0  @objc BridgedAccessSessionManager.pushSessionData: <stripped>
	0x67e70  @objc BridgedAccessSessionManager.pushSessionData:traits: <stripped>
	0x67f50  @objc BridgedAccessSessionManager.pushSessionData:submitEventQueues: <stripped>
	0x67ff0  @objc BridgedAccessSessionManager.pushSessionData:traits:submitEventQueues: <stripped>
	0x680e0  @objc BridgedAccessSessionManager.init <stripped>
	0x68090  @objc BridgedAccessSessionManager..cxx_destruct <stripped>

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
	let timers : Timer
 }

 struct AppAnalytics.TimedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startTimestamp : Ù¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endTimestamp : Ù¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let duration : Ÿ˜
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
	0x6bd20  @objc ViewingSession.identifier <stripped>
	0x6be40  @objc ViewingSession.init <stripped>
	0x6bdd0  @objc ViewingSession..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
	0x6c970  @objc ViewingSessionManager.viewingSessionForContentIdentifier:object: <stripped>
	0x6cbf0  @objc ViewingSessionManager.removeObject:forContentIdentifier: <stripped>
	0x6d3b0  @objc ViewingSessionManager.endViewingSessionForContentIdentifier: <stripped>
	0x6d530  @objc ViewingSessionManager.endActiveViewingSession <stripped>
	0x6d8b0  @objc ViewingSessionManager.init <stripped>
	0x6d800  @objc ViewingSessionManager..cxx_destruct <stripped>
 }

 class AppAnalytics.Session : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let contentIdentifier : String
	var objects : NSHashTable<Swift.AnyObject>
	var viewingSession : ViewingSession

	// Swift methods
 }
