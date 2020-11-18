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
	let rawValue : =¯
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : =¯
 }

 struct __C.z_stream_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_in :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_in : =¯
	var total_in : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_out :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_out : =¯
	var total_out : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var msg :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Á­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var zalloc :  first-element-marker 
	var zfree : @convention(c) (_:_:)?
	var opaque : UnsafeMutableRawPointer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data_type : A®
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
	0x4770  class func ExternalAnalyticsUploader.__allocating_init() // init 
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
	let startDate : ¦ // +0xfeedfacf (0x0)
	let sessionData : [String : Any] // +0x3 (0x8)

	// ObjC -> Swift bridged methods
	0x5010  @objc BridgedSession.identifier <stripped>
	0x5090  @objc BridgedSession.kind <stripped>
	0x50d0  @objc BridgedSession.name <stripped>
	0x51a0  @objc BridgedSession.startDate <stripped>
	0x5240  @objc BridgedSession.sessionData <stripped>
	0x53d0  @objc BridgedSession.init <stripped>
	0x5310  @objc BridgedSession..cxx_destruct <stripped>

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
	let eventTimestamp : ¦
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
	0x72d0  @objc BridgedRawDataEvent.initWithName:dictionary: <stripped>
	0x7430  @objc BridgedRawDataEvent.toDict <stripped>
	0x7540  @objc BridgedRawDataEvent.init <stripped>
	0x74c0  @objc BridgedRawDataEvent..cxx_destruct <stripped>

	// Swift methods
	0x7210  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool // +0x8 (0x1)
	var unique : Bool // +0x9 (0x1)
	var discardWhenPresent : Bool // +0xa (0x1)

	// ObjC -> Swift bridged methods
	0x75d0  @objc BridgedDataEventTraits.onlyOnce <stripped>
	0x7610  @objc BridgedDataEventTraits.setOnlyOnce: <stripped>
	0x76d0  @objc BridgedDataEventTraits.unique <stripped>
	0x7710  @objc BridgedDataEventTraits.setUnique: <stripped>
	0x77d0  @objc BridgedDataEventTraits.discardWhenPresent <stripped>
	0x7870  @objc BridgedDataEventTraits.setDiscardWhenPresent: <stripped>
	0x7b30  @objc BridgedDataEventTraits.init <stripped>

	// Swift methods
	0x75f0  func <stripped> // getter 
	0x7630  func <stripped> // setter 
	0x7690  func <stripped> // modifyCoroutine 
	0x76f0  func <stripped> // getter 
	0x7730  func <stripped> // setter 
	0x7790  func <stripped> // modifyCoroutine 
	0x7820  func <stripped> // getter 
	0x78d0  func <stripped> // setter 
	0x79f0  func <stripped> // modifyCoroutine 
	0x7bd0  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any? // +0x8 (0x20)

	// ObjC -> Swift bridged methods
	0x8480  @objc JSON.initWithData: <stripped>
	0x84f0  @objc JSON.objectForKeyedSubscript: <stripped>
	0x8820  @objc JSON.objectAtIndexedSubscript: <stripped>
	0x8a00  @objc JSON.exists <stripped>
	0x8a80  @objc JSON.any <stripped>
	0x8b00  @objc JSON.string <stripped>
	0x8d70  @objc JSON.array <stripped>
	0x8fa0  @objc JSON.object <stripped>
	0x9460  @objc JSON.number <stripped>
	0x97b0  @objc JSON.toDataWithOptions:: <stripped>
	0x9900  @objc JSON.init <stripped>
	0x9890  @objc JSON..cxx_destruct <stripped>

	// Swift methods
	0x83f0  class func JSON.__allocating_init(_:) // init 
	0x8570  func <stripped> // getter 
	0x8860  func <stripped> // getter 
	0x8a40  func <stripped> // getter 
	0x8ae0  func <stripped> // getter 
	0x8bb0  func <stripped> // getter 
	0x8c20  func <stripped> // getter 
	0x8c90  func <stripped> // getter 
	0x8d00  func <stripped> // getter 
	0x8dd0  func <stripped> // getter 
	0x9010  func <stripped> // getter 
	0x94a0  func <stripped> // getter 
	0x9610  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : EventMirrorProperty // +0x10 (0x8)

	// Swift methods
	0xb240  func <stripped> // method 
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
	0xe910  @objc Contract.init <stripped>
	0xe960  @objc Contract..cxx_destruct <stripped>
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
	let buildNumber : String // +0x40 (0x10)

	// ObjC -> Swift bridged methods
	0x11280  @objc Client.identifier <stripped>
	0x112c0  @objc Client.name <stripped>
	0x11300  @objc Client.version <stripped>
	0x11340  @objc Client.build <stripped>
	0x11380  @objc Client.buildNumber <stripped>
	0x11430  @objc Client.fullVersion <stripped>
	0x11610  @objc Client.initWithBundle: <stripped>
	0x11740  @objc Client.initWithIdentifier:name:version:buildNumber: <stripped>
	0x118d0  @objc Client.initWithIdentifier:name:version:build: <stripped>
	0x11a50  @objc Client.init <stripped>
	0x119a0  @objc Client..cxx_destruct <stripped>

	// Swift methods
	0x11490  func <stripped> // getter 
	0x11650  class func Client.__allocating_init(identifier:name:version:buildNumber:) // init 
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
	0x14880  class func SessionManager.__allocating_init(accessQueue:options:flushProcessor:) // init 
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
	0x1dda0  @objc BridgedProcessEvent.name <stripped>
	0x1dde0  @objc BridgedProcessEvent.version <stripped>
	0x1de90  @objc BridgedProcessEvent.json <stripped>
	0x1ded0  @objc BridgedProcessEvent.groupName <stripped>
	0x1e070  @objc BridgedProcessEvent.init <stripped>
	0x1dfc0  @objc BridgedProcessEvent..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x1e2a0  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint: <stripped>
	0x1e500  @objc BridgedUploadBatchEventProcessor.initWithClient:endpoint:config: <stripped>
	0x1e620  @objc BridgedUploadBatchEventProcessor.processEvent: <stripped>
	0x1e710  @objc BridgedUploadBatchEventProcessor.init <stripped>
	0x1e6a0  @objc BridgedUploadBatchEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x1e0c0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x1e3a0  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
 }

 class AppAnalytics.ActiveSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ActiveSessionType {

	// Properties
	let identifier : String // +0x10 (0x10)
	let kind : Kind // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ¦ // +0x59 (0x0)

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
	0x1f0f0  @objc BridgingLoggingEventProcessor.initWithFormat: <stripped>
	0x1f160  @objc BridgingLoggingEventProcessor.processEvent: <stripped>
	0x1f250  @objc BridgingLoggingEventProcessor.init <stripped>
	0x1f1e0  @objc BridgingLoggingEventProcessor..cxx_destruct <stripped>

	// Swift methods
	0x1ee50  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
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
	0x22900  @objc BridgedAccessTracker.init <stripped>
	0x22880  @objc BridgedAccessTracker..cxx_destruct <stripped>

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
	0x25db0  @objc DelayedToken.commit <stripped>
	0x25ee0  @objc DelayedToken.init <stripped>
	0x25e70  @objc DelayedToken..cxx_destruct <stripped>

	// Swift methods
	0x25d70  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType // +0x10 (0x28)

	// Swift methods
	0x25f50  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
 }

 enum AppAnalytics.GZIPError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : Õ¤
 }

 enum AppAnalytics.ExternalResult {

	// Properties
	case success : (value: A)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : ¤
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
	0x29810  @objc BridgedProcessorManager.init <stripped>
	0x297a0  @objc BridgedProcessorManager..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedEventData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let eventID : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventDate : ¦ // +0x6100085 (0x0)
	let eventPath : String // +0x19 (0x10)
	let sessionID : String // +0x45545f5f (0x10)

	// ObjC -> Swift bridged methods
	0x29f60  @objc BridgedEventData.eventID <stripped>
	0x29fa0  @objc BridgedEventData.eventDate <stripped>
	0x2a040  @objc BridgedEventData.eventPath <stripped>
	0x2a080  @objc BridgedEventData.sessionID <stripped>
	0x2a1d0  @objc BridgedEventData.toDict <stripped>
	0x2a320  @objc BridgedEventData.init <stripped>
	0x2a270  @objc BridgedEventData..cxx_destruct <stripped>

	// Swift methods
	0x2a180  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let identifier : String? // +0x18 (0x10)
	let tracker : Tracker // +0x28 (0x8)
	let eventMirrorStore : BridgedEventMirrorStore // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x2a420  @objc BridgedTracker.name <stripped>
	0x2a4a0  @objc BridgedTracker.identifier <stripped>
	0x2a640  @objc BridgedTracker.init <stripped>
	0x2a590  @objc BridgedTracker..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ¦ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : ¦ // +0x0 (0x0)
	let duration : Double // +0x85000 (0x8)

	// ObjC -> Swift bridged methods
	0x2fd10  @objc BridgedTimedData.startDate <stripped>
	0x2fd50  @objc BridgedTimedData.endDate <stripped>
	0x2fe40  @objc BridgedTimedData.duration <stripped>
	0x2ff20  @objc BridgedTimedData.toDict <stripped>
	0x30060  @objc BridgedTimedData.init <stripped>
	0x2ffc0  @objc BridgedTimedData..cxx_destruct <stripped>

	// Swift methods
	0x2fed0  func <stripped> // method 
 }

 struct AppAnalytics.Session {

	// Properties
	let identifier : String
	let kind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ¦
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
	0x30e10  func <stripped> // method 
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
	0x32a90  @objc BridgedRawEvent.initWithName:properties: <stripped>
	0x32ed0  @objc BridgedRawEvent.init <stripped>
	0x32e50  @objc BridgedRawEvent..cxx_destruct <stripped>

	// Swift methods
	0x329d0  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
 }

 enum AppAnalytics.PushEvent {

	// Properties
	case actual : A
	case bridged : (A, String)
 }

 class AppAnalytics.Endpoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : › // +0x0 (0x0)
	let name : String // +0x85000 (0x10)
	let sharedContainerIdentifier : String? // +0x5 (0x10)

	// ObjC -> Swift bridged methods
	0x34590  @objc Endpoint.url <stripped>
	0x34630  @objc Endpoint.name <stripped>
	0x346b0  @objc Endpoint.sharedContainerIdentifier <stripped>
	0x34880  @objc Endpoint.initWithURL:name:sharedContainerIdentifier: <stripped>
	0x34a60  @objc Endpoint.init <stripped>
	0x349b0  @objc Endpoint..cxx_destruct <stripped>

	// Swift methods
	0x34740  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
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
	case failed : Õ«
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
	0x37aa0  func <stripped> // getter 
	0x3a130  func <stripped> // method 
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
	let startTime : ¦
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
	0x4ab60  @objc UploadBatchEventConfig.maxEventsPerSessionBatch <stripped>
	0x4aba0  @objc UploadBatchEventConfig.maxByteSizePerSessionBatch <stripped>
	0x4abe0  @objc UploadBatchEventConfig.debuggingEnabled <stripped>
	0x4ac10  @objc UploadBatchEventConfig.maxUploadTries <stripped>
	0x4ad40  @objc UploadBatchEventConfig.initWithBatchSize:enableDebugging: <stripped>
	0x4ae60  @objc UploadBatchEventConfig.withMaxEventsPerSessionBatch: <stripped>
	0x4afb0  @objc UploadBatchEventConfig.withMaxByteSizePerSessionBatch: <stripped>
	0x4b100  @objc UploadBatchEventConfig.withDebuggingEnabled: <stripped>
	0x4b250  @objc UploadBatchEventConfig.withMaxUploadTries: <stripped>
	0x4b340  @objc UploadBatchEventConfig.init <stripped>
	0x4b3a0  @objc UploadBatchEventConfig..cxx_destruct <stripped>

	// Swift methods
	0x4ac50  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
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
	0x4c430  @objc BridgedRawEventProperty.initWithDataName:requirement: <stripped>
	0x4c540  @objc BridgedRawEventProperty.init <stripped>
	0x4c4d0  @objc BridgedRawEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x4c370  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
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
	case enabled : Q–
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
	0x55340  @objc UploadManager.flushWithCallbackQueue:completion: <stripped>

	// Swift methods
	0x53b20  func <stripped> // method 
	0x53e40  func <stripped> // method 
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ¦ // +0x14 (0x0)

	// ObjC -> Swift bridged methods
	0x56c00  @objc Group.name <stripped>
	0x56c80  @objc Group.startDate <stripped>
	0x56d70  @objc Group.init <stripped>
	0x56df0  @objc Group..cxx_destruct <stripped>

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
	let url : › // +0x65745f5f (0x0)
	var eventCount : Int // +0x0 (0x8)
	var byteSize : Int // +0x45545f5f (0x8)
	var state : UploadDropboxFileState // +0x0 (0xa)
	var fileHandle : NSFileHandle? // +0x0 (0x8)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 class AppAnalytics.UploadDropboxFileManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxFileManagerType {
	// Swift methods
	0x5a4b0  func <stripped> // method 
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
	case posixError : Ùš
	case noSuchFileOrDirectory  
 }

 enum AppAnalytics.EventSubmitResult {

	// Properties
	case success : ProcessEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : Õ«
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
	0x627f0  func <stripped> // getter 
	0x62820  func <stripped> // setter 
	0x62870  func <stripped> // modifyCoroutine 
	0x62490  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x62ab0  func <stripped> // method 
	0x62bd0  func <stripped> // method 
	0x62ce0  func <stripped> // method 
	0x62f80  func <stripped> // method 
	0x62f90  func <stripped> // method 
	0x62fa0  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x63be0  @objc BridgedSessionObserver.disposeOnObject: <stripped>
	0x63c50  @objc BridgedSessionObserver.init <stripped>
	0x63ce0  @objc BridgedSessionObserver..cxx_destruct <stripped>

	// Swift methods
	0x63bc0  func <stripped> // method 
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
	var $__lazy_storage_$_baseURL : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : %’
	let environmentName : String
	let fileManager : UploadDropboxFileManagerType
	let staticPathProvider : UploadDropboxPathProviderType

	// Swift methods
	0x64230  func <stripped> // getter 
	0x64370  func <stripped> // getter 
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : %’ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : %’ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURLProvider : ’ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugURLProvider : ’ // +0x0 (0x10)
	let fileManager : UploadDropboxFileManagerType // +0x0 (0x28)

	// Swift methods
	0x647f0  func <stripped> // getter 
	0x64810  func <stripped> // getter 
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
	0x65890  @objc BridgedSessionData.initWithKey:data: <stripped>
	0x659c0  @objc BridgedSessionData.init <stripped>
	0x65940  @objc BridgedSessionData..cxx_destruct <stripped>

	// Swift methods
	0x657d0  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type // +0x8 (0x8)
	let requirement : BridgedEventPropertyRequirement // +0x10 (0x8)
	let dataKey : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x65bf0  @objc BridgedEventProperty.initWithDataType:requirement: <stripped>
	0x65d50  @objc BridgedEventProperty.init <stripped>
	0x65ce0  @objc BridgedEventProperty..cxx_destruct <stripped>

	// Swift methods
	0x65a50  class func BridgedEventProperty.__allocating_init(dataType:requirement:) // init 
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
	0x66350  @objc BridgedSessionManager.tracker <stripped>
	0x66390  @objc BridgedSessionManager.processorManager <stripped>
	0x66940  @objc BridgedSessionManager.init <stripped>
	0x669d0  @objc BridgedSessionManager.initWithAccessQueue: <stripped>
	0x66a40  @objc BridgedSessionManager..cxx_destruct <stripped>

	// Swift methods
	0x66960  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
	0x67b40  @objc BridgedAccessSessionManager.isActive <stripped>
	0x67e90  @objc BridgedAccessSessionManager.pushSessionData: <stripped>
	0x67f20  @objc BridgedAccessSessionManager.pushSessionData:traits: <stripped>
	0x68000  @objc BridgedAccessSessionManager.pushSessionData:submitEventQueues: <stripped>
	0x680a0  @objc BridgedAccessSessionManager.pushSessionData:traits:submitEventQueues: <stripped>
	0x68190  @objc BridgedAccessSessionManager.init <stripped>
	0x68140  @objc BridgedAccessSessionManager..cxx_destruct <stripped>

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
	let startTimestamp : ¦
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endTimestamp : ¦
WARNING: couldn't find address 0x0 (0x0) in binary!
	let duration : á˜
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
	0x6bdd0  @objc ViewingSession.identifier <stripped>
	0x6bef0  @objc ViewingSession.init <stripped>
	0x6be80  @objc ViewingSession..cxx_destruct <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
	0x6ca20  @objc ViewingSessionManager.viewingSessionForContentIdentifier:object: <stripped>
	0x6cca0  @objc ViewingSessionManager.removeObject:forContentIdentifier: <stripped>
	0x6d460  @objc ViewingSessionManager.endViewingSessionForContentIdentifier: <stripped>
	0x6d5e0  @objc ViewingSessionManager.endActiveViewingSession <stripped>
	0x6d960  @objc ViewingSessionManager.init <stripped>
	0x6d8b0  @objc ViewingSessionManager..cxx_destruct <stripped>
 }

 class AppAnalytics.Session : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let contentIdentifier : String
	var objects : NSHashTable<Swift.AnyObject>
	var viewingSession : ViewingSession

	// Swift methods
 }
