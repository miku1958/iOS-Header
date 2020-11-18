 protocol TeaActivities.Navigator // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol TeaActivities.UserActivityDeserializer // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol TeaActivities.ActivityType // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol TeaActivities.Activity // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
 }
 protocol TeaActivities.UserActivitySerializer // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
	// method
 }
 protocol TeaActivities.StackNavigatingRouter // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
 }

 enum TeaActivities.StackNavigationStepResult {

	// Properties
	case pushed  
	case popped  
	case ignored  
	case done  
 }

 enum TeaActivities.StackPreviewStepResult {

	// Properties
	case preview : (vc: UIViewController)
	case ignored  
	case unavailable  
 }

 struct TeaActivities.AnyNavigator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let navigateBlock :  empty-list 
	let newWindowBlock : (_:)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let previewBlock :  empty-list 
 }

 struct TeaActivities.Route {

	// Properties
	let activity : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context :  empty-list 
	let setup : (_:)
	let metadata : Any?
 }

 enum TeaActivities.ActivityEligibilityOption {

	// Properties
	case search  
	case handoff  
	case publicIndexing  
	case prediction  
 }

 class TeaActivities.StackNavigator {
 class TeaActivities.WeakRouter {
 enum TeaActivities.StackNavigatorError {

	// Properties
	case userActivityNotConfigured  
	case failedToReachDesiredActivity  
	case infiniteNavigationLoop  
	case poppedRootRouter  
	case previewUnavailable  
	case reachedRootPreviewUnavailable  
 }

 class TeaActivities.UserActivityManager {
 enum TeaActivities.DeserializationError {

	// Properties
	case missingRequiredField : (field: String)
	case wrongType : (field: String)
 }
