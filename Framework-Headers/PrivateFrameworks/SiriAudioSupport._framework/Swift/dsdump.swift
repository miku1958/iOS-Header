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
 protocol SiriAudioSupport.AppNameResolving // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.AppSignal // 4 requirements
 {
	// getter
	// class getter
	// method
	// method
 }
 protocol SiriAudioSupport.PrivateMediaIntentDataProviding // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol SiriAudioSupport.AppSelectionGenericSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriAudioSupport.MultiUserConnectionProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.AppSelectionCandidateDependentSignal // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriAudioSupport.PlaybackLocalSearching // 1 requirements
 {
	// method
 }
 protocol SiriAudioSupport.PlaybackCreateRadioProviding // 1 requirements
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
 protocol SiriAudioSupport.FeatureFlagProviding // 2 requirements
 {
	// getter
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
 protocol SiriAudioSupport.AppSelectionConfigurationLevelProviding // 6 requirements
 {
	// getter
	// getter
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

 class SiriAudioSupport.FakeStore : NowPlayingUsageSignal.KnowledgeProvider { }

 struct SiriAudioSupport.LastNowPlayingSignal {

	// Properties
	let lastApp : String? // +0x0
	let timeSinceLastApp : NSNumber? // +0x10
	let timeElapsed : Double // +0x18
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
	0xa4c0  func <stripped> // method 
	0xa960  func <stripped> // method 
 }

 class SiriAudioSupport.PodcastPlaybackHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xbe30  class func <stripped> // getter 
	0xbe40  class func <stripped> // getter 
	0xbe80  class func <stripped> // init 
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
	0x15d10  func MorphunProvider.hasNeededDataToUseMorphunInflection(for:) // method 
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
	0x3ff90  func PlaybackItem.description.getter // getter 
	0x40420  class func PlaybackItem.__allocating_init(_:assetInfo:) // init 
	0x404e0  func PlaybackItem.assetInfo.getter // getter 
	0x40520  func PlaybackItem.assetInfo.setter // setter 
	0x40560  func PlaybackItem.assetInfo.modify // modifyCoroutine 
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
	var n_candidates : Double
	var result_asrConfidenceLevel : String
	var result_asrConfidenceScore : Double
	var result_audioRoutes : Double
	var result_clientCarConnected : String
	var result_clientCarplay : String
	var result_clientDaylight : String
	var result_clientDayOfWeek : Double
	var result_clientDevice : String
	var result_clientHourOfDay : Double
	var result_clientIsActiveForegroundApp : Double
	var result_clientLocaleIdentifier : String
	var result_clientLocaleLanguage : String
	var result_clientLocked : String
	var result_clientMotion : String
	var result_clientNavigating : String
	var result_clientWorkout : String
	var result_entitySearchDirichletScore : Double
	var result_entitySearchSecondsSinceLastInteraction : Double
	var result_foregroundAppDuetElapsedSeconds : Double
	var result_foregroundAppIsLastUsed : Double
	var result_interactionType : String
	var result_isNowPlayingApp : Double
	var result_isNowPlayingDuetApp : Double
	var result_libraryItems : Double
	var result_mediaAlbumPresent : Double
	var result_mediaArtistPresent : Double
	var result_mediaGenrePresent : Double
	var result_mediaMoodPresent : Double
	var result_mediaNamePresent : Double
	var result_mediaParsecCategory : String
	var result_mediaPlaybackLocation : String
	var result_mediaReleaseDatePresent : Double
	var result_mediaType : String
	var result_nlConfidenceLevel : String
	var result_nlConfidenceScore : Double
	var result_nowPlayingDuetElapsedSeconds : Double
	var result_nowPlayingState : String
	var result_nowPlayingUsage7Days : Double
	var result_nowPlayingUsage1Day : Double
	var result_nowPlayingUsage14Days : Double
	var result_serverSearchResultsAmpConfidenceLevel : String
	var result_serverSearchResultsAmpConfidenceScore : Double
	var result_serverSearchResultsMediaType : String
	var result_serverSearchResultsPresent : Double
	var result_serverSearchResultsSelected : Double
	var result_serverSignals : [String : Double]
	var result_spotlightMatches : Double
	var result_subscriptionStatus : String
	var result_supportedMediaCategories : [String : Double]
	var result_unionOfMediaCategories : [String : Double]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x11f2c00036090 (0x72c00036090) in binary!
	0x6cca  @objc PlayMediaAppSelectionInput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x54fff48778  @objc PlayMediaAppSelectionInput.(null) <stripped>

	// Swift methods
	0x43110  func <stripped> // method 
 }

 class SiriAudioSupport.PlayMediaAppSelectionOutput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MLFeatureProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedApp : ύδ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_result_isRequestedAppProbability :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x11f0c00036070 (0x70c00036070) in binary!
	0x6caa  @objc PlayMediaAppSelectionOutput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4d4fffa4b78  @objc PlayMediaAppSelectionOutput.(null) <stripped>

	// Swift methods
	0x44a10  func <stripped> // getter 
 }

 class SiriAudioSupport.PlayMediaAppSelection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let model : MLModel

	// Swift methods
	0x44c10  func <stripped> // method 
 }

 class SiriAudioSupport.NowPlayingStateClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.NowPlayingStateSignal {

	// Properties
	let nowPlayingState : String // +0x0
	let timeElapsed : Double // +0x10
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
	0x5dc30  func <stripped> // method 
	0x5f580  func <stripped> // method 
 }

 class SiriAudioSupport.ServerEntitySignal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.PlaybackLocalSearcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spotlight : SpotlightSearchProviding
	let mediaPlayback : MediaPlaybackProviding

	// Swift methods
	0x669c0  func PlaybackLocalSearcher.search(mediaName:artistName:albumName:genreNames:completion:) // method 
 }

 class SiriAudioSupport.NowPlayingClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.NowPlayingAppSignal {

	// Properties
	let nowPlayingBundleIdentifier : String? // +0x0
	let timeElapsed : Double // +0x10
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
 }

 class SiriAudioSupport.LocalGenreCollectionPlaybackHandler : LocalPlaybackHandler { }

 struct SiriAudioSupport.StringsFileResolver { }

 enum SiriAudioSupport.BundleIdentifiers { }

 class SiriAudioSupport.PlayMediaAppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x720b0  func PlayMediaAppSelector.select(for:completion:) // method 
	0x75850  func PlayMediaAppSelector.recordSignals(for:bundleIdentifier:completion:) // method 
 }

 struct SiriAudioSupport.AppSelectionReport {

	// Properties
	let appSelectionUsed : Bool // +0x0
	let experimentId : String // +0x8
	let treatmentId : String // +0x18
	let rolloutId : String // +0x28
	let confidenceAbs : Double // +0x38
	let confidenceNorm : Double // +0x40
	let bundleIdentifier : String // +0x48
 }

 class SiriAudioSupport.AppSelectionContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var report : AppSelectionReport
	var record : RecordableResult

	// Swift methods
	0x77860  func AppSelectionContext.report.getter // getter 
	0x77940  func AppSelectionContext.report.setter // setter 
	0x77a20  func AppSelectionContext.report.modify // modifyCoroutine 
	0x77a50  func AppSelectionContext.record.getter // getter 
	0x77a90  func AppSelectionContext.record.setter // setter 
	0x77ad0  func AppSelectionContext.record.modify // modifyCoroutine 
 }

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
	0x84600  class func <stripped> // init 
	0x850e0  class func <stripped> // init 
	0x849e0  func <stripped> // method 
	0x85d90  func <stripped> // method 
	0x86ff0  func <stripped> // method 
	0x84e70  func <stripped> // method 
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
	0x90210  func PlaybackService.warm(item:playbackAttributes:completion:) // method 
	0x905a0  func PlaybackService.play(item:playbackAttributes:continuation:completion:) // method 
 }

 struct SiriAudioSupport.SupportedMediaSignal {

	// Properties
	let candidateMediaCategories : [String : [String]] // +0x0
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

 struct SiriAudioSupport.CreateStationPlaybackHandler {

	// Properties
	let createRadioProvider : PlaybackCreateRadioProviding // +0x0
 }

 class SiriAudioSupport.Keys : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriAudioSupport.SearchProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spotlight : SpotlightSearchProviding

	// Swift methods
	0x9a750  func <stripped> // method 
 }

 struct SiriAudioSupport.SpotlightSignal {

	// Properties
	var matches : [String : NSNumber] // +0x0
	let timeElapsed : Double // +0x8
 }

 struct SiriAudioSupport.ClientContextSignal {

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
	let dayOfWeek : Int // +0x78
	let device : String // +0x80
 }

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
WARNING: couldn't find address 0x6f0a00035ce0 (0x70a00035ce0) in binary!
	0x6c6a  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x11eb400035d60 (0x6b400035d60) in binary!
	0x11eb0  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x36f69647541  @objc RecordableResult.(null) <stripped>
WARNING: couldn't find address 0x5250202074726f70 (0x2074726f70) in binary!
	0x16475416972  @objc RecordableResult.(null) <stripped>

	// Swift methods
	0xa0fd0  func RecordableResult.info.getter // getter 
	0xa1010  func RecordableResult.info.setter // setter 
	0xa1060  func RecordableResult.info.modify // modifyCoroutine 
	0xa0d70  class func RecordableResult.__allocating_init(name:version:timeElapsed:rows:info:signalTiming:test:) // init 
	0xa1180  func RecordableResult.json() // method 
	0xa1650  func RecordableResult.encode(with:) // method 
	0xa1980  class func RecordableResult.__allocating_init(coder:) // init 
 }

 struct SiriAudioSupport.AppSelectionConfiguration {

	// Properties
	let appSelectionEnabled : Bool // +0x0
	let minimumNormalizedConfidence : Double // +0x8
	let minimumAbsoluteConfidence : Double // +0x10
	let entitySearchBandwidthSeconds : Double // +0x18
	let videoAppBundleIdentifiers : Set<String> // +0x20
	let trialTrackingId : TRITrackingId? // +0x28
	let trialExperimentId : String? // +0x30
	let trialTreatmentId : String? // +0x40
	let trialRolloutId : String? // +0x50
	let modelValue : AtomicValue // +0x60
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

 struct SiriAudioSupport.IntentMediaSignal {

	// Properties
	let media : INMediaSearch? // +0x0
	let parsecCategory : INParsecCategory // +0x8
	let playbackLocation : INPlaybackQueueLocation // +0x18
	let timeElapsed : Double // +0x20
 }

 class SiriAudioSupport.MPCAssistantQueueHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let mediaPlayback : MediaPlaybackProviding
	let starter : PlaybackStarting
	let account : AccountProviding
	let playbackQueueLocation : PlaybackQueueLocationProviding

	// Swift methods
	0xad8c0  class func <stripped> // getter 
	0xad910  class func <stripped> // getter 
	0xad4f0  class func <stripped> // init 
	0xad960  class func <stripped> // init 
	0xaf0d0  func <stripped> // method 
	0xaf120  func <stripped> // method 
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
	let lastUsed : λ
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
	0xb60f0  class func <stripped> // init 
	0xb7520  class func <stripped> // init 
	0xb64d0  func <stripped> // method 
 }

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
	0xc61a0  func RecordStore.shouldMakeRecord(force:frequencyDenominator:) // method 
	0xc61b0  func RecordStore.makeRecord(result:completion:) // method 
 }

 class SiriAudioSupport.MPMediaQueryHandler : MPCAssistantQueueHandler {
	// Swift methods
	0xc9eb0  func <stripped> // method 
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

 struct SiriAudioSupport.PrivateIntentDataSignal {

	// Properties
	let serverSearchResultsPresent : Bool // +0x0
	let serverSearchResultsBundleId : String // +0x8
	let serverSearchResultsMediaType : String // +0x18
	let serverSearchResultsAmpConfidenceLevel : String // +0x28
	let serverSearchResultsAmpConfidenceScore : Double // +0x38
	let asrConfidenceLevel : String // +0x40
	let asrConfidenceScore : Double // +0x50
	let nlConfidenceLevel : String // +0x58
	let nlConfidenceScore : Double // +0x68
	let serverSignals : [String] // +0x70
	let audioRoutes : Int // +0x78
	let timeElapsed : Double // +0x80
 }

 class SiriAudioSupport.ContextProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriAudioSupport.UserContextSignal {

	// Properties
	let userContext : [String : INMediaUserContext] // +0x0
	let timeElapsed : Double // +0x8
 }

 class SiriAudioSupport.AtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : NSLock
	var complete : Bool
	let name : String

	// Swift methods
	0xd3ce0  class func AtomicOnce.__allocating_init(name:) // init 
	0xd3e20  func AtomicOnce.evaluate(_:) // method 
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
	0xddb00  func <stripped> // method 
	0xdf030  func <stripped> // method 
	0xe0190  func <stripped> // method 
	0xe1510  func <stripped> // method 
	0xe1ca0  func <stripped> // method 
	0xe30d0  func <stripped> // method 
	0xe3a40  func <stripped> // method 
	0xe4a10  func <stripped> // method 
 }

 class SiriAudioSupport.MediaPlaybackLite : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MediaPlaybackProvider
	var lastOrigin : String?
	var refId : String?
	var prepareForSetQueueOptions : CFString
	var prepareForSetQueueValue : AtomicValue

	// Swift methods
	0xe59e0  func MediaPlaybackLite.lastOrigin.getter // getter 
	0xe5a20  func MediaPlaybackLite.lastOrigin.setter // setter 
	0xe5a60  func MediaPlaybackLite.lastOrigin.modify // modifyCoroutine 
	0xe6380  func MediaPlaybackLite.warm(refId:completion:) // method 
	0xe6730  func MediaPlaybackLite.waitForPrepareForSetQueue(completion:) // method 
	0xe6c40  func MediaPlaybackLite.prepareForSetQueue(refId:ignoreCache:completion:) // method 
	0xe7200  func MediaPlaybackLite.setRepeatMode(refId:repeatMode:completion:) // method 
	0xe76c0  func MediaPlaybackLite.prepareForAudioHandoff(completion:) // method 
 }

 class SiriAudioSupport.KnowledgeProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xf68a0  func <stripped> // method 
 }

 class SiriAudioSupport.FakeStore : NowPlayingUsageSignal.KnowledgeProvider { }

 struct SiriAudioSupport.NowPlayingUsageSignal {

	// Properties
	let usage1Day : [String : NSNumber] // +0x0
	let usage7Days : [String : NSNumber] // +0x8
	let usage14Days : [String : NSNumber] // +0x10
	let timeElapsed : Double // +0x18
 }

 class SiriAudioSupport.PlaybackItemContainer : PlaybackItem {

	// Properties
	let subItems : PlaybackItem
	let recommendationID : String?
	let sharedUserIdFromPlayableMusicAccount : String?

	// Swift methods
	0xfa170  class func PlaybackItemContainer.__allocating_init(_:assetInfo:subItems:recommendationID:sharedUserIdFromPlayableMusicAccount:) // init 
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
	var hasPickedVirtualAudioRoute : Αλ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hasAvailableW1Route : Αλ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var speakerRouteEnabled : Αλ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isConnectedToCompanion : Αλ
 }

 enum __C.INPlaybackQueueLocation { }

 enum __C.INParsecCategory { }

 enum __C.MPMediaEntityType { }
