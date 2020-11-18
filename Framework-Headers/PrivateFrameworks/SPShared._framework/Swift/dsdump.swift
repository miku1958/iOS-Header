 protocol SPShared.PromiseProtocol // 4 requirements
 {
	// class associated type access function
	// method
	// method
	// method
 }
 protocol SPShared.Subscribable // 5 requirements
 {
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol SPShared.Cancellable // 1 requirements
 {
	// method
 }
 protocol SPShared.SchedulerProtocol // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SPShared.Entitlement // 1 requirements
 {
	// class base protocol
 }

 enum SPShared.NetworkReachabilityStatus {

	// Properties
	case notReachable  
	case reachableViaWiFi  
	case reachableViaWWAN  
 }

 class SPShared.NetworkReachability : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var reachability : SCNetworkReachabilityRef? // +0x10 (0x8)

	// Swift methods
	0x51d0  func NetworkReachability.status.getter // getter 
	0x5410  class func NetworkReachability.__allocating_init() // init 
 }

 class SPShared.UserDefaultsObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let defaults : NSUserDefaults // +0x8 (0x8)
	let monitoredKeys : [String] // +0x10 (0x8)
	var notify : (_:) // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x7e70  @objc UserDefaultsObserver.dealloc <stripped>
	0x8150  @objc UserDefaultsObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x8350  @objc UserDefaultsObserver.init <stripped>
	0x7ed0  @objc UserDefaultsObserver..cxx_destruct <stripped>

	// Swift methods
	0x7b90  class func UserDefaultsObserver.__allocating_init(keys:defaults:notificationBlock:) // init 
	0x7f20  func UserDefaultsObserver.start() // method 
	0x8000  func UserDefaultsObserver.stop() // method 
 }

 enum SPShared.FutureError {

	// Properties
	case cancelled  
 }

 class SPShared.Future {
 class SPShared.Promise {
 class SPShared.DispatchTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let nanosecondsPerSecond : Double // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)
	let deadline : Int // +0x20 (0x8)
	let repeating : Int // +0x28 (0x8)
	let leeway : Int // +0x30 (0x8)
	let source : OS_dispatch_source_timer // +0x38 (0x8)
	let block : () // +0x40 (0x10)

	// Swift methods
	0xbe00  func DispatchTimer.isCancelled.getter // getter 
	0xbe40  class func DispatchTimer.__allocating_init(queue:deadline:repeating:leeway:block:) // init 
	0xc070  func DispatchTimer.resume() // method 
	0xc0a0  func DispatchTimer.cancel() // method 
 }

 class SPShared.DarwinNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var helpers : [DarwinNotificationHelper] // +0x10 (0x8)

	// Swift methods
	0xc8a0  func DarwinNotificationManager.registerHelper(helper:) // method 
	0xc990  func DarwinNotificationManager.unregisterHelper(helper:) // method 
	0xcbd0  func DarwinNotificationManager.setUp() // method 
 }

 enum SPShared.Relativity {

	// Properties
	case rightRelative : (now: Date)
	case leftRelative : (now: Date)
	case absolute  
 }

 enum SPShared.ExtendedAttributeError {

	// Properties
	case failed : (result: Int)
 }

 struct SPShared.MachServiceName {

	// Properties
	let name : String // +0x0
 }

 struct SPShared.XPCServiceDescription {

	// Properties
	let machServiceName : MachServiceName // +0x0
	let options : NSXPCConnectionOptions // +0x10
	let exportedObject : NSObject? // +0x18
	let exportedInterface : NSXPCInterface? // +0x20
	let remoteObjectInterface : NSXPCInterface? // +0x28
	let shouldAccept : (_:)? // +0x30
	let interruptionHandler : (_:)? // +0x40
	let invalidationHandler : (_:)? // +0x50
 }

 struct SPShared.SystemVersionNumber {

	// Properties
	let baseNumber : Int // +0x0
	let baseLetter : Character // +0x8
	let buildNumber : Int // +0x18
	let suffix : Character? // +0x20
 }

 enum SPShared.PrivilegeDropper { }

 enum SPShared.User {

	// Properties
	case mobile  
	case root  
 }

 enum SPShared.UserPrivilegeError {

	// Properties
	case errorSettingGID  
	case errorSettingInitGroups  
	case errorSettingUID  
	case cannotDropPriviledges  
 }

 struct SPShared.FileCombiner { }

 enum SPShared.FileCombinerError {

	// Properties
	case couldNotCreateOutputStream  
 }

 struct SPShared.Subscription {

	// Properties
	let subscriber : A
	let identifier : UUID
	let unsubscribeBlock : Subscription
 }

 enum SPShared.CryptoError {

	// Properties
	case parameterError  
	case bufferToSmall  
	case memoryFailure  
	case alignmentError  
	case decodeError  
	case unimplemented  
	case overflow  
	case rngFailure  
	case unspecifiedError  
	case callSequenceError  
	case keySizeError  
	case invalidKey  
	case encodeError  
 }

 enum SPShared.HmacAlgorithm {

	// Properties
	case sha1  
	case md5  
	case sha224  
	case sha256  
	case sha384  
	case sha512  
 }

 enum SPShared.HashAlgorithm {

	// Properties
	case sha256  
 }

 enum SPShared.FileHandleHashError {

	// Properties
	case unsupported  
 }

 struct SPShared.EncryptedData {

	// Properties
	let initializationVector : Data // +0x0
	let tag : Data // +0x10
	let cipherText : Data // +0x20
 }

 class SPShared.XPCSession {
 enum SPShared.Scheduler { }

 class SPShared.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var _isCanceled : Bool
	var _cancellationBlocks : [()]
	let accessQueue : OS_dispatch_queue

	// Swift methods
	0x24b30  func <stripped> // method 
	0x24d00  func <stripped> // getter 
 }

 class SPShared._ImmediateScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
 }

 class SPShared._MainThreadScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
	0x253c0  func <stripped> // method 
	0x255c0  func <stripped> // method 
 }

 class SPShared._QueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x25cc0  func <stripped> // method 
	0x25f10  func <stripped> // method 
	0x26270  func <stripped> // method 
 }

 class SPShared._OperationQueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : NSOperationQueue

	// Swift methods
	0x26650  func <stripped> // method 
	0x267c0  func <stripped> // method 
 }

 enum SPShared.LegacyResult {

	// Properties
	case success : A
	case failure : Error
 }

 class SPShared.DarwinNotificationHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var notificationHandlers : [CFStringRef : ()] // +0x10 (0x8)

	// Swift methods
	0x27d40  class func DarwinNotificationHelper.__allocating_init(notificationHandlers:) // init 
	0x28870  func DarwinNotificationHelper.onNotification(notificationName:) // method 
 }

 enum SPShared.DispatchUtilities { }

 class SPShared.PerformanceCapture : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let flag : String // +0x10 (0x10)
	let start : Date // +0x0 (0x0)
	var duration : Double // +0x0 (0x8)

	// Swift methods
	0x2a9d0  func PerformanceCapture.duration.getter // getter 
	0x2aa00  class func PerformanceCapture.__allocating_init(flag:) // init 
	0x2aba0  func PerformanceCapture.finished() // method 
 }

 class SPShared.XPCSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_listenerTrampoline : _XPCListenerDelegateTrampoline
	var listeners : ListenerRecord

	// Swift methods
	0x2b250  class func XPCSessionManager.__allocating_init(name:) // init 
	0x2b310  func XPCSessionManager.register(service:) // method 
 }

 class SPShared._XPCListenerDelegateTrampoline : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessionManager : XPCSessionManager

	// ObjC -> Swift bridged methods
	0x2bf50  @objc _XPCListenerDelegateTrampoline.listener:shouldAcceptNewConnection: <stripped>
	0x2bff0  @objc _XPCListenerDelegateTrampoline.init <stripped>
	0x2c070  @objc _XPCListenerDelegateTrampoline..cxx_destruct <stripped>

	// Swift methods
 }

 struct SPShared.ListenerRecord {

	// Properties
	let service : XPCServiceDescription // +0x0
	let listener : NSXPCListener // +0x60
 }

 class __C.CFString {
 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 class __C.SCNetworkReachability {
 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.sockaddr {

	// Properties
	var sa_len : UInt8
	var sa_family : UInt8
	var sa_data : (Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8)
 }

 struct __C.sockaddr_in {

	// Properties
	var sin_len : UInt8
	var sin_family : UInt8
	var sin_port : UInt16
	var sin_addr : in_addr
	var sin_zero : (Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8)
 }

 struct __C.DirectoryEnumerationOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.in_addr {

	// Properties
	var s_addr : UInt32
 }
