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
WARNING: couldn't find address 0x1ef300008350 (0x6f300008350) in binary!
	0x1ee7  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x277800008348 (0x77800008348) in binary!
	0x1ec4  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x276000008340 (0x76000008340) in binary!
	0x1eac  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x2ccffff9d40  @objc AEDNoOpPolicyScratchpad.(null) <stripped>
	0x34cffff9f88  @objc AEDNoOpPolicyScratchpad.1…ËÅ\ <stripped>
	0x284ffffa150  @objc AEDNoOpPolicyScratchpad.SHÉÏxIâ‘HâU–HâÛHâ}¿1ˇË†V <stripped>

	// Swift methods
 }

 class AACDependencies.AEDNoOpPolicyStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1f1800008378 (0x71800008378) in binary!
	0x1f0c  @objc AEDNoOpPolicyStore.(null) <stripped>
WARNING: couldn't find address 0x1f0b00008350 (0x70b00008350) in binary!
	0x68000000c  @objc AEDNoOpPolicyStore.(null) <stripped>
WARNING: couldn't find address 0x1ef300008350 (0x6f300008350) in binary!
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
WARNING: couldn't find address 0x2180000082e0 (0x180000082e0) in binary!
	0x1c84  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1d3c000082b8 (0x53c000082b8) in binary!
	0x215c  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1e6800008298 (0x66800008298) in binary!
	0x1d02  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x1cf600008270 (0x4f600008270) in binary!
	0x1cea  @objc AEDBackingAssessmentSession.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x234ffffbd78  @objc AEDBackingAssessmentSession.(null) <stripped>
	0xffffbea0  @objc AEDBackingAssessmentSession. <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x1fcffffc0d8  @objc AEDBackingAssessmentSession.(null) <stripped>
	0xffffc1a0  @objc AEDBackingAssessmentSession.ÎkIâ∆Lã=Ë‰ <stripped>

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
WARNING: couldn't find address 0x1bbc000082d0 (0x3bc000082d0) in binary!
	0x210c  @objc AEDBridgedDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x20f000008220 (0xf000008220) in binary!
	0x38000000c  @objc AEDBridgedDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x20e800008210 (0xe800008210) in binary!
	0x20cc  @objc AEDBridgedDeactivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDSynchronousDeactivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deactivation : AEDSynchronousDeactivation // +0x0

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x20e800008210 (0xe800008210) in binary!
	0x20cc  @objc AEDSynchronousDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1b7400008288 (0x37400008288) in binary!
	0x158000000c  @objc AEDSynchronousDeactivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1c8c000081d0 (0x48c000081d0) in binary!
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
WARNING: couldn't find address 0x1c8c000081d0 (0x48c000081d0) in binary!
	0x1c88  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c74000081b0 (0x474000081b0) in binary!
	0x1c70  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c5c00008190 (0x45c00008190) in binary!
	0x1c58  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c4400008170 (0x44400008170) in binary!
	0x1c40  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c2c00008150 (0x42c00008150) in binary!
	0x1c28  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c1400008130 (0x41400008130) in binary!
	0x1c10  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bfc00008110 (0x3fc00008110) in binary!
	0x1bf8  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1be4000080f0 (0x3e4000080f0) in binary!
	0x1be0  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bcc000080d0 (0x3cc000080d0) in binary!
	0x1bc8  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1bb4000080b0 (0x3b4000080b0) in binary!
	0x1bb0  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1fc8000081b8 (0x7c8000081b8) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1fb0000080d8 (0x7b0000080d8) in binary!
	0x1f94  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1aa800008060 (0x2a800008060) in binary!
	0x1ca4  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x29f400008118 (0x1f400008118) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1f6800008090 (0x76800008090) in binary!
	0x1f4c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x29c4000080e8 (0x1c4000080e8) in binary!
	0x1a54  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1c5000007ff8 (0x45000007ff8) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1f2000008048 (0x72000008048) in binary!
	0x1f04  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1a1800007fd0 (0x21800007fd0) in binary!
	0x1c14  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x296400008088 (0x16400008088) in binary!
	0x58000000c  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1ed800008000 (0x6d800008000) in binary!
	0x1ebc  @objc AEDBackingAssessmentConfiguration.(null) <stripped>
 }

 class AACDependencies.AEDSynchronousActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDSynchronousActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1fb0000080d8 (0x7b0000080d8) in binary!
	0x1f94  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1aa800008060 (0x2a800008060) in binary!
	0x1ca4  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29f400008118 (0x1f400008118) in binary!
	0x58000000c  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1f6800008090 (0x76800008090) in binary!
	0x1f4c  @objc AEDSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29c4000080e8 (0x1c4000080e8) in binary!
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
WARNING: couldn't find address 0x1f6800008090 (0x76800008090) in binary!
	0x1f4c  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x29c4000080e8 (0x1c4000080e8) in binary!
	0x1a54  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1c5000007ff8 (0x45000007ff8) in binary!
	0x58000000c  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1f2000008048 (0x72000008048) in binary!
	0x1f04  @objc AEDNonPersistingResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1a1800007fd0 (0x21800007fd0) in binary!
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
WARNING: couldn't find address 0x1f2000008048 (0x72000008048) in binary!
	0x1f04  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1a1800007fd0 (0x21800007fd0) in binary!
	0x1c14  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x296400008088 (0x16400008088) in binary!
	0x58000000c  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x1ed800008000 (0x6d800008000) in binary!
	0x1ebc  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x19d000007f88 (0x1d000007f88) in binary!
	0x1bcc  @objc AEDNonPersistingSynchronousActivationRunner.(null) <stripped>

	// Swift methods
 }

 class AACDependencies.AEDResultBasedActivationRunner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let activation : AEDResultBasedActivation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1ed800008000 (0x6d800008000) in binary!
	0x1ebc  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x19d000007f88 (0x1d000007f88) in binary!
	0x1bcc  @objc AEDResultBasedActivationRunner.(null) <stripped>
WARNING: couldn't find address 0x291c00008040 (0x11c00008040) in binary!
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
	0x66a0  func AEDUnionBackingAssessmentConfigurationValidator.isValidConfiguration(configuration:) // method 
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
