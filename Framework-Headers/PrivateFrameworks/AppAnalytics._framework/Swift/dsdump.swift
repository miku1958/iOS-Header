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
	let rawValue : ø≠
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ø≠
 }

 struct __C.z_stream_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_in :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_in : ø≠
	var total_in : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var next_out :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var avail_out : ø≠
	var total_out : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var msg :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : [¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var zalloc :  first-element-marker 
	var zfree : @convention(c) (_:_:)?
	var opaque : UnsafeMutableRawPointer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data_type : ”¨
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
	0x3a70  class func ExternalAnalyticsUploader.__allocating_init() // init 
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
	let startDate : 3¶ // +0xfeedfacf (0x0)
	let sessionData : [String : Any] // +0x3 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x717c000233e0 (0x17c000233e0) in binary!
	0x7b7c  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x716400023500 (0x16400023500) in binary!
	0x7158  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x714c000233c8 (0x14c000233c8) in binary!
	0x7140  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x9334000233b8 (0x334000233b8) in binary!
	0x48000000c  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x70fc000233a8 (0xfc000233a8) in binary!
	0x7104  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x710400023508 (0x10400023508) in binary!
	0x92f8  @objc BridgedSession.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff96070  @objc BridgedSession.(null) <stripped>

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
	let eventTimestamp : 3¶
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
WARNING: couldn't find address 0x70fc000233a8 (0xfc000233a8) in binary!
	0x7104  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x710400023508 (0x10400023508) in binary!
	0x92f8  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff96070  @objc BridgedFlushManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x544fff95fb8  @objc BridgedFlushManager.(null) <stripped>

	// Swift methods
	0x65e0  class func BridgedFlushManager.__allocating_init(appSessionManager:client:endpoint:config:) // init 
 }

 class AppAnalytics.BridgedRawDataEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let dictionary : [String : Any]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb79400023368 (0x79400023368) in binary!
	0x70c0  @objc BridgedRawDataEvent.(null) <stripped>
WARNING: couldn't find address 0x70b4000234b8 (0xb4000234b8) in binary!
	0x92a8  @objc BridgedRawDataEvent.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x334fff96270  @objc BridgedRawDataEvent.(null) <stripped>
	0x32cfff96358  @objc BridgedRawDataEvent.âÂHç=E <stripped>

	// Swift methods
	0x6e80  class func BridgedRawDataEvent.__allocating_init(name:dictionary:) // init 
 }

 class AppAnalytics.BridgedDataEventTraits : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlyOnce : Bool
	var unique : Bool
	var discardWhenPresent : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x727000023338 (0x27000023338) in binary!
	0x7182  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x725800023330 (0x25800023330) in binary!
	0x716a  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x724000023328 (0x24000023328) in binary!
	0x7152  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x704c00023450 (0x4c00023450) in binary!
	0xc8000000c  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x7a4800023308 (0x24800023308) in binary!
	0x7a3c  @objc BridgedDataEventTraits.(null) <stripped>
WARNING: couldn't find address 0x801400023300 (0x1400023300) in binary!
	0x71ec  @objc BridgedDataEventTraits.(null) <stripped>
	0x6ff8  @objc BridgedDataEventTraits. <stripped>

	// Swift methods
	0x7250  func <stripped> // getter 
	0x7290  func <stripped> // setter 
	0x72f0  func <stripped> // modifyCoroutine 
	0x7350  func <stripped> // getter 
	0x7390  func <stripped> // setter 
	0x73f0  func <stripped> // modifyCoroutine 
	0x7480  func <stripped> // getter 
	0x7530  func <stripped> // setter 
	0x7650  func <stripped> // modifyCoroutine 
	0x7820  func <stripped> // getter 
 }

 enum AppAnalytics.JSONError { }

 class AppAnalytics.JSON : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : Any?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a4800023308 (0x24800023308) in binary!
	0x7a3c  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x801400023300 (0x1400023300) in binary!
	0x71ec  @objc JSON.(null) <stripped>
	0x6ff8  @objc JSON. <stripped>
WARNING: couldn't find address 0x6fec000232f0 (0x7ec000232f0) in binary!
	0x6fe0  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x6fd4000232e8 (0x7d4000232e8) in binary!
	0x71b4  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x6fbc000233c0 (0x7bc000233c0) in binary!
	0x91b0  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff981a8  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9e960  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9e258  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9f030  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9e0d8  @objc JSON.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa0d30  @objc JSON.(null) <stripped>

	// Swift methods
	0x7da0  class func JSON.__allocating_init(_:) // init 
	0x7f20  func <stripped> // getter 
	0x80f0  func <stripped> // getter 
	0x82d0  func <stripped> // getter 
	0x8370  func <stripped> // getter 
	0x8440  func <stripped> // getter 
	0x84b0  func <stripped> // getter 
	0x8520  func <stripped> // getter 
	0x8590  func <stripped> // getter 
	0x8660  func <stripped> // getter 
	0x88d0  func <stripped> // getter 
	0x8d00  func <stripped> // getter 
	0x8e70  func <stripped> // method 
 }

 class AppAnalytics.BridgedEventMirrorStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cache : EventMirrorProperty

	// Swift methods
	0xecb0  func <stripped> // method 
 }

 class AppAnalytics.FlushManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appSessionManager : AppSessionManagerType
	let client : Client
	let endpoint : AAEndpointType
	let config : UploadBatchEventConfig
	let clientFactory : UploadClientFactory
	let signingService : SigningServiceType
	let uploadDropboxPathProvider : UploadDropboxPathProviderType
	let fileManager : UploadDropboxFileManagerType
	var uploadManagers : UploadManagerType
	let flushDispatchGroup : OS_dispatch_group
	var state : State

	// Swift methods
	0x12030  func <stripped> // method 
	0x136e0  func <stripped> // method 
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
WARNING: couldn't find address 0x6ef4000232f8 (0x6f4000232f8) in binary!
	0x90e8  @objc Contract.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x264fffa73d0  @objc Contract.(null) <stripped>
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
WARNING: couldn't find address 0x6ed400023138 (0x6d400023138) in binary!
	0x6ec8  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x6ebc000231e0 (0x6bc000231e0) in binary!
	0x78bc  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x6ea4000231d8 (0x6a4000231d8) in binary!
	0x6e98  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x78a0000231d0 (0xa0000231d0) in binary!
	0x6e60  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x7894000231c0 (0x94000231c0) in binary!
	0x6e68  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x905c000230e0 (0x5c000230e0) in binary!
	0x18000000c  @objc Client.(null) <stripped>
WARNING: couldn't find address 0xafe800023200 (0x7e800023200) in binary!
	0x68000000c  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x6e2c000231c8 (0x62c000231c8) in binary!
	0x6e20  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x6e1400023168 (0x61400023168) in binary!
	0x6e08  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x6dfc00023200 (0x5fc00023200) in binary!
	0x8ff0  @objc Client.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x13cfffb10e8  @objc Client.(null) <stripped>

	// Swift methods
	0x18760  func <stripped> // getter 
	0x188e0  class func Client.__allocating_init(identifier:name:version:buildNumber:) // init 
 }

 class AppAnalytics.SHA1Base64SigningService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SigningServiceType {

	// Properties
	let signer : SignerType

	// Swift methods
 }

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
	var suspendCount : AtomicCounter
	var state : SessionState
	var dataStacks : DataEventStackType
	var observers : SessionObserver
	let options : Options
	let flushProcessor : FlushProcessor

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xafe800023200 (0x7e800023200) in binary!
	0x68000000c  @objc SessionManager.(null) <stripped>

	// Swift methods
	0x1b040  class func SessionManager.__allocating_init(accessQueue:options:flushProcessor:) // init 
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
WARNING: couldn't find address 0x6e2c000231c8 (0x62c000231c8) in binary!
	0x6e20  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x6e1400023168 (0x61400023168) in binary!
	0x6e08  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x6dfc00023200 (0x5fc00023200) in binary!
	0x8ff0  @objc BridgedProcessEvent.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x13cfffb10e8  @objc BridgedProcessEvent.(null) <stripped>
	0x1bcfffb1450  @objc BridgedProcessEvent.UHâÂHÉ? <stripped>
	0xfffb14b8  @objc BridgedProcessEvent.Ëí <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedUploadBatchEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var proxyEventProcessor : EventProcessorType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb4a400023140 (0x4a400023140) in binary!
	0x7ca0  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0xb4a800023200 (0x4a800023200) in binary!
	0x6db8  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x8fac00023030 (0x7ac00023030) in binary!
	0x48000000c  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x7d8c00023108 (0x58c00023108) in binary!
	0xb46c  @objc BridgedUploadBatchEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x6d7c00023180 (0x57c00023180) in binary!
	0x8f70  @objc BridgedUploadBatchEventProcessor.(null) <stripped>

	// Swift methods
	0x22180  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:) // init 
	0x22460  class func BridgedUploadBatchEventProcessor.__allocating_init(client:endpoint:config:) // init 
 }

 class AppAnalytics.ActiveSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ActiveSessionType {

	// Properties
	let identifier : String // +0x10 (0x10)
	let kind : Kind // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : 3¶ // +0x22 (0x0)
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
WARNING: couldn't find address 0x7d8c00023108 (0x58c00023108) in binary!
	0xb46c  @objc BridgingLoggingEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x6d7c00023180 (0x57c00023180) in binary!
	0x8f70  @objc BridgingLoggingEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7d4fffb6348  @objc BridgingLoggingEventProcessor.(null) <stripped>
	0x69c00022e78  @objc BridgingLoggingEventProcessor.ÔLâ˙HãM–ËUp <stripped>

	// Swift methods
	0x22f00  class func BridgingLoggingEventProcessor.__allocating_init(format:) // init 
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
WARNING: couldn't find address 0x6d5c00023160 (0x55c00023160) in binary!
	0x8f50  @objc BridgedAccessTracker.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x664fffb8b38  @objc BridgedAccessTracker.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.SessionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject?
	var sessionChangeTracker : AccessTracker
	let block : AccessTracker

	// Swift methods
 }

 class AppAnalytics.DelayedToken : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let block : ()
	var sealed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8de400022f60 (0x5e400022f60) in binary!
	0x6bd8  @objc DelayedToken.(null) <stripped>
WARNING: couldn't find address 0x8dcc00022e50 (0x5cc00022e50) in binary!
	0x28000000c  @objc DelayedToken.(null) <stripped>
WARNING: couldn't find address 0x6bb400022fb8 (0x3b400022fb8) in binary!
	0x8da8  @objc DelayedToken.(null) <stripped>

	// Swift methods
	0x2de60  func <stripped> // method 
 }

 class AppAnalytics.LoggingEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logFormatter : LoggingEventProcessorFormatterType

	// Swift methods
	0x2e030  class func LoggingEventProcessor.__allocating_init(logFormat:) // init 
 }

 enum AppAnalytics.GZIPError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : π§
 }

 enum AppAnalytics.ExternalResult {

	// Properties
	case success : (value: A)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : q§
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
WARNING: couldn't find address 0x6bb400022fb8 (0x3b400022fb8) in binary!
	0x8da8  @objc BridgedProcessorManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x744fffc0fb0  @objc BridgedProcessorManager.(null) <stripped>

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
	let eventDate : 3¶ // +0x19 (0x0)
	let eventPath : String // +0x45545f5f (0x10)
	let sessionID : String // +0x0 (0x10)
	let appSessionID : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b4400022ec8 (0x34400022ec8) in binary!
	0x6b38  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6b2c00022ec0 (0x32c00022ec0) in binary!
	0x6b20  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6b1400022d68 (0x31400022d68) in binary!
	0x6b08  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x6afc00022f00 (0x2fc00022f00) in binary!
	0x8cf0  @objc BridgedEventData.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x534fffc1e48  @objc BridgedEventData.(null) <stripped>
	0x53cfffc2030  @objc BridgedEventData.1 <stripped>
	0x4a400022b38  @objc BridgedEventData.A_]√UHâÂAVAUSPIâ˝ˇïÍ <stripped>
WARNING: couldn't find address 0x22e8cfffc6f50 (0x68cfffc6f50) in binary!
	0x17000022b18  @objc BridgedEventData.(null) <stripped>

	// Swift methods
	0x33110  func <stripped> // method 
 }

 class AppAnalytics.BridgedTracker : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let identifier : String?
	let tracker : Tracker
	let eventMirrorStore : BridgedEventMirrorStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6adc00022e78 (0x2dc00022e78) in binary!
	0x6ad0  @objc BridgedTracker.(null) <stripped>
WARNING: couldn't find address 0x6ac400022ec8 (0x2c400022ec8) in binary!
	0x8cb8  @objc BridgedTracker.(null) <stripped>
WARNING: couldn't find address 0x318000000c (0x318000000c) in binary!
	0x68cfffc6f50  @objc BridgedTracker.(null) <stripped>
	0x304fffc6ce8  @objc BridgedTracker.t <stripped>

	// Swift methods
 }

 class AppAnalytics.BridgedTimedData : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : 3¶ // +0x87000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : 3¶ // +0x0 (0x0)
	let duration : Double // +0x87000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x683400022aa8 (0x3400022aa8) in binary!
	0x6828  @objc BridgedTimedData.(null) <stripped>
WARNING: couldn't find address 0x8f6d00022a60 (0x76d00022a60) in binary!
	0x6810  @objc BridgedTimedData.(null) <stripped>
	0x89f8  @objc BridgedTimedData.HÖ¿tY√Hç=‚ <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3dcfffc9cb0  @objc BridgedTimedData.(null) <stripped>
	0xfffca068  @objc BridgedTimedData.,LâÔËPô <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x344fffcb720  @objc BridgedTimedData.(null) <stripped>

	// Swift methods
	0x39890  func <stripped> // method 
 }

 struct AppAnalytics.Session {

	// Properties
	let identifier : String
	let appSessionID : String?
	let kind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : 3¶
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
	0x3a790  func <stripped> // method 
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
WARNING: couldn't find address 0xaeac00022a20 (0x6ac00022a20) in binary!
	0x67d8  @objc BridgedRawEvent.(null) <stripped>
WARNING: couldn't find address 0x89cc00022a50 (0x1cc00022a50) in binary!
	0x68000000c  @objc BridgedRawEvent.(null) <stripped>
WARNING: couldn't find address 0x67b400022ca8 (0x7b400022ca8) in binary!
	0x67a8  @objc BridgedRawEvent.(null) <stripped>

	// Swift methods
	0x3b460  class func BridgedRawEvent.__allocating_init(name:properties:) // init 
 }

 enum AppAnalytics.PushEvent {

	// Properties
	case actual : A
	case bridged : (A, String)
 }

 class AppAnalytics.Endpoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : § // +0x5 (0x0)
	let name : String // +0x15 (0x10)
	let sharedContainerIdentifier : String? // +0x65745f5f (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67b400022ca8 (0x7b400022ca8) in binary!
	0x67a8  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x679c000229d0 (0x79c000229d0) in binary!
	0x7660  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x678400022b88 (0x78400022b88) in binary!
	0x8978  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd9c90  @objc Endpoint.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x15cfffd9ca8  @objc Endpoint.(null) <stripped>
	0x134fffd9d10  @objc Endpoint.«Î <stripped>

	// Swift methods
	0x3d160  class func Endpoint.__allocating_init(url:name:sharedContainerIdentifier:) // init 
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
	case failed : ·°
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
	0x3f7f0  func <stripped> // getter 
	0x40e50  func <stripped> // method 
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
	let startTime : 3¶
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
WARNING: couldn't find address 0x715800022970 (0x15800022970) in binary!
	0x714c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x691000022948 (0x11000022948) in binary!
	0x7134  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x91bd00022920 (0x1bd00022920) in binary!
	0x7708  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x76fc000228f8 (0x6fc000228f8) in binary!
	0x91b2  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x76e4000228d0 (0x6e4000228d0) in binary!
	0x66e0  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x88d400022958 (0xd400022958) in binary!
	0x38000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x92df00022890 (0x2df00022890) in binary!
	0x66b0  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x88a400022928 (0xa400022928) in binary!
	0x18000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0xa83000022a48 (0x3000022a48) in binary!
	0x48000000c  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x667400022a10 (0x67400022a10) in binary!
	0x6668  @objc UploadBatchEventConfig.(null) <stripped>
WARNING: couldn't find address 0x665c00022a60 (0x65c00022a60) in binary!
	0x8850  @objc UploadBatchEventConfig.(null) <stripped>

	// Swift methods
	0x4b6a0  class func UploadBatchEventConfig.__allocating_init(batchSize:batchDebugging:) // init 
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
WARNING: couldn't find address 0x92df00022890 (0x2df00022890) in binary!
	0x66b0  @objc BridgedRawEventProperty.(null) <stripped>
WARNING: couldn't find address 0x88a400022928 (0xa400022928) in binary!
	0x18000000c  @objc BridgedRawEventProperty.(null) <stripped>
WARNING: couldn't find address 0xa83000022a48 (0x3000022a48) in binary!
	0x48000000c  @objc BridgedRawEventProperty.(null) <stripped>

	// Swift methods
	0x4c2a0  class func BridgedRawEventProperty.__allocating_init(dataName:requirement:) // init 
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
	case enabled : mö
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
WARNING: couldn't find address 0xa83000022a48 (0x3000022a48) in binary!
	0x48000000c  @objc UploadManager.(null) <stripped>

	// Swift methods
	0x528d0  func <stripped> // method 
	0x52c10  func <stripped> // method 
 }

 class AppAnalytics.Group : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : 3¶ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x667400022a10 (0x67400022a10) in binary!
	0x6668  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x665c00022a60 (0x65c00022a60) in binary!
	0x8850  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffede88  @objc Group.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x7e4ffff0540  @objc Group.(null) <stripped>

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
	let url : § // +0x45545f5f (0x0)
	var eventCount : Int // +0x0 (0x8)
	var byteSize : Int // +0x1d20 (0x8)
	var state : UploadDropboxFileState // +0x0 (0xa)
	var fileHandle : NSFileHandle? // +0x0 (0x8)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
 }

 class AppAnalytics.UploadDropboxFileManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxFileManagerType {
	// Swift methods
	0x57390  func <stripped> // method 
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

 class AppAnalytics.AppSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AppSessionManagerType,  AppSessionProviding {

	// Properties
	let accessQueue : OS_dispatch_queue
	var _appSessionID : String?
	var _sessionManagers : WeakSessionManager

	// Swift methods
	0x5a810  class func AppSessionManager.__allocating_init(accessQueue:) // init 
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
	case posixError : ªù
	case noSuchFileOrDirectory  
 }

 enum AppAnalytics.EventSubmitResult {

	// Properties
	case success : ProcessEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : ·°
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
WARNING: couldn't find address 0xa7e0000229f8 (0x7e0000229f8) in binary!
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
WARNING: couldn't find address 0x662400022a28 (0x62400022a28) in binary!
	0x6618  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x880c000227d0 (0xc000227d0) in binary!
	0x65f4  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x87f4000227a8 (0x7f4000227a8) in binary!
	0x87e8  @objc BridgedAppSessionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x1ccffff2190  @objc BridgedAppSessionManager.(null) <stripped>
	0xffff2268  @objc BridgedAppSessionManager.ÈÓ˛ˇˇêêêUHâÂˇV]√êêêêêêêUHâÂAWAVAUATSHÉÏ8LâËLâm»HâM–Iâ’IâÙHâu∏Hâ˚Hâ}¿Hâ«Ëô <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff2660  @objc BridgedAppSessionManager.(null) <stripped>
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
	0x627b0  func <stripped> // getter 
	0x627e0  func <stripped> // setter 
	0x62830  func <stripped> // modifyCoroutine 
	0x62450  class func FlushProcessor.__allocating_init(flushEvents:flushInterval:) // init 
	0x62a70  func <stripped> // method 
	0x62b90  func <stripped> // method 
	0x62ca0  func <stripped> // method 
	0x62f40  func <stripped> // method 
	0x62f50  func <stripped> // method 
	0x62f60  func <stripped> // method 
 }

 enum AppAnalytics.SessionChange { }

 class AppAnalytics.BridgedSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionObserver : SessionObserver

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xacb800022780 (0x4b800022780) in binary!
	0x65c8  @objc BridgedSessionObserver.(null) <stripped>
WARNING: couldn't find address 0x87bc00022840 (0x7bc00022840) in binary!
	0x18000000c  @objc BridgedSessionObserver.(null) <stripped>
WARNING: couldn't find address 0xa74800022960 (0x74800022960) in binary!
	0x38000000c  @objc BridgedSessionObserver.(null) <stripped>

	// Swift methods
	0x63bf0  func <stripped> // method 
 }

 class AppAnalytics.ProxyEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventProcessor : AAEventProcessorType
	let proxyEventProcessor : EventProcessorType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa74800022960 (0x74800022960) in binary!
	0x38000000c  @objc ProxyEventProcessor.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.DocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ≥ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ≥ñ
	let environmentName : String
	let fileManager : UploadDropboxFileManagerType
	let staticPathProvider : UploadDropboxPathProviderType

	// Swift methods
	0x64210  func <stripped> // getter 
	0x64360  func <stripped> // getter 
 }

 class AppAnalytics.BaseDocumentDirectoryUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURL : §
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugBaseURL : §

	// Swift methods
 }

 class AppAnalytics.StaticUploadDropboxPathProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UploadDropboxPathProviderType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_baseURL : ≥ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_debugBaseURL : ≥ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseURLProvider : üñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let debugURLProvider : üñ
	let fileManager : UploadDropboxFileManagerType

	// Swift methods
	0x647b0  func <stripped> // getter 
	0x647e0  func <stripped> // getter 
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
WARNING: couldn't find address 0xac5400022730 (0x45400022730) in binary!
	0x6580  @objc BridgedSessionData.(null) <stripped>
WARNING: couldn't find address 0x8774000227f8 (0x774000227f8) in binary!
	0x38000000c  @objc BridgedSessionData.(null) <stripped>
WARNING: couldn't find address 0xa9b5000226f8 (0x1b5000226f8) in binary!
	0x6550  @objc BridgedSessionData.(null) <stripped>

	// Swift methods
	0x657e0  class func BridgedSessionData.__allocating_init(key:data:) // init 
 }

 class AppAnalytics.BridgedEventProperty : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dataType : AADataEventType.Type
	let requirement : BridgedEventPropertyRequirement
	let dataKey : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa9b5000226f8 (0x1b5000226f8) in binary!
	0x6550  @objc BridgedEventProperty.(null) <stripped>
WARNING: couldn't find address 0x8744000227c8 (0x744000227c8) in binary!
	0x78000000c  @objc BridgedEventProperty.(null) <stripped>
WARNING: couldn't find address 0x6708000226a8 (0x708000226a8) in binary!
	0xac04  @objc BridgedEventProperty.(null) <stripped>

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
WARNING: couldn't find address 0x64cc00022660 (0x4cc00022660) in binary!
	0x64c0  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0x64b4000228b8 (0x4b4000228b8) in binary!
	0x6ebc  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0x869c00022720 (0x69c00022720) in binary!
	0xd8000000c  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0xa62800022840 (0x62800022840) in binary!
	0xaa43  @objc BridgedSessionManager.(null) <stripped>
WARNING: couldn't find address 0xaa4c00022448 (0x24c00022448) in binary!
	0xaa40  @objc BridgedSessionManager.(null) <stripped>

	// Swift methods
	0x67460  class func BridgedSessionManager.__allocating_init(accessQueue:) // init 
 }

 class AppAnalytics.BridgedAccessSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let accessSessionManager : AccessSessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6708000226a8 (0x708000226a8) in binary!
	0xac04  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x60f400022b28 (0xf400022b28) in binary!
	0x8582  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0xaaac00022660 (0x2ac00022660) in binary!
	0x64f0  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x86e400022768 (0x6e400022768) in binary!
	0x58000000c  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x64cc00022660 (0x4cc00022660) in binary!
	0x64c0  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x64b4000228b8 (0x4b4000228b8) in binary!
	0x6ebc  @objc BridgedAccessSessionManager.(null) <stripped>
WARNING: couldn't find address 0x869c00022720 (0x69c00022720) in binary!
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
	let startTimestamp : 3¶
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endTimestamp : 3¶
WARNING: couldn't find address 0x0 (0x0) in binary!
	let duration : ◊õ
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
WARNING: couldn't find address 0x63dc00022640 (0x3dc00022640) in binary!
	0x63d0  @objc ViewingSession.(null) <stripped>
WARNING: couldn't find address 0x85c400022648 (0x5c400022648) in binary!
	0x68000000c  @objc ViewingSession.(null) <stripped>
WARNING: couldn't find address 0xaa7400022508 (0x27400022508) in binary!
	0x5f80  @objc ViewingSession.(null) <stripped>

	// Swift methods
 }

 class AppAnalytics.ViewingSessionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessions : Session
	var activeSession : Session

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaa7400022508 (0x27400022508) in binary!
	0x5f80  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0xaa78000224e0 (0x278000224e0) in binary!
	0x8588  @objc ViewingSessionManager.(null) <stripped>
WARNING: couldn't find address 0x637c00022780 (0x37c00022780) in binary!
	0x8570  @objc ViewingSessionManager.(null) <stripped>
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
	var viewingSession : ViewingSession

	// Swift methods
 }
