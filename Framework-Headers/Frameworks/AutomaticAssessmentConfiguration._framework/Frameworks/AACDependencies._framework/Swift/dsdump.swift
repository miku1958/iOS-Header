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
	0x1890  @objc AEDNoOpPolicyScratchpad.persist()
	0x18a0  @objc AEDNoOpPolicyScratchpad.remove()
	0x18b0  @objc AEDNoOpPolicyScratchpad.setNumber(_:forKey:)
	0x18c0  @objc AEDNoOpPolicyScratchpad.number(forKey:)
	0x18d0  @objc AEDNoOpPolicyScratchpad.setString(_:forKey:)
	0x1a00  @objc AEDNoOpPolicyScratchpad.string(forKey:)

	// Swift methods
 }

 class AACDependencies.AEDNoOpPolicyStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x1920  @objc AEDNoOpPolicyStore.writeOnlyScratchpad(forIdentifier:)
	0x1950  @objc AEDNoOpPolicyStore.readOnlyScratchpad(forIdentifier:)
	0x1960  @objc AEDNoOpPolicyStore.removeAllScratchpads()

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
	0x1aa0  @objc AEDBackingAssessmentSession.delegate.getter
	0x1b20  @objc AEDBackingAssessmentSession.delegate.setter
	0x1d00  @objc AEDBackingAssessmentSession.isActive.getter
	0x1df0  @objc AEDBackingAssessmentSession.().init()
	0x1ef0  @objc AEDBackingAssessmentSession.init(configuration:)
	0x27f0  @objc AEDBackingAssessmentSession.begin()
	0x2e80  @objc AEDBackingAssessmentSession.end()
	0x2ee0  @objc AEDBackingAssessmentSession.__ivar_destroyer

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
	0x3930  @objc AEDBridgedDeactivationRunner.deactivate(completion:)
	0x3a30  @objc AEDBridgedDeactivationRunner.identifier.getter
	0x3a80  @objc AEDBridgedDeactivationRunner.event.getter

	// Swift methods
 }

 class AACDependencies.AEDBackingAssessmentConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x3bf0  @objc AEDBackingAssessmentConfiguration.init()
 }

 class AACDependencies.AEDSynchronousDeactivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deactivation : AEDSynchronousDeactivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x3ca0  @objc AEDSynchronousDeactivationRunner.identifier.getter
	0x3d20  @objc AEDSynchronousDeactivationRunner.event.getter
	0x3d80  @objc AEDSynchronousDeactivationRunner.deactivate(completion:)

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
	0x3ea0  @objc AEDSynchronousActivationRunner.identifier.getter
	0x3f20  @objc AEDSynchronousActivationRunner.event.getter
	0x3f80  @objc AEDSynchronousActivationRunner.prepareForActivation(with:)
	0x3ff0  @objc AEDSynchronousActivationRunner.deactivation(for:)
	0x4070  @objc AEDSynchronousActivationRunner.activate(invalidationHandler:completion:)

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
	0x5110  @objc AEDNonPersistingResultBasedActivationRunner.identifier.getter
	0x5160  @objc AEDNonPersistingResultBasedActivationRunner.event.getter
	0x5180  @objc AEDNonPersistingResultBasedActivationRunner.activate(invalidationHandler:completion:)
	0x5200  @objc AEDNonPersistingResultBasedActivationRunner.prepareForActivation(with:)
	0x5210  @objc AEDNonPersistingResultBasedActivationRunner.deactivation(for:)

	// Swift methods
 }

 class AACDependencies.AEDNonPersistingSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDNonPersistingSynchronousActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x5500  @objc AEDNonPersistingSynchronousActivationRunner.identifier.getter
	0x5580  @objc AEDNonPersistingSynchronousActivationRunner.event.getter
	0x55e0  @objc AEDNonPersistingSynchronousActivationRunner.prepareForActivation(with:)
	0x55f0  @objc AEDNonPersistingSynchronousActivationRunner.deactivation(for:)
	0x5600  @objc AEDNonPersistingSynchronousActivationRunner.activate(invalidationHandler:completion:)

	// Swift methods
 }

 class AACDependencies.AEDResultBasedActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDResultBasedActivation // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x57d0  @objc AEDResultBasedActivationRunner.identifier.getter
	0x5850  @objc AEDResultBasedActivationRunner.event.getter
	0x58b0  @objc AEDResultBasedActivationRunner.prepareForActivation(with:)
	0x5920  @objc AEDResultBasedActivationRunner.deactivation(for:)
	0x59a0  @objc AEDResultBasedActivationRunner.activate(invalidationHandler:completion:)

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
