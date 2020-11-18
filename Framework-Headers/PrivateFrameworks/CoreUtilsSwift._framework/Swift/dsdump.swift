 struct __C._opaque_pthread_t {

	// Properties
	var __sig : Int
	var __cleanup_stack : __darwin_pthread_handler_rec
 }

 struct __C._opaque_pthread_mutex_t {

	// Properties
	var __sig : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __opaque : o
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : Ã
 }

 struct __C.__darwin_pthread_handler_rec {

	// Properties
	var __routine : @convention(c) (_:)?
	var __arg : UnsafeMutableRawPointer?
	var __next : __darwin_pthread_handler_rec
 }

 enum CoreUtilsSwift.CommonError {

	// Properties
	case nothingParsed  
	case outOfRange  
	case signUnexpected  
	case underrun  
 }

 class CoreUtilsSwift.BaseError : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let domain : String
	let code : Int
	let message : String?
	let underlyingError : BaseError

	// Swift methods
	0x1ae0  class func BaseError.__allocating_init(domain:code:message:underlyingError:) // init 
 }

 class CoreUtilsSwift.OSUnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
	0x7810  class func OSUnfairLock.__allocating_init() // init 
	0x78d0  func <stripped> // method 
	0x78e0  func <stripped> // method 
	0x78f0  func <stripped> // method 
 }

 class CoreUtilsSwift.PThread : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _threadHandle : _opaque_pthread_t

	// Swift methods
	0x7940  class func PThread.__allocating_init(_:) // init 
	0x7b40  class func <stripped> // method 
	0x7b50  func <stripped> // method 
	0x7b90  func <stripped> // method 
	0x7be0  func <stripped> // method 
 }

 class CoreUtilsSwift.ClosureWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let closure : ()

	// Swift methods
 }

 class CoreUtilsSwift.PThreadMutex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _pthreadMutex : _opaque_pthread_mutex_t // +0x0

	// Swift methods
	0x7c40  class func PThreadMutex.__allocating_init() // init 
	0x7d30  func <stripped> // method 
	0x7d50  func <stripped> // method 
	0x7d90  func <stripped> // method 
 }

 struct CoreUtilsSwift.StdErrTextStream { }

 struct CoreUtilsSwift.StdOutTextStream { }

 struct CoreUtilsSwift.PrintUtilsIntegerFormat {

	// Properties
	let padChar : String // +0x0
	let prefix : String // +0x10
	let radix : Int // +0x20
	let uppercase : Bool // +0x28
 }

 enum CoreUtilsSwift.PrintUtilsJustification {

	// Properties
	case left  
	case right  
 }

 enum CoreUtilsSwift.PrintUtilsTimeDuration {

	// Properties
	case duration  
 }

 enum CoreUtilsSwift.PrintUtilsHexFormat {

	// Properties
	case hex  
	case HEX  
 }
