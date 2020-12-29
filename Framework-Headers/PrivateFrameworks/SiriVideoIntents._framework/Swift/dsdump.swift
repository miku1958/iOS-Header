 protocol SiriVideoIntents.AppSignal // 4 requirements
 {
	// getter
	// class getter
	// method
	// method
 }
 protocol SiriVideoIntents.INIntentWithSearchMedia // 1 requirements
 {
	// getter
 }
 protocol SiriVideoIntents.AppSelectionConfigurationLevelProviding // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriVideoIntents.WatchListService // 2 requirements
 {
	// method
	// method
 }
 protocol SiriVideoIntents.ThirdPartyDialogProviding // 5 requirements
 {
	// class associated type access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.AppSelectionCandidateGatheringSignal // 3 requirements
 {
	// class base protocol
	// class method
	// method
 }
 protocol SiriVideoIntents.AppSelectionGenericSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriVideoIntents.AnalyticsService // 13 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.DialogProviding // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.InstalledAppProviding // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.FeatureFlagService // 0 requirements
 {
 }
 protocol SiriVideoIntents.MediaAppSelectionIntent // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol SiriVideoIntents.VideoFlowFactory // 9 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.LiveServiceResolving // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.ContentIntent // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriVideoIntents.InProcessHandlingStrategy // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// class getter
 }
 protocol SiriVideoIntents.ResponseTemplatesProviding // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.AppSelecting // 2 requirements
 {
	// method
	// method
 }
 protocol SiriVideoIntents.ThirdPartyMediaIntentVerifier // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.AppSelectionCandidateDependentSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriVideoIntents.UTSContentLite // 7 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriVideoIntents.RCHNamespace // 1 requirements
 {
	// class method
 }
 protocol SiriVideoIntents.BaseDisambiguationProvider // 0 requirements
 {
 }
 protocol SiriVideoIntents.ContentResolving // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.UTSProviding // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.AppInfoProviding // 1 requirements
 {
	// method
 }
 protocol SiriVideoIntents.UserDefaultsProvider // 1 requirements
 {
	// getter
 }
 protocol SiriVideoIntents.SpotlightSearchProviding // 2 requirements
 {
	// method
	// method
 }

 struct SiriVideoIntents.AppSelectionConfigurationLevelProvider: AppSelectionConfigurationLevelProviding {

	// Properties
	let client : TRIClient // +0x0
	let namespace : String // +0x8
 }

 struct SiriVideoIntents.AppSelectionConfiguration {

	// Properties
	let appSelectionEnabled : Bool // +0x0
	let minimumNormalizedConfidence : Double // +0x8
	let minimumAbsoluteConfidence : Double // +0x10
	let videoAppBundleIdentifiers : Set<String> // +0x18
	let musicAppBundleIdentifiers : Set<String> // +0x20
	let trialTrackingId : TRITrackingId? // +0x28
	let trialExperimentId : String? // +0x30
	let trialTreatmentId : String? // +0x40
	let trialRolloutId : String? // +0x50
	let modelValue : AtomicValue // +0x60
 }

 class SiriVideoIntents.FirstPartyVideoAppResolutionService {
 class SiriVideoIntents.LocUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*

	// Swift methods
 }

 class SiriVideoIntents.NowPlayingClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriVideoIntents.NowPlayingAppSignal {

	// Properties
	let nowPlayingBundleIdentifier : String? // +0x0
	let timeElapsed : Double // +0x10
 }

 class SiriVideoIntents.NowPlayingStateClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriVideoIntents.NowPlayingStateSignal {

	// Properties
	let nowPlayingState : String // +0x0
	let timeElapsed : Double // +0x10
 }

 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let dialogProvider : VideoWatchListDialogProvider
	let locUtil : LocUtil

	// Swift methods
	0xdc20  func AddToWatchList.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let watchListService : WatchListService
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe844000384d8 (0x44000384d8) in binary!
	0x13ad4  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13ac8000383e0 (0x2c8000383e0) in binary!
	0x13abc  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xc264000383b8 (0x264000383b8) in binary!
	0x58000000c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe7fc00038490 (0x7fc00038490) in binary!
	0x13a8c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13a8000038378 (0x28000038378) in binary!
	0x13a74  @objc RemoveFromWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0xead0  func RemoveFromWatchListIntentHandler.resolveContent(for:with:) // method 
	0xfdd0  func RemoveFromWatchListIntentHandler.confirm(intent:completion:) // method 
	0x10120  func RemoveFromWatchListIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let watchListDialogs : VideoWatchListDialogProvider
	let locUtil : LocUtil

	// Swift methods
	0x12330  func RemoveFromWatchList.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.FindVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7fc00038490 (0x7fc00038490) in binary!
	0x13a8c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13a8000038378 (0x28000038378) in binary!
	0x13a74  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xc21c00038370 (0x21c00038370) in binary!
	0x58000000c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe7b400038448 (0x7b400038448) in binary!
	0x13a44  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13a3800038318 (0x23800038318) in binary!
	0x13a2c  @objc FindVideoIntentHandler.(null) <stripped>

	// Swift methods
	0x130d0  func FindVideoIntentHandler.resolveContent(for:with:) // method 
	0x14320  func FindVideoIntentHandler.confirm(intent:completion:) // method 
	0x13b60  func FindVideoIntentHandler.handle(intent:completion:) // method 
 }

 struct SiriVideoIntents.WatchListServiceImpl: WatchListService {

	// Properties
	let utsProvider : UTSProviding // +0x0
 }

 enum SiriVideoIntents.VideoError {

	// Properties
	case unknownError  
	case viewConversionError  
	case appResolutionError  
	case noAppSelected  
	case appDisambiguationCancelled  
	case appSelectionDisabledOnTrial  
	case missingResponse  
	case failedToOpenUrl  
 }

 struct SiriVideoIntents.ForegroundAppSignal {

	// Properties
	let lastApp : String? // +0x0
	let timeSinceLastApp : NSNumber? // +0x10
	let timeElapsed : Double // +0x18
 }

 class SiriVideoIntents.FakeStore : NowPlayingUsageSignal.KnowledgeProvider { }

 struct SiriVideoIntents.LastNowPlayingSignal {

	// Properties
	let lastApp : String? // +0x0
	let timeSinceLastApp : NSNumber? // +0x10
	let timeElapsed : Double // +0x18
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*

	// Swift methods
	0x19490  func AddToWatchList.FlowStrategy.actionForInput(input:) // method 
	0x19620  func AddToWatchList.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 class SiriVideoIntents.CommonIntentThirdPartyAppResolution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intent : MediaNLIntent // +0x5 (0x0)

	// Swift methods
	0x19fd0  func CommonIntentThirdPartyAppResolution.getRequestedApp() // method 
	0x1a220  func CommonIntentThirdPartyAppResolution.getSuggestedApp() // method 
	0x1a230  func CommonIntentThirdPartyAppResolution.getConfirmationResponse() // method 
 }

 struct SiriVideoIntents.SearchMediaDialogProvider: ThirdPartyDialogProviding {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 struct SiriVideoIntents.PlayMediaDialogProvider: ThirdPartyDialogProviding {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 class SiriVideoIntents.AppUsageProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriVideoIntents.AppUsageSignal {

	// Properties
	let usage7Days : [String : NSNumber] // +0x0
	let usage1Day : [String : NSNumber] // +0x8
	let timeElapsed : Double // +0x10
 }

 class SiriVideoIntents.CommonUnsupportedValueStrategy {
 class SiriVideoIntents.PlayVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let analyticsService : AnalyticsService
	let backgroundFetch : BackgroundPlayableFetch

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7b400038448 (0x7b400038448) in binary!
	0x13a44  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13a3800038318 (0x23800038318) in binary!
	0x13a2c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xc1d400038328 (0x1d400038328) in binary!
	0x28000000c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe76c000387c8 (0x76c000387c8) in binary!
	0xad4a  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x78cfff5f678  @objc PlayVideoIntentHandler.(null) <stripped>

	// Swift methods
	0x1dee0  func PlayVideoIntentHandler.resolveContent(for:with:) // method 
	0x1fa10  func PlayVideoIntentHandler.confirm(intent:completion:) // method 
	0x1fff0  func PlayVideoIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let viewFactory : VideoViewFactory
	let watchListDialogs : VideoWatchListDialogProvider

	// Swift methods
	0x22bf0  func AddToWatchList.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x22c10  func AddToWatchList.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
 }

 enum SiriVideoIntents.LiveServiceResolutionError {

	// Properties
	case missingChannel  
	case missingURL  
	case unsupportedPlatform  
 }

 struct SiriVideoIntents.Genre {

	// Properties
	let name : String // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case name  
 }

 class SiriVideoIntents.PlayMediaAppSelectionInput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var result_appUsageScore1Day : Double
	var result_appUsageScore7Days : Double
	var supports_general : Double
	var supports_audiobooks : Double
	var supports_podcasts : Double
	var result_nowPlayingUsage7Days : Double
	var result_foregroundAppIsLastUsed : Double
	var result_foregroundAppDuetElapsedSeconds : Double
	var result_clientCarConnected : String
	var result_clientCarplay : String
	var result_clientDaylight : String
	var result_clientDevice : String
	var result_clientHourOfDay : Double
	var result_clientIsActiveForegroundApp : Double
	var result_clientLocaleIdentifier : String
	var result_clientLocaleLanguage : String
	var result_clientLocked : String
	var result_clientMotion : String
	var result_clientNavigating : String
	var result_clientWorkout : String
	var result_entitySearchAllTimeInteractionShare : Double
	var result_entitySearchNormalizedSecondsSinceLastInteraction : Double
	var result_entitySearchTrailing10MinuteInteractionShare : Double
	var result_entitySearchTrailing1DayInteractionShare : Double
	var result_entitySearchTrailing1HourInteractionShare : Double
	var result_entitySearchTrailing28DayInteractionShare : Double
	var result_entitySearchTrailing2MinuteInteractionShare : Double
	var result_entitySearchTrailing6HourInteractionShare : Double
	var result_entitySearchTrailing7DayInteractionShare : Double
	var result_mediaNamePresent : Double
	var result_mediaType : String
	var result_isNowPlayingDuetApp : Double
	var result_nowPlayingDuetElapsedSeconds : Double
	var result_nowPlayingState : String
	var result_spotlightMatches : Double
	var result_libraryItems : Double
	var result_subscriptionStatus : String
	var result_isNowPlayingApp : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe76c000387c8 (0x76c000387c8) in binary!
	0xad4a  @objc PlayMediaAppSelectionInput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x78cfff5f678  @objc PlayMediaAppSelectionInput.(null) <stripped>

	// Swift methods
	0x24500  func <stripped> // method 
 }

 class SiriVideoIntents.PlayMediaAppSelectionOutput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MLFeatureProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedApp : ë*
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedAppProbability :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe74c000387a8 (0x74c000387a8) in binary!
	0xad2a  @objc PlayMediaAppSelectionOutput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x274fff67ee8  @objc PlayMediaAppSelectionOutput.(null) <stripped>

	// Swift methods
	0x253a0  func <stripped> // getter 
 }

 class SiriVideoIntents.PlayMediaAppSelection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let model : MLModel

	// Swift methods
	0x255a0  func <stripped> // method 
 }

 class SiriVideoIntents.UTSProvider {
 struct SiriVideoIntents.TimedResult {

	// Properties
	let result : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resolutionTimeMs : W)
 }

 class SiriVideoIntents.CommonDisambigateLiveServicesStrategy {
 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x2cb40  func PlayVideo.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.RecordableResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let timeElapsed : Double
	let rows : [[String : Any]]
	let info : [String : Any]
	let signalTiming : [String : NSNumber]
	let test : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe6f600038278 (0x6f600038278) in binary!
	0xacea  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0xe6f400038388 (0x6f400038388) in binary!
	0xc138  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x214fffa4ea0  @objc RecordableResult.(null) <stripped>
	0x1ecfffa59f8  @objc RecordableResult.Hãm§ <stripped>

	// Swift methods
	0x2ddb0  class func RecordableResult.__allocating_init(name:timeElapsed:rows:info:signalTiming:test:) // init 
	0x2df00  func RecordableResult.json() // method 
	0x2e380  func RecordableResult.encode(with:) // method 
	0x2e630  class func RecordableResult.__allocating_init(coder:) // init 
 }

 class SiriVideoIntents.AtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var hasRun : Bool
	var queue : OS_dispatch_queue

	// Swift methods
	0x34c10  func <stripped> // method 
 }

 class SiriVideoIntents.Once : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var hasRun : Bool

	// Swift methods
 }

 enum SiriVideoIntents.PlayLiveService { }

 class SiriVideoIntents.CoreAnalyticsService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AnalyticsService {
	// Swift methods
 }

 struct SiriVideoIntents.ClientContextSignal {

	// Properties
	let timeElapsed : Double // +0x0
	let workout : Int // +0x8
	let locked : Int // +0x10
	let carplay : Int // +0x18
	let carConnected : Int // +0x20
	let navigating : Int // +0x28
	let daylight : Int // +0x30
	let motionState : Int // +0x38
	let localeIdentifier : String // +0x40
	let localeLanguage : String // +0x50
	let foregroundAppBundleId : String? // +0x60
	let hourOfDay : Int // +0x70
	let device : String // +0x78
 }

 struct SiriVideoIntents.IntentMediaSignal {

	// Properties
	let media : INMediaSearch? // +0x0
	let timeElapsed : Double // +0x8
 }

 class SiriVideoIntents.LockAtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : NSLock
	var complete : Bool

	// Swift methods
	0x3da00  func <stripped> // method 
 }

 class SiriVideoIntents.BaseDialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DialogProviding {
	// Swift methods
 }

 struct SiriVideoIntents.InstalledApp {

	// Properties
	let bundleIdentifier : String // +0x0
	let supportedMediaCategories : [String] // +0x10
	let supportedIntents : [String] // +0x18
 }

 class SiriVideoIntents.CommonIntentAppResolver {
 struct SiriVideoIntents.VideoFlowFactoryImpl: VideoFlowFactory { }

 enum SiriVideoIntents.ConfirmationProvider { }

 class SiriVideoIntents.SpotlightSearchProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x460c0  func PlayLiveService.FlowStrategy.actionForInput(input:) // method 
	0x461e0  func PlayLiveService.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 class SiriVideoIntents.MediaPersonOntologyNode {
 struct SiriVideoIntents.MediaNLPerson {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentNode : ›
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ontologyNode : e
 }

 enum SiriVideoIntents.PersonRole {

	// Properties
	case actor  
	case creator  
	case director  
	case guestStar  
	case conjoiner  
	case producer  
	case maker  
	case writer  
	case character  
	case unspecified  
 }

 class SiriVideoIntents.UnlockThenPlayFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var input : w // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewFactory : ó // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è* // +0x0 (0x28)
	let videoDialogs : VideoDialogProvider // +0x0 (0x28)

	// Swift methods
	0x484d0  func <stripped> // method 
 }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let viewFactory : VideoViewFactory
	let watchListDialogs : VideoWatchListDialogProvider

	// Swift methods
	0x497a0  func RemoveFromWatchList.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x497c0  func RemoveFromWatchList.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
 }

 struct SiriVideoIntents.UTSData {

	// Properties
	let items : UTSItem // +0x0
	let nextToken : String? // +0x8
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case items  
	case nextToken  
 }

 struct SiriVideoIntents.Channel {

	// Properties
	let id : String // +0x0
	let name : String // +0x10
	let appAdamIds : [String] // +0x20
	let appName : String? // +0x28
	let isFirstParty : Bool // +0x38
	let isSubscribed : Bool // +0x39
	let isInstalled : Bool // +0x3a
	let appStoreUrl : String? // +0x40
	let images : ChannelImageOptions // +0x50
 }

 struct SiriVideoIntents.UTSItem {

	// Properties
	let content : UTSContent // +0x0
	let hasUserActivity : Bool? // +0x161
 }

 struct SiriVideoIntents.UTSImage {

	// Properties
	let height : Int // +0x0
	let width : Int // +0x8
	let url : String // +0x10
	let format : String? // +0x20
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case height  
	case width  
	case url  
	case format  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case content  
	case hasUserActivity  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case name  
	case appAdamIds  
	case appName  
	case isFirstParty  
	case isSubscribed  
	case isInstalled  
	case appStoreUrl  
	case images  
 }

 struct SiriVideoIntents.ChannelImageOptions {

	// Properties
	let appIcon : UTSImage // +0x0
 }

 struct SiriVideoIntents.UTSContent {

	// Properties
	let id : String // +0x0
	let title : String // +0x10
	let genre : String? // +0x20
	let genres : Genre // +0x30
	let releaseDate : Double? // +0x38
	let type : String // +0x48
	let url : String // +0x58
	let images : UTSImageDict // +0x68
	let showTitle : String? // +0x128
	let showId : String? // +0x138
	let episodeNumber : Int? // +0x148
	let seasonNumber : Int? // +0x158
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case title  
	case genre  
	case genres  
	case releaseDate  
	case type  
	case url  
	case images  
	case showTitle  
	case showId  
	case episodeNumber  
	case seasonNumber  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case appIcon  
 }

 struct SiriVideoIntents.UTSImageDict {

	// Properties
	let contentImage : UTSImage // +0x0
	let contentImageTall : UTSImage // +0x30
	let coverArt : UTSImage // +0x60
	let coverArt16X9 : UTSImage // +0x90
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case contentImage  
	case contentImageTall  
	case coverArt  
	case coverArt16X9  
 }

 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x54a30  func PlayLiveService.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.CommonIntentThirdPartyAppResolutionStrategy {
 struct SiriVideoIntents.SKEResponseProvider: ResponseTemplatesProviding { }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let viewFactory : VideoViewFactory
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x58640  func PlayVideo.HandleIntentStrategy.makePreHandleIntentOutput(app:intent:intentResponse:_:) // method 
	0x58780  func PlayVideo.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x587a0  func PlayVideo.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
 }

 class SiriVideoIntents.MediaAppOntologyNode {
 struct SiriVideoIntents.MediaNLApp {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intentNode : ›
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ontologyNode : e
 }

 class SiriVideoIntents.AppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AppSelecting {

	// Properties
	let analyticsService : AnalyticsService

	// Swift methods
	0x5a8b0  func AppSelector.recordSignals(for:bundleIdentifier:completion:) // method 
	0x5b2e0  func <stripped> // method 
 }

 class SiriVideoIntents.ContextProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriVideoIntents.UserContextSignal {

	// Properties
	let userContext : [String : INMediaUserContext] // +0x0
	let timeElapsed : Double // +0x8
 }

 enum SiriVideoIntents.ContentResolutionError {

	// Properties
	case idLookupFailure  
	case unsupportedPlatform  
	case timeout  
	case emptyParameters  
	case missingIdentifiers  
	case unknown  
 }

 enum SiriVideoIntents.ContentType {

	// Properties
	case show  
	case season  
	case episode  
	case movie  
 }

 enum SiriVideoIntents.ContentSort {

	// Properties
	case allTimeBest  
	case allTimeWorst  
	case best  
	case worst  
	case popular  
	case recommended  
	case newest  
	case oldest  
	case grossing  
 }

 enum SiriVideoIntents.Role {

	// Properties
	case actor  
	case character  
	case creator  
	case director  
	case guestStar  
	case maker  
	case producer  
	case writer  
 }

 struct SiriVideoIntents.Person {

	// Properties
	let name : String // +0x0
	let role : Role // +0x10
 }

 struct SiriVideoIntents.ContentResolutionParameters {

	// Properties
	var title : String?
	var umcId : String?
	var pagingToken : String?
	var episode : EpisodeReference
	var season : SeasonReference
	var type : ContentType
	var sort : ContentSort
	var roles : Person
	var genre : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDate : )
	var studio : String?
	var recommendedAge : Int?
	var isUhd : Bool?
	var isDolbyVision : Bool?
	var isDolbyAtmos : Bool?
	var isHdr : Bool?
	var is3D : Bool?
	var isFree : Bool?
 }

 enum SiriVideoIntents.SeasonReference {

	// Properties
	case numbered : String
	case all  
	case first  
	case last  
 }

 enum SiriVideoIntents.EpisodeReference {

	// Properties
	case numbered : String
	case all  
	case first  
	case last  
	case next  
	case previous  
 }

 class SiriVideoIntents.RecordStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x645a0  func RecordStore.shouldMakeRecord(force:frequencyDenominator:) // method 
	0x645b0  func RecordStore.makeRecord(result:completion:) // method 
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*

	// Swift methods
	0x65ff0  func PlayVideo.FlowStrategy.actionForInput(input:) // method 
	0x66180  func PlayVideo.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.VideoFlowProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è* // +0x0
	let flowFactory : VideoFlowFactory // +0x28
	let testMode : Bool // +0x50
 }

 enum SiriVideoIntents.ContentDisambiguationProvider { }

 class SiriVideoIntents.PlayLiveServiceIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let liveServiceResolver : LiveServiceResolving
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe6d400038368 (0x6d400038368) in binary!
	0x13964  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x1395800038200 (0x15800038200) in binary!
	0x1394c  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xc0f400038248 (0xf400038248) in binary!
	0x58000000c  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xe68c00038320 (0x68c00038320) in binary!
	0x1391c  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13910000381a0 (0x110000381a0) in binary!
	0x13904  @objc PlayLiveServiceIntentHandler.(null) <stripped>

	// Swift methods
	0x6acd0  func PlayLiveServiceIntentHandler.resolveLiveService(for:with:) // method 
	0x6b6c0  func PlayLiveServiceIntentHandler.confirm(intent:completion:) // method 
	0x6b8a0  func PlayLiveServiceIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.CommonIntentRequestTCCStrategy {
 struct SiriVideoIntents.SupportedMediaSignal {

	// Properties
	let playCandidatesWithMediaCategories : [String : [String]] // +0x0
	let searchCandidatesWithMediaCategories : [String : [String]] // +0x8
	let timeElapsed : Double // +0x10
 }

 struct SiriVideoIntents.SelectedAppSignal {

	// Properties
	let selected : String? // +0x0
	let timeElapsed : Double // +0x10
 }

 class SiriVideoIntents.VideoLiveTuneInDialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dialogProvider : DialogProviding

	// Swift methods
 }

 enum SiriVideoIntents.AddToWatchList { }

 struct SiriVideoIntents.VideoViewFactory {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è* // +0x0
	let locUtil : LocUtil // +0x28
 }

 struct SiriVideoIntents.ThirdPartyMediaIntentVerifierImpl: ThirdPartyMediaIntentVerifier { }

 class SiriVideoIntents.CommonIntentFlowStrategy {
 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : c
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let videoDialogs : VideoLiveTuneInDialogProvider
	let locUtil : LocUtil

	// Swift methods
	0x73c00  func PlayLiveService.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x73d80  func <stripped> // method 
 }

 class SiriVideoIntents.CommonHandleIntentStrategy {
 class SiriVideoIntents.BaseDisambiguateContentStrategy {
 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x78690  func FindVideo.FlowStrategy.actionForInput(input:) // method 
	0x787b0  func FindVideo.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.ContentLiteResponse {

	// Properties
	let content : ContentLite // +0x0
 }

 struct SiriVideoIntents.EpisodeLite: UTSContentLite {

	// Properties
	let id : String // +0x0
	let type : String // +0x0
	let title : String // +0xcba60
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : S' // +0x81330
	let genres : Genre // +0x0
	let showId : String // +0x81340
	let showTitle : String // +0x0
	let seasonTitle : String // +0x81350
	let images : ImagesLite // +0x0
 }

 struct SiriVideoIntents.MovieLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : S'
	let genres : Genre
	let images : ImagesLite
 }

 struct SiriVideoIntents.SeasonLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : S'
	let genres : Genre
	let showId : String
	let showTitle : String
	let seasonNumber : Int
	let images : ImagesLite
 }

 struct SiriVideoIntents.ShowLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : S'
	let genres : Genre
	let images : ImagesLite
 }

 enum SiriVideoIntents.ContentLite {

	// Properties
	case season : SeasonLite
	case show : ShowLite
	case episode : EpisodeLite
	case movie : MovieLite
	case unknown  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case type  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case type  
	case title  
	case url  
	case releaseDate  
	case genres  
	case images  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case type  
	case title  
	case url  
	case releaseDate  
	case genres  
	case showId  
	case showTitle  
	case seasonNumber  
	case images  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case type  
	case title  
	case url  
	case releaseDate  
	case genres  
	case images  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case type  
	case title  
	case url  
	case releaseDate  
	case genres  
	case showId  
	case showTitle  
	case seasonTitle  
	case images  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case content  
 }

 struct SiriVideoIntents.ImagesLite {

	// Properties
	let contentImage : UTSImage // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case contentImage  
 }

 struct SiriVideoIntents.UnsupportedPlatformFlow {

	// Properties
	let videoDialogs : VideoDialogProvider // +0x0
 }

 struct SiriVideoIntents.VideoWatchListDialogProvider {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 struct SiriVideoIntents.WatchListParams {

	// Properties
	var title : String? // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case title  
 }

 enum SiriVideoIntents.RemoveFromWatchList { }

 class SiriVideoIntents.FetchPageFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let resultsUrl : String
	let contentResolver : ContentResolving
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : c

	// Swift methods
	0x84830  func <stripped> // method 
 }

 class SiriVideoIntents.BackgroundPlayableFetch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contentResolver : ContentResolving
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playableMap : String
	var groupMap : [String : OS_dispatch_group]
	let responseQueue : OS_dispatch_queue

	// Swift methods
	0x86780  func <stripped> // method 
	0x86c10  func <stripped> // method 
	0x87bd0  func <stripped> // method 
 }

 class SiriVideoIntents.ThirdPartyVideoAppResolutionService {
 enum SiriVideoIntents.LiveServiceDisambiguationProvider { }

 struct SiriVideoIntents.Playable {

	// Properties
	let umcId : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playPunchout : S(
 }

 enum SiriVideoIntents.FindVideo { }

 struct SiriVideoIntents.LiveService {

	// Properties
	let id : String // +0x0
	let name : String // +0x10
	let channelId : String // +0x20
	let images : ImageOptions // +0x30
	let punchoutUrls : PunchOutUrls // +0x60
	let url : String? // +0x70
 }

 struct SiriVideoIntents.PunchOutUrls {

	// Properties
	let play : String // +0x0
 }

 struct SiriVideoIntents.LiveServicesResponse {

	// Properties
	let items : LiveService // +0x0
	let channels : Channel // +0x8
	let nextToken : String? // +0x10
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case play  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case id  
	case name  
	case channelId  
	case images  
	case punchoutUrls  
	case url  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case items  
	case channels  
	case nextToken  
 }

 struct SiriVideoIntents.ImageOptions {

	// Properties
	let logo : UTSImage // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case logo  
 }

 struct SiriVideoIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : 
 }

 enum SiriVideoIntents.MediaConfirmationValue {

	// Properties
	case yes  
	case no  
	case cancel  
	case confirmContact  
	case rejectContact  
 }

 enum SiriVideoIntents.SeasonNumberReference {

	// Properties
	case all  
	case first  
	case last  
	case current  
 }

 struct SiriVideoIntents.NumberUnit { }

 enum SiriVideoIntents.EpisodeNumberReference {

	// Properties
	case all  
	case first  
	case last  
	case next  
	case previous  
 }

 enum SiriVideoIntents.SearchAttribute {

	// Properties
	case firstRun  
	case hd  
	case uhd  
	case dolbyVision  
	case dolbyAtmos  
	case hdr  
	case rentalAvailable  
	case purchaseAvailable  
	case dubbed  
	case subtitled  
	case threeD  
	case imax  
	case matinee  
	case awardsNominated  
	case awardsWon  
	case preorderAvailable  
	case free  
	case purchased  
	case rented  
	case resume  
 }

 enum SiriVideoIntents.RecommendedAgeRange {

	// Properties
	case minAge  
	case maxAge  
 }

 enum SiriVideoIntents.Sort {

	// Properties
	case allTimeBest  
	case allTimeWorst  
	case best  
	case worst  
	case popular  
	case recommended  
	case newest  
	case oldest  
	case grossing  
 }

 enum SiriVideoIntents.List {

	// Properties
	case favorites  
	case wishlist  
	case watchlist  
 }

 enum SiriVideoIntents.Noun {

	// Properties
	case awards  
	case tvShow  
	case tvSeason  
	case tvEpisode  
	case movie  
	case channel  
	case showtimes  
	case things  
	case trailer  
	case tickets  
	case theaters  
	case videos  
 }

 enum SiriVideoIntents.Verb {

	// Properties
	case find  
	case play  
	case add  
	case remove  
	case fetchPage  
 }

 class SiriVideoIntents.CommonIntentContinueInAppStrategy {
 struct SiriVideoIntents.VideoDialogProvider {

	// Properties
	let dialogProvider : DialogProviding // +0x0
 }

 struct SiriVideoIntents.PlayContentParams {

	// Properties
	let title : String // +0x0
	let appName : String? // +0x10
 }

 struct SiriVideoIntents.TitleSearchParams {

	// Properties
	let title : String // +0x0
 }

 struct SiriVideoIntents.UnlockDeviceParams {

	// Properties
	var isPad : Bool // +0x0
	var isPhone : Bool // +0x1
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case title  
	case appName  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case title  
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case isPad  
	case isPhone  
 }

 class SiriVideoIntents.ContentResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let utsProvider : UTSProviding

	// Swift methods
	0x997d0  func <stripped> // method 
	0x9a4b0  func <stripped> // method 
	0x9ace0  func <stripped> // method 
	0x9b540  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSIdentifier {

	// Properties
	case canonical : (umcId: String)
	case external : (externalId: String, brandId: String)
 }

 class SiriVideoIntents.CommonMediaItemDisambiguationFlowStrategy {
 class SiriVideoIntents.KnowledgeProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x9f110  func <stripped> // method 
 }

 class SiriVideoIntents.FakeStore : NowPlayingUsageSignal.KnowledgeProvider { }

 struct SiriVideoIntents.NowPlayingUsageSignal {

	// Properties
	let usage7Days : [String : NSNumber] // +0x0
	let timeElapsed : Double // +0x8
 }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0xa3f10  func FindVideo.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : è*

	// Swift methods
	0xa5470  func RemoveFromWatchList.FlowStrategy.actionForInput(input:) // method 
	0xa5600  func RemoveFromWatchList.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.InstalledAppProvider { }

 struct SiriVideoIntents.AppInfoProvider: AppInfoProviding { }

 class SiriVideoIntents.UserDefaultsProviderImpl : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UserDefaultsProvider {

	// Properties
	let userDefaults : NSUserDefaults?

	// Swift methods
	0xa84b0  func <stripped> // getter 
 }

 enum SiriVideoIntents.PlayVideo { }

 enum SiriVideoIntents.Genre {

	// Properties
	case action  
	case adventure  
	case alternateHistory  
	case animation  
	case anime  
	case biography  
	case bollywood  
	case classics  
	case comedy  
	case crime  
	case docudrama  
	case documentary  
	case drama  
	case erotic  
	case educational  
	case fantasy  
	case international  
	case gameshow  
	case history  
	case holiday  
	case horror  
	case independent  
	case jidaigeki  
	case kidsAndFamily  
	case lgbt  
	case mockumentary  
	case music  
	case musical  
	case mystery  
	case news  
	case nollywood  
	case novela  
	case publicBroadcast  
	case reality  
	case romance  
	case satire  
	case sciFi  
	case shortFilms  
	case sitcom  
	case specialInterest  
	case sports  
	case superhero  
	case talkShow  
	case teens  
	case thriller  
	case tokusatsu  
	case war  
	case western  
 }

 enum SiriVideoIntents.Tasks { }

 class SiriVideoIntents.LiveServiceResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let utsProvider : UTSProviding

	// Swift methods
 }

 struct SiriVideoIntents.OpenWatchListFlow { }

 class SiriVideoIntents.AtomicValue {
 class SiriVideoIntents.Keys : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriVideoIntents.SearchProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spotlight : SpotlightSearchProviding

	// Swift methods
	0xb5490  func <stripped> // method 
 }

 struct SiriVideoIntents.SpotlightSignal {

	// Properties
	var matches : [String : NSNumber] // +0x0
	let timeElapsed : Double // +0x8
 }

 class SiriVideoIntents.AddToWatchListIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let watchListService : WatchListService
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe68c00038320 (0x68c00038320) in binary!
	0x1391c  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x13910000381a0 (0x110000381a0) in binary!
	0x13904  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xc0ac00038200 (0xac00038200) in binary!
	0x25029232840  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x697269533a4d4152 (0x1533a4d4152) in binary!
	0x2073746e65  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x69533a5443454a4f (0x25443454a4f) in binary!
	0xa31  @objc AddToWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0xb6340  func AddToWatchListIntentHandler.resolveContent(for:with:) // method 
	0xb7550  func AddToWatchListIntentHandler.confirm(intent:completion:) // method 
	0xb7850  func AddToWatchListIntentHandler.handle(intent:completion:) // method 
 }

 struct SiriVideoIntents.AppSelectionSignals { }

 struct SiriVideoIntents.RawSignalResult {

	// Properties
	let candidateBundleIdentifiers : Set<String> // +0x0
	let signals : AppSignal // +0x8
 }

 class SiriVideoIntents.UTSOperation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let utsRequestTimeoutMs : Int
	let analyticsService : AnalyticsService

	// Swift methods
	0xc0a20  class func <stripped> // init 
	0xc0ad0  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSOperationError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case watchListKitError : u˙
	case timeoutError  
	case unsupportedPlatformError  
 }

 enum SiriVideoIntents.MobileGestalt { }

 enum SiriVideoIntents.DeviceType {

	// Properties
	case iPhone  
	case iPad  
	case homePod  
	case appleTV  
	case mac  
	case watch  
 }

 struct SiriVideoIntents.UTSResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dictionary :  empty-list  // +0x0
	let url : String // +0x8
	let statusCode : Int // +0x18
 }

 enum __C.OrdinalReference { }

 enum __C.ContentType { }

 enum __C.ContentSort { }

 enum __C.INMediaSortOrder { }

 enum __C.INPlayMediaIntentResponseCode { }

 enum __C.INMediaItemType { }

 class __C.CFError {
 enum __C.MRPlaybackState { }
