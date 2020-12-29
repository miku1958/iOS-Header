 protocol SiriKitRuntime.FlowLoader // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
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
 protocol SiriKitRuntime.SiriKitRuntimeSessionProtocol // 2 requirements
 {
	// getter
	// method
 }
 protocol SiriKitRuntime.InvocationState // 18 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
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
 protocol SiriKitRuntime.SiriKitSessionProviding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriKitRuntime.PAXConversationManaging // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriKitRuntime.InputCandidate // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol SiriKitRuntime.SiriKitEventBusAware // 1 requirements
 {
	// method
 }
 protocol SiriKitRuntime.SiriKitEventBusSynchronousSubscriber // 0 requirements
 {
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
	case turnId  
 }

 class SiriKitRuntime.IntentLoggingEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x60b0  class func IntentLoggingEventBusAware.__allocating_init() // init 
 }

 class SiriKitRuntime.BaseLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriKitRuntime.NoopIntentLoggingEventBusSubscriber : BaseLoggingEventBusSubscriber { }

 class SiriKitRuntime.SiriKitFlowFrameRuntime {
 class SiriKitRuntime.SiriKitFlowLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FlowLoader {
	// Swift methods
	0x6ec0  func SiriKitFlowLoader.hasFlowAbleToHandle(input:) // method 
	0x6f50  func SiriKitFlowLoader.makeFlowAbleToHandle(input:) // method 
	0x72c0  func SiriKitFlowLoader.hasPAXFlowAbleToHandle(input:) // method 
	0x6f70  func SiriKitFlowLoader.makePAXFlowAbleToHandle(input:) // method 
	0x7020  func SiriKitFlowLoader.makePAXFlowAbleToHandle(state:) // method 
	0x70e0  class func SiriKitFlowLoader.__allocating_init() // init 
 }

 class SiriKitRuntime.ResolveParameterResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x72d0  func ResolveParameterResponseGenerator.processConfirmParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x7d90  func ResolveParameterResponseGenerator.processDisambiguateParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x7dc0  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:completion:) // method 
	0x7df0  func ResolveParameterResponseGenerator.processIntentCancelledByParameterRejection<A>(delegate:app:parameterName:intent:completion:) // method 
	0x8610  func ResolveParameterResponseGenerator.processUnsupportedParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x9430  func ResolveParameterResponseGenerator.processUnsupportedParameterValueOnlyResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x9d40  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:initialAddViewsCommand:completion:) // method 
 }

 class SiriKitRuntime.SiriKitFlowFrameLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let factories : AnySiriKitFrameFactory

	// Swift methods
	0xce30  func SiriKitFlowFrameLoader.prepare() // method 
	0xcf30  func SiriKitFlowFrameLoader.loadFactory(fromNamespace:) // method 
	0xd340  func SiriKitFlowFrameLoader.loadFactory(forInput:) // method 
	0xd700  class func SiriKitFlowFrameLoader.__allocating_init() // init 
 }

 class SiriKitRuntime.SiriKitRuntimeSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SiriKitRuntimeSessionProtocol {

	// Properties
	let invocationState : InvocationState
	let serviceHelper : AFServiceHelper
	let flowLoader : FlowLoader
	let _paxConversation : PAXConversationManaging

	// Swift methods
	0xe3b0  func SiriKitRuntimeSession.paxConversation.getter // getter 
	0xe490  class func SiriKitRuntimeSession.__allocating_init(invocationState:serviceHelper:paxConversation:flowLoader:) // init 
	0xe580  func SiriKitRuntimeSession.perform(command:completion:) // method 
	0x10550  func SiriKitRuntimeSession.getSupportedFlowType(parse:confirmationState:parameterMetadata:appResolutionState:) // method 
 }

 enum SiriKitRuntime.FlowDispatchError {

	// Properties
	case noFlowHandledInput  
 }

 enum SiriKitRuntime.SupportedFlowType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flowFrame : ˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	case paxFlow : µ˝
 }

 enum SiriKitRuntime.AceMetricsLogger { }

 class SiriKitRuntime.TaskLoggingService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metricsLogger : SAMetricsLogger
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvokerSupplier : ≥˛

	// Swift methods
	0x12f00  class func TaskLoggingService.__allocating_init(metricsLogger:aceServiceInvokerSupplier:) // init 
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
	0x1ea90  class func DefaultMeCardProxy.__allocating_init(remoteMeCard:localMeCardFetcher:) // init 
	0x1eb40  func DefaultMeCardProxy.fetchMeCard(options:) // method 
 }

 enum SiriKitRuntime.LogConst { }

 enum SiriKitRuntime.Category { }

 enum SiriKitRuntime.SiriKitExecutorSignpost { }

 enum SiriKitRuntime.AnalyticsEventConst { }

 enum SiriKitRuntime.DirectInvocationIdentifierConst { }

 enum SiriKitRuntime.TaskMetricsConst { }

 enum SiriKitRuntime.GradingEvent { }

 enum SiriKitRuntime.Timeouts { }

 struct SiriKitRuntime.InvocationStateImpl: InvocationState {

	// Properties
	var aceId : String?
	var refId : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var inputOrigin : ¡˚
WARNING: couldn't find address 0x0 (0x0) in binary!
	var interactionType : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var multiUserState : ù¸
	var sessionHandOffContinuityID : String?
	var isEyesFree : Bool
	var isVoiceTriggerEnabled : Bool
	var isTextToSpeechEnabled : Bool
	var isDirectAction : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriLocale : ß˜
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriVoiceGender : ¯
	var remoteContext : SAIntentGroupSiriKitRemoteExecution?
	var metricsContext : SAIntentGroupSiriKitMetrics
	var turnId : String?
	var preferencesLanguageCode : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var personalDomainsAuthenticationMode : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bargeInContext : £¸
	var isMetricsStateFromClient : Bool
 }

 class SiriKitRuntime.RCHResolveFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : 1

	// Swift methods
	0x22c70  func RCHResolveFlowFrameFactory.namespace.getter // getter 
	0x22cb0  func RCHResolveFlowFrameFactory.namespace.setter // setter 
	0x22cf0  func RCHResolveFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x22d30  func RCHResolveFlowFrameFactory.controller.getter // getter 
	0x22d90  func RCHResolveFlowFrameFactory.renderer.getter // getter 
	0x22df0  func RCHResolveFlowFrameFactory.prepare() // method 
	0x23070  func RCHResolveFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x230a0  func RCHResolveFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x22b30  class func RCHResolveFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.GuidedConversationFlowController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x23c10  class func GuidedConversationFlowController.__allocating_init() // init 
 }

 class SiriKitRuntime.CommandSendingFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let controllerClosure : ·˚

	// Swift methods
	0x23d30  func CommandSendingFlowFrameFactory.controller.getter // getter 
	0x23d50  func CommandSendingFlowFrameFactory.renderer.getter // getter 
	0x23c80  class func CommandSendingFlowFrameFactory.__allocating_init(aceServiceInvokerClosure:) // init 
	0x23da0  func CommandSendingFlowFrameFactory.prepare() // method 
	0x23db0  func CommandSendingFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x23dc0  func CommandSendingFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
 }

 class SiriKitRuntime.ResolveConfirmHandleExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x23f30  func ResolveConfirmHandleExecutor.handleIntent<A>(siriKitIntentHandler:intent:completion:) // method 
	0x24150  func ResolveConfirmHandleExecutor.resolveConfirmIntent<A>(siriKitIntentHandler:parameterNamesToResolve:intent:completion:) // method 
	0x25bc0  func ResolveConfirmHandleExecutor.resolveSlots<A>(intent:siriKitIntentHandler:slotDescriptions:previousSlot:resolutionResultsByName:completion:) // method 
	0x27210  class func ResolveConfirmHandleExecutor.__allocating_init() // init 
 }

 enum SiriKitRuntime.ConfirmationResponseUtil { }

 class SiriKitRuntime.HandleIntentResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x2e440  func HandleIntentResponseGenerator.processInterstitialView<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x2f1e0  func HandleIntentResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x2f210  func HandleIntentResponseGenerator.processInProgressResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
 }

 class SiriKitRuntime.RCHFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : c

	// Swift methods
	0x2fee0  func RCHFlowFrameFactory.namespace.getter // getter 
	0x2ff20  func RCHFlowFrameFactory.namespace.setter // setter 
	0x2ff60  func RCHFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x2ffa0  func RCHFlowFrameFactory.controller.getter // getter 
	0x30000  func RCHFlowFrameFactory.renderer.getter // getter 
	0x30060  func RCHFlowFrameFactory.prepare() // method 
	0x302e0  func RCHFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x30310  func RCHFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x2fd80  class func RCHFlowFrameFactory.__allocating_init() // init 
 }

 enum SiriKitRuntime.SiriKitExecutorRunUtils { }

 class SiriKitRuntime.ResolveConfirmHandleService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : —ˇ

	// Swift methods
	0x35ea0  class func ResolveConfirmHandleService.__allocating_init(aceServiceInvoker:deviceState:) // init 
	0x365d0  func ResolveConfirmHandleService.executeResolveConfirm<A>(intent:parameterMetadata:cancelIntentOnParameterRejection:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x36c70  func ResolveConfirmHandleService.executeHandle<A>(intent:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x37090  func ResolveConfirmHandleService.executeAutoHandle<A>(intent:completion:) // method 
	0x377b0  func ResolveConfirmHandleService.executeAutoHandleCancel(aceId:completion:) // method 
	0x37a00  func ResolveConfirmHandleService.sendProcessIntentCommand(processIntentCommand:intentTypeName:executeOnRemoteCompanion:completion:) // method 
	0x38030  func ResolveConfirmHandleService.sendHandleIntentCommand(handleIntentCommand:intent:executeOnRemoteCompanion:completion:) // method 
	0x38470  func ResolveConfirmHandleService.handleIntentCommandResponseHandler(result:intent:completion:) // method 
	0x38d00  func ResolveConfirmHandleService.sendGenericClientCommand(clientBoundCommand:completion:) // method 
	0x39500  func ResolveConfirmHandleService.clearServerContext(completion:) // method 
	0x39c00  func ResolveConfirmHandleService.makeResolveResults(processIntentCompleted:) // method 
	0x39dc0  func ResolveConfirmHandleService.makeConfirmResults(processIntentCompleted:intentTypeName:) // method 
	0x3a060  func ResolveConfirmHandleService.makeHandleResultsForHandleIntent(handleIntentCompleted:intent:) // method 
	0x3a2a0  func ResolveConfirmHandleService.makeResolutionResults(intent:batchSlotResolutionResult:) // method 
	0x3a940  func ResolveConfirmHandleService.tryParseResolutionResultFromJsonString(jsonData:intent:) // method 
	0x3bcd0  func ResolveConfirmHandleService.makeStepResult(intent:aceStepResult:) // method 
 }

 class SiriKitRuntime.Node {
 struct SiriKitRuntime.NodeIterator {

	// Properties
	var currentNode : Node
 }

 class SiriKitRuntime.OrderedForest {
 class SiriKitRuntime.AceServiceInvokerImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceHelper : AFServiceHelper
	let runLocation : RunLocation
	let invocationDeviceAssistantId : String?
	let executionDeviceAssistantId : String?
	let startRequestId : String?

	// Swift methods
	0x44b50  class func AceServiceInvokerImpl.__allocating_init(serviceHelper:runLocation:invocationDeviceAssistantId:executionDeviceAssistantId:refId:) // init 
	0x45220  func AceServiceInvokerImpl.peerInfo() // method 
	0x452b0  func AceServiceInvokerImpl.prepareForAudioHandoff(completion:) // method 
	0x45300  func AceServiceInvokerImpl.prepareForAudioHandoffFailed(completion:) // method 
	0x453e0  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x45400  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x45500  func AceServiceInvokerImpl.submitAndForgetWithoutRefId(_:) // method 
	0x45590  func AceServiceInvokerImpl.submit<A>(_:completion:) // method 
	0x455b0  func AceServiceInvokerImpl.submitWithoutRefId<A>(_:completion:) // method 
	0x455d0  func AceServiceInvokerImpl.submitToCompanion<A>(_:completion:) // method 
	0x455e0  func AceServiceInvokerImpl.submitToCompanionWithoutRefId<A>(_:completion:) // method 
	0x45690  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x45840  func AceServiceInvokerImpl.submitAllSerialWithoutRefId(_:_:) // method 
	0x45a00  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x45a20  func AceServiceInvokerImpl.submitAllSerialWithoutRefId(_:_:) // method 
	0x45a50  func AceServiceInvokerImpl.currentStartRequestId() // method 
	0x46280  func AceServiceInvokerImpl.submit<A>(_:options:completion:) // method 
	0x47190  func AceServiceInvokerImpl.submitAllSerial(_:options:_:) // method 
	0x47580  func AceServiceInvokerImpl.submitToCompanion<A>(_:options:completion:) // method 
	0x47850  func AceServiceInvokerImpl.shouldWrapCommandForExecution(_:) // method 
 }

 class SiriKitRuntime.RCHCommonResponseGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewFactory : 1Û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : —ˇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricsState : √
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : ±

	// Swift methods
	0x4d130  class func RCHCommonResponseGenerator.__allocating_init(viewFactory:aceServiceInvoker:deviceState:metricsState:eventBus:) // init 
	0x4ad90  func RCHCommonResponseGenerator.processContinueInAppResponse<A>(delegate:app:intent:intentResponse:executionStep:completion:) // method 
	0x4af40  func RCHCommonResponseGenerator.processDeviceUnlockAndRestartRequest<A>(delegate:app:intent:completion:) // method 
	0x4b2a0  func RCHCommonResponseGenerator.processFailureHandlingIntentResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x4b440  func RCHCommonResponseGenerator.processAppNotFoundOnDeviceResponse<A>(delegate:app:intent:completion:) // method 
	0x4b5a0  func RCHCommonResponseGenerator.processAppDoesNotSupportIntentResponse<A>(delegate:app:intent:completion:) // method 
	0x4b6f0  func RCHCommonResponseGenerator.processGenericErrorResponse<A>(delegate:app:intent:completion:) // method 
	0x4b850  func RCHCommonResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:additionalCommand:completion:) // method 
	0x4b9f0  func RCHCommonResponseGenerator.processErrorResult<A>(result:completion:) // method 
	0x4bb20  func RCHCommonResponseGenerator.processPunchOutWithDialogAndButton<A>(delegate:app:intent:aceViewProvider:templateResult:intentResponse:intentResolutionResult:contextUpdate:completion:) // method 
	0x4be80  func RCHCommonResponseGenerator.processFailureHandlingIntentResponseWithTextAndSnippets<A>(delegate:app:intent:templateResult:snippets:intentResponse:contextUpdate:completion:) // method 
	0x4c2b0  func RCHCommonResponseGenerator.processGenericErrorResponseWithTextAndSnippets<A>(app:intent:templateResult:snippets:completion:) // method 
	0x4c4c0  func RCHCommonResponseGenerator.processAutomaticPunchOut<A>(delegate:app:intent:intentResponse:aceViewProvider:launchAppCommand:requireUnlock:shouldDialog:completion:) // method 
	0x4cb80  func RCHCommonResponseGenerator.processContinueInAppWithButton<A>(delegate:app:intent:intentResponse:aceViewProvider:completion:) // method 
	0x4cd80  func RCHCommonResponseGenerator.makeWatchFriendlyOpenAppViews<A>(delegate:app:intent:intentResponse:aceViewProvider:dialogPhase:dialogTemplate:intentResolutionResult:_:) // method 
	0x4cf40  func RCHCommonResponseGenerator.makeDefaultOpenAppButtonViewBuilder<A>(delegate:app:intent:intentResponse:launchAppButtonTemplate:_:) // method 
 }

 class SiriKitRuntime.PeerInfoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let peerInfo : AFPeerInfo?

	// Swift methods
	0x5ac50  class func PeerInfoProvider.__allocating_init(peerInfo:) // init 
	0x5acb0  func PeerInfoProvider.getIdsIdentifier() // method 
	0x5acd0  func PeerInfoProvider.getRapportEffectiveIdentifier() // method 
	0x5acf0  func PeerInfoProvider.getMediaSystemIdentifier() // method 
	0x5ad10  func PeerInfoProvider.isOwnedByCurrentUser() // method 
	0x5ad30  func PeerInfoProvider.getDeviceIdiom() // method 
	0x5adb0  func PeerInfoProvider.getMediaRouteIdentifier() // method 
 }

 class SiriKitRuntime.SharedContextServiceImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceHelper : AFServiceHelper // +0x10 (0x8)

	// Swift methods
	0x5bf60  class func SharedContextServiceImpl.__allocating_init(serviceHelper:) // init 
	0x5bfa0  func SharedContextServiceImpl._fetchContext(with:) // method 
	0x5c080  func SharedContextServiceImpl.fetchContext(for:with:) // method 
 }

 class SiriKitRuntime.AnySiriKitFrameFactory {
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

 enum SiriKitRuntime.SiriKitEventResponseUtil { }

 class SiriKitRuntime.GuidedConversationFlowRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5f2f0  class func GuidedConversationFlowRenderer.__allocating_init() // init 
 }

 class SiriKitRuntime.MetricsLoggingEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metricsLoggingService : MetricsLoggingService

	// Swift methods
	0x5f340  class func MetricsLoggingEventBusAware.__allocating_init(metricsLoggingService:) // init 
 }

 class SiriKitRuntime.MetricsLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let service : MetricsLoggingService

	// Swift methods
 }

 class SiriKitRuntime.ContextService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var deviceState : Ì // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var metricsState : 1 // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aceServiceInvoker : { // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sharedContextService : 9Ò // +0x88 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contextSession : Ô // +0xb0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var featureFlags : =Ò // +0xd8 (0x28)
	var storedInvocationState : InvocationState // +0x100 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : ± // +0x128 (0x28)

	// Swift methods
	0x609e0  func ContextService.deviceState.getter // getter 
	0x60a20  func ContextService.deviceState.setter // setter 
	0x60a70  func ContextService.deviceState.modify // modifyCoroutine 
	0x60b00  func ContextService.metricsState.getter // getter 
	0x60b40  func ContextService.metricsState.setter // setter 
	0x60b90  func ContextService.metricsState.modify // modifyCoroutine 
	0x60c20  func ContextService.aceServiceInvoker.getter // getter 
	0x60c60  func ContextService.aceServiceInvoker.setter // setter 
	0x60cb0  func ContextService.aceServiceInvoker.modify // modifyCoroutine 
	0x60d50  func ContextService.sharedContextService.getter // getter 
	0x60d90  func ContextService.sharedContextService.setter // setter 
	0x60df0  func ContextService.sharedContextService.modify // modifyCoroutine 
	0x60e90  func ContextService.contextSession.getter // getter 
	0x60ed0  func ContextService.contextSession.setter // setter 
	0x60f30  func ContextService.contextSession.modify // modifyCoroutine 
	0x60fd0  func ContextService.featureFlags.getter // getter 
	0x61010  func ContextService.featureFlags.setter // setter 
	0x61070  func ContextService.featureFlags.modify // modifyCoroutine 
	0x610b0  func ContextService.currentInvocationState.getter // getter 
	0x61110  func ContextService.recordInvocation(invocationState:with:contextSession:) // method 
	0x61d80  func ContextService.reset() // method 
	0x61de0  class func ContextService.__allocating_init() // init 
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
	0x644d0  func GuidedConversationalFlowFrameFactory.controller.getter // getter 
	0x644f0  func GuidedConversationalFlowFrameFactory.renderer.getter // getter 
	0x64580  func GuidedConversationalFlowFrameFactory.prepare() // method 
	0x64590  func GuidedConversationalFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x645a0  func GuidedConversationalFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x64460  class func GuidedConversationalFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.SiriKitRuntime : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SiriKitSessionProviding {

	// Properties
	let serviceHelper : AFServiceHelper

	// Swift methods
	0x64cf0  class func SiriKitRuntime.__allocating_init(serviceHelper:meCardService:featureFlagsService:) // init 
	0x64e80  func SiriKitRuntime.makeSession(command:) // method 
	0x65000  func SiriKitRuntime.makeSession(invocationState:contextSession:) // method 
	0x652e0  func SiriKitRuntime.makeSession(invocationState:contextSession:paxConversation:) // method 
 }

 enum SiriKitRuntime.SiriKitRuntimeGlobals { }

 class SiriKitRuntime.NoopContextSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x656e0  func NoopContextSession.updateNLv4Context(_:) // method 
	0x64fe0  class func NoopContextSession.__allocating_init() // init 
 }

 class SiriKitRuntime.RCHHandleFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : á

	// Swift methods
	0x65e20  func RCHHandleFlowFrameFactory.namespace.getter // getter 
	0x65e60  func RCHHandleFlowFrameFactory.namespace.setter // setter 
	0x65ea0  func RCHHandleFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x65ee0  func RCHHandleFlowFrameFactory.controller.getter // getter 
	0x65f40  func RCHHandleFlowFrameFactory.renderer.getter // getter 
	0x65fa0  func RCHHandleFlowFrameFactory.prepare() // method 
	0x66220  func RCHHandleFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x66250  func RCHHandleFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x65ce0  class func RCHHandleFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.PAXFlowNodeValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let flow : ;Î
WARNING: couldn't find address 0x0 (0x0) in binary!
	let flowCompletion : Ô

	// Swift methods
	0x665e0  class func PAXFlowNodeValue.__allocating_init(flow:flowCompletion:) // init 
 }

 class SiriKitRuntime.PAXConversationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PAXConversationManaging {

	// Properties
	var flowLoader : FlowLoader
	var stack : OrderedForest
	let semaphore : OS_dispatch_semaphore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentPlan : IÒ
	var activeNode : Node

	// Swift methods
	0x666e0  func PAXConversationManager.flowLoader.getter // getter 
	0x66720  func PAXConversationManager.flowLoader.setter // setter 
	0x66780  func PAXConversationManager.flowLoader.modify // modifyCoroutine 
	0x66810  func PAXConversationManager.stack.getter // getter 
	0x66840  func PAXConversationManager.stack.setter // setter 
	0x66880  func PAXConversationManager.stack.modify // modifyCoroutine 
	0x66920  func PAXConversationManager.currentPlan.getter // getter 
	0x66950  func PAXConversationManager.currentPlan.setter // setter 
	0x66990  func PAXConversationManager.currentPlan.modify // modifyCoroutine 
	0x66a20  func PAXConversationManager.activeNode.getter // getter 
	0x66a50  func PAXConversationManager.activeNode.setter // setter 
	0x66a90  func PAXConversationManager.activeNode.modify // modifyCoroutine 
	0x665a0  class func PAXConversationManager.__allocating_init(flowLoader:) // init 
	0x66b70  func PAXConversationManager.preloadFlow(_:) // method 
	0x66c00  func PAXConversationManager.snapshot() // method 
	0x677b0  func PAXConversationManager.on(input:) // method 
	0x67ac0  func PAXConversationManager.buildPlan() // method 
	0x68290  func PAXConversationManager.execute(completion:) // method 
	0x68460  func PAXConversationManager.cancelExecution() // method 
	0x684a0  func PAXConversationManager.planAndExecuteWhilePlanMatches(predicate:) // method 
	0x688d0  func PAXConversationManager.flowCapabilities.getter // getter 
 }

 enum SiriKitRuntime.PlanAndExecuteResult {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case incomplete : +Ò
	case complete  
 }

 struct SiriKitRuntime.ExecutionResult { }

 class SiriKitRuntime.DefaultDeviceState : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inputOrigin : ¡˚ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interactionType : √¸ // +0x24d0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiUserState : ù¸ // +0x77a8b (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : ß˜ // +0x24d0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriVoiceGender : ¯ // +0x0 (0x0)
	let isEyesFree : Bool // +0x80000400 (0x1)
	let isVoiceTriggerEnabled : Bool // +0x0 (0x1)
	let isTextToSpeechEnabled : Bool // +0x74735f5f (0x1)
	let isCarPlay : Bool // +0x0 (0x1)
	let isCarDNDMode : Bool // +0x45545f5f (0x1)
	let isDirectAction : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let renderDeviceIdiom : ∑Í // +0x79f5c (0x0)
	var sessionHandOffContinuityID : String? // +0xc7e (0x10)
	let preferencesLanguageCode : String? // +0x79f5c (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalDomainsAuthenticationMode :  // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bargeInContext : £¸ // +0x80000408 (0x0)
	let isLockedWithPasscodeClosure : () // +0x0 (0x10)
	let isHomePodGestalt : Bool // +0x0 (0x1)
	let isAppleTVGestalt : Bool // +0x0 (0x1)
	let isPhoneGestalt : Bool // +0x0 (0x1)
	let isPadGestalt : Bool // +0x0 (0x1)
	let isPodGestalt : Bool // +0x0 (0x1)

	// Swift methods
	0x6c1d0  func DefaultDeviceState.sessionHandOffContinuityID.getter // getter 
	0x6c220  func DefaultDeviceState.sessionHandOffContinuityID.setter // setter 
	0x6c270  func DefaultDeviceState.sessionHandOffContinuityID.modify // modifyCoroutine 
	0x6bf00  class func DefaultDeviceState.__allocating_init(inputOrigin:interactionType:renderDeviceIdiom:multiUserState:siriLocale:siriVoiceGender:isEyesFree:isVoiceTriggerEnabled:isTextToSpeechEnabled:isCarPlay:isCarDND:isDirectAction:isLockedWithPasscodeClosure:sessionHandOffContinuityID:preferencesLanguageCode:personalDomainsAuthenticationMode:bargeInContext:) // init 
	0x6c3b0  func DefaultDeviceState.isHomePod.getter // getter 
	0x6c3d0  func DefaultDeviceState.isWatch.getter // getter 
	0x6c3f0  func DefaultDeviceState.isMac.getter // getter 
	0x6c410  func DefaultDeviceState.isAppleTV.getter // getter 
	0x6c4b0  func DefaultDeviceState.isPhone.getter // getter 
	0x6c4d0  func DefaultDeviceState.isPad.getter // getter 
	0x6c4f0  func DefaultDeviceState.isPod.getter // getter 
	0x6c5a0  func DefaultDeviceState.isLockedWithPasscode.getter // getter 
 }

 enum SiriKitRuntime.ViewMetricsLogger { }

 class SiriKitRuntime.BravoSessionService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var session : BravoSession
	var siriKitSessionProvider : SiriKitSessionProviding

	// Swift methods
	0x6e9b0  class func BravoSessionService.__allocating_init(siriKitSessionProvider:) // init 
	0x6ea30  func BravoSessionService.startTurn(startSiriRequestId:invocationState:contextSession:) // method 
 }

 class SiriKitRuntime.BravoSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var topics : Topic // +0x10 (0x8)
	let topicSemaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var siriKitSessionProvider : SiriKitSessionProviding // +0x20 (0x28)
	var currentInvocation : InvocationState // +0x48 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentContextSession : Ô // +0x70 (0x28)

	// Swift methods
	0x6ee50  func BravoSession.topics.getter // getter 
	0x6ee80  func BravoSession.topics.setter // setter 
	0x6eec0  func BravoSession.topics.modify // modifyCoroutine 
	0x6ecc0  class func BravoSession.__allocating_init(siriKitSessionProvider:invocationState:contextSession:) // init 
	0x6efc0  func BravoSession.on(input:) // method 
	0x6f0e0  func BravoSession.planAndExecute(inputCandidate:whilePlanMatches:) // method 
	0x6f230  func BravoSession.commit(inputCandidate:flowIsComplete:) // method 
	0x6f360  func BravoSession.startTurn(invocationState:contextSession:) // method 
	0x6f480  func BravoSession.getOrMakeRuntimeSession(inputCandidate:) // method 
	0x6fbd0  func BravoSession.getRuntimeSession(inputCandidate:) // method 
 }

 class SiriKitRuntime.Topic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessions : SiriKitRuntimeSessionProtocol
	var state : TopicState

	// Swift methods
	0x6fd60  func BravoSession.Topic.state.getter // getter 
	0x6fda0  func BravoSession.Topic.state.setter // setter 
	0x6fdf0  func BravoSession.Topic.state.modify // modifyCoroutine 
	0x6fe30  class func BravoSession.Topic.__allocating_init(initialSessions:) // init 
	0x6ff50  func BravoSession.Topic.session(for:) // method 
	0x6ffe0  func BravoSession.Topic.setSession(_:for:) // method 
	0x70060  func BravoSession.Topic.commit(inputCandidate:flowIsComplete:) // method 
 }

 enum SiriKitRuntime.TopicState {

	// Properties
	case ongoing : SiriKitRuntimeSessionProtocol
	case new  
	case completed  
 }

 enum SiriKitRuntime.PAXSiriSessionError {

	// Properties
	case unknownTopic  
	case unknownInputCandidate  
	case notCommitted  
 }

 enum SiriKitRuntime.LaunchAppMetricsLogger { }

 enum SiriKitRuntime.SAMetricsCategory {

	// Properties
	case nativeFlowTask  
 }

 class SiriKitRuntime.SAMetricsLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvokerSupplier : ≥˛

	// Swift methods
	0x71d50  class func SAMetricsLogger.__allocating_init(aceServiceInvokerSupplier:) // init 
 }

 class SiriKitRuntime.SiriKitEventSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriber : ≈Ò // +0x0 (0x0)
	let subscriberQueue : OS_dispatch_queue // +0x0 (0x8)
	let cancelDispatchGroup : OS_dispatch_group // +0x0 (0x8)

	// Swift methods
 }

 class SiriKitRuntime.SiriKitEventSubject : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : èÒ
	let asyncSubscribersCancelDispatchGroup : OS_dispatch_group

	// Swift methods
	0x73ad0  class func SiriKitEventSubject.__allocating_init() // init 
 }

 enum SiriKitRuntime.InternalSiriKitEventBus { }

 enum SiriKitRuntime.SiriKitMetricsUtils { }

 enum SiriKitRuntime.DialogMetricsLogger { }

 enum SiriKitRuntime.SayMetricsLogger { }

 enum SiriKitRuntime.RunLocation {

	// Properties
	case invocationDevice  
	case executionDevice  
 }

 enum SiriKitRuntime.Logger { }

 enum SiriKitRuntime.SiriKitRuntimeCrashHelper { }

 enum SiriKitRuntime.Log { }
