 protocol FlowFrameKit.FlowFrameFactoryLoaderProtocol // 3 requirements
 {
	// class associated type access function
	// method
	// method
 }
 protocol FlowFrameKit.FlowFrameFactoryProtocol // 8 requirements
 {
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// method
	// method
 }
 protocol FlowFrameKit.FlowFrameProtocol // 10 requirements
 {
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// method
	// method
	// method
	// method
 }

 class FlowFrameKit.Node {
 struct FlowFrameKit.NodeIterator {

	// Properties
	var currentNode : Node
 }

 class FlowFrameKit.OrderedForest {
 class FlowFrameKit.AnyFlowFrameFactory {
 enum FlowFrameKit.FrameOperationType {

	// Properties
	case ongoing  
	case complete  
	case replan  
 }

 struct FlowFrameKit.FrameOperation {

	// Properties
	let type : FrameOperationType
	let next : AnyFrame
	let requireInput : Bool
	let onChildFrameCompletion : AnyChildCompletion
 }

 class FlowFrameKit.AnyChildCompletion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let completion : (_:_:)

	// Swift methods
	0x3f80  class func AnyChildCompletion.__allocating_init<A, B>(_:) // init 
	0x4780  func AnyChildCompletion.completion<A>(controller:exitValue:) // method 
 }

 class FlowFrameKit.MegaFrame {
 class FlowFrameKit.CancellableStack {
 class FlowFrameKit.InstrumentedCancellableStack {
 struct FlowFrameKit.RuntimeConfiguration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let perFrameOperationTimeout : '
 }

 class FlowFrameKit.FlowFrameRuntime {
 struct FlowFrameKit.TrackedFrame {

	// Properties
	let id : String
	let parentId : String
	let namespace : String
	let typeName : String
	let depth : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signpostId : Q&
 }

 struct FlowFrameKit.IllegalStateError {

	// Properties
	let message : String // +0x0
 }

 struct FlowFrameKit.NonUnderstanding {

	// Properties
	let message : String
	let input : A
 }

 struct FlowFrameKit.TimedOutError {

	// Properties
	let message : String // +0x0
 }

 struct FlowFrameKit.CancelledError {

	// Properties
	let message : String // +0x0
 }

 enum FlowFrameKit.Logger { }

 enum FlowFrameKit.LogConst { }

 enum FlowFrameKit.FlowFrameKitSignpost { }

 enum FlowFrameKit.Log { }

 enum FlowFrameKit.Understandable {

	// Properties
	case yes  
	case no  
 }

 class FlowFrameKit.AnyFrame {
