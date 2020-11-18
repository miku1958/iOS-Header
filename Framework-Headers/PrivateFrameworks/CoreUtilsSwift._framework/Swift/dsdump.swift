 struct __C._opaque_pthread_mutex_t {

	// Properties
	var __sig : Int
	var __opaque : (Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8)
 }

 struct __C._opaque_pthread_t {

	// Properties
	var __sig : Int
	var __cleanup_stack : UnsafeMutablePointer<__darwin_pthread_handler_rec>?
 }

 struct __C.__darwin_pthread_handler_rec {

	// Properties
	var __routine : @convention(c) (_:)?
	var __arg : UnsafeMutableRawPointer?
	var __next : UnsafeMutablePointer<__darwin_pthread_handler_rec>?
 }

 class CoreUtilsSwift.PThread : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _threadHandle : UnsafeMutablePointer<_opaque_pthread_t>?

	// Swift methods
	0x18b0  class func PThread.__allocating_init(_:) // init 
	0x1a50  class func static PThread.exit() // method 
	0x1a60  func PThread.exit() // method 
	0x1aa0  func PThread.detach() // method 
	0x1af0  func PThread.join() // method 
 }

 class CoreUtilsSwift.ClosureWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let closure : ()

	// Swift methods
 }

 class CoreUtilsSwift.PThreadMutex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _pthreadMutex : _opaque_pthread_mutex_t

	// Swift methods
	0x1ba0  class func PThreadMutex.__allocating_init() // init 
	0x1df0  func PThreadMutex.lock() // method 
	0x1e10  func PThreadMutex.unlock() // method 
 }

 enum CoreUtilsSwift.PrintUtilsTimeDuration {

	// Properties
	case duration  
 }
