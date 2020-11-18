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
 protocol SiriVideoIntents.WatchListService // 2 requirements
 {
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
 protocol SiriVideoIntents.AnalyticsService // 10 requirements
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
 protocol SiriVideoIntents.SpotlightSearchProviding // 2 requirements
 {
	// method
	// method
 }

 class SiriVideoIntents.FirstPartyVideoAppResolutionService {
 class SiriVideoIntents.LocUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
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
	let deviceState : Û
	let dialogProvider : VideoWatchListDialogProvider

	// Swift methods
	0x6220  func AddToWatchList.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let watchListService : WatchListService
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa8fc0002ced0 (0xfc0002ced0) in binary!
	0xf29c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf2900002cdd0 (0x2900002cdd0) in binary!
	0xf284  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x92bc0002cda8 (0x2bc0002cda8) in binary!
	0x58000000c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xa8b40002ce88 (0xb40002ce88) in binary!
	0xf254  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf2480002cd68 (0x2480002cd68) in binary!
	0xf23c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0x70a0  func RemoveFromWatchListIntentHandler.resolveContent(for:with:) // method 
	0x83a0  func RemoveFromWatchListIntentHandler.confirm(intent:completion:) // method 
	0x86f0  func RemoveFromWatchListIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û
	let watchListDialogs : VideoWatchListDialogProvider

	// Swift methods
	0xa7d0  func RemoveFromWatchList.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
 }

 class SiriVideoIntents.FindVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa8b40002ce88 (0xb40002ce88) in binary!
	0xf254  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf2480002cd68 (0x2480002cd68) in binary!
	0xf23c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x92740002cd60 (0x2740002cd60) in binary!
	0x58000000c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xa86c0002ce40 (0x6c0002ce40) in binary!
	0xf20c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf2000002cd08 (0x2000002cd08) in binary!
	0xf1f4  @objc FindVideoIntentHandler.(null) <stripped>

	// Swift methods
	0xb600  func FindVideoIntentHandler.resolveContent(for:with:) // method 
	0xc850  func FindVideoIntentHandler.confirm(intent:completion:) // method 
	0xc090  func FindVideoIntentHandler.handle(intent:completion:) // method 
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
	let deviceState : Û

	// Swift methods
	0x10f50  func AddToWatchList.FlowStrategy.actionForInput(input:) // method 
	0x110e0  func AddToWatchList.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 class SiriVideoIntents.CommonIntentThirdPartyAppResolution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intent : MediaNLIntent // +0x0 (0x0)

	// Swift methods
	0x11a90  func CommonIntentThirdPartyAppResolution.getRequestedApp() // method 
	0x11ce0  func CommonIntentThirdPartyAppResolution.getSuggestedApp() // method 
	0x11cf0  func CommonIntentThirdPartyAppResolution.getConfirmationResponse() // method 
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

 class SiriVideoIntents.PlayVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let analyticsService : AnalyticsService
	let backgroundFetch : BackgroundPlayableFetch

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa86c0002ce40 (0x6c0002ce40) in binary!
	0xf20c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf2000002cd08 (0x2000002cd08) in binary!
	0xf1f4  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x922c0002cd18 (0x22c0002cd18) in binary!
	0x28000000c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8a6c0002ccb8 (0x26c0002ccb8) in binary!
	0xa7e9  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x494fff83710  @objc PlayVideoIntentHandler.(null) <stripped>

	// Swift methods
	0x139f0  func PlayVideoIntentHandler.resolveContent(for:with:) // method 
	0x15520  func PlayVideoIntentHandler.confirm(intent:completion:) // method 
	0x15b00  func PlayVideoIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û
	let viewFactory : VideoViewFactory
	let watchListDialogs : VideoWatchListDialogProvider

	// Swift methods
	0x18700  func AddToWatchList.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x18720  func AddToWatchList.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
 }

 struct SiriVideoIntents.Genre {

	// Properties
	let name : String // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case name  
 }

 class SiriVideoIntents.UTSProvider {
 struct SiriVideoIntents.TimedResult {

	// Properties
	let result : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resolutionTimeMs : =Û
 }

 class SiriVideoIntents.UnsupportedValueStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x1def0  func PlayVideo.UnsupportedValueStrategy.makeUnsupportedValueOutput(app:intent:parameterName:multicardinalValueIndex:intentResolutionResult:_:) // method 
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
WARNING: couldn't find address 0xa7ee0002cca8 (0x7ee0002cca8) in binary!
	0x8caf  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0xa7ec0002cdc0 (0x7ec0002cdc0) in binary!
	0x91d0  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x43cfffb4328  @objc RecordableResult.(null) <stripped>
	0xfffb4560  @objc RecordableResult.Hâ«ˇ”IâƒMâıËËµ <stripped>

	// Swift methods
	0x1f280  class func RecordableResult.__allocating_init(name:timeElapsed:rows:info:signalTiming:test:) // init 
	0x1f3d0  func RecordableResult.json() // method 
	0x1f850  func RecordableResult.encode(with:) // method 
	0x1fb00  class func RecordableResult.__allocating_init(coder:) // init 
 }

 class SiriVideoIntents.AtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var hasRun : Bool
	var queue : OS_dispatch_queue

	// Swift methods
	0x258b0  func <stripped> // method 
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
	0x2d710  func <stripped> // method 
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
	var result_mediaAlbumPresent : Double
	var result_mediaArtistPresent : Double
	var result_mediaGenrePresent : Double
	var result_mediaMoodPresent : Double
	var result_mediaNamePresent : Double
	var result_mediaParsecCategory : String
	var result_mediaReleaseDatePresent : Double
	var result_mediaType : String
	var result_isNowPlayingDuetApp : Double
	var result_nowPlayingDuetElapsedSeconds : Double
	var result_nowPlayingState : String
	var result_spotlightMatches : Double
	var result_libraryItems : Double
	var result_subscriptionStatus : String
	var result_isNowPlayingApp : Double

	// Swift methods
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
	0x34e30  func PlayLiveService.FlowStrategy.actionForInput(input:) // method 
	0x34f50  func PlayLiveService.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 class SiriVideoIntents.MediaPersonOntologyNode {
 struct SiriVideoIntents.MediaNLPerson {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentNode : —ﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ontologyNode : Åﬂ
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
	var input : ìﬁ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewFactory : ª› // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û // +0x0 (0x28)
	let videoDialogs : VideoDialogProvider // +0x0 (0x28)

	// Swift methods
	0x36e20  func <stripped> // method 
 }

 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û
	let viewFactory : VideoViewFactory
	let watchListDialogs : VideoWatchListDialogProvider

	// Swift methods
	0x37f80  func RemoveFromWatchList.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x37fa0  func RemoveFromWatchList.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
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

 class SiriVideoIntents.CommonIntentThirdPartyAppResolutionStrategy {
 class SiriVideoIntents.HandleIntentStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û
	let viewFactory : VideoViewFactory
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x422d0  func PlayVideo.HandleIntentStrategy.makePreHandleIntentOutput(app:intent:intentResponse:_:) // method 
	0x42410  func PlayVideo.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
	0x42430  func PlayVideo.HandleIntentStrategy.makeFailureHandlingIntentResponse(app:intent:intentResponse:_:) // method 
 }

 class SiriVideoIntents.MediaAppOntologyNode {
 struct SiriVideoIntents.MediaNLApp {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intentNode : —ﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ontologyNode : Åﬂ
 }

 class SiriVideoIntents.AppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x443a0  func AppSelector.recordSignals(for:bundleIdentifier:completion:) // method 
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
	var startDate : ªÏ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDate : ªÏ
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
	0x4a3b0  func RecordStore.shouldMakeRecord(force:frequencyDenominator:) // method 
	0x4a3c0  func RecordStore.makeRecord(result:completion:) // method 
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û

	// Swift methods
	0x4be00  func PlayVideo.FlowStrategy.actionForInput(input:) // method 
	0x4bf90  func PlayVideo.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.VideoFlowProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û // +0x0
	let flowFactory : VideoFlowFactory // +0x28
	let testMode : Bool // +0x50
 }

 enum SiriVideoIntents.ContentDisambiguationProvider { }

 class SiriVideoIntents.PlayLiveServiceIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf1780002cc50 (0x1780002cc50) in binary!
	0xf16c  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xa7b40002cd88 (0x7b40002cd88) in binary!
	0x58000000c  @objc PlayLiveServiceIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xa79c0002cd70 (0x79c0002cd70) in binary!
	0xf13c  @objc PlayLiveServiceIntentHandler.(null) <stripped>

	// Swift methods
	0x50670  func PlayLiveServiceIntentHandler.resolveLiveService(for:with:) // method 
	0x507b0  func PlayLiveServiceIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.CommonIntentRequestTCCStrategy {
 struct SiriVideoIntents.SupportedMediaSignal {

	// Properties
	let candidateMediaCategories : [String : [String]] // +0x0
	let timeElapsed : Double // +0x8
 }

 struct SiriVideoIntents.SelectedAppSignal {

	// Properties
	let selected : String? // +0x0
	let timeElapsed : Double // +0x10
 }

 enum SiriVideoIntents.AddToWatchList { }

 struct SiriVideoIntents.VideoViewFactory {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û // +0x0
 }

 class SiriVideoIntents.CommonIntentFlowStrategy {
 class SiriVideoIntents.CommonHandleIntentStrategy {
 class SiriVideoIntents.BaseDisambiguateContentStrategy {
 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x59140  func FindVideo.FlowStrategy.actionForInput(input:) // method 
	0x59260  func FindVideo.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.ContentLiteResponse {

	// Properties
	let content : ContentLite // +0x0
 }

 struct SiriVideoIntents.EpisodeLite: UTSContentLite {

	// Properties
	let id : String // +0x0
	let type : String // +0x0
	let title : String // +0xa0f20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈– // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : Å // +0x61de0
	let genres : Genre // +0x0
	let showId : String // +0x61df0
	let showTitle : String // +0x0
	let seasonTitle : String // +0x61e00
	let images : ImagesLite // +0x0
 }

 struct SiriVideoIntents.MovieLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈–
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : Å
	let genres : Genre
	let images : ImagesLite
 }

 struct SiriVideoIntents.SeasonLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ≈–
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : Å
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
	let url : ≈–
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : Å
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
	let aceService : ´ÿ

	// Swift methods
	0x647e0  func <stripped> // method 
 }

 class SiriVideoIntents.BackgroundPlayableFetch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contentResolver : ContentResolving
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playableMap : String
	var groupMap : [String : OS_dispatch_group]
	let responseQueue : OS_dispatch_queue

	// Swift methods
	0x66730  func <stripped> // method 
	0x66bc0  func <stripped> // method 
	0x67b80  func <stripped> // method 
 }

 class SiriVideoIntents.ThirdPartyVideoAppResolutionService {
 struct SiriVideoIntents.Playable {

	// Properties
	let umcId : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playPunchout : +Ï
 }

 enum SiriVideoIntents.FindVideo { }

 struct SiriVideoIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : —
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
	0x75bf0  func <stripped> // method 
	0x768d0  func <stripped> // method 
	0x77100  func <stripped> // method 
	0x77960  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSIdentifier {

	// Properties
	case canonical : (umcId: String)
	case external : (externalId: String, brandId: String)
 }

 class SiriVideoIntents.KnowledgeProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x79560  func <stripped> // method 
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
	let deviceState : Û
	let videoDialogs : VideoDialogProvider

	// Swift methods
	0x7f1f0  func FindVideo.HandleIntentStrategy.makeIntentHandledResponse(app:intent:intentResponse:_:) // method 
 }

 class SiriVideoIntents.FlowStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Û

	// Swift methods
	0x80750  func RemoveFromWatchList.FlowStrategy.actionForInput(input:) // method 
	0x808e0  func RemoveFromWatchList.FlowStrategy.makeIntentFromParse(parse:currentIntent:completion:) // method 
 }

 struct SiriVideoIntents.InstalledAppProvider { }

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
	let utsProvider : UTSProviding // +0x86100

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
	0x8b710  func <stripped> // method 
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
WARNING: couldn't find address 0xa79c0002cd70 (0x79c0002cd70) in binary!
	0xf13c  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0xf1300002cbf0 (0x1300002cbf0) in binary!
	0xf124  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x915c0002cc48 (0x15c0002cc48) in binary!
	0x25029232840  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x697269533a4d4152 (0x1533a4d4152) in binary!
	0x2073746e65  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x69533a5443454a4f (0x25443454a4f) in binary!
	0xa31  @objc AddToWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0x8c5c0  func AddToWatchListIntentHandler.resolveContent(for:with:) // method 
	0x8d7d0  func AddToWatchListIntentHandler.confirm(intent:completion:) // method 
	0x8dad0  func AddToWatchListIntentHandler.handle(intent:completion:) // method 
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
	0x97710  class func <stripped> // init 
	0x977c0  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSOperationError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case watchListKitError : áÀ
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

 enum __C.INMediaItemType { }

 class __C.CFError {
 enum __C.MRPlaybackState { }
