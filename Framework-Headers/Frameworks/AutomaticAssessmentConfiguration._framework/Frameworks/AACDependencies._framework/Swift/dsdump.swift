 protocol AACDependencies.AEDBridgedDeactivation // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol AACDependencies.AEDSynchronousDeactivation // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol AACDependencies.AEDAssessmentPolicySessionPrimitives // 1 requirements
 {
	// getter
 }
 protocol AACDependencies.AEDSynchronousActivation // 5 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
 }
 protocol AACDependencies.AEDNonPersistingResultBasedActivation // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol AACDependencies.AEDNonPersistingSynchronousActivation // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol AACDependencies.AEDResultBasedActivation // 5 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
 }

 enum __C.AEPolicySessionEvent { }

 class AACDependencies.AEDNoOpPolicyScratchpad : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x1850  @objc AEDNoOpPolicyScratchpad.persist()
	0x1860  @objc AEDNoOpPolicyScratchpad.remove()
	0x1870  @objc AEDNoOpPolicyScratchpad.setNumber(_:forKey:)
	0x1880  @objc AEDNoOpPolicyScratchpad.number(forKey:)
	0x1890  @objc AEDNoOpPolicyScratchpad.setString(_:forKey:)
	0x19c0  @objc AEDNoOpPolicyScratchpad.string(forKey:)

	// Swift methods
 }

 class AACDependencies.AEDNoOpPolicyStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x18e0  @objc AEDNoOpPolicyStore.writeOnlyScratchpad(forIdentifier:)
	0x1910  @objc AEDNoOpPolicyStore.readOnlyScratchpad(forIdentifier:)
	0x1920  @objc AEDNoOpPolicyStore.removeAllScratchpads()

	// Swift methods
 }

 class AACDependencies.AEDBackingAssessmentSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : AEDBackingAssessmentConfiguration // +0x8 (0x8)
	let policyBundleFactory : AEDAssessmentPolicyBundleFactory // +0x10 (0x40)
	var policySession : AEPolicySession? // +0x50 (0x8)
	var state : SessionState // +0x58 (0x1)
	var delegate : weak AEDBackingAssessmentSessionDelegate? // +0x60 (0x8)

	// ObjC -> Swift bridged methods
	0x1a60  @objc AEDBackingAssessmentSession.delegate.getter
	0x1ae0  @objc AEDBackingAssessmentSession.delegate.setter
	0x1cc0  @objc AEDBackingAssessmentSession.isActive.getter
	0x1db0  @objc AEDBackingAssessmentSession.().init()
	0x1eb0  @objc AEDBackingAssessmentSession.init(configuration:)
	0x27b0  @objc AEDBackingAssessmentSession.begin()
	0x2e40  @objc AEDBackingAssessmentSession.end()
	0x2ea0  @objc AEDBackingAssessmentSession.__ivar_destroyer

	// Swift methods
 }

 enum AACDependencies.SessionState {

	// Properties
	case inactive  
	case activating  
	case active  
	case deactivating  
 }

 class AACDependencies.AEDBridgedDeactivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deactivation : AEDBridgedDeactivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x38f0  @objc AEDBridgedDeactivationRunner.deactivate(completion:)
	0x39f0  @objc AEDBridgedDeactivationRunner.identifier.getter
	0x3a40  @objc AEDBridgedDeactivationRunner.event.getter

	// Swift methods
 }

 class AACDependencies.AEDBackingAssessmentConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x3bb0  @objc AEDBackingAssessmentConfiguration.init()
 }

 class AACDependencies.AEDSynchronousDeactivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deactivation : AEDSynchronousDeactivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x3c60  @objc AEDSynchronousDeactivationRunner.identifier.getter
	0x3ce0  @objc AEDSynchronousDeactivationRunner.event.getter
	0x3d40  @objc AEDSynchronousDeactivationRunner.deactivate(completion:)

	// Swift methods
 }

 struct AACDependencies.AEDConcreteAssessmentPolicySessionPrimitives: AEDAssessmentPolicySessionPrimitives {

	// Properties
	let singleAppModePrimitives : AERSingleAppModePrimitives // +0x0
 }

 class AACDependencies.AEDSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDSynchronousActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x3e60  @objc AEDSynchronousActivationRunner.identifier.getter
	0x3ee0  @objc AEDSynchronousActivationRunner.event.getter
	0x3f40  @objc AEDSynchronousActivationRunner.prepareForActivation(with:)
	0x3fb0  @objc AEDSynchronousActivationRunner.deactivation(for:)
	0x4030  @objc AEDSynchronousActivationRunner.activate(invalidationHandler:completion:)

	// Swift methods
 }

 struct AACDependencies.AEDAssessmentPolicyBundleFactory {

	// Properties
	let primitives : AEDAssessmentPolicySessionPrimitives // +0x0
	let preferences : AEPreferences // +0x28
	let policyStore : AEPolicyStore // +0x30
	let performancePrimitives : AEPerformancePrimitives // +0x38
 }

 class AACDependencies.AEDNonPersistingResultBasedActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDNonPersistingResultBasedActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x50d0  @objc AEDNonPersistingResultBasedActivationRunner.identifier.getter
	0x5120  @objc AEDNonPersistingResultBasedActivationRunner.event.getter
	0x5140  @objc AEDNonPersistingResultBasedActivationRunner.activate(invalidationHandler:completion:)
	0x51c0  @objc AEDNonPersistingResultBasedActivationRunner.prepareForActivation(with:)
	0x51d0  @objc AEDNonPersistingResultBasedActivationRunner.deactivation(for:)

	// Swift methods
 }

 class AACDependencies.AEDNonPersistingSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDNonPersistingSynchronousActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x54c0  @objc AEDNonPersistingSynchronousActivationRunner.identifier.getter
	0x5540  @objc AEDNonPersistingSynchronousActivationRunner.event.getter
	0x55a0  @objc AEDNonPersistingSynchronousActivationRunner.prepareForActivation(with:)
	0x55b0  @objc AEDNonPersistingSynchronousActivationRunner.deactivation(for:)
	0x55c0  @objc AEDNonPersistingSynchronousActivationRunner.activate(invalidationHandler:completion:)

	// Swift methods
 }

 class AACDependencies.AEDResultBasedActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDResultBasedActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x5790  @objc AEDResultBasedActivationRunner.identifier.getter
	0x5810  @objc AEDResultBasedActivationRunner.event.getter
	0x5870  @objc AEDResultBasedActivationRunner.prepareForActivation(with:)
	0x58e0  @objc AEDResultBasedActivationRunner.deactivation(for:)
	0x5960  @objc AEDResultBasedActivationRunner.activate(invalidationHandler:completion:)

	// Swift methods
 }

 struct AACDependencies.AEDSingleAppModeActivation {

	// Properties
	let identifier : String // +0x0
	let event : AEPolicySessionEvent // +0x10
	let primitives : AERSingleAppModePrimitives // +0x18
 }

 struct AACDependencies.AEDSingleAppModeDeactivation {

	// Properties
	let identifier : String // +0x0
	let event : AEPolicySessionEvent // +0x10
	let session : AERSingleAppModeSession // +0x18
 }
