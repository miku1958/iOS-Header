 protocol SiriAppResolution.AppFinding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriAppResolution.AppResolving // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol SiriAppResolution.AppPolicyHandling // 1 requirements
 {
	// method
 }
 protocol SiriAppResolution.AppResolutionStateProviding // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol SiriAppResolution.AppSelecting // 1 requirements
 {
	// method
 }
 protocol SiriAppResolution.InstrumentedAppSelecting // 1 requirements
 {
	// method
 }

 enum __C.DMFPolicy { }

 enum __C.INSiriAuthorizationStatus { }

 enum SiriAppResolution.AppFinder { }

 class SiriAppResolution.SiriRememberedAppResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6e00  class func SiriRememberedAppResolver.__allocating_init() // init 
	0x6e30  func SiriRememberedAppResolver.selectAppFor(intent:fromEligibleApps:completion:) // method 
 }

 class SiriAppResolution.AppSelectionService {
 class SiriAppResolution.EligibleAppFinder {
 class SiriAppResolution.InstrumentedAppResolutionService {
 enum SiriAppResolution.Logger { }

 enum SiriAppResolution.Log { }

 enum SiriAppResolution.LogConst { }

 enum SiriAppResolution.Category { }

 enum SiriAppResolution.SiriAppResolutionSignpost { }

 class SiriAppResolution.DefaultAppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let defaultApps : App

	// Swift methods
	0xab70  class func DefaultAppSelector.__allocating_init(defaultAppBundles:) // init 
	0xabf0  class func DefaultAppSelector.__allocating_init(defaultApps:) // init 
	0xae10  func DefaultAppSelector.selectAppFor(intent:fromEligibleApps:completion:) // method 
 }

 enum SiriAppResolution.AppResolutionResult {

	// Properties
	case needsConfirmation : App
	case needsDisambiguation : App
	case selected : App
	case unsuccessful : AppResolutionResultError
 }

 enum SiriAppResolution.AppResolutionResultError {

	// Properties
	case appNotSupported : App
	case screenTimeEnabled : App
	case noAppFound  
 }

 enum SiriAppResolution.Cardinality {

	// Properties
	case one : A
	case many : [A]
	case zero  
 }

 class SiriAppResolution.App : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appIdentifier : String?
	let pluginIdentifier : String?
	let systemExtensionBundleId : String?
	let systemUIExtensionBundleId : String?

	// Swift methods
	0xea50  func App.description.getter // getter 
	0xec40  func App.debugDescription.getter // getter 
	0xec60  func App.hash(into:) // method 
	0xed90  class func App.__allocating_init(appIdentifier:systemExtensionBundleId:systemUIExtensionBundleId:pluginIdentifier:) // init 
	0xeec0  func App.hashValue.getter // getter 
 }

 enum SiriAppResolution.InstrumentedResult {

	// Properties
	case inferred : AppResolutionResult
	case defaulted : AppResolutionResult
	case userRequested : AppResolutionResult
	case userChanged : AppResolutionResult
	case failed : AppSelectionFailure
 }

 enum SiriAppResolution.AppResolutionConfirmation {

	// Properties
	case cancelled  
	case confirmed  
	case rejected  
 }

 struct SiriAppResolution.AppResolutionStateProvider: AppResolutionStateProviding {

	// Properties
	let requestedApp : App // +0x0
	let suggestedApp : App // +0x8
	let confirmationResponse : AppResolutionConfirmation // +0x10
	let correctionResponse : AppResolutionConfirmation // +0x11
 }

 enum SiriAppResolution.AppSelectionResponse {

	// Properties
	case unset  
	case rejectedAppConfirmation  
	case confirmedAppConfirmation  
	case requestedAppCorrection  
 }

 class SiriAppResolution.AppResolutionService {
 enum SiriAppResolution.AppSelectionFailure {

	// Properties
	case noAppSelected  
 }

 struct SiriAppResolution.AppDisplayInfo {

	// Properties
	let displayName : String // +0x0
	let isFirstParty : Bool // +0x10
 }

 class SiriAppResolution.AppPolicyHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var appPolicyMonitor : DMFApplicationPolicyMonitor?
	let appQueue : OS_dispatch_queue
	var unsafeApps : DMFPolicy

	// Swift methods
	0x132e0  func AppPolicyHandler.isAllowedByScreenTime(bundleIdentifier:) // method 
	0x13930  func AppPolicyHandler.register(bundleIdentifier:) // method 
	0x13f30  func AppPolicyHandler.getDMFPolicy(bundleIdentifier:) // method 
	0x14650  func AppPolicyHandler.refreshAllAppsAsync() // method 
	0x14860  func AppPolicyHandler.refreshAppsAsync(bundleIdentifiers:) // method 
 }

 class SiriAppResolution.AppResolutionEventSending : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : AppResolutionResult

	// Swift methods
 }
