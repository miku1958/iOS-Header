 protocol SiriAudioSupport.EntityConfidenceSignal // 2 requirements
 {
	// class getter
	// class method
 }
 protocol SiriAudioSupport.LibraryProviding // 11 requirements
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
 }
 protocol SiriAudioSupport.InstalledAppProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.MediaPlaybackProviding // 22 requirements
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
 protocol SiriAudioSupport.StringsFileResolving // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.MediaSearchProviding // 1 requirements
 {
	// getter
 }
 protocol SiriAudioSupport.AppSelectionIndependentSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriAudioSupport.AppNameResolving // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.AppSignal // 5 requirements
 {
	// getter
	// class getter
	// method
	// method
	// method
 }
 protocol SiriAudioSupport.PrivateMediaIntentDataProviding // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol SiriAudioSupport.AppSelectionIntentDependentSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriAudioSupport.MultiUserConnectionProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.PlaybackLocalSearching // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.PlaybackCreateRadioProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.NowPlayingUsageProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.AppSelectionCandidateGatheringSignal // 3 requirements
 {
	// class base protocol
	// class method
	// method
 }
 protocol SiriAudioSupport.DeviceProviding // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol SiriAudioSupport.FeatureFlagProviding // 8 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
 }
 protocol SiriAudioSupport.ExecutorProviding // 4 requirements
 {
	// method
	// getter
	// getter
	// getter
 }
 protocol SiriAudioSupport.SubscriptionProviding // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SiriAudioSupport.AppSelectionConfigurationLevelProviding // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol SiriAudioSupport.MediaServiceConfigurationProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.AccountProviding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriAudioSupport.AppSelectionConfigurationProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.UserPreferenceProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.NowPlayingProviding // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol SiriAudioSupport.PlaybackQueueLocationProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.ShuffleSupportingQueue // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.SpotlightSearchProviding // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SiriAudioSupport.PlaybackHandling // 5 requirements
 {
	// class getter
	// class getter
	// class init
	// method
	// method
 }
 protocol SiriAudioSupport.PlayMediaIntentAppSelecting // 2 requirements
 {
	// method
	// method
 }
 protocol SiriAudioSupport.MorphunProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.PlaybackStarting // 2 requirements
 {
	// method
	// method
 }

 struct SiriAudioSupport.EntitySignal {

	// Properties
	let identifier : String? // +0x0
	let signals : [String : Any] // +0x10
 }

 class SiriAudioSupport.SiriRemembersEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.InstalledAppProvider { }

 class SiriAudioSupport.SelectedAppSignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var selected : String?
	let selectedInferred : Bool
	let timeElapsed : Double

	// Swift methods
	0x8e50  func <stripped> // method 
	0x9120  func <stripped> // method 
 }

 class SiriAudioSupport.PodcastPlaybackHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x9fc0  class func <stripped> // getter 
	0x9fd0  class func <stripped> // getter 
	0xa010  class func <stripped> // init 
 }

 struct SiriAudioSupport.SubscriptionProvider { }

 enum SiriAudioSupport.PlaybackRepeatMode {

	// Properties
	case none  
	case one  
	case all  
	case unknown  
	case unsupported  
 }

 struct SiriAudioSupport.InstalledApp {

	// Properties
	let bundleIdentifier : String // +0x0
	let supportedMediaCategories : [String] // +0x10
	let supportedIntents : [String] // +0x18
 }

 struct SiriAudioSupport.EntityConfidenceSignals { }

 struct SiriAudioSupport.SignalResult {

	// Properties
	let signalType : EntityConfidenceSignal // +0x0
	let signals : EntitySignal // +0x10
	let timeElapsed : Double // +0x18
 }

 class SiriAudioSupport.AtomicDictionary {
 class SiriAudioSupport.MorphunProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var enabledLanguages : Set<String>
	var enabledLanguagesLock : NSLock

	// Swift methods
	0x13f20  func MorphunProvider.hasNeededDataToUseMorphunInflection(for:) // method 
 }

 class SiriAudioSupport.PodcastCollectionPlaybackHandler : PodcastPlaybackHandler { }

 struct SiriAudioSupport.Completions { }

 enum SiriAudioSupport.TimeoutMillis {

	// Properties
	case mediaPlayback  
	case boltAccountLookup  
	case morphunProvider  
	case libraryResolution  
	case appSelectionSignals  
	case prepareForAudioHandoffCarPlay  
	case prepareForAudioHandoff  
	case audioFlowDelegatePluginWarmup  
	case testSmall  
	case testLarge  
 }

 struct SiriAudioSupport.PlaybackAttributes {

	// Properties
	var shuffle : Bool // +0x0
	let overrideManuallyCuratedQueue : Bool // +0x1
	let requesterSharedUserID : String? // +0x8
	let hashedRouteUIDs : [String] // +0x18
	let playbackQueueLocation : PlaybackQueueLocation // +0x20
	let repeatMode : PlaybackRepeatMode // +0x21
	let startPlaybackImmediately : Bool // +0x22
 }

 struct SiriAudioSupport.PlaybackQueueLocationProvider {

	// Properties
	let accountService : AccountProviding // +0x0
	let mediaPlayback : MediaPlaybackProviding // +0x28
 }

 class SiriAudioSupport.RemotePlaylistPlaybackHandler : RemotePlaybackHandler { }

 class SiriAudioSupport.AtomicValue {
 class SiriAudioSupport.LocalPlaylistPlaybackHandler : LocalPlaybackHandler { }

 struct SiriAudioSupport.AccountProvider { }

 class SiriAudioSupport.LocalArtistCollectionPlaybackHandler : LocalPlaybackHandler { }

 struct SiriAudioSupport.PlaybackCreateRadioProvider {

	// Properties
	let accountService : AccountProviding // +0x0
	let mediaPlayback : MediaPlaybackProviding // +0x28
 }

 class SiriAudioSupport.PlaybackItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetInfo : String?
	let uri : String
	let identifier : Identifier

	// Swift methods
	0x3c980  func PlaybackItem.description.getter // getter 
	0x3ce10  class func PlaybackItem.__allocating_init(_:assetInfo:) // init 
	0x3ced0  func PlaybackItem.assetInfo.getter // getter 
	0x3cf10  func PlaybackItem.assetInfo.setter // setter 
	0x3cf50  func PlaybackItem.assetInfo.modify // modifyCoroutine 
 }

 struct SiriAudioSupport.Identifier {

	// Properties
	let scheme : Scheme // +0x0
	let contentOrigin : ContentOrigin // +0x1
	let identifier : String // +0x8
 }

 enum SiriAudioSupport.ContentOrigin {

	// Properties
	case device  
	case multiverse  
	case store  
	case ulid  
	case spotlight  
	case wholelibrary  
	case unknown  
 }

 enum SiriAudioSupport.Scheme {

	// Properties
	case radioStation  
	case playlist  
	case album  
	case song  
	case podcastEpisode  
	case podcastCollection  
	case podcastUuidCollection  
	case podcastStation  
	case artist  
	case genre  
	case library  
	case createStation  
	case podcastLibrary  
	case unknown  
 }

 class SiriAudioSupport.SelectedEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.PlayMediaAppSelectionInput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var result_clientCarConnected : String
	var result_clientCarplay : String
	var result_clientDaylight : String
	var result_clientDevice : String
	var result_clientHourOfDay : Double
	var result_clientIsActiveForegroundApp : Double
	var result_clientLocaleIdentifier : String
	var result_clientLocked : String
	var result_clientMotion : String
	var result_clientNavigating : String
	var result_clientWorkout : String
	var result_foregroundAppIsLastUsed : Double
	var result_interactionType : String
	var result_isNowPlayingApp : Double
	var result_mediaArtistPresent : Double
	var result_mediaGenrePresent : Double
	var result_mediaNamePresent : Double
	var result_mediaParsecCategory : String
	var result_mediaPlaybackLocation : String
	var result_mediaType : String
	var result_nowPlayingState : String
	var result_nowPlayingUsage7Days : Double
	var result_nowPlayingUsage1Day : Double
	var result_nowPlayingUsage14Days : Double
	var result_entitySearchBundleScore : Double
	var result_entitySearchBundleRecency : Double
	var result_foregroundAppElapsedSeconds : Double
	var result_nowPlayingLastBundle : Double
	var result_nowPlayingLastBundleRecency : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1069400032498 (0x69400032498) in binary!
	0x6602  @objc PlayMediaAppSelectionInput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x45cfff4bbc0  @objc PlayMediaAppSelectionInput.(null) <stripped>

	// Swift methods
	0x3fc10  func <stripped> // method 
 }

 class SiriAudioSupport.PlayMediaAppSelectionOutput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MLFeatureProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedApp : QÕ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedAppProbability :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1067400032478 (0x67400032478) in binary!
	0x65e2  @objc PlayMediaAppSelectionOutput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x17cfffa7990  @objc PlayMediaAppSelectionOutput.(null) <stripped>

	// Swift methods
	0x409b0  func <stripped> // getter 
 }

 class SiriAudioSupport.PlayMediaAppSelection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let model : MLModel

	// Swift methods
	0x40bb0  func <stripped> // method 
 }

 class SiriAudioSupport.NowPlayingStateClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.LibraryProvider {

	// Properties
	let mediaLibrary : MPMediaLibrary // +0x0
	let cloudController : MPCloudController // +0x8
	let musicPlayerController : MPMusicPlayerController // +0x10
	let playlistQuery : () // +0x18
	let songQuery : () // +0x28
	let albumQuery : () // +0x38
	let accountProvider : AccountProvider // +0x0
 }

 struct SiriAudioSupport.ExecutorProvider { }

 class SiriAudioSupport.ServerSearchEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.CandidateEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum SiriAudioSupport.PlaybackCode {

	// Properties
	case unknown  
	case iTunesAccountError  
	case setQueueGenericFailure  
	case noSetQueueCodes  
	case playbackFailed  
	case prepareForSetQueueError  
	case unsupportedPlaybackQueueLocation  
	case addToUpNextFailure  
	case createRadioFailure  
	case unknownScheme  
	case platformUnsupported  
	case malformedItems  
	case repeatFailed  
	case playbackDeviceNotFound  
	case itemsNotAvailableInLibrary  
	case noCachedForYouItems  
	case ageVerificationExplicitContent  
	case notFound  
	case emptyLibrary  
	case companionNotSupported  
	case icUserIdentityError  
	case swiftTypeError  
	case needsNetwork  
	case needsCompanion  
	case streamingUnavailable  
	case onDevice  
	case onCompanion  
	case errorLoadingLibrary  
	case mpMediaQueryError  
	case podcastKitControllerError  
	case noPermission  
	case cloudLibraryOff  
	case noNetwork  
	case idNotFound  
	case notSupported  
	case cancelled  
	case timedOut  
	case itemAlreadyAdded  
	case nothingPlaying  
	case getNowPlayingFailed  
	case subscriptionError  
	case playlistNotFound  
 }

 struct SiriAudioSupport.Insights { }

 class SiriAudioSupport.PodcastUuidPlaybackHandler : PodcastPlaybackHandler { }

 class SiriAudioSupport.LocalPlaybackHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mediaPlayback : MediaPlaybackProviding
	let account : AccountProviding
	let playbackStarter : PlaybackStarting

	// Swift methods
	0x58cf0  func <stripped> // method 
	0x5a640  func <stripped> // method 
 }

 class SiriAudioSupport.ServerEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.PlaybackLocalSearcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spotlight : SpotlightSearchProviding
	let mediaPlayback : MediaPlaybackProviding

	// Swift methods
	0x61a80  func PlaybackLocalSearcher.search(mediaName:artistName:albumName:genreNames:completion:) // method 
 }

 class SiriAudioSupport.NowPlayingClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.AppNameResolver {

	// Properties
	let deviceProvider : DeviceProviding // +0x0
	let featureFlagProvider : FeatureFlagProviding // +0x28
 }

 struct SiriAudioSupport.FeatureFlagProvider {

	// Properties
	let isBoltEnabled : Bool // +0x0
	let isPymEnabled : Bool // +0x1
	let isAppTrainingDisambiguationEnabled : Bool // +0x2
	let isAppSelectionEnabled : Bool // +0x3
	let appTrainingDisambiguationRate : Int // +0x8
 }

 class SiriAudioSupport.LocalGenreCollectionPlaybackHandler : LocalPlaybackHandler { }

 struct SiriAudioSupport.StringsFileResolver { }

 enum SiriAudioSupport.BundleIdentifiers { }

 class SiriAudioSupport.PlayMediaAppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6d1f0  func PlayMediaAppSelector.select(for:completion:) // method 
	0x6fc30  func PlayMediaAppSelector.recordSignals(for:bundleIdentifier:force:completion:) // method 
 }

 struct SiriAudioSupport.AppSelectionReport {

	// Properties
	let appSelectionUsed : Bool // +0x0
	let experimentId : String // +0x8
	let treatmentId : String // +0x18
	let rolloutId : String // +0x28
	let confidenceAbs : Double // +0x38
	let confidenceOddsRatio : Double // +0x40
	let bundleIdentifier : String // +0x48
 }

 class SiriAudioSupport.AppSelectionContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var report : AppSelectionReport
	var record : RecordableResult

	// Swift methods
	0x71e90  func AppSelectionContext.report.getter // getter 
	0x71f70  func AppSelectionContext.report.setter // setter 
	0x72060  func AppSelectionContext.report.modify // modifyCoroutine 
	0x72090  func AppSelectionContext.record.getter // getter 
	0x720d0  func AppSelectionContext.record.setter // setter 
	0x72110  func AppSelectionContext.record.modify // modifyCoroutine 
 }

 struct SiriAudioSupport.Aggregations { }

 struct SiriAudioSupport.AppSelectionConfigurationLevelProvider: AppSelectionConfigurationLevelProviding {

	// Properties
	let client : TRIClient // +0x0
	let namespace : String // +0x8
 }

 struct SiriAudioSupport.AppSelectionConfigurationProvider {

	// Properties
	let loader : AtomicValue // +0x0
 }

 struct SiriAudioSupport.PlaybackStarter {

	// Properties
	let mediaPlayback : MediaPlaybackProviding // +0x0
	let account : AccountProviding // +0x28
 }

 class SiriAudioSupport.RemotePlaybackHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mediaPlayback : MediaPlaybackProviding
	let account : AccountProviding
	let localPlaybackHelper : LocalPlaybackHelper
	let playbackStarter : PlaybackStarting
	let playbackQueueLocation : PlaybackQueueLocationProviding

	// Swift methods
	0x80090  class func <stripped> // init 
	0x80b70  class func <stripped> // init 
	0x80470  func <stripped> // method 
	0x81820  func <stripped> // method 
	0x82a80  func <stripped> // method 
	0x80900  func <stripped> // method 
 }

 class SiriAudioSupport.SpotlightSearchProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.PlaybackService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handlerTypes : PlaybackHandling
	let handlerTypeCache : AtomicDictionary
	let handlerHydrator : PlaybackHandling

	// Swift methods
	0x8bca0  func PlaybackService.warm(item:playbackAttributes:completion:) // method 
	0x8c030  func PlaybackService.play(item:playbackAttributes:continuation:completion:) // method 
 }

 struct SiriAudioSupport.DirichletScore { }

 struct SiriAudioSupport.SupportedMediaSignal {

	// Properties
	let mediaCategories : [String : [String]] // +0x0
	let timeElapsed : Double // +0x8
	var unionMediaCategories : Set<String> // +0x10
 }

 struct SiriAudioSupport.UserPreferenceProvider { }

 struct SiriAudioSupport.Tasks { }

 struct SiriAudioSupport.Identity {

	// Properties
	let userIdentity : ICUserIdentity? // +0x0
	let privateListening : NSNumber? // +0x8
 }

 class SiriAudioSupport.CustomAppResolutionProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conversionAppResolutionStateProviding : ŸÆ
	var updatedIntent : INIntent

	// Swift methods
	0x943f0  class func CustomAppResolutionProvider.__allocating_init(conversionAppResolutionStateProviding:updatedIntent:) // init 
	0x944a0  func CustomAppResolutionProvider.getRequestedApp() // method 
	0x944c0  func CustomAppResolutionProvider.getSuggestedApp() // method 
	0x94520  func CustomAppResolutionProvider.getConfirmationResponse() // method 
	0x94560  func CustomAppResolutionProvider.getUpdatedIntent() // method 
 }

 struct SiriAudioSupport.CreateStationPlaybackHandler {

	// Properties
	let createRadioProvider : PlaybackCreateRadioProviding // +0x0
 }

 class SiriAudioSupport.SpotlightSignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var matches : [String : Double]
	let timeElapsed : Double

	// Swift methods
	0x97060  func <stripped> // method 
 }

 class SiriAudioSupport.Keys : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.SearchProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spotlight : SpotlightSearchProviding

	// Swift methods
	0x971a0  func <stripped> // method 
 }

 struct SiriAudioSupport.Time { }

 class SiriAudioSupport.WholeLibraryHandler : MPMediaQueryHandler { }

 struct SiriAudioSupport.Pair {

	// Properties
	let values : (A, B)
 }

 class SiriAudioSupport.RecordableResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String
	let version : Int
	let timeElapsed : Double
	let rows : [[String : Any]]
	var info : [String : Any]
	let signalTiming : [String : NSNumber]
	let test : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1061e00032188 (0x61e00032188) in binary!
	0x65a2  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x1061c00032188 (0x61c00032188) in binary!
	0x10618  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x7075536f69647541 (0x36f69647541) in binary!
	0x25443454a4f  @objc RecordableResult.(null) <stripped>

	// Swift methods
	0x9c940  func RecordableResult.info.getter // getter 
	0x9c980  func RecordableResult.info.setter // setter 
	0x9c9d0  func RecordableResult.info.modify // modifyCoroutine 
	0x9c6e0  class func RecordableResult.__allocating_init(name:version:timeElapsed:rows:info:signalTiming:test:) // init 
	0x9caf0  func RecordableResult.json() // method 
	0x9cfc0  func RecordableResult.encode(with:) // method 
	0x9d2f0  class func RecordableResult.__allocating_init(coder:) // init 
 }

 struct SiriAudioSupport.AppSelectionConfiguration {

	// Properties
	let appSelectionEnabled : Bool // +0x0
	let minimumConfidenceOddsRatio : Double // +0x8
	let minimumAbsoluteConfidence : Double // +0x10
	let videoAppBundleIdentifiers : Set<String> // +0x18
	let model : PlayMediaAppSelection // +0x20
	let trialTrackingId : TRITrackingId? // +0x28
	let trialExperimentId : String? // +0x30
	let trialTreatmentId : String? // +0x40
	let trialRolloutId : String? // +0x50
 }

 struct SiriAudioSupport.UserPreferenceLookupData {

	// Properties
	var serviceBundleIdentifier : String? // +0x0
	var fallbackUserSharedUserID : String? // +0x10
	var fallbackUsername : String? // +0x20
 }

 struct SiriAudioSupport.Locks { }

 class SiriAudioSupport.LocalAlbumPlaybackhandler : LocalPlaybackHandler { }

 class SiriAudioSupport.RemoteAlbumPlaybackHandler : RemotePlaybackHandler { }

 class SiriAudioSupport.MPCAssistantQueueHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mediaPlayback : MediaPlaybackProviding
	let starter : PlaybackStarting
	let account : AccountProviding
	let playbackQueueLocation : PlaybackQueueLocationProviding

	// Swift methods
	0xa2c60  class func <stripped> // getter 
	0xa2cb0  class func <stripped> // getter 
	0xa2890  class func <stripped> // init 
	0xa2d00  class func <stripped> // init 
	0xa4470  func <stripped> // method 
	0xa44c0  func <stripped> // method 
 }

 struct SiriAudioSupport.DeviceProvider {

	// Properties
	let isHomePod : Bool // +0x0
	let isIPad : Bool // +0x1
	let isInternalBuild : Bool // +0x2
 }

 enum SiriAudioSupport.PlaybackQueueLocation {

	// Properties
	case now  
	case next  
	case later  
	case unknown  
	case unsupported  
 }

 struct SiriAudioSupport.SearchItem {

	// Properties
	let identifier : String
	let artist : String?
	let album : String?
	let title : String?
	let bundleIdentifier : String?
	let type : SearchItemType
	let track : Int?
	let playCount : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastUsed : µÕ
	let availableLocally : Bool?
	let genre : String?
 }

 enum SiriAudioSupport.SearchItemType {

	// Properties
	case song  
 }

 class SiriAudioSupport.LocalSongPlaybackHandler : LocalPlaybackHandler { }

 class SiriAudioSupport.ClientContextEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.FakeStore : ForegroundAppSignal.KnowledgeProvider { }

 class SiriAudioSupport.KnowledgeProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xa84e0  func <stripped> // method 
 }

 struct SiriAudioSupport.ForegroundAppSignal {

	// Properties
	let lastApp : String? // +0x0
	let timeSinceLastApp : NSNumber? // +0x10
	let timeElapsed : Double // +0x18
 }

 class SiriAudioSupport.LocalSearchEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.SpotlightHandler : MPMediaQueryHandler { }

 class SiriAudioSupport.LocalPlaybackHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mediaPlayback : MediaPlaybackProviding
	let account : AccountProviding
	let localPlaybackHelper : LocalPlaybackHelper
	let playbackStarter : PlaybackStarting
	let playbackQueueLocation : PlaybackQueueLocationProviding

	// Swift methods
	0xab760  class func <stripped> // init 
	0xacb90  class func <stripped> // init 
	0xabb40  func <stripped> // method 
 }

 struct SiriAudioSupport.Normalize { }

 class SiriAudioSupport.PodcastLibraryPlaybackHandler : PodcastPlaybackHandler { }

 struct SiriAudioSupport.PlayMediaAppSelectionResult {

	// Properties
	let bundleIdentifier : String? // +0x0
	let attempted : Bool // +0x10
 }

 struct SiriAudioSupport.NowPlayingProvider { }

 struct SiriAudioSupport.AppSelectionSignals { }

 struct SiriAudioSupport.RawSignalResult {

	// Properties
	let candidateBundleIdentifiers : Set<String> // +0x0
	let signals : AppSignal // +0x8
 }

 class SiriAudioSupport.RemoteRadioPlaybackHandler : RemotePlaybackHandler { }

 class SiriAudioSupport.RecordStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xbfcc0  func RecordStore.permitted.getter // getter 
	0xbfd00  func RecordStore.shouldMakeRecord(force:frequencyDenominator:) // method 
	0xbfd10  func RecordStore.makeRecord(result:completion:) // method 
 }

 class SiriAudioSupport.MPMediaQueryHandler : MPCAssistantQueueHandler {
	// Swift methods
	0xc3570  func <stripped> // method 
 }

 struct SiriAudioSupport.MPMediaQueryAttributes {

	// Properties
	let predicates : [MPMediaPredicate] // +0x0
	let includeNonLibraryEntities : Bool // +0x8
	let grouping : MPMediaGrouping // +0x10
	let limit : Int // +0x20
	let entities : MPMediaQueryEntities // +0x28
 }

 struct SiriAudioSupport.MPMediaQueryEntities {

	// Properties
	let entities : [MPMediaEntity] // +0x0
	let entityType : MPMediaEntityType // +0x8
 }

 class SiriAudioSupport.ContextProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.AtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : NSLock
	var complete : Bool
	let name : String

	// Swift methods
	0xc6460  class func AtomicOnce.__allocating_init(name:) // init 
	0xc65a0  func AtomicOnce.evaluate(_:) // method 
 }

 struct SiriAudioSupport.DispatchQueues { }

 class SiriAudioSupport.RemoteSongPlaybackHandler : RemotePlaybackHandler { }

 class SiriAudioSupport.MediaPlaybackProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let availability : MPCAssistantAvailability
	let account : AccountProviding
	let encoding : MPCAssistantEncodings
	let assistantDiscovery : MPCAssistantDiscovery
	let executor : ExecutorProviding

	// Swift methods
	0xcf7c0  func <stripped> // method 
	0xd0cf0  func <stripped> // method 
	0xd1e50  func <stripped> // method 
	0xd3200  func <stripped> // method 
	0xd3a00  func <stripped> // method 
	0xd4e30  func <stripped> // method 
	0xd57a0  func <stripped> // method 
	0xd6770  func <stripped> // method 
 }

 class SiriAudioSupport.MediaPlaybackLite : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MediaPlaybackProvider
	var lastOrigin : String?
	var refId : String?
	var prepareForSetQueueOptions : CFString
	var prepareForSetQueueValue : AtomicValue

	// Swift methods
	0xd7740  func MediaPlaybackLite.lastOrigin.getter // getter 
	0xd7780  func MediaPlaybackLite.lastOrigin.setter // setter 
	0xd77c0  func MediaPlaybackLite.lastOrigin.modify // modifyCoroutine 
	0xd80e0  func MediaPlaybackLite.warm(refId:completion:) // method 
	0xd8490  func MediaPlaybackLite.waitForPrepareForSetQueue(completion:) // method 
	0xd89a0  func MediaPlaybackLite.prepareForSetQueue(refId:ignoreCache:completion:) // method 
	0xd8f60  func MediaPlaybackLite.setRepeatMode(refId:repeatMode:completion:) // method 
	0xd9420  func MediaPlaybackLite.prepareForAudioHandoff(completion:) // method 
 }

 class SiriAudioSupport.LastNowPlayingSignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mostRecentBundleIdentifier : String?
	let mostRecentBundleIdentifierElapsed : Double
	let bundleRecency : [String : Double]
	var bundleScore : [String : Double]
	var counts : [String : Int]
	let timeElapsed : Double
	var usage1Day : [String : Double]
	var usage7Days : [String : Double]
	var usage14Days : [String : Double]

	// Swift methods
	0xe8af0  func <stripped> // method 
	0xe91b0  func <stripped> // method 
	0xe9870  func <stripped> // method 
 }

 class SiriAudioSupport.PlaybackItemContainer : PlaybackItem {

	// Properties
	let subItems : PlaybackItem
	let recommendationID : String?
	let sharedUserIdFromPlayableMusicAccount : String?

	// Swift methods
	0xeac70  class func PlaybackItemContainer.__allocating_init(_:assetInfo:subItems:recommendationID:sharedUserIdFromPlayableMusicAccount:) // init 
 }

 class SiriAudioSupport.NowPlayingUsageProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var store : Store
	let lock : NSLock

	// Swift methods
	0xeb0d0  func <stripped> // method 
	0xec240  func <stripped> // method 
 }

 struct SiriAudioSupport.Store {

	// Properties
	let timestamp : Double // +0x0
	var recent : Event // +0x8
	var eventsByDay : [Int : [String : Int]] // +0x10
 }

 enum SiriAudioSupport.CodingKeys {

	// Properties
	case timestamp  
	case recent  
	case eventsByDay  
 }

 struct SiriAudioSupport.Event {

	// Properties
	let bundleIdentifier : String // +0x0
	let timestamp : Double // +0x10
 }

 enum SiriAudioSupport.CodingKeys {

	// Properties
	case bundleIdentifier  
	case timestamp  
 }

 class SiriAudioSupport.PodcastStationPlaybackHandler : PodcastPlaybackHandler { }

 class __C.CFString {
 enum __C.INPlaybackRepeatMode { }

 enum __C.MRPlaybackState { }

 enum __C.INMediaItemType { }

 enum __C.MPMediaGrouping { }

 enum __C.SubscriptionStatus { }

 enum __C.MRMediaRemoteError { }

 class __C.CFError {
 enum __C.MPCAssistantStreamingAvailability { }

 struct __C.MPCAssistantWatchAudioRoutingInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hasPickedVirtualAudioRoute : éÚ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hasAvailableW1Route : éÚ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var speakerRouteEnabled : éÚ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isConnectedToCompanion : éÚ
 }

 enum __C.MPMediaEntityType { }
