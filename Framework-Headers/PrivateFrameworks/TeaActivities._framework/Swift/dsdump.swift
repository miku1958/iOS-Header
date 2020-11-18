 protocol TeaActivities.Navigator // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
	// method
 }
 protocol TeaActivities.UserActivityDeserializer // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
 }
 protocol TeaActivities.StateRestorationActivityProvider // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol TeaActivities.ActivityType // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol TeaActivities.Activity // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
 }
 protocol TeaActivities.UserActivitySerializer // 7 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
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

 enum TeaActivities.NavigatorPresentationContext {

	// Properties
	case newTab : (requestScene: UIScene?)
	case default  
	case newWindow  
 }

 struct TeaActivities.AnyNavigator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let navigateBlock :  empty-list 
	let newSceneBlock : NavigatorPresentationContext
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
 enum TeaActivities.PresentationContext {

	// Properties
	case currentContext  
	case newWindow  
	case newTab  
 }

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
