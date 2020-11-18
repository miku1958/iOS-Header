 protocol SiriKitRuntime.MetricsLoggingService // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriKitRuntime.MeCardFetching // 1 requirements
 {
	// method
 }
 protocol SiriKitRuntime.FeatureFlagsFetching // 1 requirements
 {
	// method
 }
 protocol SiriKitRuntime.SiriKitFlowFrameFactory // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol SiriKitRuntime.SiriKitEventBusAware // 1 requirements
 {
	// method
 }
 protocol SiriKitRuntime.SiriKitEventBusSynchronousSubscriber // 0 requirements
 {
 }

 struct __C.AFFetchContextsKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.AFAnalyticsEventType { }

 class SiriKitRuntime.SiriKitFlowActivity {
 enum SiriKitRuntime.CodingKeys {

	// Properties
	case appBundleId  
	case appName  
	case appVersion  
	case build  
	case errorCodeDescription  
	case eventReliabilityCode  
	case isSiriKit  
	case isSiriKitSupportedApp  
	case responseId  
	case slotName  
 }

 class SiriKitRuntime.IntentLoggingEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6650  class func IntentLoggingEventBusAware.__allocating_init() // init 
 }

 class SiriKitRuntime.BaseLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriKitRuntime.NoopIntentLoggingEventBusSubscriber : BaseLoggingEventBusSubscriber { }

 class SiriKitRuntime.SiriKitFlowFrameRuntime {
 class SiriKitRuntime.RCHAppResolutionFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : aó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : Gò

	// Swift methods
	0x6fa0  func RCHAppResolutionFlowFrameFactory.namespace.getter // getter 
	0x6fe0  func RCHAppResolutionFlowFrameFactory.namespace.setter // setter 
	0x7020  func RCHAppResolutionFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x7060  func RCHAppResolutionFlowFrameFactory.controller.getter // getter 
	0x70c0  func RCHAppResolutionFlowFrameFactory.renderer.getter // getter 
	0x7120  func RCHAppResolutionFlowFrameFactory.prepare() // method 
	0x7410  func RCHAppResolutionFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x7440  func RCHAppResolutionFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x74d0  class func RCHAppResolutionFlowFrameFactory.__allocating_init() // init 
 }

 enum SiriKitRuntime.SayMetricsLogger { }

 class SiriKitRuntime.SiriKitFlowLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let factories : AnySiriKitFrameFactory

	// Swift methods
	0x8020  func SiriKitFlowLoader.prepare() // method 
	0x8120  func SiriKitFlowLoader.loadFactory(fromNamespace:) // method 
	0x8550  func SiriKitFlowLoader.loadFactory(forInput:) // method 
	0x8930  class func SiriKitFlowLoader.__allocating_init() // init 
 }

 class SiriKitRuntime.TaskLoggingService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metricsLogger : SAMetricsLogger
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï

	// Swift methods
	0x9820  class func TaskLoggingService.__allocating_init(aceServiceInvoker:) // init 
 }

 enum SiriKitRuntime.ExecuteOnRemoteCmds {

	// Properties
	case saAceView  
	case saCFProvideContext  
	case saInitiateHandoffOnCompanion  
	case saPhoneClientCoordinationPhoneCall  
	case saSendCommands  
	case saUIAddViews  
	case saUISayIt  
	case saUpdateReadingState  
	case saLogStringEvent  
 }

 class SiriKitRuntime.DefaultMeCardProxy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let remoteMeCard : CNContact?
	let localMeCardFetcher : MeCardFetching

	// Swift methods
	0x121d0  class func DefaultMeCardProxy.__allocating_init(remoteMeCard:localMeCardFetcher:) // init 
	0x12280  func DefaultMeCardProxy.fetchMeCard(options:) // method 
 }

 enum SiriKitRuntime.LogConst { }

 enum SiriKitRuntime.Category { }

 enum SiriKitRuntime.Signpost { }

 enum SiriKitRuntime.AnalyticsEvent { }

 enum SiriKitRuntime.TaskMetrics { }

 enum SiriKitRuntime.GradingEvent { }

 class SiriKitRuntime.RCHResolveFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : #ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : Ôó

	// Swift methods
	0x12f70  func RCHResolveFlowFrameFactory.namespace.getter // getter 
	0x12fb0  func RCHResolveFlowFrameFactory.namespace.setter // setter 
	0x12ff0  func RCHResolveFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x13030  func RCHResolveFlowFrameFactory.controller.getter // getter 
	0x13090  func RCHResolveFlowFrameFactory.renderer.getter // getter 
	0x130f0  func RCHResolveFlowFrameFactory.prepare() // method 
	0x134d0  func RCHResolveFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x13500  func RCHResolveFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x12e30  class func RCHResolveFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.RCHCommonResponseGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewFactory : £è
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Eí
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricsState : ]î
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : ’ì

	// Swift methods
	0x140f0  class func RCHCommonResponseGenerator.__allocating_init(viewFactory:aceServiceInvoker:deviceState:metricsState:eventBus:) // init 
	0x14210  func RCHCommonResponseGenerator.processContinueInAppResponse<A>(delegate:app:intent:intentResponse:executionStep:completion:) // method 
	0x149b0  func RCHCommonResponseGenerator.processDeviceUnlockAndRestartRequest<A>(delegate:app:intent:completion:) // method 
	0x152b0  func RCHCommonResponseGenerator.processFailureHandlingIntentResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x15e20  func RCHCommonResponseGenerator.processAppNotFoundOnDeviceResponse<A>(delegate:app:intent:completion:) // method 
	0x16660  func RCHCommonResponseGenerator.processAppDoesNotSupportIntentResponse<A>(delegate:app:intent:completion:) // method 
	0x16a70  func RCHCommonResponseGenerator.processGenericErrorResponse<A>(delegate:app:intent:completion:) // method 
	0x17410  func RCHCommonResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:additionalCommand:completion:) // method 
	0x198c0  func RCHCommonResponseGenerator.processErrorResult<A>(result:completion:) // method 
	0x199f0  func RCHCommonResponseGenerator.processPunchOutWithDialogAndButton<A>(delegate:app:intent:aceViewProvider:templateResult:intentResponse:intentResolutionResult:contextUpdate:completion:) // method 
	0x1ac70  func RCHCommonResponseGenerator.processFailureHandlingIntentResponseWithTextAndSnippets<A>(delegate:app:intent:templateResult:snippets:intentResponse:contextUpdate:completion:) // method 
	0x1b310  func RCHCommonResponseGenerator.processGenericErrorResponseWithTextAndSnippets<A>(app:intent:templateResult:snippets:completion:) // method 
	0x1b820  func RCHCommonResponseGenerator.processAutomaticPunchOut<A>(delegate:app:intent:intentResponse:aceViewProvider:launchAppCommand:requireUnlock:shouldDialog:completion:) // method 
	0x1d6f0  func RCHCommonResponseGenerator.processContinueInAppWithButton<A>(delegate:app:intent:intentResponse:aceViewProvider:completion:) // method 
	0x1daf0  func RCHCommonResponseGenerator.makeWatchFriendlyOpenAppViews<A>(delegate:app:intent:intentResponse:aceViewProvider:dialogPhase:dialogTemplate:intentResolutionResult:_:) // method 
	0x1eca0  func RCHCommonResponseGenerator.makeDefaultOpenAppButtonViewBuilder<A>(delegate:app:intent:intentResponse:launchAppButtonTemplate:_:) // method 
	0x1f260  func RCHCommonResponseGenerator.logTaskCompletedIfApplicable<A>(app:delegate:intent:statusReason:intentResponse:responseId:) // method 
 }

 class SiriKitRuntime.GuidedConversationFlowController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x23cd0  class func GuidedConversationFlowController.__allocating_init() // init 
 }

 class SiriKitRuntime.CoreAnalyticsEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x23e30  class func CoreAnalyticsEventBusAware.__allocating_init() // init 
 }

 class SiriKitRuntime.CoreAnalyticsEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriKitRuntime.ConfirmIntentResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x248e0  func ConfirmIntentResponseGenerator.processConfirmIntentResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x24d90  func ConfirmIntentResponseGenerator.processAutoConfirmIntentResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x256b0  func ConfirmIntentResponseGenerator.processConfirmIntentWaitToContinueResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x26290  func ConfirmIntentResponseGenerator.processConfirmIntentCancelledResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
 }

 class SiriKitRuntime.CommandSendingFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let controllerClosure : ké

	// Swift methods
	0x27430  func CommandSendingFlowFrameFactory.controller.getter // getter 
	0x27450  func CommandSendingFlowFrameFactory.renderer.getter // getter 
	0x27380  class func CommandSendingFlowFrameFactory.__allocating_init(aceServiceInvokerClosure:) // init 
	0x274a0  func CommandSendingFlowFrameFactory.prepare() // method 
	0x274b0  func CommandSendingFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x274c0  func CommandSendingFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
 }

 class SiriKitRuntime.ResolveConfirmHandleExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x27630  func ResolveConfirmHandleExecutor.handleIntent<A>(siriKitIntentHandler:intent:completion:) // method 
	0x27850  func ResolveConfirmHandleExecutor.resolveConfirmIntent<A>(siriKitIntentHandler:parameterNamesToResolve:intent:completion:) // method 
	0x29130  func ResolveConfirmHandleExecutor.resolveSlots<A>(intent:siriKitIntentHandler:slotDescriptions:previousSlot:resolutionResultsByName:completion:) // method 
	0x2a780  class func ResolveConfirmHandleExecutor.__allocating_init() // init 
 }

 class SiriKitRuntime.RCHFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : #ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : πñ

	// Swift methods
	0x302f0  func RCHFlowFrameFactory.namespace.getter // getter 
	0x30330  func RCHFlowFrameFactory.namespace.setter // setter 
	0x30370  func RCHFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x303b0  func RCHFlowFrameFactory.controller.getter // getter 
	0x30410  func RCHFlowFrameFactory.renderer.getter // getter 
	0x30470  func RCHFlowFrameFactory.prepare() // method 
	0x30850  func RCHFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x30880  func RCHFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x30190  class func RCHFlowFrameFactory.__allocating_init() // init 
 }

 enum SiriKitRuntime.SiriKitExecutorRunUtils { }

 class SiriKitRuntime.ResolveConfirmHandleService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Eí
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : ’ì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricsState : ]î

	// Swift methods
	0x35e10  class func ResolveConfirmHandleService.__allocating_init(aceServiceInvoker:deviceState:eventBus:metricsState:) // init 
	0x36460  func ResolveConfirmHandleService.executeResolveConfirm<A>(intent:parameterMetadata:cancelIntentOnParameterRejection:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x36b00  func ResolveConfirmHandleService.executeHandle<A>(intent:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x36f20  func ResolveConfirmHandleService.executeAutoHandle<A>(intent:app:completion:) // method 
	0x37900  func ResolveConfirmHandleService.executeAutoHandleCancel(aceId:completion:) // method 
	0x37b50  func ResolveConfirmHandleService.sendProcessIntentCommand(processIntentCommand:intentTypeName:executeOnRemoteCompanion:completion:) // method 
	0x38170  func ResolveConfirmHandleService.sendHandleIntentCommand(handleIntentCommand:intent:executeOnRemoteCompanion:completion:) // method 
	0x385b0  func ResolveConfirmHandleService.handleIntentCommandResponseHandler(result:intent:completion:) // method 
	0x38b50  func ResolveConfirmHandleService.sendGenericClientCommand(clientBoundCommand:completion:) // method 
	0x39320  func ResolveConfirmHandleService.clearServerContext(completion:) // method 
	0x399f0  func ResolveConfirmHandleService.makeResolveResults(processIntentCompleted:) // method 
	0x39bb0  func ResolveConfirmHandleService.makeConfirmResults(processIntentCompleted:intentTypeName:) // method 
	0x39e50  func ResolveConfirmHandleService.makeHandleResultsForHandleIntent(handleIntentCompleted:intent:) // method 
	0x3a090  func ResolveConfirmHandleService.makeResolutionResults(intent:batchSlotResolutionResult:) // method 
	0x3a730  func ResolveConfirmHandleService.tryParseResolutionResultFromJsonString(jsonData:intent:) // method 
	0x3bac0  func ResolveConfirmHandleService.makeStepResult(intent:aceStepResult:) // method 
 }

 class SiriKitRuntime.AceServiceInvokerImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceHelper : AFServiceHelper
	let runLocation : RunLocation
	let invocationDeviceAssistantId : String?
	let executionDeviceAssistantId : String?
	let startRequestId : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logResultCompletion :  empty-list 

	// Swift methods
	0x42ab0  class func AceServiceInvokerImpl.__allocating_init(serviceHelper:runLocation:invocationDeviceAssistantId:executionDeviceAssistantId:refId:) // init 
	0x42d20  func AceServiceInvokerImpl.peerInfo() // method 
	0x42db0  func AceServiceInvokerImpl.prepareForAudioHandoff(completion:) // method 
	0x42e00  func AceServiceInvokerImpl.prepareForAudioHandoffFailed(completion:) // method 
	0x42ee0  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x42f00  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x43000  func AceServiceInvokerImpl.submitAndForgetWithoutRefId(_:) // method 
	0x43020  func AceServiceInvokerImpl.submit<A>(_:completion:) // method 
	0x43040  func AceServiceInvokerImpl.submitToCompanion<A>(_:completion:) // method 
	0x43330  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x434e0  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x43840  func AceServiceInvokerImpl.currentStartRequestId() // method 
	0x43b10  func AceServiceInvokerImpl.submit<A>(_:setRefId:completion:) // method 
	0x44440  func AceServiceInvokerImpl.shouldWrapCommandForExecution(_:) // method 
 }

 class SiriKitRuntime.PeerInfoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let peerInfo : AFPeerInfo?

	// Swift methods
	0x46450  class func PeerInfoProvider.__allocating_init(peerInfo:) // init 
	0x464b0  func PeerInfoProvider.getIdsIdentifier() // method 
	0x464d0  func PeerInfoProvider.getRapportEffectiveIdentifier() // method 
	0x464f0  func PeerInfoProvider.getMediaSystemIdentifier() // method 
	0x46510  func PeerInfoProvider.isOwnedByCurrentUser() // method 
	0x46530  func PeerInfoProvider.getDeviceIdiom() // method 
	0x465b0  func PeerInfoProvider.getMediaRouteIdentifier() // method 
 }

 class SiriKitRuntime.SharedContextServiceImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceHelper : AFServiceHelper // +0x10 (0x8)

	// Swift methods
	0x47200  class func SharedContextServiceImpl.__allocating_init(serviceHelper:) // init 
	0x47240  func SharedContextServiceImpl._fetchContext(with:) // method 
 }

 class SiriKitRuntime.AnySiriKitFrameFactory {
 enum SiriKitRuntime.SiriKitEventResponseUtil { }

 class SiriKitRuntime.AppResolutionResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x48990  func AppResolutionResponseGenerator.processAppNeedsConfirmation<A>(delegate:app:intent:completion:) // method 
	0x49870  func AppResolutionResponseGenerator.processAppNeedsDisambiguation<A>(delegate:apps:intent:completion:) // method 
	0x4ae40  func AppResolutionResponseGenerator.processAppResolutionUnsuccessful<A>(delegate:reason:intent:completion:) // method 
	0x4c7c0  func AppResolutionResponseGenerator.processAppResolutionSuccessful<A>(delegate:app:intent:completion:) // method 
 }

 struct SiriKitRuntime.SiriKitRequestEvent {

	// Properties
	var appId : String // +0x0
	var appDisplayName : String // +0x10
	var appVersion : String // +0x20
	var eventReliabilityCode : String // +0x30
	var errorCode : Int // +0x40
	var intentName : String // +0x48
 }

 enum SiriKitRuntime.CodingKeys {

	// Properties
	case appId  
	case appDisplayName  
	case appVersion  
	case eventReliabilityCode  
	case errorCode  
	case intentName  
 }

 class SiriKitRuntime.CatLabelGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriKitRuntime.TCCResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x4f770  func TCCResponseGenerator.makeSharedEnableTCCView<A>(templatingService:app:_:) // method 
	0x4fe70  func TCCResponseGenerator.processEnableTCC<A>(delegate:app:intent:completion:) // method 
 }

 struct SiriKitRuntime.EmptyCatResult {

	// Properties
	let catId : String // +0x0
 }

 class SiriKitRuntime.GuidedConversationFlowRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x53e60  class func GuidedConversationFlowRenderer.__allocating_init() // init 
 }

 enum SiriKitRuntime.SiriKitMetricsUtils { }

 class SiriKitRuntime.MetricsLoggingEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let service : MetricsLoggingService

	// Swift methods
	0x54a20  class func MetricsLoggingEventBusAware.__allocating_init(metricsLoggingService:) // init 
 }

 class SiriKitRuntime.MetricsLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let service : MetricsLoggingService

	// Swift methods
 }

 class SiriKitRuntime.RCHConfirmFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : #ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : çó

	// Swift methods
	0x56400  func RCHConfirmFlowFrameFactory.namespace.getter // getter 
	0x56440  func RCHConfirmFlowFrameFactory.namespace.setter // setter 
	0x56480  func RCHConfirmFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x564c0  func RCHConfirmFlowFrameFactory.controller.getter // getter 
	0x56520  func RCHConfirmFlowFrameFactory.renderer.getter // getter 
	0x56580  func RCHConfirmFlowFrameFactory.prepare() // method 
	0x56960  func RCHConfirmFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x56990  func RCHConfirmFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x562c0  class func RCHConfirmFlowFrameFactory.__allocating_init() // init 
 }

 struct SiriKitRuntime.InvocationContext {

	// Properties
	let refId : String? // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Eí // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricsState : ]î // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharedContextService : 5Ü // +0x88
WARNING: couldn't find address 0x0 (0x0) in binary!
	let featureFlags : =Ü // +0xb0
 }

 class SiriKitRuntime.ContextService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var deviceState : ÖÅ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var metricsState : !í // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aceServiceInvoker : ìÑ // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sharedContextService : Ü // +0x88 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var featureFlags : Ü // +0xb0 (0x28)
	var storedContext : StoredContext // +0x0 (0x0)

	// Swift methods
	0x56ea0  func ContextService.deviceState.getter // getter 
	0x56ee0  func ContextService.deviceState.setter // setter 
	0x56f30  func ContextService.deviceState.modify // modifyCoroutine 
	0x56fc0  func ContextService.metricsState.getter // getter 
	0x57000  func ContextService.metricsState.setter // setter 
	0x57050  func ContextService.metricsState.modify // modifyCoroutine 
	0x570e0  func ContextService.aceServiceInvoker.getter // getter 
	0x57120  func ContextService.aceServiceInvoker.setter // setter 
	0x57170  func ContextService.aceServiceInvoker.modify // modifyCoroutine 
	0x57210  func ContextService.sharedContextService.getter // getter 
	0x57250  func ContextService.sharedContextService.setter // setter 
	0x572b0  func ContextService.sharedContextService.modify // modifyCoroutine 
	0x57350  func ContextService.featureFlags.getter // getter 
	0x57390  func ContextService.featureFlags.setter // setter 
	0x573f0  func ContextService.featureFlags.modify // modifyCoroutine 
	0x57430  func ContextService.eventBus.getter // getter 
	0x575b0  func ContextService.recordInvocation(command:with:) // method 
	0x587a0  func ContextService.reset() // method 
	0x58950  class func ContextService.__allocating_init() // init 
 }

 struct SiriKitRuntime.StoredContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inputOrigin : iÇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interactionType : ≥É
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiUserState : uÉ
	let sessionHandOffContinuityID : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalDomainsAuthenticationMode : üá
	let isEyesFree : Bool
	let isVoiceTriggerEnabled : Bool
	let isTextToSpeechEnabled : Bool
	let isDirectAction : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : «}
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriVoiceGender : A~
	let remoteContext : SAIntentGroupSiriKitRemoteExecution
	let metricsContext : SAIntentGroupSiriKitMetrics
	let isMetricsStateFromClient : Bool
	let turnId : String?
	let refId : String?
 }

 class SiriKitRuntime.ResolveParameterResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x5abd0  func ResolveParameterResponseGenerator.processConfirmParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x5b610  func ResolveParameterResponseGenerator.processDisambiguateParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x5b640  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:completion:) // method 
	0x5b670  func ResolveParameterResponseGenerator.processIntentCancelledByParameterRejection<A>(delegate:app:parameterName:intent:completion:) // method 
	0x5be90  func ResolveParameterResponseGenerator.processUnsupportedParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x5cdd0  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:initialAddViewsCommand:completion:) // method 
 }

 enum SiriKitRuntime.ViewMetricsLogger { }

 enum SiriKitRuntime.LaunchAppMetricsLogger { }

 class SiriKitRuntime.EnableTCCFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : ;ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : ñ

	// Swift methods
	0x62a20  func EnableTCCFlowFrameFactory.namespace.getter // getter 
	0x62a60  func EnableTCCFlowFrameFactory.namespace.setter // setter 
	0x62aa0  func EnableTCCFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x62ae0  func EnableTCCFlowFrameFactory.controller.getter // getter 
	0x62b40  func EnableTCCFlowFrameFactory.renderer.getter // getter 
	0x62ba0  func EnableTCCFlowFrameFactory.prepare() // method 
	0x62e90  func EnableTCCFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x62ec0  func EnableTCCFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x628e0  class func EnableTCCFlowFrameFactory.__allocating_init() // init 
 }

 struct SiriKitRuntime.MetricsEventInformation {

	// Properties
	var flowTask : String // +0x0
	var requestEventJson : String // +0x10
	var interactionId : String // +0x20
	var resultCandidateId : String // +0x30
	var appBundleId : String // +0x40
 }

 struct SiriKitRuntime.TaskData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let activities :  empty-list  // +0x0
	let attribute : String // +0x8
	let meCardSet : Bool // +0x18
	let reformedIntent : String // +0x20
	let refTaskId : String // +0x30
	let statusReason : String // +0x40
	let stepType : String // +0x50
	let taskId : String // +0x60
	let taskType : String // +0x70
	let version : Double // +0x80
 }

 enum SiriKitRuntime.CodingKeys {

	// Properties
	case activities  
	case attribute  
	case meCardSet  
	case reformedIntent  
	case refTaskId  
	case statusReason  
	case stepType  
	case taskId  
	case taskType  
	case version  
 }

 class SiriKitRuntime.GuidedConversationalFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let namespace : String

	// Swift methods
	0x65770  func GuidedConversationalFlowFrameFactory.controller.getter // getter 
	0x65790  func GuidedConversationalFlowFrameFactory.renderer.getter // getter 
	0x65820  func GuidedConversationalFlowFrameFactory.prepare() // method 
	0x65830  func GuidedConversationalFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x65840  func GuidedConversationalFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x65700  class func GuidedConversationalFlowFrameFactory.__allocating_init() // init 
 }

 enum SiriKitRuntime.AceMetricsLogger { }

 enum SiriKitRuntime.CoreAnalyticsService { }

 enum SiriKitRuntime.ConfirmationResponseUtil { }

 class SiriKitRuntime.SiriKitRuntime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x69200  class func SiriKitRuntime.__allocating_init(meCardService:featureFlagsService:) // init 
	0x695b0  func SiriKitRuntime.perform(command:serviceHelper:completion:) // method 
 }

 enum SiriKitRuntime.SiriKitRuntimeGlobals { }

 class SiriKitRuntime.RCHHandleFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : #ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : øñ

	// Swift methods
	0x6b710  func RCHHandleFlowFrameFactory.namespace.getter // getter 
	0x6b750  func RCHHandleFlowFrameFactory.namespace.setter // setter 
	0x6b790  func RCHHandleFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x6b7d0  func RCHHandleFlowFrameFactory.controller.getter // getter 
	0x6b830  func RCHHandleFlowFrameFactory.renderer.getter // getter 
	0x6b890  func RCHHandleFlowFrameFactory.prepare() // method 
	0x6bc70  func RCHHandleFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x6bca0  func RCHHandleFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x6b5d0  class func RCHHandleFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.DefaultDeviceState : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inputOrigin : iÇ // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interactionType : ≥É // +0x11 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiUserState : uÉ // +0x65745f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : «} // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriVoiceGender : A~ // +0x45545f5f (0x0)
	let isEyesFree : Bool // +0x0 (0x1)
	let isVoiceTriggerEnabled : Bool // +0x2710 (0x1)
	let isTextToSpeechEnabled : Bool // +0x7393b (0x1)
	let isCarPlay : Bool // +0x2710 (0x1)
	let isCarDNDMode : Bool // +0x0 (0x1)
	let isDirectAction : Bool // +0x80000400 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let renderDeviceIdiom : #~ // +0x0 (0x0)
	var sessionHandOffContinuityID : String? // +0x74735f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalDomainsAuthenticationMode : üá // +0x0 (0x0)
	let isLockedWithPasscodeClosure : () // +0x0 (0x10)
	let isHomePodGestalt : Bool // +0x0 (0x1)
	let isAppleTVGestalt : Bool // +0x0 (0x1)
	let isPhoneGestalt : Bool // +0x0 (0x1)
	let isPadGestalt : Bool // +0x0 (0x1)
	let isPodGestalt : Bool // +0x0 (0x1)

	// Swift methods
	0x6c2b0  func DefaultDeviceState.sessionHandOffContinuityID.getter // getter 
	0x6c300  func DefaultDeviceState.sessionHandOffContinuityID.setter // setter 
	0x6c350  func DefaultDeviceState.sessionHandOffContinuityID.modify // modifyCoroutine 
	0x6bfe0  class func DefaultDeviceState.__allocating_init(inputOrigin:interactionType:renderDeviceIdiom:multiUserState:siriLocale:siriVoiceGender:isEyesFree:isVoiceTriggerEnabled:isTextToSpeechEnabled:isCarPlay:isCarDND:isDirectAction:isLockedWithPasscodeClosure:sessionHandOffContinuityID:personalDomainsAuthenticationMode:) // init 
	0x6c440  func DefaultDeviceState.isHomePod.getter // getter 
	0x6c460  func DefaultDeviceState.isWatch.getter // getter 
	0x6c480  func DefaultDeviceState.isMac.getter // getter 
	0x6c4a0  func DefaultDeviceState.isAppleTV.getter // getter 
	0x6c540  func DefaultDeviceState.isPhone.getter // getter 
	0x6c560  func DefaultDeviceState.isPad.getter // getter 
	0x6c580  func DefaultDeviceState.isPod.getter // getter 
	0x6c630  func DefaultDeviceState.isLockedWithPasscode.getter // getter 
 }

 class SiriKitRuntime.AppResolutionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï

	// Swift methods
	0x6d110  class func AppResolutionController.__allocating_init(aceServiceInvoker:) // init 
	0x6d190  func AppResolutionController.executeAppResolution<A>(delegate:intent:appResolutionState:completion:) // method 
 }

 enum SiriKitRuntime.SAMetricsCategory {

	// Properties
	case nativeFlowTask  
 }

 class SiriKitRuntime.SAMetricsLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : eï

	// Swift methods
	0x6d880  class func SAMetricsLogger.__allocating_init(aceServiceInvoker:) // init 
	0x6dae0  func SAMetricsLogger.logViaSAMetrics(category:eventInformation:timings:originalCommandId:) // method 
	0x6ddb0  func SAMetricsLogger.createSAMetricsEventInformation(interactionId:flowTask:requestEvent:resultCandidateId:appBundleId:) // method 
 }

 class SiriKitRuntime.HandleIntentResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x6e0c0  func HandleIntentResponseGenerator.processInterstitialView<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x6edc0  func HandleIntentResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x6edf0  func HandleIntentResponseGenerator.processInProgressResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
 }

 class SiriKitRuntime.EntitlementController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Eí

	// Swift methods
	0x6f9a0  class func EntitlementController.__allocating_init(deviceState:) // init 
	0x6fa20  func EntitlementController.executeTCCChecks<A>(delegate:intent:completion:) // method 
 }

 class SiriKitRuntime.SiriKitEventSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriber : [Ü // +0x0 (0x0)
	let subscriberQueue : OS_dispatch_queue // +0x0 (0x8)

	// Swift methods
 }

 class SiriKitRuntime.SiriKitEventSubject : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : %Ü

	// Swift methods
	0x714a0  class func SiriKitEventSubject.__allocating_init() // init 
 }

 class SiriKitRuntime.NoopSiriKitEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ”õ

	// Swift methods
 }

 enum SiriKitRuntime.InternalSiriKitEventBus { }

 enum SiriKitRuntime.RunLocation {

	// Properties
	case invocationDevice  
	case executionDevice  
 }

 enum SiriKitRuntime.Logger { }

 enum SiriKitRuntime.Log { }
