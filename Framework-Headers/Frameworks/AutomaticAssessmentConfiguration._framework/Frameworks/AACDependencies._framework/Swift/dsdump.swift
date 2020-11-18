 protocol AACDependencies.AEDBackingAssessmentConfigurationValidating // 1 requirements
 {
	// method
 }
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

 class AACDependencies.AEDAutocorrectModeConfigurationValidator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum AACDependencies.AEDAutocorrectModeError {

	// Properties
	case punctuationWithoutSpelling  
 }

 class AACDependencies.AEDNoOpPolicyScratchpad : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1ef300007210 (0x6f300007210) in binary!
	0x1ee7  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x277800007208 (0x77800007208) in binary!
	0x1ec4  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x276000007200 (0x76000007200) in binary!
	0x1eac  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x18cffff9cf0  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
	0x20cffff9f38  @objc AEDNoOpPolicyScratchpad.AVSHƒì I‰ÖH‰ûH€è <stripped>
	0x144ffffa100  @objc AEDNoOpPolicyScratchpad.E¨ <stripped>

	// Swift methods
 }

 class AACDependencies.AEDNoOpPolicyStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1f1800007238 (0x71800007238) in binary!
	0x1f0c  @objc AEDNoOpPolicyStore.(null) <stripped>
WARNING: couldn't find address 0x1f0b00007210 (0x70b00007210) in binary!
	0x68000000c  @objc AEDNoOpPolicyStore.(null) <stripped>
WARNING: couldn't find address 0x1ef300007210 (0x6f300007210) in binary!
	0x1ee7  @objc AEDNoOpPolicyStore.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDBackingAssessmentSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : AEDBackingAssessmentConfiguration
	let policyBundleFactory : AEDAssessmentPolicyBundleFactory
	let configurationValidator : AEDBackingAssessmentConfigurationValidating
	var policySession : AEPolicySession?
	var state : SessionState
	var delegate : weak AEDBackingAssessmentSessionDelegate?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2180000071a0 (0x180000071a0) in binary!
	0x1c84  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1d3c00007178 (0x53c00007178) in binary!
	0x215c  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1e6800007158 (0x66800007158) in binary!
	0x1d02  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1cf600007130 (0x4f600007130) in binary!
	0x1cea  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xf4ffffbd68  @objc AEDBackingAssessmentSession.(null) <stripped>
	0xffffbe90  @objc AEDBackingAssessmentSession. <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xbcffffc0c8  @objc AEDBackingAssessmentSession.(null) <stripped>
	0xffffc190  @objc AEDBackingAssessmentSession. <stripped>

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
	let deactivation : AEDBridgedDeactivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bbc00007190 (0x3bc00007190) in binary!
	0x210c  @objc AEDBridgedDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x20f0000070e0 (0xf0000070e0) in binary!
	0x38000000c  @objc AEDBridgedDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x20e8000070d0 (0xe8000070d0) in binary!
	0x20cc  @objc AEDBridgedDeactivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDSynchronousDeactivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deactivation : AEDSynchronousDeactivation // +0x0

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x20e8000070d0 (0xe8000070d0) in binary!
	0x20cc  @objc AEDSynchronousDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1b7400007148 (0x37400007148) in binary!
	0x158000000c  @objc AEDSynchronousDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1c8c00007090 (0x48c00007090) in binary!
	0x1c88  @objc AEDSynchronousDeactivationRunner.(null) <stripped>

	// Swift methods
 }

 struct AACDependencies.AEDConcreteAssessmentPolicySessionPrimitives: AEDAssessmentPolicySessionPrimitives {

	// Properties
	let singleAppModePrimitives : AERSingleAppModePrimitives // +0x0
 }

 class AACDependencies.AEDBackingAssessmentConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _allowsAutoCorrection : Bool
	var _allowsSmartPunctuation : Bool
	var _allowsSpellCheck : Bool
	var _allowsPredictiveKeyboard : Bool
	var _allowsKeyboardShortcuts : Bool
	var _allowsActivityContinuation : Bool
	var _allowsDictation : Bool
	var _allowsAccessibilitySpeech : Bool
	var _allowsPasswordAutoFill : Bool
	var _allowsContinuousPathKeyboard : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1c8c00007090 (0x48c00007090) in binary!
	0x1c88  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c7400007070 (0x47400007070) in binary!
	0x1c70  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c5c00007050 (0x45c00007050) in binary!
	0x1c58  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
	0x1c40  AEDBackingAssessmentSession.delegate.getter
WARNING: couldn't find address 0x1c2c00007010 (0x42c00007010) in binary!
	0x1c28  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c1400006ff0 (0x41400006ff0) in binary!
	0x1c10  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bfc00006fd0 (0x3fc00006fd0) in binary!
	0x1bf8  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1be400006fb0 (0x3e400006fb0) in binary!
	0x1be0  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bcc00006f90 (0x3cc00006f90) in binary!
	0x1bc8  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bb400006f70 (0x3b400006f70) in binary!
	0x1bb0  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1fc800007078 (0x7c800007078) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1fb000006f98 (0x7b000006f98) in binary!
	0x1f94  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1aa800006f20 (0x2a800006f20) in binary!
	0x1ca4  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x29f400006fd8 (0x1f400006fd8) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1f6800006f50 (0x76800006f50) in binary!
	0x1f4c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x29c400006fa8 (0x1c400006fa8) in binary!
	0x1a54  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c5000006eb8 (0x45000006eb8) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1f2000006f08 (0x72000006f08) in binary!
	0x1f04  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1a1800006e90 (0x21800006e90) in binary!
	0x1c14  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x296400006f48 (0x16400006f48) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1ed800006ec0 (0x6d800006ec0) in binary!
	0x1ebc  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
 }

 class AACDependencies.AEDSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDSynchronousActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1fb000006f98 (0x7b000006f98) in binary!
	0x1f94  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1aa800006f20 (0x2a800006f20) in binary!
	0x1ca4  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29f400006fd8 (0x1f400006fd8) in binary!
	0x58000000c  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1f6800006f50 (0x76800006f50) in binary!
	0x1f4c  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29c400006fa8 (0x1c400006fa8) in binary!
	0x1a54  @objc AEDSynchronousActivationRunner.(null) <stripped>

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
	let activation : AEDNonPersistingResultBasedActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1f6800006f50 (0x76800006f50) in binary!
	0x1f4c  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29c400006fa8 (0x1c400006fa8) in binary!
	0x1a54  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1c5000006eb8 (0x45000006eb8) in binary!
	0x58000000c  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1f2000006f08 (0x72000006f08) in binary!
	0x1f04  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1a1800006e90 (0x21800006e90) in binary!
	0x1c14  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDBackingAssessmentConfigurationValidatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class AACDependencies.AEDNonPersistingSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDNonPersistingSynchronousActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1f2000006f08 (0x72000006f08) in binary!
	0x1f04  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1a1800006e90 (0x21800006e90) in binary!
	0x1c14  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x296400006f48 (0x16400006f48) in binary!
	0x58000000c  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1ed800006ec0 (0x6d800006ec0) in binary!
	0x1ebc  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x19d000006e48 (0x1d000006e48) in binary!
	0x1bcc  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDResultBasedActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDResultBasedActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1ed800006ec0 (0x6d800006ec0) in binary!
	0x1ebc  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x19d000006e48 (0x1d000006e48) in binary!
	0x1bcc  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x291c00006f00 (0x11c00006f00) in binary!
	0x6544434141  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x736569636e6564 (0x569636e6564) in binary!
	0xffffffe8  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x696b636142444541 (0x36142444541) in binary!
	0x743746e656d  @objc AEDResultBasedActivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDUnionBackingAssessmentConfigurationValidator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let validators : AEDBackingAssessmentConfigurationValidating

	// Swift methods
	0x67e0  func AEDUnionBackingAssessmentConfigurationValidator.isValidConfiguration(configuration:) // method 
 }

 class AACDependencies.AEDObservationSubscription {
 struct AACDependencies.AEDSingleAppModeActivation {

	// Properties
	let identifier : String // +0x0
	let event : AEPolicySessionEvent // +0x10
	let configuration : AEDBackingAssessmentConfiguration // +0x18
	let primitives : AERSingleAppModePrimitives // +0x20
 }

 struct AACDependencies.AEDSingleAppModeDeactivation {

	// Properties
	let identifier : String // +0x0
	let event : AEPolicySessionEvent // +0x10
	let session : AERSingleAppModeSession // +0x18
 }

 enum __C.AEPolicySessionEvent { }
