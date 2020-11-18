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
 protocol SiriKitRuntime.InvocationState // 17 requirements
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
	0x5640  class func IntentLoggingEventBusAware.__allocating_init() // init 
 }

 class SiriKitRuntime.BaseLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriKitRuntime.NoopIntentLoggingEventBusSubscriber : BaseLoggingEventBusSubscriber { }

 class SiriKitRuntime.SiriKitFlowFrameRuntime {
 class SiriKitRuntime.SiriKitFlowLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FlowLoader {
	// Swift methods
	0x6450  func SiriKitFlowLoader.hasFlowAbleToHandle(input:) // method 
	0x64e0  func SiriKitFlowLoader.makeFlowAbleToHandle(input:) // method 
	0x6850  func SiriKitFlowLoader.hasPAXFlowAbleToHandle(input:) // method 
	0x6500  func SiriKitFlowLoader.makePAXFlowAbleToHandle(input:) // method 
	0x65b0  func SiriKitFlowLoader.makePAXFlowAbleToHandle(state:) // method 
	0x6670  class func SiriKitFlowLoader.__allocating_init() // init 
 }

 class SiriKitRuntime.ResolveParameterResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x6860  func ResolveParameterResponseGenerator.processConfirmParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x7320  func ResolveParameterResponseGenerator.processDisambiguateParameterResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x7350  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:completion:) // method 
	0x7380  func ResolveParameterResponseGenerator.processIntentCancelledByParameterRejection<A>(delegate:app:parameterName:intent:completion:) // method 
	0x7ba0  func ResolveParameterResponseGenerator.processUnsupportedParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x89c0  func ResolveParameterResponseGenerator.processUnsupportedParameterValueOnlyResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:multicardinalValueIndex:completion:) // method 
	0x92d0  func ResolveParameterResponseGenerator.processPromptForParameterValueResponse<A>(delegate:app:parameterName:intent:intentResolutionResult:shouldDisplaySnippet:initialAddViewsCommand:completion:) // method 
 }

 class SiriKitRuntime.SiriKitFlowFrameLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let factories : AnySiriKitFrameFactory

	// Swift methods
	0xc3c0  func SiriKitFlowFrameLoader.prepare() // method 
	0xc4c0  func SiriKitFlowFrameLoader.loadFactory(fromNamespace:) // method 
	0xc8d0  func SiriKitFlowFrameLoader.loadFactory(forInput:) // method 
	0xcc90  class func SiriKitFlowFrameLoader.__allocating_init() // init 
 }

 class SiriKitRuntime.SiriKitRuntimeSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SiriKitRuntimeSessionProtocol {

	// Properties
	let invocationState : InvocationState
	let serviceHelper : AFServiceHelper
	let flowLoader : FlowLoader
	let _paxConversation : PAXConversationManaging

	// Swift methods
	0xd940  func SiriKitRuntimeSession.paxConversation.getter // getter 
	0xda20  class func SiriKitRuntimeSession.__allocating_init(invocationState:serviceHelper:paxConversation:flowLoader:) // init 
	0xdb10  func SiriKitRuntimeSession.perform(command:completion:) // method 
	0xfae0  func SiriKitRuntimeSession.getSupportedFlowType(parse:confirmationState:parameterMetadata:appResolutionState:) // method 
 }

 enum SiriKitRuntime.FlowDispatchError {

	// Properties
	case noFlowHandledInput  
 }

 enum SiriKitRuntime.SupportedFlowType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flowFrame : ¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	case paxFlow : Õ¸
 }

 enum SiriKitRuntime.AceMetricsLogger { }

 class SiriKitRuntime.TaskLoggingService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metricsLogger : SAMetricsLogger
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvokerSupplier : £˝

	// Swift methods
	0x12490  class func TaskLoggingService.__allocating_init(metricsLogger:aceServiceInvokerSupplier:) // init 
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
	0x1e020  class func DefaultMeCardProxy.__allocating_init(remoteMeCard:localMeCardFetcher:) // init 
	0x1e0d0  func DefaultMeCardProxy.fetchMeCard(options:) // method 
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
	var inputOrigin : …˙
WARNING: couldn't find address 0x0 (0x0) in binary!
	var interactionType : ª˚
WARNING: couldn't find address 0x0 (0x0) in binary!
	var multiUserState : ï˚
	var sessionHandOffContinuityID : String?
	var isEyesFree : Bool
	var isVoiceTriggerEnabled : Bool
	var isTextToSpeechEnabled : Bool
	var isDirectAction : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriLocale : «ˆ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriVoiceGender : 9˜
	var remoteContext : SAIntentGroupSiriKitRemoteExecution?
	var metricsContext : SAIntentGroupSiriKitMetrics
	var turnId : String?
	var preferencesLanguageCode : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var personalDomainsAuthenticationMode : ˚˛
	var isMetricsStateFromClient : Bool
 }

 class SiriKitRuntime.RCHResolveFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Ω
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : 

	// Swift methods
	0x21c20  func RCHResolveFlowFrameFactory.namespace.getter // getter 
	0x21c60  func RCHResolveFlowFrameFactory.namespace.setter // setter 
	0x21ca0  func RCHResolveFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x21ce0  func RCHResolveFlowFrameFactory.controller.getter // getter 
	0x21d40  func RCHResolveFlowFrameFactory.renderer.getter // getter 
	0x21da0  func RCHResolveFlowFrameFactory.prepare() // method 
	0x22020  func RCHResolveFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x22050  func RCHResolveFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x21ae0  class func RCHResolveFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.GuidedConversationFlowController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x22bc0  class func GuidedConversationFlowController.__allocating_init() // init 
 }

 class SiriKitRuntime.CommandSendingFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let controllerClosure : Ÿ˙

	// Swift methods
	0x22ce0  func CommandSendingFlowFrameFactory.controller.getter // getter 
	0x22d00  func CommandSendingFlowFrameFactory.renderer.getter // getter 
	0x22c30  class func CommandSendingFlowFrameFactory.__allocating_init(aceServiceInvokerClosure:) // init 
	0x22d50  func CommandSendingFlowFrameFactory.prepare() // method 
	0x22d60  func CommandSendingFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x22d70  func CommandSendingFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
 }

 class SiriKitRuntime.ResolveConfirmHandleExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x22ee0  func ResolveConfirmHandleExecutor.handleIntent<A>(siriKitIntentHandler:intent:completion:) // method 
	0x23100  func ResolveConfirmHandleExecutor.resolveConfirmIntent<A>(siriKitIntentHandler:parameterNamesToResolve:intent:completion:) // method 
	0x24b70  func ResolveConfirmHandleExecutor.resolveSlots<A>(intent:siriKitIntentHandler:slotDescriptions:previousSlot:resolutionResultsByName:completion:) // method 
	0x261c0  class func ResolveConfirmHandleExecutor.__allocating_init() // init 
 }

 enum SiriKitRuntime.ConfirmationResponseUtil { }

 class SiriKitRuntime.HandleIntentResponseGenerator : RCHCommonResponseGenerator {
	// Swift methods
	0x2d3f0  func HandleIntentResponseGenerator.processInterstitialView<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x2e190  func HandleIntentResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x2e1c0  func HandleIntentResponseGenerator.processInProgressResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
 }

 class SiriKitRuntime.RCHFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Ω
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : S

	// Swift methods
	0x2ee90  func RCHFlowFrameFactory.namespace.getter // getter 
	0x2eed0  func RCHFlowFrameFactory.namespace.setter // setter 
	0x2ef10  func RCHFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x2ef50  func RCHFlowFrameFactory.controller.getter // getter 
	0x2efb0  func RCHFlowFrameFactory.renderer.getter // getter 
	0x2f010  func RCHFlowFrameFactory.prepare() // method 
	0x2f290  func RCHFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x2f2c0  func RCHFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x2ed30  class func RCHFlowFrameFactory.__allocating_init() // init 
 }

 enum SiriKitRuntime.SiriKitExecutorRunUtils { }

 class SiriKitRuntime.ResolveConfirmHandleService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : i
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ÿ˛

	// Swift methods
	0x34810  class func ResolveConfirmHandleService.__allocating_init(aceServiceInvoker:deviceState:) // init 
	0x34f40  func ResolveConfirmHandleService.executeResolveConfirm<A>(intent:parameterMetadata:cancelIntentOnParameterRejection:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x355e0  func ResolveConfirmHandleService.executeHandle<A>(intent:executeOnRemoteCompanion:siriKitIntentHandler:completion:) // method 
	0x35a00  func ResolveConfirmHandleService.executeAutoHandle<A>(intent:completion:) // method 
	0x36120  func ResolveConfirmHandleService.executeAutoHandleCancel(aceId:completion:) // method 
	0x36370  func ResolveConfirmHandleService.sendProcessIntentCommand(processIntentCommand:intentTypeName:executeOnRemoteCompanion:completion:) // method 
	0x369a0  func ResolveConfirmHandleService.sendHandleIntentCommand(handleIntentCommand:intent:executeOnRemoteCompanion:completion:) // method 
	0x36de0  func ResolveConfirmHandleService.handleIntentCommandResponseHandler(result:intent:completion:) // method 
	0x37670  func ResolveConfirmHandleService.sendGenericClientCommand(clientBoundCommand:completion:) // method 
	0x37e70  func ResolveConfirmHandleService.clearServerContext(completion:) // method 
	0x38570  func ResolveConfirmHandleService.makeResolveResults(processIntentCompleted:) // method 
	0x38730  func ResolveConfirmHandleService.makeConfirmResults(processIntentCompleted:intentTypeName:) // method 
	0x389d0  func ResolveConfirmHandleService.makeHandleResultsForHandleIntent(handleIntentCompleted:intent:) // method 
	0x38c10  func ResolveConfirmHandleService.makeResolutionResults(intent:batchSlotResolutionResult:) // method 
	0x392b0  func ResolveConfirmHandleService.tryParseResolutionResultFromJsonString(jsonData:intent:) // method 
	0x3a640  func ResolveConfirmHandleService.makeStepResult(intent:aceStepResult:) // method 
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
	0x434c0  class func AceServiceInvokerImpl.__allocating_init(serviceHelper:runLocation:invocationDeviceAssistantId:executionDeviceAssistantId:refId:) // init 
	0x43b90  func AceServiceInvokerImpl.peerInfo() // method 
	0x43c20  func AceServiceInvokerImpl.prepareForAudioHandoff(completion:) // method 
	0x43c70  func AceServiceInvokerImpl.prepareForAudioHandoffFailed(completion:) // method 
	0x43d50  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x43d70  func AceServiceInvokerImpl.submitAndForget(_:) // method 
	0x43e70  func AceServiceInvokerImpl.submitAndForgetWithoutRefId(_:) // method 
	0x43f00  func AceServiceInvokerImpl.submit<A>(_:completion:) // method 
	0x43f20  func AceServiceInvokerImpl.submitWithoutRefId<A>(_:completion:) // method 
	0x43f40  func AceServiceInvokerImpl.submitToCompanion<A>(_:completion:) // method 
	0x43f50  func AceServiceInvokerImpl.submitToCompanionWithoutRefId<A>(_:completion:) // method 
	0x44000  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x441b0  func AceServiceInvokerImpl.submitAllSerialWithoutRefId(_:_:) // method 
	0x44370  func AceServiceInvokerImpl.submitAllSerial(_:_:) // method 
	0x44390  func AceServiceInvokerImpl.submitAllSerialWithoutRefId(_:_:) // method 
	0x443c0  func AceServiceInvokerImpl.currentStartRequestId() // method 
	0x44bf0  func AceServiceInvokerImpl.submit<A>(_:options:completion:) // method 
	0x45b00  func AceServiceInvokerImpl.submitAllSerial(_:options:_:) // method 
	0x45ef0  func AceServiceInvokerImpl.submitToCompanion<A>(_:options:completion:) // method 
	0x461c0  func AceServiceInvokerImpl.shouldWrapCommandForExecution(_:) // method 
 }

 class SiriKitRuntime.RCHCommonResponseGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewFactory : IÚ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceServiceInvoker : i
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Ÿ˛
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricsState : √
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : …

	// Swift methods
	0x4baa0  class func RCHCommonResponseGenerator.__allocating_init(viewFactory:aceServiceInvoker:deviceState:metricsState:eventBus:) // init 
	0x49700  func RCHCommonResponseGenerator.processContinueInAppResponse<A>(delegate:app:intent:intentResponse:executionStep:completion:) // method 
	0x498b0  func RCHCommonResponseGenerator.processDeviceUnlockAndRestartRequest<A>(delegate:app:intent:completion:) // method 
	0x49c10  func RCHCommonResponseGenerator.processFailureHandlingIntentResponse<A>(delegate:app:intent:intentResponse:completion:) // method 
	0x49db0  func RCHCommonResponseGenerator.processAppNotFoundOnDeviceResponse<A>(delegate:app:intent:completion:) // method 
	0x49f10  func RCHCommonResponseGenerator.processAppDoesNotSupportIntentResponse<A>(delegate:app:intent:completion:) // method 
	0x4a060  func RCHCommonResponseGenerator.processGenericErrorResponse<A>(delegate:app:intent:completion:) // method 
	0x4a1c0  func RCHCommonResponseGenerator.processIntentHandledResponse<A>(delegate:app:intent:intentResponse:additionalCommand:completion:) // method 
	0x4a360  func RCHCommonResponseGenerator.processErrorResult<A>(result:completion:) // method 
	0x4a490  func RCHCommonResponseGenerator.processPunchOutWithDialogAndButton<A>(delegate:app:intent:aceViewProvider:templateResult:intentResponse:intentResolutionResult:contextUpdate:completion:) // method 
	0x4a7f0  func RCHCommonResponseGenerator.processFailureHandlingIntentResponseWithTextAndSnippets<A>(delegate:app:intent:templateResult:snippets:intentResponse:contextUpdate:completion:) // method 
	0x4ac20  func RCHCommonResponseGenerator.processGenericErrorResponseWithTextAndSnippets<A>(app:intent:templateResult:snippets:completion:) // method 
	0x4ae30  func RCHCommonResponseGenerator.processAutomaticPunchOut<A>(delegate:app:intent:intentResponse:aceViewProvider:launchAppCommand:requireUnlock:shouldDialog:completion:) // method 
	0x4b4f0  func RCHCommonResponseGenerator.processContinueInAppWithButton<A>(delegate:app:intent:intentResponse:aceViewProvider:completion:) // method 
	0x4b6f0  func RCHCommonResponseGenerator.makeWatchFriendlyOpenAppViews<A>(delegate:app:intent:intentResponse:aceViewProvider:dialogPhase:dialogTemplate:intentResolutionResult:_:) // method 
	0x4b8b0  func RCHCommonResponseGenerator.makeDefaultOpenAppButtonViewBuilder<A>(delegate:app:intent:intentResponse:launchAppButtonTemplate:_:) // method 
 }

 class SiriKitRuntime.PeerInfoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let peerInfo : AFPeerInfo?

	// Swift methods
	0x595c0  class func PeerInfoProvider.__allocating_init(peerInfo:) // init 
	0x59620  func PeerInfoProvider.getIdsIdentifier() // method 
	0x59640  func PeerInfoProvider.getRapportEffectiveIdentifier() // method 
	0x59660  func PeerInfoProvider.getMediaSystemIdentifier() // method 
	0x59680  func PeerInfoProvider.isOwnedByCurrentUser() // method 
	0x596a0  func PeerInfoProvider.getDeviceIdiom() // method 
	0x59720  func PeerInfoProvider.getMediaRouteIdentifier() // method 
 }

 class SiriKitRuntime.SharedContextServiceImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceHelper : AFServiceHelper // +0x10 (0x8)

	// Swift methods
	0x5a2b0  class func SharedContextServiceImpl.__allocating_init(serviceHelper:) // init 
	0x5a2f0  func SharedContextServiceImpl._fetchContext(with:) // method 
	0x5a3d0  func SharedContextServiceImpl.fetchContext(for:with:) // method 
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
	0x5d640  class func GuidedConversationFlowRenderer.__allocating_init() // init 
 }

 class SiriKitRuntime.MetricsLoggingEventBusAware : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metricsLoggingService : MetricsLoggingService

	// Swift methods
	0x5d690  class func MetricsLoggingEventBusAware.__allocating_init(metricsLoggingService:) // init 
 }

 class SiriKitRuntime.MetricsLoggingEventBusSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let service : MetricsLoggingService

	// Swift methods
 }

 class SiriKitRuntime.ContextService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var deviceState : 3Ï // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var metricsState : 1ˇ // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aceServiceInvoker : kˇ // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sharedContextService : A // +0x88 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contextSession : 'Ó // +0xb0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var featureFlags : E // +0xd8 (0x28)
	var storedInvocationState : InvocationState // +0x100 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventBus : … // +0x128 (0x28)

	// Swift methods
	0x5ed30  func ContextService.deviceState.getter // getter 
	0x5ed70  func ContextService.deviceState.setter // setter 
	0x5edc0  func ContextService.deviceState.modify // modifyCoroutine 
	0x5ee50  func ContextService.metricsState.getter // getter 
	0x5ee90  func ContextService.metricsState.setter // setter 
	0x5eee0  func ContextService.metricsState.modify // modifyCoroutine 
	0x5ef70  func ContextService.aceServiceInvoker.getter // getter 
	0x5efb0  func ContextService.aceServiceInvoker.setter // setter 
	0x5f000  func ContextService.aceServiceInvoker.modify // modifyCoroutine 
	0x5f0a0  func ContextService.sharedContextService.getter // getter 
	0x5f0e0  func ContextService.sharedContextService.setter // setter 
	0x5f140  func ContextService.sharedContextService.modify // modifyCoroutine 
	0x5f1e0  func ContextService.contextSession.getter // getter 
	0x5f220  func ContextService.contextSession.setter // setter 
	0x5f280  func ContextService.contextSession.modify // modifyCoroutine 
	0x5f320  func ContextService.featureFlags.getter // getter 
	0x5f360  func ContextService.featureFlags.setter // setter 
	0x5f3c0  func ContextService.featureFlags.modify // modifyCoroutine 
	0x5f400  func ContextService.currentInvocationState.getter // getter 
	0x5f460  func ContextService.recordInvocation(invocationState:with:contextSession:) // method 
	0x60090  func ContextService.reset() // method 
	0x600f0  class func ContextService.__allocating_init() // init 
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
	0x627e0  func GuidedConversationalFlowFrameFactory.controller.getter // getter 
	0x62800  func GuidedConversationalFlowFrameFactory.renderer.getter // getter 
	0x62890  func GuidedConversationalFlowFrameFactory.prepare() // method 
	0x628a0  func GuidedConversationalFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x628b0  func GuidedConversationalFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x62770  class func GuidedConversationalFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.SiriKitRuntime : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SiriKitSessionProviding {

	// Properties
	let serviceHelper : AFServiceHelper

	// Swift methods
	0x63000  class func SiriKitRuntime.__allocating_init(serviceHelper:meCardService:featureFlagsService:) // init 
	0x63190  func SiriKitRuntime.makeSession(command:) // method 
	0x63310  func SiriKitRuntime.makeSession(invocationState:contextSession:) // method 
	0x635f0  func SiriKitRuntime.makeSession(invocationState:contextSession:paxConversation:) // method 
 }

 enum SiriKitRuntime.SiriKitRuntimeGlobals { }

 class SiriKitRuntime.NoopContextSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x639f0  func NoopContextSession.updateNLv4Context(_:) // method 
	0x632f0  class func NoopContextSession.__allocating_init() // init 
 }

 class SiriKitRuntime.RCHHandleFlowFrameFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestController : Ω
WARNING: couldn't find address 0x0 (0x0) in binary!
	var perRequestRenderer : w

	// Swift methods
	0x64130  func RCHHandleFlowFrameFactory.namespace.getter // getter 
	0x64170  func RCHHandleFlowFrameFactory.namespace.setter // setter 
	0x641b0  func RCHHandleFlowFrameFactory.namespace.modify // modifyCoroutine 
	0x641f0  func RCHHandleFlowFrameFactory.controller.getter // getter 
	0x64250  func RCHHandleFlowFrameFactory.renderer.getter // getter 
	0x642b0  func RCHHandleFlowFrameFactory.prepare() // method 
	0x64530  func RCHHandleFlowFrameFactory.hasFrameAbleToHandle(givenInput:) // method 
	0x64560  func RCHHandleFlowFrameFactory.makeFrameAbleToHandle(givenInput:) // method 
	0x63ff0  class func RCHHandleFlowFrameFactory.__allocating_init() // init 
 }

 class SiriKitRuntime.PAXFlowNodeValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let flow : kÍ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let flowCompletion : Ó

	// Swift methods
	0x648f0  class func PAXFlowNodeValue.__allocating_init(flow:flowCompletion:) // init 
 }

 class SiriKitRuntime.PAXConversationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PAXConversationManaging {

	// Properties
	var flowLoader : FlowLoader
	var stack : OrderedForest
	let semaphore : OS_dispatch_semaphore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentPlan : I
	var activeNode : Node

	// Swift methods
	0x649f0  func PAXConversationManager.flowLoader.getter // getter 
	0x64a30  func PAXConversationManager.flowLoader.setter // setter 
	0x64a90  func PAXConversationManager.flowLoader.modify // modifyCoroutine 
	0x64b20  func PAXConversationManager.stack.getter // getter 
	0x64b50  func PAXConversationManager.stack.setter // setter 
	0x64b90  func PAXConversationManager.stack.modify // modifyCoroutine 
	0x64c30  func PAXConversationManager.currentPlan.getter // getter 
	0x64c60  func PAXConversationManager.currentPlan.setter // setter 
	0x64ca0  func PAXConversationManager.currentPlan.modify // modifyCoroutine 
	0x64d30  func PAXConversationManager.activeNode.getter // getter 
	0x64d60  func PAXConversationManager.activeNode.setter // setter 
	0x64da0  func PAXConversationManager.activeNode.modify // modifyCoroutine 
	0x648b0  class func PAXConversationManager.__allocating_init(flowLoader:) // init 
	0x64e80  func PAXConversationManager.preloadFlow(_:) // method 
	0x64f10  func PAXConversationManager.snapshot() // method 
	0x65ac0  func PAXConversationManager.on(input:) // method 
	0x65dd0  func PAXConversationManager.buildPlan() // method 
	0x665a0  func PAXConversationManager.execute(completion:) // method 
	0x66770  func PAXConversationManager.cancelExecution() // method 
	0x667b0  func PAXConversationManager.planAndExecuteWhilePlanMatches(predicate:) // method 
	0x66be0  func PAXConversationManager.flowCapabilities.getter // getter 
 }

 enum SiriKitRuntime.PlanAndExecuteResult {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case incomplete : +
	case complete  
 }

 struct SiriKitRuntime.ExecutionResult { }

 class SiriKitRuntime.DefaultDeviceState : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inputOrigin : …˙ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interactionType : ª˚ // +0x1a60 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiUserState : ï˚ // +0x7670b (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : «ˆ // +0x1a60 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriVoiceGender : 9˜ // +0x0 (0x0)
	let isEyesFree : Bool // +0x80000400 (0x1)
	let isVoiceTriggerEnabled : Bool // +0x0 (0x1)
	let isTextToSpeechEnabled : Bool // +0x74735f5f (0x1)
	let isCarPlay : Bool // +0x0 (0x1)
	let isCarDNDMode : Bool // +0x45545f5f (0x1)
	let isDirectAction : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let renderDeviceIdiom : ◊È // +0x7816c (0x0)
	var sessionHandOffContinuityID : String? // +0xc2a (0x10)
	let preferencesLanguageCode : String? // +0x7816c (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalDomainsAuthenticationMode : ˚˛ // +0x0 (0x0)
	let isLockedWithPasscodeClosure : () // +0x0 (0x10)
	let isHomePodGestalt : Bool // +0x0 (0x1)
	let isAppleTVGestalt : Bool // +0x0 (0x1)
	let isPhoneGestalt : Bool // +0x0 (0x1)
	let isPadGestalt : Bool // +0x0 (0x1)
	let isPodGestalt : Bool // +0x0 (0x1)

	// Swift methods
	0x6a4f0  func DefaultDeviceState.sessionHandOffContinuityID.getter // getter 
	0x6a540  func DefaultDeviceState.sessionHandOffContinuityID.setter // setter 
	0x6a590  func DefaultDeviceState.sessionHandOffContinuityID.modify // modifyCoroutine 
	0x6a210  class func DefaultDeviceState.__allocating_init(inputOrigin:interactionType:renderDeviceIdiom:multiUserState:siriLocale:siriVoiceGender:isEyesFree:isVoiceTriggerEnabled:isTextToSpeechEnabled:isCarPlay:isCarDND:isDirectAction:isLockedWithPasscodeClosure:sessionHandOffContinuityID:preferencesLanguageCode:personalDomainsAuthenticationMode:) // init 
	0x6a6b0  func DefaultDeviceState.isHomePod.getter // getter 
	0x6a6d0  func DefaultDeviceState.isWatch.getter // getter 
	0x6a6f0  func DefaultDeviceState.isMac.getter // getter 
	0x6a710  func DefaultDeviceState.isAppleTV.getter // getter 
	0x6a7b0  func DefaultDeviceState.isPhone.getter // getter 
	0x6a7d0  func DefaultDeviceState.isPad.getter // getter 
	0x6a7f0  func DefaultDeviceState.isPod.getter // getter 
	0x6a8a0  func DefaultDeviceState.isLockedWithPasscode.getter // getter 
 }

 enum SiriKitRuntime.ViewMetricsLogger { }

 class SiriKitRuntime.BravoSessionService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var session : BravoSession
	var siriKitSessionProvider : SiriKitSessionProviding

	// Swift methods
	0x6cbc0  class func BravoSessionService.__allocating_init(siriKitSessionProvider:) // init 
	0x6cc40  func BravoSessionService.startTurn(startSiriRequestId:invocationState:contextSession:) // method 
 }

 class SiriKitRuntime.BravoSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var topics : Topic // +0x10 (0x8)
	let topicSemaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var siriKitSessionProvider : SiriKitSessionProviding // +0x20 (0x28)
	var currentInvocation : InvocationState // +0x48 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentContextSession : Ó // +0x70 (0x28)

	// Swift methods
	0x6d060  func BravoSession.topics.getter // getter 
	0x6d090  func BravoSession.topics.setter // setter 
	0x6d0d0  func BravoSession.topics.modify // modifyCoroutine 
	0x6ced0  class func BravoSession.__allocating_init(siriKitSessionProvider:invocationState:contextSession:) // init 
	0x6d1d0  func BravoSession.on(input:) // method 
	0x6d2f0  func BravoSession.planAndExecute(inputCandidate:whilePlanMatches:) // method 
	0x6d440  func BravoSession.commit(inputCandidate:flowIsComplete:) // method 
	0x6d570  func BravoSession.startTurn(invocationState:contextSession:) // method 
	0x6d690  func BravoSession.getOrMakeRuntimeSession(inputCandidate:) // method 
	0x6dde0  func BravoSession.getRuntimeSession(inputCandidate:) // method 
 }

 class SiriKitRuntime.Topic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var sessions : SiriKitRuntimeSessionProtocol
	var state : TopicState

	// Swift methods
	0x6df70  func BravoSession.Topic.state.getter // getter 
	0x6dfb0  func BravoSession.Topic.state.setter // setter 
	0x6e000  func BravoSession.Topic.state.modify // modifyCoroutine 
	0x6e040  class func BravoSession.Topic.__allocating_init(initialSessions:) // init 
	0x6e160  func BravoSession.Topic.session(for:) // method 
	0x6e1f0  func BravoSession.Topic.setSession(_:for:) // method 
	0x6e270  func BravoSession.Topic.commit(inputCandidate:flowIsComplete:) // method 
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
	let aceServiceInvokerSupplier : £˝

	// Swift methods
	0x6ff60  class func SAMetricsLogger.__allocating_init(aceServiceInvokerSupplier:) // init 
 }

 class SiriKitRuntime.SiriKitEventSubscriber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriber : ≈ // +0x0 (0x0)
	let subscriberQueue : OS_dispatch_queue // +0x0 (0x8)
	let cancelDispatchGroup : OS_dispatch_group // +0x0 (0x8)

	// Swift methods
 }

 class SiriKitRuntime.SiriKitEventSubject : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : è
	let asyncSubscribersCancelDispatchGroup : OS_dispatch_group

	// Swift methods
	0x71ce0  class func SiriKitEventSubject.__allocating_init() // init 
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
