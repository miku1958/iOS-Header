 protocol SiriVideoIntents.WatchListService // 2 requirements
 {
	// method
	// method
 }
 protocol SiriVideoIntents.DisambiguationProvider // 4 requirements
 {
	// class method
	// class method
	// class method
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
 protocol SiriVideoIntents.FeatureFlagService // 0 requirements
 {
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
 protocol SiriVideoIntents.ContentResolving // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.UTSProviding // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SiriVideoIntents.ContentDisambiguatingIntent // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
 }
 protocol SiriVideoIntents.SlotDisambiguatingIntent // 1 requirements
 {
	// class getter
 }

 class SiriVideoIntents.LocUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriVideoIntents.VideoAppResolutionService {
 class SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let watchListService : WatchListService
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ff00001d458 (0x7f00001d458) in binary!
	0x8fec  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8fe00001d370 (0x7e00001d370) in binary!
	0x8fd4  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x632c0001d348 (0x32c0001d348) in binary!
	0x58000000c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8fa80001d410 (0x7a80001d410) in binary!
	0x8fa4  @objc RemoveFromWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f980001d308 (0x7980001d308) in binary!
	0x8f8c  @objc RemoveFromWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0x3330  func RemoveFromWatchListIntentHandler.resolveContent(for:with:) // method 
	0x4620  func RemoveFromWatchListIntentHandler.confirm(intent:completion:) // method 
	0x4970  func RemoveFromWatchListIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.FindVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8fa80001d410 (0x7a80001d410) in binary!
	0x8fa4  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f980001d308 (0x7980001d308) in binary!
	0x8f8c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x62e40001d300 (0x2e40001d300) in binary!
	0x58000000c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f600001d3c8 (0x7600001d3c8) in binary!
	0x8f5c  @objc FindVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f500001d2a8 (0x7500001d2a8) in binary!
	0x8f44  @objc FindVideoIntentHandler.(null) <stripped>

	// Swift methods
	0x6d00  func FindVideoIntentHandler.resolveContent(for:with:) // method 
	0x7f50  func FindVideoIntentHandler.confirm(intent:completion:) // method 
	0x7790  func FindVideoIntentHandler.handle(intent:completion:) // method 
 }

 struct SiriVideoIntents.WatchListServiceImpl: WatchListService {

	// Properties
	let utsProvider : UTSProviding // +0x0
 }

 enum SiriVideoIntents.VideoError {

	// Properties
	case unknownError  
	case missingResponse  
	case failedToOpenUrl  
 }

 class SiriVideoIntents.PlayVideoIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let analyticsService : AnalyticsService
	let backgroundFetch : BackgroundPlayableFetch

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8f600001d3c8 (0x7600001d3c8) in binary!
	0x8f5c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f500001d2a8 (0x7500001d2a8) in binary!
	0x8f44  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x629c0001d2b8 (0x29c0001d2b8) in binary!
	0x58000000c  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f180001d380 (0x7180001d380) in binary!
	0x8f14  @objc PlayVideoIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f080001d248 (0x7080001d248) in binary!
	0x8efc  @objc PlayVideoIntentHandler.(null) <stripped>

	// Swift methods
	0x9250  func PlayVideoIntentHandler.resolveContent(for:with:) // method 
	0xad80  func PlayVideoIntentHandler.confirm(intent:completion:) // method 
	0xb360  func PlayVideoIntentHandler.handle(intent:completion:) // method 
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
	let resolutionTimeMs : È°
 }

 class SiriVideoIntents.RemoveFromWatchListFlowDelegate {
 class SiriVideoIntents.RemoveFromWatchListAceViewProvider {
 class SiriVideoIntents.RemoveFromWatchListTemplatingService {
 class SiriVideoIntents.AtomicOnce : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var hasRun : Bool
	var queue : OS_dispatch_queue

	// Swift methods
	0x1a120  func <stripped> // method 
 }

 class SiriVideoIntents.Once : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var hasRun : Bool

	// Swift methods
 }

 class SiriVideoIntents.FindVideoFlowDelegate {
 class SiriVideoIntents.FindVideoAceViewProvider {
 class SiriVideoIntents.FindVideoTemplatingService {
 class SiriVideoIntents.CoreAnalyticsService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AnalyticsService {
	// Swift methods
 }

 class SiriVideoIntents.PlayVideoFlowDelegate {
 class SiriVideoIntents.PlayVideoAceViewProvider {
 class SiriVideoIntents.PlayVideoTemplatingService {
 class SiriVideoIntents.BaseDialogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let testMode : Bool
	let injectParams : [String : Any]

	// Swift methods
	0x22b30  func <stripped> // method 
 }

 class SiriVideoIntents.MediaPersonOntologyNode {
 struct SiriVideoIntents.MediaNLPerson {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentNode : Ωî
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ontologyNode : mî
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
	let namespace : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var input : øë // +0x74735f5f (0x0)

	// Swift methods
	0x259c0  func <stripped> // method 
	0x25b20  func <stripped> // method 
 }

 class SiriVideoIntents.VideoDefaultContextProvider {
 class SiriVideoIntents.AddToWatchListFlowDelegate {
 class SiriVideoIntents.AddToWatchListAceViewProvider {
 class SiriVideoIntents.AddToWatchListTemplatingService {
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
	var startDate : ˇú
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDate : ˇú
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

 struct SiriVideoIntents.VideoFlowFrameProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceState : Âç // +0x0
	let testMode : Bool // +0x28
 }

 enum SiriVideoIntents.ContentDisambiguationProvider { }

 struct SiriVideoIntents.ContentLiteResponse {

	// Properties
	let content : ContentLite // +0x0
 }

 struct SiriVideoIntents.EpisodeLite: UTSContentLite {

	// Properties
	let id : String // +0x0
	let type : String // +0x0
	let title : String // +0x69840
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : å // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : _û // +0x43960
	let genres : Genre // +0x0
	let showId : String // +0x43970
	let showTitle : String // +0x0
	let seasonTitle : String // +0x43980
	let images : ImagesLite // +0x0
 }

 struct SiriVideoIntents.MovieLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : _û
	let genres : Genre
	let images : ImagesLite
 }

 struct SiriVideoIntents.SeasonLite: UTSContentLite {

	// Properties
	let id : String
	let type : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : _û
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
	let url : å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let releaseDate : _û
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

 struct SiriVideoIntents.UnsupportedPlatformFlow { }

 class SiriVideoIntents.VideoWatchListDialogProvider : BaseDialogProvider {
	// Swift methods
 }

 struct SiriVideoIntents.WatchListParams {

	// Properties
	var title : String? // +0x0
 }

 enum SiriVideoIntents.CodingKeys {

	// Properties
	case title  
 }

 class SiriVideoIntents.FetchPageFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let resultsUrl : String
	let contentResolver : ContentResolving
WARNING: couldn't find address 0x0 (0x0) in binary!
	let aceService : é

	// Swift methods
	0x45960  func <stripped> // method 
 }

 class SiriVideoIntents.BackgroundPlayableFetch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contentResolver : ContentResolving
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playableMap : String
	var groupMap : [String : OS_dispatch_group]
	let responseQueue : OS_dispatch_queue

	// Swift methods
	0x47880  func <stripped> // method 
	0x47d10  func <stripped> // method 
	0x48ce0  func <stripped> // method 
 }

 struct SiriVideoIntents.Playable {

	// Properties
	let umcId : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playPunchout : «ú
 }

 struct SiriVideoIntents.MediaNLIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intent : ≠â
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

 class SiriVideoIntents.VideoDialogProvider : BaseDialogProvider {
	// Swift methods
 }

 struct SiriVideoIntents.TitleSearchParams {

	// Properties
	let title : String // +0x0
 }

 struct SiriVideoIntents.PlayContentParams {

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
	0x57a30  func <stripped> // method 
	0x58710  func <stripped> // method 
	0x58f40  func <stripped> // method 
	0x597a0  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSIdentifier {

	// Properties
	case canonical : (umcId: String)
	case external : (externalId: String, brandId: String)
 }

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

 struct SiriVideoIntents.OpenWatchListFlow { }

 class SiriVideoIntents.AddToWatchListIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let contentResolver : ContentResolving
	let watchListService : WatchListService
	let analyticsService : AnalyticsService

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8f180001d380 (0x7180001d380) in binary!
	0x8f14  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x8f080001d248 (0x7080001d248) in binary!
	0x8efc  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x62540001d270 (0x2540001d270) in binary!
	0x0  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16f65646956  @objc AddToWatchListIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x5250202073746e65 (0x2073746e65) in binary!
	0x56469566972  @objc AddToWatchListIntentHandler.(null) <stripped>

	// Swift methods
	0x5ed40  func AddToWatchListIntentHandler.resolveContent(for:with:) // method 
	0x5ff50  func AddToWatchListIntentHandler.confirm(intent:completion:) // method 
	0x60250  func AddToWatchListIntentHandler.handle(intent:completion:) // method 
 }

 class SiriVideoIntents.UTSOperation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let utsRequestTimeoutMs : Int
	let analyticsService : AnalyticsService

	// Swift methods
	0x625e0  class func <stripped> // init 
	0x62690  func <stripped> // method 
 }

 enum SiriVideoIntents.UTSOperationError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case watchListKitError : ÖÜ
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

 enum __C.INIntentSlotValueType { }

 enum __C.OrdinalReference { }

 enum __C.ContentType { }

 enum __C.ContentSort { }
