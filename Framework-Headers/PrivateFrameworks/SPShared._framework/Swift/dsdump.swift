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
 protocol SPShared.DataRepresentable // 2 requirements
 {
	// getter
	// class init
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
	var reachability : SCNetworkReachability

	// Swift methods
	0x50e0  func <stripped> // getter 
	0x52c0  class func NetworkReachability.__allocating_init() // init 
 }

 class SPShared.UserDefaultsObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let defaults : NSUserDefaults
	let monitoredKeys : [String]
	var notify : (_:)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x38440000cfb8 (0x440000cfb8) in binary!
	0x2d20  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x38240000cf90 (0x240000cf90) in binary!
	0x3820  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x764ffffca70  @objc UserDefaultsObserver.(null) <stripped>
	0xffffcb48  @objc UserDefaultsObserver.tL‰ÿL‰îH‰ÂL‰ñE1Àè.¨ <stripped>

	// Swift methods
	0x6070  class func UserDefaultsObserver.__allocating_init(keys:defaults:notificationBlock:) // init 
	0x62f0  func <stripped> // method 
	0x63d0  func <stripped> // method 
 }

 enum SPShared.FutureError {

	// Properties
	case cancelled  
 }

 class SPShared.Future {
 class SPShared.Promise {
 class SPShared.KeyedThrottle {
 class SPShared.DispatchTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let nanosecondsPerSecond : Double
	let queue : OS_dispatch_queue
	let deadline : Int
	let repeating : Int
	let leeway : Int
	let source : OS_dispatch_source_timer
	let block : ()

	// Swift methods
	0xa8d0  func <stripped> // getter 
	0xa900  class func DispatchTimer.__allocating_init(queue:deadline:repeating:leeway:block:) // init 
	0xa9c0  func <stripped> // method 
	0xa9f0  func <stripped> // method 
 }

 class SPShared.DarwinNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var helpers : DarwinNotificationHelper

	// Swift methods
	0xb2f0  func <stripped> // method 
	0xb3b0  func <stripped> // method 
	0xb5a0  func <stripped> // method 
 }

 enum SPShared.Relativity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rightRelative : ‹@
WARNING: couldn't find address 0x0 (0x0) in binary!
	case leftRelative : ‹@
WARNING: couldn't find address 0x0 (0x0) in binary!
	case absolute : ‹@
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
	let options : Options // +0x10
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : A
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let initializationVector : á> // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : á> // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cipherText : á> // +0x20
 }

 class SPShared.XPCSession {
 enum SPShared.DataError {

	// Properties
	case invalidRangeForType  
 }

 enum SPShared.Scheduler { }

 class SPShared.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var _isCanceled : Bool
	var _cancellationBlocks : [()]
	let accessQueue : OS_dispatch_queue

	// Swift methods
	0x24810  func <stripped> // method 
	0x249c0  func <stripped> // getter 
 }

 class SPShared._ImmediateScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
 }

 class SPShared._MainThreadScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
	0x24da0  func <stripped> // method 
	0x24f50  func <stripped> // method 
 }

 class SPShared._QueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x25570  func <stripped> // method 
	0x25730  func <stripped> // method 
	0x25940  func <stripped> // method 
 }

 class SPShared._OperationQueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : NSOperationQueue

	// Swift methods
	0x25c40  func <stripped> // method 
	0x25d70  func <stripped> // method 
 }

 enum SPShared.LegacyResult {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failure : II
 }

 class SPShared.Lock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLock : os_unfair_lock_s

	// Swift methods
	0x27610  class func Lock.__allocating_init() // init 
 }

 class SPShared.DarwinNotificationHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var notificationHandlers : CFString

	// Swift methods
	0x27950  class func DarwinNotificationHelper.__allocating_init(notificationHandlers:) // init 
	0x28060  func <stripped> // method 
 }

 enum SPShared.DispatchUtilities { }

 class SPShared.PerformanceCapture : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let flag : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : ý< // +0x0 (0x0)
	var duration : Double // +0x19 (0x8)

	// Swift methods
	0x2adb0  func <stripped> // getter 
	0x2ade0  class func PerformanceCapture.__allocating_init(flag:) // init 
	0x2af30  func <stripped> // method 
 }

 class SPShared.XPCSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_listenerTrampoline : _XPCListenerDelegateTrampoline
	var listeners : MachServiceName

	// Swift methods
	0x2b270  func <stripped> // getter 
	0x2b300  class func XPCSessionManager.__allocating_init(name:) // init 
	0x2b380  func <stripped> // method 
 }

 class SPShared._XPCListenerDelegateTrampoline : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessionManager : XPCSessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x37f60000cf28 (0x7f60000cf28) in binary!
	0x37f8  @objc _XPCListenerDelegateTrampoline.(null) <stripped>
WARNING: couldn't find address 0x37f40000cf18 (0x7f40000cf18) in binary!
	0x1  @objc _XPCListenerDelegateTrampoline.(null) <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x4  @objc _XPCListenerDelegateTrampoline.(null) <stripped>

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
 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : +I
 }

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.sockaddr {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_len : GI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_family : GI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_data : ÛH
 }

 struct __C.sockaddr_in {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_len : GI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_family : GI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_port : YI
	var sin_addr : in_addr
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_zero : íH
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s_addr : +I
 }
