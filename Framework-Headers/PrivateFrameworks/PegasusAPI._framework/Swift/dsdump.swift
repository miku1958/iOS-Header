 struct PegasusAPI.Searchfoundation_TrackListCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
	var subtitle : String
	var tracks : Searchfoundation_Track
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_Track {

	// Properties
	var title : String
	var number : String
	var duration : String
	var highlighted : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _preview : Searchfoundation_URL
	var _playAction : Searchfoundation_ActionItem
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_SiriWatchOSSnippet {

	// Properties
	var templateItems : Apple_Parsec_Siri_Platform_Watchos_TemplateItem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_TemplateItem {

	// Properties
	var type : TypeEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Apple_Parsec_Siri_Platform_Watchos_Value
 }

 enum PegasusAPI.TypeEnum {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case headerItem  
	case subHeaderItem  
	case heroImageItem  
	case bodyTextItem  
	case mapViewItem  
	case propertyListItem  
	case keylineItem  
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_HeaderItem {

	// Properties
	var text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _header : Apple_Parsec_Siri_Platform_Watchos_DecoratedText
	var _subtitle : Apple_Parsec_Siri_Platform_Watchos_DecoratedText
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_SubheaderItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _leftText : Apple_Parsec_Siri_Platform_Watchos_DecoratedText
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_HeroImageItem {

	// Properties
	var contentPosition : ContentPosition
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _watchImageResource : Apple_Parsec_Siri_Platform_Watchos_WatchImageResource
	var _caption : Apple_Parsec_Siri_Platform_Watchos_DecoratedString
 }

 enum PegasusAPI.ContentPosition {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case default  
	case header  
	case centered  
	case footer  
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_BodyTextItem {

	// Properties
	var bodyText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _decoratedBodyText : Apple_Parsec_Siri_Platform_Watchos_DecoratedString
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_MapViewItem {

	// Properties
	var zoomLevel : Double
	var latitude : Double
	var longitude : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_PropertyListItem {

	// Properties
	var values : Apple_Parsec_Siri_Platform_Watchos_DecoratedText
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _title : Apple_Parsec_Siri_Platform_Watchos_DecoratedText
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_KeylineItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_WatchImageResource {

	// Properties
	var url : String
	var scaleFactor : Double
	var pixelHeight : Double
	var pixelWidth : Double
	var backgroundNeeded : Bool
	var localImageResourceCode : LocalImageResourceCode
	var preSizedForDevice : Bool
	var imageDownloadType : ImageDownloadType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.LocalImageResourceCode {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case tomatoFresh  
	case tomatoSplat  
	case maleAthlete  
	case femaleAthlete  
	case teamLogo  
	case music  
	case movie  
	case generalKnowledge  
	case default  
	case monogram  
	case siriMicIcon  
	case checkmark  
 }

 enum PegasusAPI.ImageDownloadType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case serverWillSend  
	case clientToDownload  
	case inlined  
	case localResource  
	case none  
	case clientCached  
 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_DecoratedText {

	// Properties
	var text : String
	var regions : Apple_Parsec_Siri_Platform_Watchos_TextDecorationRegion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_DecoratedString {

	// Properties
	var text : String
	var regions : Apple_Parsec_Siri_Platform_Watchos_TextDecorationRegion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_Platform_Watchos_TextDecorationRegion {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var start : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var length : Ûu

	var regionProperty : RegionProperty
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.RegionProperty {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case highlightedQueryParam  
	case suggestedUtterance  
	case superscript  
	case subscript  
	case deEmphasizeResult  
	case smallCaps  
	case timeColonVerticalCentering  
	case tinted  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _headerItem : Apple_Parsec_Siri_Platform_Watchos_HeaderItem
	var _subheaderItem : Apple_Parsec_Siri_Platform_Watchos_SubheaderItem
	var _heroImageItem : Apple_Parsec_Siri_Platform_Watchos_HeroImageItem
	var _bodyTextItem : Apple_Parsec_Siri_Platform_Watchos_BodyTextItem
	var _mapViewItem : Apple_Parsec_Siri_Platform_Watchos_MapViewItem
	var _propertyListItem : Apple_Parsec_Siri_Platform_Watchos_PropertyListItem
	var _keylineItem : Apple_Parsec_Siri_Platform_Watchos_KeylineItem

	// Swift methods
 }

 struct PegasusAPI.Kgqsapipb_KGContext {

	// Properties
	var intent : String
	var entities : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var limit : Ûu

	var lastIntent : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var start : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var pageLimit : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductAttribute {

	// Properties
	var attributes : Attribute
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Attribute {

	// Properties
	var name : String
	var values : Value
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Value {

	// Properties
	var type : OneOf_Type
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Type {

	// Properties
	case text : String
	case number : Float
 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductCategory {

	// Properties
	var rawCategories : [String]
	var categories : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductMetadata {

	// Properties
	var name : String
	var description_p : String
	var brand : String
	var sku : String
	var gtin : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _price : Price
	var _productCategory : Argos_Protos_Productdatapb_ProductCategory
	var _productAttribute : Argos_Protos_Productdatapb_ProductAttribute
	var _rating : Rating
 }

 struct PegasusAPI.Price {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var priceMacro : ßs

	var priceCurrency : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Rating {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ratingRange : Ûu

	var ratingScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ratingNum : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductImage {

	// Properties
	var imageURL : String
	var isMainImage : Bool
	var isReviewImage : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var displayRank : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Argos_Protos_Productdatapb_Product {

	// Properties
	var productImages : Argos_Protos_Productdatapb_ProductImage
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _productMetadata : Argos_Protos_Productdatapb_ProductMetadata
 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductData {

	// Properties
	var products : Argos_Protos_Productdatapb_Product
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Argos_Protos_Productdatapb_ProductSourceInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _productMetadata : Argos_Protos_Productdatapb_ProductMetadata
	var _productImage : Argos_Protos_Productdatapb_ProductImage

	// Swift methods
 }

 struct PegasusAPI.Sportspb_CricketStats {

	// Properties
	var statsStr : [String]
	var formatStats : Sportspb_CricketFormatStats
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_CricketPlayerCareerStatDetails {

	// Properties
	var id : String
	var playerID : String
	var league : String
	var formatStats : Sportspb_CricketFormatStats
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_CricketStatLeaderStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var runs : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var wickets : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_CricketFormatStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var eventTypeID : Ûu

	var name : String
	var series : Sportspb_CricketSeriesDetails
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_CricketSeriesDetails {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seriesID : Ûu

	var name : String
	var seriesGameNumber : String
	var status : String
	var splits : Sportspb_CricketPlayerSplits
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_CricketPlayerSplits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.PlayerStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _batting : Batting
	var _bowling : Bowling
 }

 struct PegasusAPI.Batting {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var matches : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var innings : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var notOuts : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var runs : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var hundreds : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var fifties : Ûu

	var average : String
	var strikeRate : String
	var highestScore : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Bowling {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var wickets : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var threeHauls : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var fiveHauls : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var dotBalls : Ûu

	var overs : String
	var average : String
	var eR : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Team {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var teamID : Ûu

	var location : String
	var abbr : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _splitID : Ûu

	var _name : String
	var _totalType : String
	var _playerStats : PlayerStats
	var _team : Team

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_MapPlaceCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mapsData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Domainresultpb_DomainResult {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_Snippet {

	// Properties
	case web : Snippetpb_WebSnippet
	case kg : Kgqsapipb_KGDBResponse
	case news : Snippetpb_NewsSnippet
	case geo : Snippetpb_GeoSnippet
	case weather : Snippetpb_WeatherSnippet
	case apps : Snippetpb_AppsSnippet
	case maps : Mapspb_LocalSearchBusiness
	case webAnswers : Snippetpb_WebAnswersPrecomputedSnippet
	case webImages : Snippetpb_WebImagesSnippet
	case stocks : Snippetpb_StocksSnippet
	case sports : Snippetpb_SportsSnippet
	case dictionary : Snippetpb_DictionarySnippet
	case movies : Snippetpb_MoviesSnippet
	case tvShow : Snippetpb_TvShowSnippet
	case flights : Snippetpb_FlightSnippet
	case media : Snippetpb_MediaSnippet
	case gif : Snippetpb_GifSnippet
	case realityObjects : Snippetpb_RealityObjectsSnippet
	case ampMusic : Snippetpb_AmpMusicSnippet
	case kgcn : Kgqsapipb_KGDBResponse
	case shopping : Snippetpb_ShoppingSnippet
 }

 struct PegasusAPI.Domainresultpb_SiribaseEntity {

	// Properties
	var id : String
	var primaryName : String
	var description_p : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _snippet : OneOf_Snippet
	var _tophit : Tophitpb_TopHit
	var _canonicalID : String
	var _resultEntities : Domainresultpb_SiribaseEntity
	var _debug : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_MapsDirectionsMode {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case driving  
	case walking  
	case transit  
	case cycling  
	case routingApps  
 }

 enum PegasusAPI.Snippetpb_AnswerType {

	// Properties
	case UNRECOGNIZED : Int
	case unknownAnswerType  
	case passage  
 }

 enum PegasusAPI.Snippetpb_Quality {

	// Properties
	case UNRECOGNIZED : Int
	case unknownQuality  
	case good  
	case great  
 }

 enum PegasusAPI.Snippetpb_AnswerClass {

	// Properties
	case UNRECOGNIZED : Int
	case unknownAnswerClass  
	case generalClass  
	case healthClass  
	case foodClass  
	case covidClass  
 }

 enum PegasusAPI.Snippetpb_AnswerSource {

	// Properties
	case UNRECOGNIZED : Int
	case unknownAnswerSource  
	case organic  
	case overwrite  
	case appleHelp  
	case answerCuration  
	case verification  
	case onlineOrganic  
	case health  
	case algoGreat  
	case algoGood  
	case trendingCuration  
	case algoRealtime  
 }

 enum PegasusAPI.Snippetpb_FuzzyDecision {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case exactMatch  
	case earlyAccept  
	case passedModelThreshold  
	case earlyReject  
	case leafScoreReject  
	case maxCandidatesPerTypeReject  
	case exactMatchAlreadyFoundForType  
	case failsPrePmModelTermOverlapThreshold  
 }

 struct PegasusAPI.Snippetpb_WebAnswersSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.RuleBasedData {

	// Properties
	var rule : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var jsonBlob : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_FilteredSentence {

	// Properties
	var sentence : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var index : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_WebAnswersSnippetFiltered {

	// Properties
	var filteredAllSentences : Snippetpb_FilteredSentence
	var filteredDescriptionSentences : Snippetpb_FilteredSentence
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_AnswerContent {

	// Properties
	var id : String
	var passage : String
	var url : String
	var readableAnswer : String
	var answerType : Snippetpb_AnswerType
	var sourceDomain : String
	var highlight : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationTimeSec : Qe

	var isWhitelisted : Bool
	var isSpeakable : Bool
	var dbSource : String
	var source : Snippetpb_AnswerSource
	var answerURLID : String
	var quality : Snippetpb_Quality
	var answerClass : Snippetpb_AnswerClass
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _goodMetadata : Snippetpb_GoodAnswerMetadata
 }

 struct PegasusAPI.Snippetpb_GoodAnswerMetadata {

	// Properties
	var jobID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_WebAnswersPrecomputedSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Snippetpb_FuzzyMatchInfo {

	// Properties
	var isFuzzyMatched : Bool
	var lowerTrimmedUserQuery : String
	var lowerTrimmedNormedUserUserQuery : String
	var qasNormedUserQuery : String
	var indexQuery : String
	var paraphraseModelScore : Float
	var fuzzyDecision : Snippetpb_FuzzyDecision
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _url : String
	var _title : String
	var _description_p : String
	var _fullText : String
	var _extractedBody : String
	var _summary : String
	var _descriptionSentences : [String]
	var _allSentences : [String]
	var _ruleBased : RuleBasedData
	var _authorScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publishTsSecs : Qe

	var _domainClassification : [String]
	var _langDetected : String
	var _prefilterLanguagesApplied : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numSentencesFiltered : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numDescriptionsFiltered : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _docLength : ßs


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
	var _answerContent : Snippetpb_AnswerContent
	var _source : Snippetpb_AnswerSource
	var _isFuzzyMatched : Bool
	var _queryIndexKey : String
	var _resolvedCountry : String
	var _resolvedLanguage : String
	var _isLocationInsensitiveMatched : Bool
	var _fuzzyMatchInfo : Snippetpb_FuzzyMatchInfo

	// Swift methods
 }

 enum PegasusAPI.Tvpb_TvType {

	// Properties
	case UNRECOGNIZED : Int
	case mediaUnknown  
	case shows  
	case episodes  
	case seasons  
 }

 struct PegasusAPI.Tvpb_TvAvailability {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDateSeconds : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDateSeconds : Qe

	var tvOfferType : TvOfferType
	var webPunchoutURL : String
	var webPlayURL : String
	var appPunchoutURL : String
	var appPlayURL : String
	var tvMediaType : TvMediaType
	var searchBrandID : String
	var searchBrandState : SearchBrandState
	var platformIosState : PlatformState
	var platformTvosState : PlatformState
	var platformWebState : PlatformState
	var isMccormickProvider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.TvOfferType {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case free  
	case rent  
	case buy  
	case subscription  
	case preOrder  
	case freeWithAccount  
	case service  
	case comingSoon  
 }

 enum PegasusAPI.TvMediaType {

	// Properties
	case UNRECOGNIZED : Int
	case mediaUnknown  
	case shows  
	case episodes  
	case seasons  
	case movies  
 }

 enum PegasusAPI.PlatformState {

	// Properties
	case UNRECOGNIZED : Int
	case vodStateUnknown  
	case vodServiceOn  
	case vodServiceOff  
	case vodServiceTestMode  
 }

 enum PegasusAPI.SearchBrandState {

	// Properties
	case UNRECOGNIZED : Int
	case stateUnknown  
	case searchBrandLive  
	case searchBrandPendingAppleReview  
 }

 struct PegasusAPI.Tvpb_CommonSense {

	// Properties
	var age : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Tvpb_ContentRating {

	// Properties
	var contentRatingSystem : String
	var contentRatingValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Tvpb_Child {

	// Properties
	var canonical : String
	var title : String
	var thumbnail : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var number : Ûu

	var type : Tvpb_TvType
	var numberFloat : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Tvpb_Parent {

	// Properties
	var canonical : String
	var title : String
	var thumbnail : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Tvpb_CoverArt {

	// Properties
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ûu

	var type : AspectRatio
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.AspectRatio {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case sixteenByNine  
	case square  
 }

 struct PegasusAPI.Searchfoundation_MediaInfoCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _mediaItem : Searchfoundation_MediaItem
	var _details : Searchfoundation_MediaDetail
	var _playAction : Searchfoundation_ActionItem
	var _offers : Searchfoundation_MediaOffer
	var _watchListIdentifier : String
	var _watchListButtonLabel : String
	var _watchListContinuationText : String
	var _watchListConfirmationText : String
	var _isMediaContainer : Bool
	var _specialOfferButtonLabel : Searchfoundation_RichText

	// Swift methods
 }

 enum PegasusAPI.Sportspb_SportName {

	// Properties
	case UNRECOGNIZED : Int
	case unknownsport  
	case baseball  
	case basketball  
	case cricket  
	case football  
	case hockey  
	case soccer  
	case motorsport  
	case rugby  
 }

 enum PegasusAPI.Sportspb_StatType {

	// Properties
	case UNRECOGNIZED : Int
	case unknownStatType  
	case season  
	case career  
	case event  
 }

 enum PegasusAPI.Sportspb_SeasonType {

	// Properties
	case UNRECOGNIZED : Int
	case noSeason  
	case allStar  
	case firstClass  
	case group  
	case limitedOvers  
	case listA  
	case odi  
	case postseason  
	case preseason  
	case qualifying  
	case regular  
	case showcase  
	case t20  
	case test  
	case warmUp50Over  
	case warmUpT20  
	case exhibition  
	case relegationPlayoff  
 }

 enum PegasusAPI.Sportspb_TournamentPhase {

	// Properties
	case UNRECOGNIZED : Int
	case noTournamentPhase  
	case groupStage1  
	case groupStage2  
	case groupStageFinal  
	case poolStage  
	case qualifyingRoundFinal  
	case qualifyingRound1  
	case qualifyingRound2  
	case qualifyingRound3  
	case interConfederationsPlayoff  
	case playoffQualifier  
	case roundRobin  
	case tieBreaker  
	case playoffsFirstRound  
	case playoffsSecondRound  
	case playoffsThirdRound  
	case playoffsFourthRound  
	case playoffsFifthRound  
	case roundOf128  
	case roundOf64  
	case roundOf32  
	case roundOf16  
	case quarterFinals  
	case semiFinals  
	case thirdPlaceGame  
	case finals  
	case knockOutStage  
	case eliminator  
	case qualifier  
	case playoff  
	case firstRound  
	case secondRound  
	case thirdRound  
	case fourthRound  
	case fifthRound  
	case sixthRound  
	case seventhRound  
	case heats  
	case rankingRound  
	case preliminaryRound  
	case pointsRace  
	case tempoRace  
	case luckyLoser  
	case scratchRace  
	case groupPlay  
	case openingRound  
	case qualificationRound  
	case eliminationRound  
	case repechage  
	case repechageRoundOne  
	case repechageRoundTwo  
	case finalsRepechage1By8  
	case finalsRepechage1By16  
	case finalsRepechage1By32  
	case eliminations1By6  
	case eliminationRace  
 }

 struct PegasusAPI.Sportspb_StatMetadata {

	// Properties
	var statType : Sportspb_StatType
	var seasonName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var season : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_SportsLeague {

	// Properties
	var id : String
	var logo : String
	var name : String
	var abbreviation : String
	var sport : Sportspb_SportName
	var localizations : Sportspb_GroupLocalizations
	var logoCdnURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_GroupLocalizations {

	// Properties
	var locale : [String]
	var name : String
	var abbreviation : String
	var labels : [String]
	var leagueName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_LineScore {

	// Properties
	var lineScore : OneOf_LineScore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_LineScore {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case inning : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	case runs : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	case wickets : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	case target : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	case score : Ûu

	case overs : String
	case allottedOvers : String
	case isFollowOn : Bool
	case isDeclare : Bool
 }

 struct PegasusAPI.Searchfoundation_MediaRemoteControlCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var playbackRouteUniqueIdentifier : String
	var playbackRouteUniqueIdentifierIsEncrypted : Bool
	var playbackBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_AppLink {

	// Properties
	var title : String
	var imageAlign : Searchfoundation_ImageAlignment
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _appPunchout : Searchfoundation_Punchout
	var _image : Searchfoundation_Image
 }

 struct PegasusAPI.Snippetpb_SportsSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_Template {

	// Properties
	case athlete : Sportspb_Athlete
	case athleteList : Sportspb_AthleteList
	case eventDetails : Sportspb_EventDetails
	case matchUp : Sportspb_MatchUp
	case rankingsSet : Sportspb_RankingsSet
	case sportsRoster : Sportspb_SportsRoster
	case standingsSet : Sportspb_StandingsSet
	case teamSchedule : Sportspb_TeamSchedule
 }

 struct PegasusAPI.Snippetpb_SportsResultMetadata {

	// Properties
	var id : String
	var canonicalID : String
	var intentName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxAge : Ûu

	var intentHash : String
	var entities : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _template : OneOf_Template
	var _metadata : Snippetpb_SportsResultMetadata

	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Rendering_V2_RenderStyle {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case row  
	case descriptive  
	case fulldetail  
	case compact  
	case data  
	case compactTophit  
 }

 struct PegasusAPI.Apple_Parsec_Rendering_V2_Rendering {

	// Properties
	var style : Apple_Parsec_Rendering_V2_RenderStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cardData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var feedback : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cardDataDebug : }

 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_InputOrigin {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case homeButton  
	case remoteButton  
	case remoteAppButton  
	case assistantSpeechButton  
	case assistantTextInput  
	case priorRequest  
	case voiceTrigger  
	case serverGenerated  
	case motionGesture  
	case raiseToSpeak  
	case clientGenerated  
	case tapToRefresh  
	case backgroundRefresh  
	case bluetoothVoiceTrigger  
	case bluetoothDoubleTap  
	case triggerlessFollowup  
	case dialogButtonTap  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_ClientBoundCommand {

	// Properties
	var aceCommandBuilderParams : OneOf_AceCommandBuilderParams
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_AceCommandBuilderParams {

	// Properties
	case recordLocationActivity : Apple_Parsec_Siri_V2alpha_RecordLocationActivityBuilderParams
	case appPunchOut : Apple_Parsec_Siri_V2alpha_AppPunchOutBuilderParams
	case sendCommands : Apple_Parsec_Siri_V2alpha_SendCommandsBuilderParams
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_ServerBoundCommand {

	// Properties
	var serverCommandBuilderParams : OneOf_ServerCommandBuilderParams
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_ServerCommandBuilderParams {

	// Properties
	case startRequest : Apple_Parsec_Siri_V2alpha_StartRequestBuilderParams
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_RecordLocationActivityBuilderParams {

	// Properties
	var sourceType : SourceType
	var entryPoints : Coordinate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _aceLocation : Apple_Parsec_Siri_V2alpha_AceLocationBuilderParams
 }

 enum PegasusAPI.SourceType {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case homePod  
 }

 struct PegasusAPI.Coordinate {

	// Properties
	var latitude : Float
	var longitude : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_AceLocationBuilderParams {

	// Properties
	var label : String
	var street : String
	var thoroughfare : String
	var subThoroughfare : String
	var city : String
	var postalCode : String
	var stateCode : String
	var countryCode : String
	var latitude : Float
	var longitude : Float
	var accuracy : Float
	var regionType : String
	var timezoneID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_AppPunchOutBuilderParams {

	// Properties
	var bundleID : String
	var punchOutUri : String
	var appDisplayName : String
	var launchOverSiri : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SendCommandsBuilderParams {

	// Properties
	var serverBoundCommands : Apple_Parsec_Siri_V2alpha_ServerBoundCommand
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_StartRequestBuilderParams {

	// Properties
	var utterance : String
	var inputOrigin : Apple_Parsec_Siri_V2alpha_InputOrigin
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Searchfoundation_StorefrontType {

	// Properties
	case UNRECOGNIZED : Int
	case physicalStore  
	case online  
 }

 enum PegasusAPI.Searchfoundation_AvailabilityStatus {

	// Properties
	case UNRECOGNIZED : Int
	case notAvailable  
	case available  
	case limitedAvailability  
	case preOrderAvailable  
 }

 enum PegasusAPI.Searchfoundation_DistanceUnit {

	// Properties
	case UNRECOGNIZED : Int
	case kilometer  
	case mile  
 }

 struct PegasusAPI.Searchfoundation_ProductInventory {

	// Properties
	var type : Searchfoundation_StorefrontType
	var storeID : String
	var availabilityStatus : Searchfoundation_AvailabilityStatus
	var distance : Float
	var distanceUnit : Searchfoundation_DistanceUnit
	var storeName : String
	var storeAddress : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _timestamp : Searchfoundation_Date
 }

 struct PegasusAPI.Searchfoundation_ProductInventoryResult {

	// Properties
	var productIdentifier : String
	var availability : Searchfoundation_ProductInventory
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_ProductAvailability {

	// Properties
	var results : Searchfoundation_ProductInventoryResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_Product {

	// Properties
	var identifier : String
	var productIdentifier : String
	var displayName : String
	var buyable : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _availabilityURL : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_LatLng {

	// Properties
	var lat : Double
	var lng : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Knowledge {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case dictionary  
	case elections  
	case webAnswer  
	case foodNutrition  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Sports {

	// Properties
	case UNRECOGNIZED : Int
	case athlete  
	case score  
	case schedule  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Maps {

	// Properties
	case UNRECOGNIZED : Int
	case locationSearch  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_News {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Stocks {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Weather {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_Experience {

	// Properties
	var searchQuery : String
	var domainResults : Apple_Parsec_Siri_V2alpha_DomainResult
	var actions : Apple_Parsec_Siri_V2alpha_Action
	var actionConfidenceScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _searchExperience : Apple_Parsec_Siri_V2alpha_SearchExperience
	var _layoutView : Apple_Parsec_Siri_V2alpha_LayoutView
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SearchExperience {

	// Properties
	var name : OneOf_Name
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Name {

	// Properties
	case knowledge : Apple_Parsec_Siri_V2alpha_Knowledge
	case maps : Apple_Parsec_Siri_V2alpha_Maps
	case sports : Apple_Parsec_Siri_V2alpha_Sports
	case news : Apple_Parsec_Siri_V2alpha_News
	case stocks : Apple_Parsec_Siri_V2alpha_Stocks
	case weather : Apple_Parsec_Siri_V2alpha_Weather
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_DomainResult {

	// Properties
	var domainName : String
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultFeedback : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var asrRank : Ûu

	var nnerEntities : Apple_Parsec_Siri_V1alpha_NNerEntities
	var domainScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var domainDataBytes : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _domainData : Domainresultpb_DomainResult
 }

 enum PegasusAPI.Searchfoundation_ResultPlacement {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case top  
	case bottom  
	case topHit  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_NLInfo {

	// Properties
	var nlDomainParseInfoList : Apple_Parsec_Siri_V1alpha_NLDomainParseInfo
	var tokens : Com_Apple_Siri_Product_Proto_Token
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_NLDomainParseInfo {

	// Properties
	var algorithm : String
	var domain : String
	var mldcScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nlHypothesisRank : Ûu

	var domainParseContext : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _nlParseInfo : Apple_Parsec_Siri_V1alpha_NlParseInfo
	var _intentParse : Com_Apple_Siri_Product_Proto_ProtoIntent
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_NlParseInfo {

	// Properties
	var nlSpanInfoList : NlSpanInfo
	var score : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.NlSpanInfo {

	// Properties
	var spanName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conf : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _span : Apple_Parsec_Siri_V1alpha_Span
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_Span {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startByte : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endByte : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_RichText {

	// Properties
	var contentAdvisory : String
	var icons : Searchfoundation_Image
	var formattedTextPieces : Searchfoundation_FormattedText
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _text : Searchfoundation_Text
	var _starRating : Searchfoundation_GraphicalFloat
 }

 struct PegasusAPI.Searchfoundation_SocialMediaPostCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _name : String
	var _nameNoWrap : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _nameMaxLines : Ûu

	var _handle : String
	var _verifiedGlyph : Searchfoundation_Image
	var _profilePicture : Searchfoundation_Image
	var _post : Searchfoundation_RichText
	var _picture : Searchfoundation_Image
	var _timestamp : String
	var _footnote : String

	// Swift methods
 }

 struct PegasusAPI.Completionpb_DebugInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Completionpb_RankFeaturesDebug {

	// Properties
	var value : String
	var features : [String : Float]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_TransformerDebug {

	// Properties
	var keys : [String]
	var transformName : String
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_PrefixFeaturesDebug {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Completionpb_CompletionInfoDebugList {

	// Properties
	var completions : Completionpb_CompletionInfoDebug
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_PrefixCorrectionList {

	// Properties
	var corrections : Completionpb_Correction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_CompletionInfoDebug {

	// Properties
	var value : String
	var uniScore : Float
	var probability : Float
	var flags : [String]
	var trendScore : Float
	var trendFracEwmaChanged : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendRenderCount : Ûu

	var trendEngagementRate : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendStartDate : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendCurrentDate : Ûu

	var correctionInfo : Completionpb_Correction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_ClickInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var render : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var engagement : Qe

	var clickScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_CorrectionDebug {

	// Properties
	var lookupKeys : Completionpb_CorrectionKVInfo
	var correctionKvDebugs : Completionpb_CorrectionKVInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_StaticCorrection {

	// Properties
	var rawQuery : String
	var correctedQuery : String
	var probability : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var total : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var correctionType : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_CorrectionKVInfo {

	// Properties
	var key : String
	var namespace : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Completionpb_StaticCorrection
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _transformers : Completionpb_TransformerDebug
	var _prefixFeature : Completionpb_PrefixFeaturesDebug
	var _selectedCandidates : Completionpb_CompletionInfoDebugList
	var _maxProbability : Float
	var _longestCommonPrefix : String
	var _correctionInfo : Completionpb_CorrectionDebug
	var _onlineCorrectionDebugInfo : Completionpb_DebugInfo
	var _prefixCorrections : Completionpb_PrefixCorrectionList
	var _usedCorrections : Completionpb_StaticCorrection
	var _completionFeatures : Completionpb_RankFeaturesDebug

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
	var _language : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _safariDecile : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _safariSearchCnt : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _spotlightDecile : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _spotlightSearchCnt : Qe

	var _maxCompletionProbability : Float
	var _completionClickInfos : Completionpb_ClickInfo
	var _stopSearch : Bool
	var _stopComplete : Bool
	var _stopSuggest : Bool
	var _stopInstantSearch : Bool
	var _stopRelatedSearch : Bool
	var _completionBlackList : [String]
	var _relatedSearchBlackList : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _overwriteSuggestion :  empty-list 
	var _overwriteCompletion : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _overwriteRelatedSearch :  empty-list 
	var _relatedSuggestionInfo : Completionpb_RelatedSuggestionInfo
	var _siriSuggestionCandidates : Completionpb_SiriSuggestion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _prefixEntityExistStatus : Ûu

	var _prefixEntityString : String
	var _entityPrefix : Bool

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_MapSizeFormat {

	// Properties
	case UNRECOGNIZED : Int
	case compact  
	case full  
 }

 enum PegasusAPI.Searchfoundation_LocationPinBehavior {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case fixed  
	case floating  
 }

 struct PegasusAPI.Searchfoundation_MapCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_MapRegion {

	// Properties
	var southLat : Double
	var westLng : Double
	var northLat : Double
	var eastLng : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_Pin {

	// Properties
	var label : String
	var resultID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mapsData : #_

	var pinBehavior : Searchfoundation_LocationPinBehavior
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _location : Searchfoundation_LatLng
	var _pinColor : Searchfoundation_Color
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _location : Searchfoundation_LatLng
	var _pinColor : Searchfoundation_Color
	var _footnoteLabel : String
	var _footnote : String
	var _interactive : Bool
	var _sizeFormat : Searchfoundation_MapSizeFormat
	var _boundingMapRegion : Searchfoundation_MapRegion
	var _pinBehavior : Searchfoundation_LocationPinBehavior
	var _pins : Searchfoundation_Pin

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_TextColumnsCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWeight : …e

	var columns : Searchfoundation_TextColumn
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_TextColumn {

	// Properties
	var sections : Searchfoundation_TextColumnSection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_TextColumnSection {

	// Properties
	var textLines : [String]
	var textNoWrap : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var textWeight : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Newspb_NewsArticleType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case flint  
	case web  
 }

 struct PegasusAPI.Newspb_Channel {

	// Properties
	var id : String
	var name : String
	var logo : String
	var logoMask : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Newspb_EntityName {

	// Properties
	var entityScore : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Newspb_EngagementScores {

	// Properties
	var localeScore : [String : Double]
	var entityScores : Newspb_EntityName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Newspb_AppleNews {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Newspb_PublishersQuerySiteMap {

	// Properties
	var query : String
	var locale : String
	var publisherURL : String
	var articlePresent : Bool
	var anArticlePresent : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Newspb_PipelineFields {

	// Properties
	var storefrontNewsIds : [String : String]
	var storefrontNewsChannels : Newspb_Channel
	var domainScores : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisherRankings : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var firstFetch : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastFetch : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _nnerEntities : Nnerapipb_NNERResponse
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _storefrontNewsID : [String : String]
	var _title : String
	var _tokenizedTitle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tsSec : Qe

	var _articleType : Newspb_NewsArticleType
	var _thumbnailURL : String
	var _zkwLocale : String
	var _featuredArticle : String
	var _channel : Newspb_Channel
	var _storefrontChannels : Newspb_Channel
	var _score : Double
	var _engagementScores : Newspb_EngagementScores
	var _isPaid : Bool
	var _namedEntities : [String : String]
	var _bannerImageScale : Double
	var _bannerImageBaselineOffsetPercentage : Double
	var _action : String
	var _flintFontResourceIds : [String]
	var _thumbnailURLUltraHq : String
	var _thumbnailCropXOffset : Double
	var _thumbnailCropYOffset : Double
	var _thumbnailCropWidth : Double
	var _thumbnailCropHeight : Double
	var _sectionIds : [String]
	var _sectionNames : [String]

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_DescriptionCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _title : String
	var _subtitle : String
	var _descriptionText : Searchfoundation_Text
	var _expandText : String
	var _image : Searchfoundation_Image
	var _titleNoWrap : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _titleWeight : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _descriptionSize : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _descriptionWeight : Ûu

	var _descriptionExpand : Bool
	var _imageAlign : Searchfoundation_ImageAlignment
	var _textAlign : Searchfoundation_TextAlignment
	var _attributionText : String
	var _attributionURL : Searchfoundation_URL
	var _attributionGlyph : Searchfoundation_Image
	var _richDescriptions : Searchfoundation_RichText

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_UserActivityInfoType {

	// Properties
	case UNRECOGNIZED : Int
	case string  
	case url  
 }

 struct PegasusAPI.Searchfoundation_UserActivityInfo {

	// Properties
	var valueType : Searchfoundation_UserActivityInfoType
	var key : String
	var stringValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _urlValue : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_UserActivityData {

	// Properties
	var activityType : String
	var userInfo : Searchfoundation_UserActivityInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Searchfoundation_SeparatorStyle {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case none  
	case indentedLeading  
	case indentedLeadingForImage  
	case indentedLeadingAndTrailing  
	case full  
 }

 struct PegasusAPI.Searchfoundation_WorldMapCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var highlightedTimeZoneName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
	var _pinLocation : Searchfoundation_LatLng
 }

 struct PegasusAPI.Sportspb_SoccerStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsScored : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assists : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalShots : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _yellowCards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redCards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saves : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _savesPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shotsFaced : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsAgainst : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cleanSheets : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shotsOnGoal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fouls : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _losses : ÿ‹

 }

 struct PegasusAPI.Searchfoundation_UserReportRequest {

	// Properties
	var affordanceText : String
	var title : String
	var dismissText : String
	var userReportOptions : Searchfoundation_Punchout
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_TvShowSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _canonicalID : String
	var _title : String
	var _description_p : String
	var _contentRating : Tvpb_ContentRating
	var _thumbnail : String
	var _genres : [String]
	var _availabilities : Tvpb_TvAvailability
	var _actors : [String]
	var _premieredNetwork : String
	var _premiereDate : String
	var _finaleDate : String
	var _commonSense : Tvpb_CommonSense
	var _appleOriginal : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runtimeInMinutes : Ûu

	var _children : Tvpb_Child
	var _parent : Tvpb_Parent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seasonNumber : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _episodeNumber : Ûu

	var _type : Tvpb_TvType
	var _coverArt : Tvpb_CoverArt
	var _episodeNumberFloat : Float
	var _wikiID : String
	var _imdbID : String

	// Swift methods
 }

 struct PegasusAPI.Sportspb_StandingsSet {

	// Properties
	var standings : Sportspb_SportsStanding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queried : Ûu

	var url : String
	var queriedID : String
	var seriesTeams : TeamNames
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _league : Sportspb_SportsLeague
 }

 struct PegasusAPI.TeamNames {

	// Properties
	var names : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_SportsStanding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_RankingsSet {

	// Properties
	var rankings : Sportspb_SportsRanking
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_SportsRanking {

	// Properties
	var teamName : String
	var teamID : String
	var nickName : String
	var league : String
	var localizedLeague : String
	var division : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var divisionRank : Ûu

	var logo : String
	var darkLogo : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _teamPoints : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _matches : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rating : ÿ‹

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _teamName : String
	var _teamAbbr : String
	var _nickName : String
	var _teamID : String
	var _division : String
	var _conference : String
	var _conferenceName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesBehind : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamePlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _teamPoints : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _losses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ties : ÿ‹

	var _pointsFor : String
	var _pointsAgainst : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conferenceWins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conferenceLosses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conferenceTies : ÿ‹

	var _logo : String
	var _darkLogo : String
	var _league : String
	var _localizedLeague : String
	var _sport : Sportspb_SportName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pCT : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _divisionRank : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conferenceRank : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _leagueRank : Ûu

	var _stadium : String
	var _coachName : String
	var _webLink : String
	var _appLink : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _oTL : ÿ‹

	var _localizedDisplayedRank : String
	var _siriParams : [String : String]
	var _seriesName : String
	var _seriesGameNumber : String
	var _seriesStatus : String
	var _standingsType : String
	var _nRR : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _draws : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _nR : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seriesNoResult : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seriesID : Ûu


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_MetaInfoCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var trending : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
	var _contentURL : Searchfoundation_URL
	var _hostPageURL : Searchfoundation_URL
	var _badge : Searchfoundation_Image
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_TokenType {

	// Properties
	case UNRECOGNIZED : Int
	case noValueTokenType  
	case delim  
	case word  
	case overSized  
	case explicit  
	case morphologicalWord  
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Token {

	// Properties
	var tokenType : Com_Apple_Siri_Product_Proto_TokenType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startChar : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endChar : …e

	var value : String
	var cleanValue : String
	var significant : Bool
	var whitespace : Bool
	var additionalData : OneOf_AdditionalData
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_AdditionalData {

	// Properties
	case explicitAdditionalData : Com_Apple_Siri_Product_Proto_ExplicitAdditionalData
	case morphologicalWordAdditionalData : Com_Apple_Siri_Product_Proto_MorphologicalWordAdditionalData
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_GroupAdditionalData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _subTokens : Com_Apple_Siri_Product_Proto_TokenList
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_ExplicitAdditionalData {

	// Properties
	var label : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _groupAdditionalData : Com_Apple_Siri_Product_Proto_GroupAdditionalData
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_LemmaMapping {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var surfaceFormGrammemes : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var lemmaGrammemes : ßs

	var lemma : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_MorphologicalWordAdditionalData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var grammemes : ßs

	var lemmaMappings : Com_Apple_Siri_Product_Proto_LemmaMapping
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_TokenList {

	// Properties
	var tokens : Com_Apple_Siri_Product_Proto_Token
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_BaikeCard {

	// Properties
	var id : String
	var name : String
	var shortAbstract : String
	var baikepageurl : String
	var thumbNailURL : String
	var thumbNail3XURL : String
	var thumbNailNanoURLN27 : String
	var thumbNailNanoURLN28 : String
	var properties : Property
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Property {

	// Properties
	var name : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Pair {

	// Properties
	var key : String
	var value : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_Verb {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case display  
	case say  
	case launchSiriKit  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_Action {

	// Properties
	var addViews : Apple_Parsec_Siri_V2alpha_AddAceView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_AddAceView {

	// Properties
	var verb : Apple_Parsec_Siri_V2alpha_Verb
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _dialog : Apple_Parsec_Siri_V2alpha_Dialog
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_Dialog {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _content : Apple_Parsec_Siri_V2alpha_DialogText
	var _caption : Apple_Parsec_Siri_V2alpha_DialogText
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_DialogText {

	// Properties
	var text : String
	var speakableTextOverride : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_BaseballStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _atBats : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runsScored : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doubles : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _triples : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _homeRuns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runsBattedIn : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _caughtStealing : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _stolenBases : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _walks : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _struckOuts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _battingAverage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _onBasePercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _onBasePlusSluggingPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _battingWinsAboveReplacement : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sluggingPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _battingGamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _battingGamesTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _completeGames : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _inningsPitched : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hitsAllowed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runsAllowed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _earnedRunsAllowed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _walksAllowed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _strikeout : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _winPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _savesBlown : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pitchingWinsAboveReplacement : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _earnedRunAverage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pitchingGamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pitchingGamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _walksPlusHitsPerInningsPitched : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _opportunities : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _putouts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _errors : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doublePlays : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fieldingPercentage : {

	var _fieldingPosition : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _baseballAssists : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hits : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saves : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _losses : ÿ‹


	// Swift methods
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_CardRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_CardResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_FlightSnippet {

	// Properties
	var isCardSearch : Bool
	var isIcaoSearch : Bool
	var queryIntendedFlightInfo : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var selectedLegIndex : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var searchTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _flight : Flight
 }

 enum PegasusAPI.Status {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case active  
	case canceled  
	case diverted  
	case dataSourceNeeded  
	case landed  
	case notOperational  
	case redirected  
	case scheduled  
 }

 struct PegasusAPI.Flight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Airport {

	// Properties
	var code : String
	var name : String
	var city : String
	var physicalCity : String
	var mapsID : String
	var latitude : Double
	var longitude : Double
	var timeZoneName : String
	var street : String
	var district : String
	var state : String
	var postalCode : String
	var countryCode : String
	var country : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.FlightInfo {

	// Properties
	var carrier : String
	var carrierFs : String
	var flightNumber : String
	var relationship : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Leg {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _contentHash : String
	var _carrierIata : String
	var _carrierIcao : String
	var _carrierFs : String
	var _carrierName : String
	var _carrierPhoneNumber : String
	var _flightNumber : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _flightDepartureScheduled : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _flightArrivalScheduled : Qe

	var _legs : Leg
	var _codeShares : FlightInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _legIndex : Ûu

	var _operatorCarrierCode : String
	var _operatorFlightNumber : String
	var _website : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastUpdated : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _legsNotUpdated : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _departureUtcVariance : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalLegs : Ûu

	var _legFlightScheduleIds : [String]
	var _legFlightUpdateIds : [String]

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _status : Status
	var _enRoute : Bool
	var _departureDelayed : Bool
	var _arrivalDelayed : Bool
	var _title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _departurePublishedTime : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _departureActualTime : Qe

	var _departureTerminal : String
	var _departureGate : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _departureGateClosed : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _departureRunway : Qe

	var _isTaxiing : Bool
	var _departureAirport : Airport
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _arrivalPublishedTime : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _arrivalActualTime : Qe

	var _arrivalTerminal : String
	var _arrivalGate : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gateArrival : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _arrivalRunway : Qe

	var _arrivalAirport : Airport
	var _baggageClaim : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _updatedAt : Qe

	var _divertedAirport : Airport
	var _uid : String

	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_SiriEnvironment {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case development  
	case test  
	case carry  
	case production  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SiriPegasusContext {

	// Properties
	var siriInteractionType : SiriInteractionType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _deviceState : Apple_Parsec_Siri_V2alpha_DeviceState
 }

 enum PegasusAPI.SiriInteractionType {

	// Properties
	case UNRECOGNIZED : Int
	case displayDriven  
	case dialogDriven  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SiriPegasusRequest {

	// Properties
	var queries : Apple_Parsec_Siri_V2alpha_PegasusSearchQuery
	var userDataShareOptIn : Bool
	var featureFlag : String
	var siriEnvironment : Apple_Parsec_Siri_V2alpha_SiriEnvironment
	var isSiriInternalRequest : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _queryContext : Apple_Parsec_Search_PegasusQueryContext
	var _siriPegasusContext : Apple_Parsec_Siri_V2alpha_SiriPegasusContext
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_PegasusSearchQuery {

	// Properties
	var utterance : String
	var queryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asrRank : Ûu

	var asrScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SiriPegasusResponse {

	// Properties
	var searchStatus : Apple_Parsec_Siri_V1alpha_StatusCode
	var queryID : String
	var queryConfidenceScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryFeedback : #_

	var queryString : String
	var actionConfidenceScore : Double
	var alternateAsrPegasusScoreSet : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var banyanDebugInfo :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _error : Error
	var _siriInstruction : SiriInstruction
	var _responseMetadata : ResponseMetadata
 }

 struct PegasusAPI.Error {

	// Properties
	var error : OneOf_Error
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Error {

	// Properties
	case message : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encryptedMessage : #_

 }

 struct PegasusAPI.SiriInstruction {

	// Properties
	var instruction : OneOf_Instruction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Instruction {

	// Properties
	case siriExperience : Apple_Parsec_Siri_V2alpha_SiriExperience
 }

 struct PegasusAPI.ResponseMetadata {

	// Properties
	var domainName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_SiriExperience {

	// Properties
	var components : Apple_Parsec_Siri_V2alpha_ExperienceComponent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_ExperienceComponent {

	// Properties
	var component : OneOf_Component
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Component {

	// Properties
	case renderedDialog : Apple_Parsec_Siri_V2alpha_RenderedDialogComponent
	case catDialog : Apple_Parsec_Siri_V2alpha_CatDialogComponent
	case layoutExperience : Apple_Parsec_Siri_V2alpha_LayoutSnippetComponent
	case domainStateComponent : Apple_Parsec_Siri_V2alpha_DomainStateComponent
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_LayoutSnippetComponent {

	// Properties
	var perResultLayoutDetails : Apple_Parsec_Siri_V2alpha_PerResultLayoutDetails
	var clientBoundCommand : Apple_Parsec_Siri_V2alpha_ClientBoundCommand
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _sash : Apple_Parsec_Siri_V2alpha_Sash
	var _compactSnippet : Apple_Parsec_Siri_V2alpha_CasinoSnippet
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_PerResultLayoutDetails {

	// Properties
	var snippet : OneOf_Snippet
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Snippet {

	// Properties
	case casinoSnippet : Apple_Parsec_Siri_V2alpha_CasinoSnippet
	case watchSnippet : Apple_Parsec_Siri_Platform_Watchos_SiriWatchOSSnippet
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_CasinoSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cardData : }

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_RenderedDialogComponent {

	// Properties
	var print : String
	var speak : String
	var catID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_CatDialogComponent {

	// Properties
	var catID : String
	var catParams : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_Sash {

	// Properties
	var appName : String
	var appID : String
	var punchoutUri : String
	var imageResourceURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_DomainStateComponent {

	// Properties
	var component : OneOf_Component
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Component {

	// Properties
	case geoComponent : Apple_Parsec_Siri_V2alpha_GeoStateComponent
 }

 struct PegasusAPI.Searchfoundation_AppLinkCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
	var subtitle : String
	var appLinks : Searchfoundation_AppLink
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 enum PegasusAPI.Apple_Parsec_Render_V2_StatusCode {

	// Properties
	case UNRECOGNIZED : Int
	case statusOk  
	case statusError  
	case statusNoResults  
 }

 struct PegasusAPI.Apple_Parsec_Render_V2_RenderRequest {

	// Properties
	var countryCode : String
	var secretKey : String
	var locale : String
	var effectiveSystemLanguage : String
	var preferredLanguages : [String]
	var timeZone : String
	var uiScale : Float
	var renderStyle : Apple_Parsec_Rendering_V2_RenderStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Domainresultpb_DomainResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProto : }

 }

 struct PegasusAPI.Apple_Parsec_Render_V2_RenderResponse {

	// Properties
	var status : Apple_Parsec_Render_V2_StatusCode
	var renderings : Apple_Parsec_Rendering_V2_Rendering
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _error : Apple_Parsec_Render_V2_Error
 }

 struct PegasusAPI.Apple_Parsec_Render_V2_Error {

	// Properties
	var error : OneOf_Error
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Error {

	// Properties
	case message : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encryptedMessage : #_

 }

 enum PegasusAPI.Searchfoundation_ResultType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case server  
	case local  
	case coreSpotlight  
	case nsuserActivity  
	case safariTopHit  
	case calculator  
	case conversion  
	case dictionaryDefinition  
	case google  
	case yahoo  
	case bing  
	case duckDuckGo  
	case yandex  
	case baidu  
	case proactiveSuggestion  
	case localSuggestion  
	case serverSuggestion  
	case qihoo  
	case sogou  
	case siriAction  
	case siriSuggestion  
	case installedClip  
	case uninstalledClip  
	case webClip  
	case ecosia  
 }

 struct PegasusAPI.Searchfoundation_Button {

	// Properties
	var isSelected : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _image : Searchfoundation_Image
	var _selectedImage : Searchfoundation_Image
 }

 struct PegasusAPI.Kgqsapipb_Fact {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_Alias {

	// Properties
	var primary : String
	var secondary : [String]
	var locale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_DateTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sec : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var min : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var hr : Ûu

	var time : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var month : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var year : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var day : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var epoch : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _sID : String
	var _sLoc : Kgqsapipb_Alias
	var _sPop : Double
	var _sIsa : [String]
	var _pID : String
	var _pLoc : Kgqsapipb_Alias
	var _pPop : Double
	var _oID : String
	var _oLoc : Kgqsapipb_Alias
	var _oPop : Double
	var _time : Kgqsapipb_DateTime
	var _score : Float

	// Swift methods
 }

 enum PegasusAPI.Useragentpb_ClientID {

	// Properties
	case UNRECOGNIZED : Int
	case unknownClient  
	case safari  
	case spotlight  
	case lookup  
	case siri  
	case messages  
	case news  
	case parsecd  
	case dprivacyd  
	case coreSuggestions  
	case flightUtilities  
	case trystero  
	case mapsSuggestions  
	case duetExpert  
	case visualIntelligence  
	case amp  
 }

 enum PegasusAPI.Useragentpb_DeviceID {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case iphone  
	case ipad  
	case ipodtouch  
	case mac  
	case appletv  
	case applewatch  
	case homepod  
 }

 enum PegasusAPI.Useragentpb_ScreenSize {

	// Properties
	case UNRECOGNIZED : Int
	case smallScreen  
	case mediumScreen  
	case largeScreen  
 }

 enum PegasusAPI.Useragentpb_Platform {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case macos  
	case ios  
	case tvos  
	case watchos  
 }

 enum PegasusAPI.Useragentpb_HardwareID {

	// Properties
	case UNRECOGNIZED : Int
	case unknownHardwareID  
	case iphone5  
	case iphone5S  
	case iphone6  
	case iphone6S  
	case iphoneSe  
	case iphone7  
	case iphone8  
	case iphoneX  
	case iphoneXr  
	case iphoneXs  
	case iphoneXsMax  
	case iphone11  
	case iphone11Pro  
	case iphone11ProMax  
	case appleTv4  
	case appleTv5  
	case appleTv6  
	case appleWatch1  
	case appleWatch2  
	case appleWatch3  
	case homePod1  
	case ipads  
	case genericMac  
	case imac  
	case imacPro  
	case macPro  
	case macMini  
	case macbook  
	case macbookPro  
	case macbookAir  
 }

 struct PegasusAPI.Useragentpb_OsVersion {

	// Properties
	var platform : Useragentpb_Platform
WARNING: couldn't find address 0x0 (0x0) in binary!
	var prefix : Ûu

	var release : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buildNumber : Ûu

	var suffix : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Useragentpb_UserAgent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _value : String
	var _client : Useragentpb_ClientID
	var _device : Useragentpb_DeviceID
	var _screenSize : Useragentpb_ScreenSize
	var _generation : String
	var _subGeneration : String
	var _clientVersion : String
	var _osVersion : String
	var _parsedOsVersion : Useragentpb_OsVersion
	var _isDebug : Bool
	var _isClientReportedSeed : Bool
	var _isClientReportedInternal : Bool
	var _hardware : Useragentpb_HardwareID
	var _productVersion : String
	var _skuregion : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_TopHit {

	// Properties
	case UNRECOGNIZED : Int
	case no  
	case shouldBe  
	case mustBe  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V1alpha_StatusCode {

	// Properties
	case UNRECOGNIZED : Int
	case statusOk  
	case statusError  
	case statusNoResults  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_ParsecSearchRequest {

	// Properties
	var queries : Apple_Parsec_Siri_V1alpha_ParsecSearchQuery
	var renderStyle : Apple_Parsec_Rendering_V2_RenderStyle
	var userDataShareOptIn : Bool
	var environment : Environment
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _queryContext : Apple_Parsec_Siri_V1alpha_ParsecSearchQueryContext
	var _recognitionResponse : Apple_Parsec_Siri_V1alpha_RecognitionResponse
 }

 enum PegasusAPI.Environment {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case production  
	case development  
	case carry  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_DomainContext {

	// Properties
	var context : OneOf_Context
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Context {

	// Properties
	case kgContext : Kgqsapipb_KGContext
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_ParsecSearchQuery {

	// Properties
	var domainContext : Apple_Parsec_Siri_V1alpha_DomainContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asrRank : Ûu

	var asrScore : Double
	var searchQuery : String
	var queryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _utterance : Utterance
	var _nlInfo : Apple_Parsec_Siri_V1alpha_NLInfo
 }

 struct PegasusAPI.Utterance {

	// Properties
	var machine : String
	var speech : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_RecognitionResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_DebugParams {

	// Properties
	var include : [String]
	var enableDebug : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_ParsecSearchQueryContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.TemperatureUnit {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case celsius  
	case fahrenheit  
 }

 enum PegasusAPI.MeasurementSystem {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case si  
	case us  
	case uk  
 }

 enum PegasusAPI.HourFormat {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case twelve  
	case twentyFour  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_ParsecSearchResponse {

	// Properties
	var responses : Apple_Parsec_Siri_V1alpha_ParsecSearchResult
	var partialClientAddress : String
	var overallStatus : Apple_Parsec_Siri_V1alpha_StatusCode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_ParsecSearchResult {

	// Properties
	var searchStatus : Apple_Parsec_Siri_V1alpha_StatusCode
	var queryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryfeedback : #_

	var queryConfidenceScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var millisecondDuration : Qe

	var domainresults : Apple_Parsec_Siri_V1alpha_DomainResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _error : Error
 }

 struct PegasusAPI.Error {

	// Properties
	var error : OneOf_Error
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Error {

	// Properties
	case message : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encryptedMessage : #_

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_NNerEntities {

	// Properties
	var identifier : String
	var name : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Siri_V1alpha_DomainResult {

	// Properties
	var domainName : String
	var identifier : String
	var url : String
	var bundleID : String
	var adamID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var domainDataProto : #_

	var sectionHeader : String
	var searchQuery : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultfeedback : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxAgeSeconds : Ûu

	var entities : Apple_Parsec_Search_V2_Entity
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asrRank : Ûu

	var nnerEntities : Apple_Parsec_Siri_V1alpha_NNerEntities
	var renderings : Apple_Parsec_Rendering_V2_Rendering
	var domainScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _domainData : Domainresultpb_DomainResult
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _secretKey : String
	var _countryCode : String
	var _locale : String
	var _effectiveSystemLanguage : String
	var _preferredLanguages : [String]
	var _storeFront : String
	var _userGuid : String
	var _timeZone : String
	var _debug : Apple_Parsec_Siri_V1alpha_DebugParams
	var _skuRegion : String
	var _calendar : String
	var _region : String
	var _tempUnit : TemperatureUnit
	var _measurementSystem : MeasurementSystem
	var _hourFormat : HourFormat
	var _location : Apple_Parsec_Search_V2_Location
	var _mapsSession : Apple_Parsec_Search_V2_MapsSession
	var _subscriptions : Apple_Parsec_Search_V2_Subscriptions
	var _transportationMode : Apple_Parsec_Search_V2_TransportationMode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _installedAppsSignature : #_

	var _uiScale : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abTestSeed : Ûu

	var _internalBuild : Bool
	var _seedBuild : Bool
	var _hsEnabled : Bool
	var _managedDevice : Bool

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_Punchout {

	// Properties
	var name : String
	var bundleIdentifier : String
	var label : String
	var urls : Searchfoundation_URL
	var actionTarget : String
	var isRunnableInBackground : Bool
	var hasClip_p : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _userActivityData : Searchfoundation_UserActivityData
 }

 struct PegasusAPI.Completionpb_CompletionInfo {

	// Properties
	var uniScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : #_

	var value : String
	var display : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var flags : #_

	var probability : Float
	var nmt : Float
	var mlScore : Float
	var trendScore : Float
	var trendFracEwmaChanged : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendRenderCount : Ûu

	var trendEngagementRate : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendStartDate : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var trendCurrentDate : Ûu

	var correctionCandidates : Completionpb_Correction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_Correction {

	// Properties
	var type : CorrectionType
	var correction : String
	var country : String
	var probability : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var total : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.CorrectionType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case phrase  
	case phraseNmt  
	case prefix  
	case prefixAb  
	case noCorrection  
 }

 struct PegasusAPI.Completionpb_CompletionLink {

	// Properties
	var candidates : Completionpb_CompletionInfo
	var prefixCorrections : Completionpb_Correction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_CompletionLinkPack {

	// Properties
	var geoCandidates : Completionpb_CompletionLink
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_QueryList {

	// Properties
	var queries : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_PositionQueryList {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var items :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_DomainQueryList {

	// Properties
	var items : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_CompletionClickInfo {

	// Properties
	var query : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var render : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var engagement : Ûu

	var clickScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_DecileInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var decile : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var searchCount : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_PrefixSignal {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Completionpb_ClickGraphSuggetsionInfo {

	// Properties
	var dstQuery : String
	var clickGraphScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_ClickGraphLink {

	// Properties
	var candidates : Completionpb_ClickGraphSuggetsionInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_SpanInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var start : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var end : Ûu

	var text : String
	var wikiID : String
	var wikiType : String
	var probability : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_QueryEntityInfo {

	// Properties
	var status : EntityStatus
	var entitySpans : Completionpb_SpanInfo
	var canonicalQuery : String
	var impacted : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.EntityStatus {

	// Properties
	case UNRECOGNIZED : Int
	case noEntity  
	case hasEntity  
	case fullEntity  
	case endEntity  
 }

 struct PegasusAPI.Completionpb_RelatedSuggestionInfo {

	// Properties
	var dstQuery : String
	var clickGraphScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _language : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoID : Ûu

	var _completions : Completionpb_CompletionClickInfo
	var _safariDecileInfo : Completionpb_DecileInfo
	var _spotlightDecileInfo : Completionpb_DecileInfo
	var _stopSearchRules : [String : Bool]
	var _stopCompleteRules : [String : Bool]
	var _blackList : Completionpb_QueryList
	var _completionOverwrites : Completionpb_DomainQueryList
	var _stopSuggestionRules : [String : Bool]
	var _suggestionOverwrites : Completionpb_PositionQueryList
	var _stopInstantSearchRules : [String : Bool]
	var _stopRelatedSearchRules : [String : Bool]
	var _relatedSearchBlackList : Completionpb_QueryList
	var _relatedSearchOverwrites : Completionpb_PositionQueryList

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_WebSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Snippetpb_CanonUrl {

	// Properties
	var url : String
	var anchorCount : Double
	var engagementCount : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_Topsy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Snippetpb_DeepLink {

	// Properties
	var appName : String
	var link : String
	var bundleID : String
	var universal : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_GeoId {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_TwitterUserData {

	// Properties
	var screenName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var followersCount : Qe

	var lang : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_WikiFeature {

	// Properties
	var wikiID : [String]
	var categoryID : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_AlternateLinks {

	// Properties
	var href : String
	var hreflang : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_AllText {

	// Properties
	var raw : [String]
	var tokenized : [String]
	var descRaw : [String]
	var descTokenized : [String]
	var qNA : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_Entity {

	// Properties
	var id : String
	var score : Double
	var url : String
	var label : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _topsy : Snippetpb_Topsy
	var _geoid : Snippetpb_GeoId
	var _domainClassification : [String]
	var _twitterProfile : Snippetpb_TwitterUserData
	var _resultLinking : Resultlinkingpb_ResultLinking
	var _wikiFeature : Snippetpb_WikiFeature
	var _allText : Snippetpb_AllText
	var _sortedEntities : Snippetpb_Entity
	var _canonDupCluster : Snippetpb_CanonUrl
	var _duplicateUrls : [String]

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _displayURL : String
	var _lang : String
	var _pu : String
	var _description_p : String
	var _title : String
	var _allSentences : String
	var _image : String
	var _touchIcon : String
	var _favicon : String
	var _iconKeyColor : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publishTs : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fetchTs : Qe

	var _deepLink : Snippetpb_DeepLink
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isProfanity : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isSensitivity : Qe

	var _alternatePages : Snippetpb_Topsy
	var _alternateLinks : Snippetpb_AlternateLinks

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_DictionarySnippet {

	// Properties
	var data : ResultData
	var query : String
	var dictionaryCss : CSSData
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Entry {

	// Properties
	var dictionaryID : String
	var entryID : String
	var headWord : String
	var syllabified : String
	var partOfSpeech : String
	var pronunciation : String
	var definitions : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var refCount : Qe

	var allPartsOfSpeech : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numDefinitions : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.ResultData {

	// Properties
	var html : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var flags : Qe

	var anchor : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _entry : Entry
 }

 struct PegasusAPI.Result {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.CSSData {

	// Properties
	var dictionaryID : String
	var cssMac : String
	var cssIos : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.IndexEntry {

	// Properties
	var dictionaryID : String
	var entryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var flags : Qe

	var anchor : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.QueryData {

	// Properties
	var query : String
	var language : String
	var indexEntries : IndexEntry
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _resultData : ResultData
	var _dictionaryBundle : String
	var _dictionaryPunchout : String
	var _query : String
	var _html : String
	var _source : String

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_WebImagesSnippet {

	// Properties
	var imageURL : String
	var title : String
	var webPageURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publishTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var fetchTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageWidth : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageHeight : Ûu

	var relatedImages : Snippetpb_WebImagesSnippet
	var isDetail : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_VerticalLayoutCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _thumbnail : Searchfoundation_Image
	var _title : Searchfoundation_RichText
	var _footnote : Searchfoundation_RichText

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_WatchListCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_WatchListItem {

	// Properties
	var watchListIdentifier : String
	var seasonEpisodeTextFormat : String
	var continueInTextFormat : String
	var openButtonTitle : String
	var installButtonTitle : String
	var purchaseOfferTextFormat : String
	var inUpNextText : String
	var addToUpNextText : String
	var addedToUpNextText : String
	var watchLiveTextFormat : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _watchListItem : Searchfoundation_WatchListItem

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_ShoppingSnippet {

	// Properties
	var webURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _product : Argos_Protos_Productdatapb_Product
 }

 struct PegasusAPI.Searchfoundation_DetailedRowCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _thumbnail : Searchfoundation_Image
	var _preventThumbnailImageScaling : Bool
	var _title : Searchfoundation_RichText
	var _secondaryTitle : Searchfoundation_FormattedText
	var _secondaryTitleImage : Searchfoundation_Image
	var _isSecondaryTitleDetached : Bool
	var _descriptions : Searchfoundation_RichText
	var _footnote : Searchfoundation_RichText
	var _trailingTopText : Searchfoundation_FormattedText
	var _trailingMiddleText : Searchfoundation_FormattedText
	var _trailingBottomText : Searchfoundation_FormattedText
	var _action : Searchfoundation_ActionItem
	var _button : Searchfoundation_Button
	var _shouldUseCompactDisplay : Bool

	// Swift methods
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_GeoStateComponent {

	// Properties
	var geoDomainResult : Mapspb_LocalSearchBusiness
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_FlightCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _flight : Searchfoundation_Flight
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _selectedLegIndex : …e


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ActivityIndicatorCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 enum PegasusAPI.Searchfoundation_CommandType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case referential  
 }

 struct PegasusAPI.Searchfoundation_ReferentialCommand {

	// Properties
	var referenceIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_AbstractCommand {

	// Properties
	var type : Searchfoundation_CommandType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Searchfoundation_CommandValue
 }

 struct PegasusAPI.Searchfoundation_CommandValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _referentialCommand : Searchfoundation_ReferentialCommand
 }

 struct PegasusAPI.Snippetpb_AmpMusicSnippet {

	// Properties
	var id : String
	var adamID : String
	var name : [String]
	var lyrics : String
	var artwork : String
	var webURL : String
	var kind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Kind {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case artist  
	case album  
	case song  
	case playlist  
	case station  
	case podcast  
 }

 struct PegasusAPI.Kgqsapipb_ArgInfo {

	// Properties
	var arg : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _span : Kgqsapipb_Span
 }

 struct PegasusAPI.Kgqsapipb_IntentArgInfo {

	// Properties
	var intent : String
	var args : Kgqsapipb_ArgInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_KGDBResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.ResultSource {

	// Properties
	case UNRECOGNIZED : Int
	case kgqs  
	case web  
 }

 enum PegasusAPI.ResultType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case singleEntity  
	case foodNutritionGenericFact  
	case foodNutritionSpecificNutrient  
	case dictionary  
	case election  
	case covid  
	case sound  
 }

 struct PegasusAPI.Kgqsapipb_Attribute {

	// Properties
	var id : String
	var entityID : String
	var propID : String
	var propName : String
	var value : String
	var localizedValue : String
	var parent : Kgqsapipb_Attribute
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_ExecutionStep {

	// Properties
	var kgQueryNode : String
	var queryTree : String
	var queryParams : String
	var execSteps : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeMs : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_DisplayableMetadata {

	// Properties
	var dbQueryPattern : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_PerfMetric {

	// Properties
	var name : String
	var value : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_KGEntity {

	// Properties
	var parent : Bool
	var attributes : Kgqsapipb_Claim
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _wikidata : Kgqsapipb_Entity
	var _wikipedia : Kgqsapipb_Thing
	var _features : Kgqsapipb_EntityFeatures
 }

 struct PegasusAPI.Kgqsapipb_EntityFeatures {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pageViews : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_EntityInfo {

	// Properties
	var wikidataID : String
	var wikipediaID : String
	var title : String
	var description_p : String
	var thumbnailURL : String
	var ontologyPaths : Kgqsapipb_OntologyPath
	var entitySyn : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_DebugInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.Quality {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case bad  
	case medium  
	case good  
 }

 struct PegasusAPI.Kgqsapipb_KGDebugContext {

	// Properties
	var intent : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var canonResultID : Qe

	var queryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_DebugInfoContainer {

	// Properties
	var debug : Kgqsapipb_DebugInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_RenderFeatures {

	// Properties
	var hasMapCoordinates_p : Bool
	var latitude : Float
	var longitude : Float
	var isAnyDisputed : Bool
	var slideInTitle : String
	var hasInstantAnswer_p : Bool
	var answerType : AnswerType
	var isSiriJrSnippetPresent : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.AnswerType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case foodNutritionGenericFact  
	case foodNutritionSpecificNutrient  
	case dictionary  
	case election  
 }

 struct PegasusAPI.Kgqsapipb_GeoEntity {

	// Properties
	var id : String
	var localizedName : String
	var placetype : String
	var containers : Kgqsapipb_GeoEntity
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
	var _result : Kgqsapipb_KGEntity
	var _debug : Kgqsapipb_DebugInfo
	var _relaxed : Bool
	var _entities : String
	var _hasMoreResults_p : Bool
	var _lastIntent : String
	var _queryFeatures : Kgqsapipb_QueryFeatures
	var _perfMetrics : Kgqsapipb_PerfMetric
	var _displayableMetadata : Kgqsapipb_DisplayableMetadata
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _nextStart : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalResultsCount : Ûu

	var _intent : String
	var _intentArgInfo : Kgqsapipb_IntentArgInfo
	var _renderFeatures : Kgqsapipb_RenderFeatures
	var _fullCardURL : String
	var _resultSource : ResultSource
	var _resultType : ResultType
	var _kgQueryTree : String
	var _executionLog : Kgqsapipb_ExecutionStep
	var _localizedEntities : Kgqsapipb_Entity
	var _attributes : Kgqsapipb_Attribute
	var _geoEntities : Kgqsapipb_GeoEntity
	var _electionsResponse : Electionspb_ElectionsResponse
	var _nlgDialog : Nlgpb_NlgDialog

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _code : String
	var _description_p : String
	var _messages : [String]
	var _pattern : String
	var _dbQueryPattern : [String]
	var _encodedIntent : String
	var _maxPopularityScore : Float
	var _queryEntities : Kgqsapipb_EntityInfo
	var _fedPatterns : [String]
	var _intentFeatures : Kgqsapipb_IntentFeatures
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _canonResultID : Qe

	var _quality : Quality
	var _productionRules : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _referEntityIdx : Ûu

	var _encodedContext : String
	var _encodedIntentProto : String
	var _maxEntityScore : Double
	var _algorithm : String
	var _intentName : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_MessageStatus {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case unsent  
	case sent  
 }

 enum PegasusAPI.Searchfoundation_MessageServiceType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case iMessage  
	case sms  
	case other  
 }

 enum PegasusAPI.Searchfoundation_MessageAttachmentType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case photo  
	case livePhoto  
	case video  
	case web  
 }

 struct PegasusAPI.Searchfoundation_MessageAttachment {

	// Properties
	var type : Searchfoundation_MessageAttachmentType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _url : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_MessageCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _messageText : String
	var _messageStatus : Searchfoundation_MessageStatus
	var _messageServiceType : Searchfoundation_MessageServiceType
	var _audioMessageURL : Searchfoundation_URL
	var _messageAttachment : Searchfoundation_MessageAttachment

	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Search_V2_LookupSelectionType {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case explicit  
	case hint  
 }

 enum PegasusAPI.Apple_Parsec_Search_V2_RenderStyle {

	// Properties
	case UNRECOGNIZED : Int
	case full  
	case compactTopHit  
 }

 enum PegasusAPI.Apple_Parsec_Search_V2_QueryType {

	// Properties
	case UNRECOGNIZED : Int
	case search  
	case zeroKeyword  
	case suggested  
	case explicit  
	case suggestWithResults  
	case messages  
	case messagesZkw  
	case messagesCategoryZkw  
	case messagesSuggest  
	case messagesSuggestCategory  
	case messagesSearchSuggested  
	case messagesProactiveSuggested  
	case messagesCategorySearch  
	case messagesCategorySuggested  
	case siriEntityCheck  
	case card  
	case web  
	case answerExtract  
	case webWithGoogle  
	case news  
	case videos  
	case tv  
	case movies  
	case twitter  
	case quakes  
	case wiki  
	case weather  
	case siriFlightsWithUi  
	case siriKnowledgeGraphWithUi  
	case siriKnowledgeGraphDbq  
	case siriMediaWithUi  
	case siriWikipediaWithUi  
	case siriNewsSearch  
	case siriNewsZkw  
	case siriKnowledgeSearch  
	case siriWebsiteLaunch  
	case mediaEntity  
	case siriSportsSearch  
 }

 enum PegasusAPI.Apple_Parsec_Search_V2_RoutineMode {

	// Properties
	case UNRECOGNIZED : Int
	case unset  
	case unknown  
	case local  
	case tourist  
 }

 enum PegasusAPI.Apple_Parsec_Search_V2_TransportationMode {

	// Properties
	case UNRECOGNIZED : Int
	case unset  
	case unknown  
	case stationary  
	case walking  
	case running  
	case cycling  
	case driving  
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_SearchRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.SendTopHit {

	// Properties
	case UNRECOGNIZED : Int
	case off  
	case always  
 }

 enum PegasusAPI.TemperatureUnit {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case celsius  
	case fahrenheit  
 }

 enum PegasusAPI.MeasurementSystem {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case si  
	case us  
	case uk  
 }

 enum PegasusAPI.HourFormat {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case twelve  
	case twentyFour  
 }

 enum PegasusAPI.Suggest {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case on  
	case off  
	case only  
	case withTopHit  
	case resultWithTopHit  
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_SearchResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.StatusCode {

	// Properties
	case UNRECOGNIZED : Int
	case statusOk  
	case statusError  
	case statusNoResults  
 }

 struct PegasusAPI.QuerySuggestion {

	// Properties
	var suggestion : String
	var query : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var feedback : #_

	var previouslyEngaged : Bool
	var score : Float
	var entities : Apple_Parsec_Search_V2_Entity
	var detailText : String
	var serverFeatures : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Error {

	// Properties
	var error : OneOf_Error
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Error {

	// Properties
	case message : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encryptedMessage : #_

 }

 struct PegasusAPI.QueryFeatures {

	// Properties
	var prefix : String
	var query : String
	var topDown : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Stats
 }

 struct PegasusAPI.CategoryStats {

	// Properties
	var bundleID : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Stats {

	// Properties
	var cep : CategoryStats
	var cepLong : CategoryStats
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Correction {

	// Properties
	var prefix : String
	var completion : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Section {

	// Properties
	var header : String
	var moreLabel : String
	var more : OneOf_More
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blockID : Ûu

	var doNotFold : Bool
	var resultIdentifiers : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_More {

	// Properties
	case moreURL : String
	case morePunchout : String
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Entity {

	// Properties
	var probabilityScore : Float
	var name : String
	var category : Category
	var topics : Topic
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Category {

	// Properties
	case UNRECOGNIZED : Int
	case namedEntityCategoryUnknown  
	case namedEntityCategoryPerson  
	case namedEntityCategoryOrganization  
	case namedEntityCategoryLocation  
	case namedEntityCategoryRestaurant  
	case namedEntityCategoryActivityLocation  
	case namedEntityCategoryMedia  
	case namedEntityCategoryArtist  
	case namedEntityCategoryStreetAddress  
	case namedEntityCategoryCity  
	case namedEntityCategoryState  
	case namedEntityCategoryCountry  
	case namedEntityCategoryFullAddress  
	case namedEntityCategoryTouristAttraction  
 }

 struct PegasusAPI.Topic {

	// Properties
	var identifier : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Rendering {

	// Properties
	var style : Apple_Parsec_Search_V2_RenderStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cardData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Result {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.TopHit {

	// Properties
	case UNRECOGNIZED : Int
	case no  
	case shouldBe  
	case mustBe  
 }

 enum PegasusAPI.Placement {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case top  
	case bottom  
	case topHit  
 }

 struct PegasusAPI.Template {

	// Properties
	var completion : String
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completionIcon : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var thumbnail : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var cardData : #_

	var legacyTemplateName : String
	var renderings : Apple_Parsec_Search_V2_Rendering
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Silhouette {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var portraitVersion : Ûu

	var topics : Topic
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Topic {

	// Properties
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Suggestion {

	// Properties
	var suggestion : String
	var type : TypeEnum
	var topic : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.TypeEnum {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case contextual  
	case coreSpotlight  
	case userTyped  
	case thirdParty  
	case pastEngagement  
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_RevGeoResolution {

	// Properties
	var country : String
	var administrativeArea : String
	var subAdministrativeArea : String
	var locality : String
	var formattedAddressLines : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Location {

	// Properties
	var latitude : Float
	var longitude : Float
	var source : Source
	var horizontalAccuracy : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _revGeoResolution : Apple_Parsec_Search_V2_RevGeoResolution
 }

 enum PegasusAPI.Source {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case disabledByUser  
	case disabledByBag  
	case tooSlow  
	case error  
	case gps  
	case cellular  
	case wiFi  
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_Subscriptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptionJson : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_MapsSession {

	// Properties
	var enviroment : String
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sequenceNumber : …e

	var relativeTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var metadata : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _queryType : Apple_Parsec_Search_V2_QueryType
	var _query : String
	var _secretKey : String
	var _sendTopHit : SendTopHit
	var _countryCode : String
	var _locale : String
	var _effectiveSystemLanguage : String
	var _preferredLanguages : [String]
	var _inputMode : String
	var _calendar : String
	var _timeZone : String
	var _tempUnit : TemperatureUnit
	var _measurementSystem : MeasurementSystem
	var _hourFormat : HourFormat
	var _modelVersionL2 : String
	var _modelVersionL3 : String
	var _localSuggestions : Apple_Parsec_Search_V2_Suggestion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dictionarySignature : #_

	var _silhouette : Apple_Parsec_Search_V2_Silhouette
	var _location : Apple_Parsec_Search_V2_Location
	var _routineMode : Apple_Parsec_Search_V2_RoutineMode
	var _transportationMode : Apple_Parsec_Search_V2_TransportationMode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _installedAppsSignature : #_

	var _managedDevice : Bool
	var _storeFront : String
	var _subscriptions : Apple_Parsec_Search_V2_Subscriptions
	var _userGuid : String
	var _uiScale : Float
	var _mapsSession : Apple_Parsec_Search_V2_MapsSession
	var _suggest : Suggest
	var _queryLanguage : String
	var _lookupAppBundleID : String
	var _lookupHintDomain : String
	var _lookupSelectionType : Apple_Parsec_Search_V2_LookupSelectionType
	var _siriLocale : String
	var _hsEnabled : Bool
	var _internalBuild : Bool
	var _seedBuild : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abTestSeed : Ûu

	var _experimentNamespaceID : String
	var _isClientOnlyExperiment : Bool
	var _isInReservedAllocationForExperiment : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _exp : Qe


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _status : StatusCode
	var _prefix : String
	var _query : String
	var _suggestions : QuerySuggestion
	var _suggestionsAreBlended : Bool
	var _completionScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _feedback : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _maxAgeSeconds : Ûu

	var _error : Error
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _millisecondDuration : Qe

	var _partialClientAddress : String
	var _queryFeatures : QueryFeatures
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _blenderFeaturesL3 :  empty-list 
	var _corrections : Correction
	var _results : Apple_Parsec_Search_V2_Result
	var _sections : Section
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _legacyJson : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _debug : }


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : String
	var _identifier : String
	var _canonicalID : String
	var _dataServiceID : String
	var _score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _feedback : #_

	var _url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _maxAgeSeconds : Ûu

	var _serverScore : Float
	var _entities : Apple_Parsec_Search_V2_Entity
	var _topHit : TopHit
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _engagementScore : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryIndependentEngagementScore : Ûu

	var _placement : Placement
	var _renderHorizontallyWithOtherResultsInCategory : Bool
	var _isQuickGlance : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minimumRankOfTopHitToSuppressResult : Ûu

	var _appleReferrer : String
	var _sectionBundleID : String
	var _bundleID : String
	var _adamID : String
	var _template : Template
	var _intendedQuery : String
	var _correctedQuery : String
	var _completedQuery : String
	var _shouldUseCompactDisplay : Bool
	var _noGoTakeover : Bool
	var _preferTopPlatter : Bool
	var _usesCompactDisplay : Bool
	var _alternativeUrls : [String]
	var _serverFeatures : [String : Double]

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_ImageSource {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case siri  
 }

 enum PegasusAPI.Searchfoundation_ImageType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case url  
	case contact  
	case monogram  
	case local  
	case appIcon  
	case mediaArtwork  
	case calendar  
	case symbol  
 }

 enum PegasusAPI.Searchfoundation_ImageCornerRoundingStyle {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case none  
	case roundedCorners  
	case appIcon  
	case circle  
 }

 enum PegasusAPI.Searchfoundation_MonogramStyle {

	// Properties
	case UNRECOGNIZED : Int
	case contact  
	case favicon  
 }

 enum PegasusAPI.Searchfoundation_LocalImageType {

	// Properties
	case UNRECOGNIZED : Int
	case faceTime  
	case phone  
	case unread  
 }

 enum PegasusAPI.Searchfoundation_AppIconType {

	// Properties
	case UNRECOGNIZED : Int
	case bundleIdentifier  
	case defaultWebBrowser  
 }

 struct PegasusAPI.Searchfoundation_Image {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_URLImage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _urlValue : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_CalendarImage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _date : Searchfoundation_Date
 }

 struct PegasusAPI.Searchfoundation_ContactImage {

	// Properties
	var contactIdentifiers : [String]
	var threeDtouchEnabled : Bool
	var appIconBadgeBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_MonogramImage {

	// Properties
	var monogramLetters : String
	var monogramStyle : Searchfoundation_MonogramStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_LocalImage {

	// Properties
	var localImageType : Searchfoundation_LocalImageType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_AppIconImage {

	// Properties
	var bundleIdentifier : String
	var iconType : Searchfoundation_AppIconType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_MediaArtworkImage {

	// Properties
	var persistentID : String
	var spotlightIdentifier : String
	var mediaEntityType : Searchfoundation_MediaEntityType
	var universalLibraryID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_SymbolImage {

	// Properties
	var symbolName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _imageData : #_

	var _isTemplate : Bool
	var _shouldCropToCircle : Bool
	var _cornerRadius : Searchfoundation_GraphicalFloat
	var _scale : Searchfoundation_GraphicalFloat
	var _size : Searchfoundation_PointSize
	var _contentType : String
	var _keyColor : String
	var _identifier : String
	var _source : Searchfoundation_ImageSource
	var _cornerRoundingStyle : Searchfoundation_ImageCornerRoundingStyle
	var _type : Searchfoundation_ImageType
	var _urlImage : Searchfoundation_URLImage
	var _contactImage : Searchfoundation_ContactImage
	var _monogramImage : Searchfoundation_MonogramImage
	var _localImage : Searchfoundation_LocalImage
	var _appIconImage : Searchfoundation_AppIconImage
	var _mediaArtworkImage : Searchfoundation_MediaArtworkImage
	var _calendarImage : Searchfoundation_CalendarImage
	var _symbolImage : Searchfoundation_SymbolImage

	// Swift methods
 }

 struct PegasusAPI.Apple_Parsec_Completion_V1_Validation {

	// Properties
	var name : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Completion_V1_SiriSuggestion {

	// Properties
	var siriSpiString : String
	var display : String
	var noHsDisplay : String
	var locale : String
	var bundleID : String
	var score : Float
	var validations : Apple_Parsec_Completion_V1_Validation
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Completion_V1_SiriSuggestionList {

	// Properties
	var candidates : Apple_Parsec_Completion_V1_SiriSuggestion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_SectionHeaderCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _text : Searchfoundation_RichText

	// Swift methods
 }

 struct PegasusAPI.Sportspb_BasketballStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doubleDoubles : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tripleDoubles : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _stealToTurnoverRatio : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assistToTurnoverRatio : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ejections : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _disqualifications : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _flagrantFouls : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _technicalFouls : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _personalFouls : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assists : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _points : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rebounds : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reboundsOffensive : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reboundsDefensive : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _steals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _turnovers : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _blockedShots : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pointsPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reboundsDefensivePerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reboundsPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reboundsOffensivePerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assistsPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minutesPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _stealsPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _blockedShotsPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _turnoversPerGame : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _freeThrowsPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _freeThrowsMade : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _freeThrowsAttempted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _threePointFieldGoalsPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _threePointFieldGoalsMade : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _threePointFieldGoalsAttempted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _effectiveFieldGoalPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fieldGoalsPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fieldGoalsAttempted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fieldGoalsMade : ÿ‹


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_CompactRowCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _title : Searchfoundation_RichText
	var _subtitle : Searchfoundation_RichText
	var _isSubtitleDetatched : Bool
	var _image : Searchfoundation_Image

	// Swift methods
 }

 enum PegasusAPI.Tophitpb_TopHitValue {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case shouldBe  
	case mustBe  
 }

 struct PegasusAPI.Tophitpb_TopHit {

	// Properties
	var hint : Tophitpb_TopHitValue
	var noGoTakeover : Bool
	var shouldUseCompactDisplay : Bool
	var preferTopPlatter : Bool
	var bullseyeCompatible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_PegasusQueryContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.TemperatureUnit {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case celsius  
	case fahrenheit  
 }

 enum PegasusAPI.MeasurementSystem {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case si  
	case us  
	case uk  
 }

 enum PegasusAPI.HourFormat {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case twelve  
	case twentyFour  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _secretKey : String
	var _countryCode : String
	var _locale : String
	var _effectiveSystemLanguage : String
	var _preferredLanguages : [String]
	var _storeFront : String
	var _userGuid : String
	var _timeZone : String
	var _skuRegion : String
	var _calendar : String
	var _temperatureUnit : TemperatureUnit
	var _measurementSystem : MeasurementSystem
	var _hourFormat : HourFormat
	var _location : Apple_Parsec_Search_V2_Location
	var _mapsSession : Apple_Parsec_Search_V2_MapsSession
	var _subscriptions : Apple_Parsec_Search_V2_Subscriptions
	var _transportationMode : Apple_Parsec_Search_V2_TransportationMode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _installedAppsSignature : #_

	var _uiScale : Float
	var _internalBuild : Bool
	var _seedBuild : Bool
	var _hsEnabled : Bool
	var _managedDevice : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abTestSeed : Ûu


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ImageOption {

	// Properties
	var name : String
	var defaultValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _options : Searchfoundation_StringDictionary
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_Period {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case null  
	case now  
	case midnight  
	case millisecond  
	case second  
	case minute  
	case hour  
	case morning  
	case breakfast  
	case brunch  
	case lunch  
	case noon  
	case afternoon  
	case evening  
	case happyhour  
	case dinner  
	case bedtime  
	case daytime  
	case night  
	case overnight  
	case tonight  
	case dayperiod  
	case twoDaysBeforeYesterday  
	case dayBeforeYesterday  
	case yesterday  
	case today  
	case tomorrow  
	case dayAfterTomorrow  
	case twoDaysAfterTomorrow  
	case day  
	case sunday  
	case monday  
	case tuesday  
	case wednesday  
	case thursday  
	case friday  
	case saturday  
	case dayofweek  
	case weekend  
	case weekday  
	case week  
	case fortnight  
	case dayofmonth  
	case month  
	case quarter  
	case spring  
	case summer  
	case winter  
	case fall  
	case season  
	case semester  
	case year  
	case decade  
	case century  
	case nighttime  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_Qualifier {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case none  
	case plus  
	case minus  
	case approx  
	case early  
	case late  
	case every  
	case beginof  
	case middleof  
	case endof  
	case allof  
	case restof  
	case before  
	case after  
	case this  
	case next  
	case upcoming  
	case nextNext  
	case last  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_CalendarSystem {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case buddhist  
	case chinese  
	case hebrew  
	case hijri  
	case hindu  
	case islamicUmalqura  
	case islamic  
	case gregorian  
	case japanese  
	case julian  
	case persian  
	case roc  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_DayOfWeek {

	// Properties
	case UNRECOGNIZED : Int
	case dowNotSet  
	case dowMonday  
	case dowTuesday  
	case dowWednesday  
	case dowThursday  
	case dowFriday  
	case dowSaturday  
	case dowSunday  
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_DateTimePeriod {

	// Properties
	var isStart : Bool
	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_FractionalPeriod {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numerator : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var denominator : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var ordinalValue : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Time {

	// Properties
	var meridiem : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hourOfDay : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var minute : …e

	var qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var timeZoneID : String
	var isStart : Bool
	var isUserDefined : Bool
	var is24HourStyleInput : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _period : Com_Apple_Siri_Product_Proto_DateTimePeriod
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_DateTimeHoliday {

	// Properties
	var id : String
	var calendarSystem : Com_Apple_Siri_Product_Proto_CalendarSystem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Date {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var year : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var month : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var dayOfMonth : …e

	var dayOfWeek : Com_Apple_Siri_Product_Proto_DayOfWeek
	var qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var isStart : Bool
	var isUserDefined : Bool
	var periods : Com_Apple_Siri_Product_Proto_DateTimePeriod
	var calendarSystem : Com_Apple_Siri_Product_Proto_CalendarSystem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dayOfWeekOrdinalValue : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _dateTimeHoliday : Com_Apple_Siri_Product_Proto_DateTimeHoliday
	var _fractionalPeriod : Com_Apple_Siri_Product_Proto_FractionalPeriod
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Duration {

	// Properties
	var duration : Double
	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Interval {

	// Properties
	var quantity : Double
	var period : Com_Apple_Siri_Product_Proto_Period
	var qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var isUserDefined : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Recurrence {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var magnitude : Ûu

	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_DateTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.TemporalIntent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case past  
	case present  
	case future  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _startDate : Com_Apple_Siri_Product_Proto_Date
	var _endDate : Com_Apple_Siri_Product_Proto_Date
	var _duration : Com_Apple_Siri_Product_Proto_Duration
	var _interval : Com_Apple_Siri_Product_Proto_Interval
	var _recurrence : Com_Apple_Siri_Product_Proto_Recurrence
	var _startTime : Com_Apple_Siri_Product_Proto_Time
	var _endTime : Com_Apple_Siri_Product_Proto_Time
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startPosition : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endPosition : Ûu

	var _temporalIntent : TemporalIntent

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_RowCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _image : Searchfoundation_Image
	var _imageIsRightAligned : Bool
	var _leadingText : Searchfoundation_RichText
	var _trailingText : Searchfoundation_RichText
	var _attributionImage : Searchfoundation_Image
	var _key : String
	var _keyNoWrap : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _keyWeight : Ûu

	var _value : String
	var _valueNoWrap : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _valueWeight : Ûu

	var _cardPaddingBottom : Bool
	var _leadingSubtitle : Searchfoundation_RichText
	var _trailingSubtitle : Searchfoundation_RichText

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_SearchSuggestionType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case proactive  
	case recents  
	case proactiveCategory  
	case contextual  
	case userTyped  
	case coreSpotlightContent  
	case thirdPartyProvider  
	case pastEngagement  
	case parsecCategory  
	case siri  
	case web  
	case application  
	case webAsTyped  
 }

 struct PegasusAPI.Searchfoundation_SearchSuggestion {

	// Properties
	var identifier : String
	var suggestion : String
	var query : String
	var type : Searchfoundation_SearchSuggestionType
	var duplicateSuggestions : Searchfoundation_SearchSuggestion
	var topicIdentifier : String
	var bundleIdentifier : String
	var previouslyEngaged : Bool
	var fbr : String
	var scopedSearchApplicationBundleIdentifier : String
	var utteranceText : String
	var detailText : String
	var serverFeatures : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _score : Searchfoundation_GraphicalFloat
 }

 struct PegasusAPI.Sportspb_FootballStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defenseAssists : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defenseTackles : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defenseSackyards : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defenseSacks : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defensePassesdefensed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _defenseSafeties : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interceptionsNumber : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interceptionsTouchdowns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interceptionsYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fumblesforcedTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fumblesrecoveredTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstdownsPassing : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstdownsReceiving : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstdownsRushing : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interceptionsLong : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _extrapointsAttempts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _extrapointsBlocked : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _extrapointsMade : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _extrapointsPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickingLong : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickingPoints : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingYardsperattempt : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingCompletions : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingCompletionpercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingTouchdowns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingInterceptions : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingRating : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingSacked : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _passingSackedyardslost : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fumblesTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fumblesLostTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rushingAttempts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rushingTouchdowns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rushingYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rushingAverage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _receivingReceptions : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _receivingTouchdowns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _receivingYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _receivingLong : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _receivingAverage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstdownsTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rushingLong : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _scoringExtrapoints : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _scoringFieldgoals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _scoringTotalpoints : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _touchdownsPassing : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _touchdownsPuntreturn : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _touchdownsReceiving : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _touchdownsRushing : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _touchdownsTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingPunts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingIn20 : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingTouchbacks : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingAvg : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _puntingLong : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsNumber : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsAvg : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsReturns : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsReturnYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _kickOffsTouchbacks : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allPurposeYards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesStarted : ÿ‹


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_TitleCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
	var subtitle : String
	var isCentered : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Completionpb_Validation {

	// Properties
	var name : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_SiriSuggestion {

	// Properties
	var siriSpiString : String
	var display : String
	var noHsDisplay : String
	var locale : String
	var bundleID : String
	var score : Float
	var validations : Completionpb_Validation
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Completionpb_SiriSuggestionList {

	// Properties
	var candidates : Completionpb_SiriSuggestion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Search_V2_BagRequest {

	// Properties
	var countryCode : String
	var secretKey : String
	var locale : String
	var effectiveSystemLanguage : String
	var preferredLanguages : [String]
	var tuscanyOption : TuscanyOption
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.TuscanyOption {

	// Properties
	case UNRECOGNIZED : Int
	case off  
	case default  
	case on  
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_BagResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var legacyJson : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_GeoSnippet {

	// Properties
	var businessName : String
	var address : String
	var s2Token : String
	var url : String
	var popularity : Double
	var closed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Searchfoundation_AudioState {

	// Properties
	case UNRECOGNIZED : Int
	case unplayed  
	case buffering  
	case active  
	case paused  
	case failed  
	case finished  
 }

 struct PegasusAPI.Searchfoundation_AudioPlaybackCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _state : Searchfoundation_AudioState
	var _playCommands : Searchfoundation_AbstractCommand
	var _stopCommands : Searchfoundation_AbstractCommand
	var _detailText : Searchfoundation_RichText
	var _title : Searchfoundation_RichText
	var _subtitle : Searchfoundation_RichText
	var _thumbnail : Searchfoundation_Image

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_URL {

	// Properties
	var address : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Media_Endpoint {

	// Properties
	case UNRECOGNIZED : Int
	case show  
	case season  
	case episode  
 }

 enum PegasusAPI.Media_MediaKindType {

	// Properties
	case UNRECOGNIZED : Int
	case songID  
	case albumID  
	case artistID  
	case musicVideoID  
	case playlistID  
	case tvEpisodeID  
	case tvSeasonID  
	case movieID  
	case movieBundleID  
	case shortFilmID  
	case epubBookID  
	case bookID  
	case audioBookID  
	case courseID  
	case podcastID  
	case podcastEpisodeID  
	case iossoftwareID  
	case desktopAppID  
	case appCategoryID  
	case moreResultsID  
 }

 enum PegasusAPI.Media_MinimumSubscriptionStatusNeeded {

	// Properties
	case UNRECOGNIZED : Int
	case notSupported  
	case notInstalled  
	case installedNotSubscribed  
	case subscribed  
 }

 enum PegasusAPI.Media_OfferType {

	// Properties
	case UNRECOGNIZED : Int
	case freeOffer  
	case buyOffer  
	case rentOffer  
	case subscriptionOffer  
	case preOrder  
	case freeWithAccountOffer  
	case serviceOffer  
 }

 enum PegasusAPI.Media_ProviderId {

	// Properties
	case UNRECOGNIZED : Int
	case onDemandItunes  
	case onDemandShowAnyTime  
	case fuse  
 }

 enum PegasusAPI.Media_ShowtimeType {

	// Properties
	case UNRECOGNIZED : Int
	case normal  
	case threed  
	case imax  
	case imaxThreed  
 }

 enum PegasusAPI.Media_VodServiceState {

	// Properties
	case UNRECOGNIZED : Int
	case serviceOff  
	case serviceTestMode  
	case serviceOn  
 }

 struct PegasusAPI.Nlgpb_NlgDialog {

	// Properties
	var modelID : String
	var subIntent : String
	var written : String
	var spoken : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Span {

	// Properties
	var label : String
	var syn : String
	var sem : String
	var ontology : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var begin : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var end : Ûu

	var spanType : TypeEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.TypeEnum {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case entityname  
	case queryprefix  
	case querysuffix  
 }

 struct PegasusAPI.Kgqsapipb_IntentNode {

	// Properties
	var nodeType : NodeType
	var value : String
	var children : Kgqsapipb_IntentNode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _span : Kgqsapipb_Span
 }

 enum PegasusAPI.NodeType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case span  
	case string  
	case node  
 }

 struct PegasusAPI.Kgqsapipb_IntentMap {

	// Properties
	var routeMap : Kgqsapipb_IntentRoutes
	var version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_IntentRoutes {

	// Properties
	var routes : Kgqsapipb_IntentRoute
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_IntentRoute {

	// Properties
	var name : String
	var conditionExpr : String
	var executionDbqs : [String]
	var sameAsIntent : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _kgQueryNode : Kgqsapipb_KGQueryNode
 }

 struct PegasusAPI.Mapspb_LocalSearchBusiness {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Mapspb_Hours {

	// Properties
	var dayOfWeek : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var openTime : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var closeTime : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Mapspb_GeminiData {

	// Properties
	var localizedName : Mapspb_LocalizedName
	var localizedAddress : Mapspb_LocalizedAddress
	var prefPhone : String
	var timezone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stylingPoiType : …e

	var stylingCountryCode : String
	var provider : String
	var ratingScore : Double
	var ratingMaxScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ratingCount : …e

	var priceRating : Double
	var hoursPeriod : Geopb_HoursPeriod
	var brandURL : String
	var volatiles : Geopb_Volatiles
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Mapspb_LocalizedName {

	// Properties
	var languageCode : String
	var name : String
	var phoneticName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Mapspb_LocalizedAddress {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Mapspb_StructuredAddress {

	// Properties
	var country : String
	var countryCode : String
	var administrativeArea : String
	var administrativeAreaCode : String
	var subAdministrativeArea : String
	var locality : String
	var dependentLocality : [String]
	var thoroughfare : String
	var subThroughfare : String
	var postCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultData : #_

	var _multiResult : Bool
	var _placeCardURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uid : ßs

	var _name : String
	var _queryCompletion : String
	var _thoroughfare : String
	var _address : String
	var _ratingScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ratingCount : …e

	var _mapsDataType : String
	var _category : String
	var _subcategory : String
	var _openingHours : Mapspb_Hours
	var _price : String
	var _distance : String
	var _resultType : String
	var _telephone : [String]
	var _photos : [String]
	var _url : String
	var _location : Locationpb_Location
	var _geminiData : Mapspb_GeminiData

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _displayLocale : String
	var _formattedAddressLine : [String]
	var _structuredAddress : Mapspb_StructuredAddress
	var _phoneticLocale : String
	var _spokenAddress : String
	var _spokenStructuredAddress : Mapspb_StructuredAddress

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_MoviesSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Snippetpb_TheaterSnippet {

	// Properties
	var id : String
	var name : String
	var latitude : Double
	var longitude : Double
	var street : String
	var city : String
	var state : String
	var zipCode : String
	var country : String
	var fandangoID : String
	var timezone : String
	var url : String
	var screenings : Moviespb_Screening
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _canonicalID : String
	var _titles : [String]
	var _genres : [String]
	var _description_p : String
	var _actors : [String]
	var _directors : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _releaseDateSecs : Qe

	var _thumbnail : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runtimeInMinutes : Ûu

	var _availabilities : Moviespb_Availability
	var _isAppleOriginal : Bool
	var _studios : [String]
	var _contentRating : Moviespb_ContentRating
	var _trailers : Moviespb_Trailer
	var _rottenTomatoReviews : Moviespb_RottenTomatoReview
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tomatoMeter : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _freshReviewCount : Ûu

	var _certifiedFresh : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rottenReviewCount : Ûu

	var _rottenTomatoURL : String
	var _theaters : Moviespb_MovieTheater
	var _fandangoID : String
	var _fandangoName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numScreenings : Ûu

	var _coverArt : Moviespb_CoverArt
	var _isShowtimes : Bool
	var _wikiID : String
	var _imdbID : String

	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_UserDataShareOptIn {

	// Properties
	case UNRECOGNIZED : Int
	case unset  
	case true  
	case false  
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_DomainProperty {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var properties :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var type : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackResult {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CompletionSourceInfo {

	// Properties
	var source : String
	var score : Double
	var qid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ClientCompletion {

	// Properties
	var value : String
	var info : Apple_Parsec_Feedback_V2_CompletionSourceInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackQuery {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.DeviceType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case iphone  
	case ipad  
	case ipodtouch  
	case mac  
	case appletv  
	case applewatch  
	case homepod  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : String
	var _id : String
	var _canonicalID : String
	var _externalIds : [String]
	var _subdomain : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultTags :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryTags :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _preMergeQueryTags :  empty-list 
	var _prefix : String
	var _query : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abversion : Ûu

	var _searchID : String
	var _userGuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _inDomainOrder : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rankerOrder : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _postMergeOrder : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _serpGrouping : Ûu

	var _sectionID : String
	var _cardFbrs : Apple_Parsec_Feedback_V2_FeedbackResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cardFbrindexes :  empty-list 
	var _domainProperties : Apple_Parsec_Feedback_V2_DomainProperty
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultAge : Qe

	var _siriUtterance : String
	var _siriRelatedAppBundelID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isLocalCompletion : Ûu

	var _isLocalAndServerCompletionDifferent : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cardIds :  empty-list 
	var _entityType : String
	var _displayInformation : String
	var _uncorrectedQuery : String
	var _userDataShareOptIn : Apple_Parsec_Feedback_V2_UserDataShareOptIn
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abversionFailure : Ûu


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _userGuid : String
	var _endpointID : String
	var _prefix : String
	var _query : String
	var _clientCacheQuery : String
	var _bingQuery : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ts : Qe

	var _geo : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoID : Ûu

	var _client : String
	var _device : DeviceType
	var _locale : String
	var _storefront : String
	var _latLng : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tags :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dopplerTags :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _preMergeTags :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abversion : Ûu

	var _searchID : String
	var _releaseTag : String
	var _canonicalID : String
	var _topCompletionProbability : Float
	var _maxCompletionProbability : Float
	var _clientCompletions : Apple_Parsec_Feedback_V2_ClientCompletion
	var _otherFbqs : Apple_Parsec_Feedback_V2_FeedbackQuery
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _serpGrouping : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryDecile : Ûu

	var _geohashes : String
	var _resultIds : [String]
	var _isRewrittenQuery : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ipshard : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ipshardTruncated : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ipshardFull : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shardAbc2 : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shardAbch1 : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shardAbch2 : Ûu

	var _uncorrectedQuery : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _partnerTreatmentID : Ûu

	var _userDataShareOptIn : Apple_Parsec_Feedback_V2_UserDataShareOptIn
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _abversionFailure : Ûu

	var _trialTreatmentFailure : String

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_NewsSnippet {

	// Properties
	var url : String
	var title : String
	var body : String
	var bodySummary : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publishTsSec : Qe

	var description_p : String
	var siteLanguage : String
	var image : String
	var favicon : String
	var touchIcon : String
	var domainScores : [String : Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisherRankings : String
	var categories : [String : Double]
	var entities : Snippetpb_Entity
	var tokenizedTitle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _appleNews : Newspb_AppleNews
 }

 struct PegasusAPI.Snippetpb_NewsDomainFeature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _score : Float
	var _freshnessDistScore : Float
	var _siteQuality : Float
	var _resultQuality : Float
	var _topicality : Float
	var _engagement : Float
	var _qda : Float
	var _webNewsDocRatio : Float
	var _newsWebCepEngagementRatio : Float
	var _newsWebCepRenderRatio : Float
	var _newsWebCepRatio : Float
	var _newsAllCepEngagementRatio : Float
	var _recentDocRate : Float
	var _archimedesRawInput : String
	var _archimedesNewsTitleRawInput : String
	var _twtrTrendingRawInput : String
	var _cepRawInput : String
	var _twtrTrendingScore15M : Float
	var _twtrTrendingScore2H : Float
	var _archimedesHourlyTrendingScore : Float
	var _archimedesDailyTrendingScore : Float
	var _isEntityTriggered : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _triggerCount : Ûu

	var _newsAllCepEngagementRatioThreshold : Float
	var _tldCountryScore : Float
	var _cepNewsRenderCnt : Float
	var _cepNewsWikiFullEngagementRatio : Float
	var _explicitNewsIntent : Bool
	var _nlNewsIntent : Bool
	var _isPublisherQuery : Bool
	var _isNlNewsZkw : Bool
	var _isExplicitNewsZkw : Bool
	var _isSiriPublisherQuery : Bool

	// Swift methods
 }

 enum PegasusAPI.Kgqsapipb_AssertionType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case fact  
	case error  
 }

 struct PegasusAPI.Kgqsapipb_Assertion {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : Qe

	var comments : String
	var curatorID : String
	var assertionType : Kgqsapipb_AssertionType
	var closedPropIds : [String]
	var closeAllPropIds : Bool
	var closedLocales : [String]
	var closeAllLocales : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastReviewedTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var nextScheduledReviewTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_CurationReview {

	// Properties
	var entityID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_StockChartCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var chartData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
	var _thirdPartyContentURL : Searchfoundation_URL
 }

 enum PegasusAPI.Searchfoundation_ImageAlignment {

	// Properties
	case UNRECOGNIZED : Int
	case left  
	case top  
	case bottom  
	case right  
	case center  
 }

 enum PegasusAPI.Moviespb_ShowtimeType {

	// Properties
	case UNRECOGNIZED : Int
	case unspecifiedShowtimeType  
	case threed  
	case imax  
	case imaxThreed  
 }

 struct PegasusAPI.Moviespb_Availability {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OfferType {

	// Properties
	case UNRECOGNIZED : Int
	case offerUnknown  
	case free  
	case rent  
	case buy  
	case subscription  
	case preOrder  
	case freeWithAccount  
	case service  
	case comingSoon  
 }

 enum PegasusAPI.MediaType {

	// Properties
	case UNRECOGNIZED : Int
	case mediaUnknown  
	case shows  
	case episodes  
	case seasons  
	case movies  
 }

 enum PegasusAPI.PlatformState {

	// Properties
	case UNRECOGNIZED : Int
	case vodStateUnknown  
	case vodServiceOn  
	case vodServiceOff  
	case vodServiceTestMode  
 }

 enum PegasusAPI.SearchBrandState {

	// Properties
	case UNRECOGNIZED : Int
	case stateUnknown  
	case searchBrandLive  
	case searchBrandPendingAppleReview  
 }

 struct PegasusAPI.Moviespb_CommonSense {

	// Properties
	var age : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Moviespb_ContentRating {

	// Properties
	var contentRatingSystem : String
	var contentRatingValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Moviespb_Trailer {

	// Properties
	var format : FormatType
	var thumbnail : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.FormatType {

	// Properties
	case UNRECOGNIZED : Int
	case movie480  
	case movie720  
	case unknown  
 }

 struct PegasusAPI.Moviespb_RottenTomatoReview {

	// Properties
	var fresh : Bool
	var text : String
	var author : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Moviespb_MovieTheater {

	// Properties
	var name : String
	var address : String
	var city : String
	var state : String
	var url : String
	var showtimes : Moviespb_Showtime
	var latitude : Double
	var longitude : Double
	var distanceFromUser : Double
	var fandangoID : String
	var theaterID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Moviespb_Showtime {

	// Properties
	var type : Moviespb_ShowtimeType
	var timezone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _time : ÿ…

 }

 struct PegasusAPI.Moviespb_Screening {

	// Properties
	var id : String
	var movieID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var times :  empty-list 
	var has3D : Bool
	var hasIMax_p : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Moviespb_CoverArt {

	// Properties
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ûu

	var type : AspectRatio
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.AspectRatio {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case sixteenByNine  
	case square  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startDate : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endDate : Qe

	var _offerType : OfferType
	var _webPunchoutOpen : String
	var _webPunchoutPlay : String
	var _appPunchoutOpen : String
	var _appPunchoutPlay : String
	var _canonicalAdamID : String
	var _externalID : String
	var _mediaType : MediaType
	var _searchBrandID : String
	var _searchBrandState : SearchBrandState
	var _platformIosState : PlatformState
	var _platformTvosState : PlatformState
	var _platformWebState : PlatformState
	var _isMccormickProvider : Bool

	// Swift methods
 }

 enum PegasusAPI.Snippetpb_ForecastType {

	// Properties
	case UNRECOGNIZED : Int
	case unknownType  
	case hourly  
	case daily  
	case observation  
 }

 enum PegasusAPI.Snippetpb_WindDirection {

	// Properties
	case UNRECOGNIZED : Int
	case unknownDirection  
	case n  
	case nne  
	case ne  
	case ene  
	case e  
	case ese  
	case se  
	case sse  
	case s  
	case ssw  
	case sw  
	case wsw  
	case w  
	case wnw  
	case nw  
	case nnw  
	case calm  
	case var  
 }

 enum PegasusAPI.Snippetpb_InfoType {

	// Properties
	case UNRECOGNIZED : Int
	case defaultInfoType  
	case sunset  
	case sunrise  
	case windspeed  
	case pressure  
	case visibility  
	case humidity  
	case windchill  
	case uv  
 }

 struct PegasusAPI.Snippetpb_WeatherSnippet {

	// Properties
	var provider : String
	var url : String
	var forecasts : Snippetpb_Forecast
	var isLocal : Bool
	var isDay : Bool
	var infoType : Snippetpb_InfoType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _updatedTimestamp : ÿ…

	var _location : Snippetpb_Location
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queriedTimestamp : ÿ…

 }

 struct PegasusAPI.Snippetpb_Location {

	// Properties
	var city : String
	var state : String
	var country : String
	var latitude : Double
	var longitude : Double
	var timezone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Snippetpb_Forecast {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Snippetpb_Measurements {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxTemp : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var minTemp : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var temp : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var perceivedTemp : Ûu

	var precipitation : Double
	var pressure : Double
	var visibility : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var windSpeed : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : Snippetpb_ForecastType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startTime : ÿ…

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sunrise : ÿ…

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sunset : ÿ…

	var _condition : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conditionID : Ûu

	var _imperialMeasurements : Snippetpb_Measurements
	var _metricMeasurements : Snippetpb_Measurements
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _percentageRain : Ûu

	var _windDir : Snippetpb_WindDirection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _humidity : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uv : Ûu


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_TableHeaderRowCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _tableIdentifier : String
	var _alignmentSchema : Searchfoundation_TableAlignmentSchema
	var _data : Searchfoundation_FormattedText
	var _isSubHeader : Bool
	var _tabGroupIdentifier : String
	var _reducedRowHeight : Bool
	var _verticalAlign : Searchfoundation_RowAlignment
	var _alignRowsToHeader : Bool

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_CardType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case inline  
	case url  
	case entityIdentifier  
 }

 enum PegasusAPI.Searchfoundation_CardSource {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case siri  
 }

 enum PegasusAPI.Searchfoundation_NewCommandType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case showContactCard  
	case commandTypeShowSfcardCommand  
	case commandTypeShowAppStoreSheetCommand  
	case commandTypeOpenPunchoutCommand  
	case commandTypeOpenFileProviderItemCommand  
	case commandTypeOpenAppClipCommand  
	case commandTypeOpenWebClipCommand  
	case commandTypeRequestAppClipInstallCommand  
	case commandTypeRequestUserReportCommand  
	case commandTypeLaunchAppCommand  
	case commandTypeRunVoiceShortcutCommand  
	case commandTypeIndexedUserActivityCommand  
	case commandTypeOpenCoreSpotlightItemCommand  
	case commandTypePerformIntentCommand  
	case commandTypeSearchInAppCommand  
	case commandTypeUpdateSearchQueryCommand  
	case commandTypeSearchWebCommand  
	case commandTypeInvokeSiriCommand  
	case commandTypePerformContactQueryCommand  
	case commandTypeOpenCalculationCommand  
	case commandTypePlayVideoCommand  
 }

 struct PegasusAPI.Searchfoundation_Card {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_NamedProtobufMessage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protobufMessageData : #_

	var protobufMessageName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_CardSection {

	// Properties
	var type : Searchfoundation_CardSectionType
	var commands : Searchfoundation_AbstractCommand
	var parameterKeyPaths : [String]
	var cardSectionID : String
	var resultIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Searchfoundation_CardSectionValue
	var _nextCard : Searchfoundation_Card
	var _userReportRequest : Searchfoundation_UserReportRequest
	var _command : Searchfoundation_Command
	var _previewCommand : Searchfoundation_Command
 }

 struct PegasusAPI.Searchfoundation_CardSectionValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_HorizontalButtonCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var buttonCardSections : Searchfoundation_CardSection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_HorizontalScrollCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var cardSections : Searchfoundation_CardSection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numberOfRows : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_GridCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var cardSections : Searchfoundation_CardSection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_NewCommandValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_Command {

	// Properties
	var type : Searchfoundation_NewCommandType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Searchfoundation_NewCommandValue
 }

 struct PegasusAPI.Searchfoundation_ShowContactCardCommand {

	// Properties
	var contactIdentifier : String
	var isSuggestedContact : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_ShowAppStoreSheetCommand {

	// Properties
	var storeIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_OpenPunchoutCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _punchout : Searchfoundation_Punchout
 }

 struct PegasusAPI.Searchfoundation_OpenFileProviderItemCommand {

	// Properties
	var coreSpotlightIdentifier : String
	var fileProviderIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_OpenAppClipCommand {

	// Properties
	var clipIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_OpenWebClipCommand {

	// Properties
	var clipIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_RequestAppClipInstallCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _url : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_RequestUserReportCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _userReportRequest : Searchfoundation_UserReportRequest
 }

 struct PegasusAPI.Searchfoundation_LaunchAppCommand {

	// Properties
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_RunVoiceShortcutCommand {

	// Properties
	var voiceShortcutIdentifier : String
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_IndexedUserActivityCommand {

	// Properties
	var userActivityRequiredString : String
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_OpenCoreSpotlightItemCommand {

	// Properties
	var coreSpotlightIdentifier : String
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_PerformIntentCommand {

	// Properties
	var intentMessageName : String
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intentMessageData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_SearchInAppCommand {

	// Properties
	var searchString : String
	var applicationBundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_UpdateSearchQueryCommand {

	// Properties
	var searchString : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_SearchWebCommand {

	// Properties
	var searchString : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_InvokeSiriCommand {

	// Properties
	var utteranceText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_PerformContactQueryCommand {

	// Properties
	var contactIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_OpenCalculationCommand {

	// Properties
	var input : String
	var output : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_PlayVideoCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _url : Searchfoundation_URL
 }

 struct PegasusAPI.Searchfoundation_ShowSFCardCommand {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _card : Searchfoundation_Card
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _title : String
	var _type : Searchfoundation_CardType
	var _cardSections : Searchfoundation_CardSection
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentMessageData : #_

	var _intentMessageName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentResponseMessageData : #_

	var _intentResponseMessageName : String
	var _dismissalCommands : Searchfoundation_AbstractCommand
	var _cardID : String
	var _contextReferenceIdentifier : String
	var _urlValue : Searchfoundation_URL
	var _source : Searchfoundation_CardSource
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entityIdentifier : #_

	var _resultIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryID : ßs

	var _fbr : String
	var _flexibleSectionOrder : Bool
	var _entityProtobufMessages : Searchfoundation_NamedProtobufMessage

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _appLinkCardSection : Searchfoundation_AppLinkCardSection
	var _descriptionCardSection : Searchfoundation_DescriptionCardSection
	var _keyValueDataCardSection : Searchfoundation_KeyValueDataCardSection
	var _mapCardSection : Searchfoundation_MapCardSection
	var _mediaInfoCardSection : Searchfoundation_MediaInfoCardSection
	var _mediaPlayerCardSection : Searchfoundation_MediaPlayerCardSection
	var _nowPlayingCardSection : Searchfoundation_NowPlayingCardSection
	var _richTitleCardSection : Searchfoundation_RichTitleCardSection
	var _rowCardSection : Searchfoundation_RowCardSection
	var _scoreboardCardSection : Searchfoundation_ScoreboardCardSection
	var _socialMediaPostCardSection : Searchfoundation_SocialMediaPostCardSection
	var _stockChartCardSection : Searchfoundation_StockChartCardSection
	var _tableHeaderRowCardSection : Searchfoundation_TableHeaderRowCardSection
	var _tableRowCardSection : Searchfoundation_TableRowCardSection
	var _textColumnsCardSection : Searchfoundation_TextColumnsCardSection
	var _titleCardSection : Searchfoundation_TitleCardSection
	var _trackListCardSection : Searchfoundation_TrackListCardSection
	var _audioPlaybackCardSection : Searchfoundation_AudioPlaybackCardSection
	var _flightCardSection : Searchfoundation_FlightCardSection
	var _activityIndicatorCardSection : Searchfoundation_ActivityIndicatorCardSection
	var _webCardSection : Searchfoundation_WebCardSection
	var _messageCardSection : Searchfoundation_MessageCardSection
	var _detailedRowCardSection : Searchfoundation_DetailedRowCardSection
	var _imagesCardSection : Searchfoundation_ImagesCardSection
	var _suggestionCardSection : Searchfoundation_SuggestionCardSection
	var _selectableGridCardSection : Searchfoundation_SelectableGridCardSection
	var _sectionHeaderCardSection : Searchfoundation_SectionHeaderCardSection
	var _metaInfoCardSection : Searchfoundation_MetaInfoCardSection
	var _watchListCardSection : Searchfoundation_WatchListCardSection
	var _mapsDetailedRowCardSection : Searchfoundation_MapsDetailedRowCardSection
	var _buttonCardSection : Searchfoundation_ButtonCardSection
	var _horizontalButtonCardSection : Searchfoundation_HorizontalButtonCardSection
	var _verticalLayoutCardSection : Searchfoundation_VerticalLayoutCardSection
	var _productCardSection : Searchfoundation_ProductCardSection
	var _horizontalScrollCardSection : Searchfoundation_HorizontalScrollCardSection
	var _mediaRemoteControlCardSection : Searchfoundation_MediaRemoteControlCardSection
	var _mapPlaceCardSection : Searchfoundation_MapPlaceCardSection
	var _compactRowCardSection : Searchfoundation_CompactRowCardSection
	var _worldMapCardSection : Searchfoundation_WorldMapCardSection
	var _attributionFooterCardSection : Searchfoundation_AttributionFooterCardSection
	var _gridCardSection : Searchfoundation_GridCardSection

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _showContactCardCommand : Searchfoundation_ShowContactCardCommand
	var _showSfcardCommand : Searchfoundation_ShowSFCardCommand
	var _showAppStoreSheetCommand : Searchfoundation_ShowAppStoreSheetCommand
	var _openPunchoutCommand : Searchfoundation_OpenPunchoutCommand
	var _openFileProviderItemCommand : Searchfoundation_OpenFileProviderItemCommand
	var _openAppClipCommand : Searchfoundation_OpenAppClipCommand
	var _openWebClipCommand : Searchfoundation_OpenWebClipCommand
	var _requestAppClipInstallCommand : Searchfoundation_RequestAppClipInstallCommand
	var _requestUserReportCommand : Searchfoundation_RequestUserReportCommand
	var _launchAppCommand : Searchfoundation_LaunchAppCommand
	var _runVoiceShortcutCommand : Searchfoundation_RunVoiceShortcutCommand
	var _indexedUserActivityCommand : Searchfoundation_IndexedUserActivityCommand
	var _openCoreSpotlightItemCommand : Searchfoundation_OpenCoreSpotlightItemCommand
	var _performIntentCommand : Searchfoundation_PerformIntentCommand
	var _searchInAppCommand : Searchfoundation_SearchInAppCommand
	var _updateSearchQueryCommand : Searchfoundation_UpdateSearchQueryCommand
	var _searchWebCommand : Searchfoundation_SearchWebCommand
	var _invokeSiriCommand : Searchfoundation_InvokeSiriCommand
	var _performContactQueryCommand : Searchfoundation_PerformContactQueryCommand
	var _openCalculationCommand : Searchfoundation_OpenCalculationCommand
	var _playVideoCommand : Searchfoundation_PlayVideoCommand

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_GifSnippet {

	// Properties
	var url : String
	var title : String
	var description_p : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publishTimestamp : Qe

	var country : String
	var lang : String
	var thumbnailCacheURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_RugbyStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minutes : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _points : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tries : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conversions : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _penaltyGoals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dropGoals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _penaltyTries : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _yellowCards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redCards : ÿ‹

 }

 struct PegasusAPI.Media_AvailableFrom {

	// Properties
	var info : Media_ProviderInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_Book {

	// Properties
	var language : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pages : Ûu

	var publisher : String
	var seller : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sizeInBytes : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_ExternalId {

	// Properties
	var provider : String
	var ids : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_Media {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Media_MediaArtistInfo {

	// Properties
	var artistBio : [String]
	var bornOrFormed : String
	var origin : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numAlbums : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var numSongs : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_MediaItemInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Media_MediaShowingInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var showtimes :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var showtimesTomorrow :  empty-list 
	var theaters : Media_MovieTheater
	var fandangoid : String
	var fandangoName : String
	var punchoutCity : String
	var punchoutState : String
	var isRemoteSearch : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_MovieTheater {

	// Properties
	var name : String
	var address : String
	var city : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var showtimes :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var showtimesTomorrow :  empty-list 
	var showtimesWithType : Media_ShowtimeWithType
	var showtimesWithTypeTomorrow : Media_ShowtimeWithType
	var lat : Double
	var lon : Double
	var distanceFromUser : Double
	var fandangoID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_ProviderInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Media_Review {

	// Properties
	var author : String
	var fresh : Bool
	var text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _reviewDate : ÿ…

 }

 struct PegasusAPI.Media_Reviews {

	// Properties
	var url : String
	var numFreshReviews : Double
	var numRottenReviews : Double
	var reviews : Media_Review
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Media_ShowtimeWithType {

	// Properties
	var type : Media_ShowtimeType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _time : ÿ…

 }

 struct PegasusAPI.Media_Trailer {

	// Properties
	var imageURL : String
	var trailerURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _isApp : Bool
	var _isEbook : Bool
	var _isFunctional : Bool
	var _bundleID : String
	var _version : String
	var _store : String
	var _genre : String
	var _domainQuery : String
	var _websiteURL : String
	var _artistInfo : Media_MediaArtistInfo
	var _bookInfo : Media_Book
	var _itemInfo : Media_MediaItemInfo
	var _showingInfo : Media_MediaShowingInfo
	var _snippet : String

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _nameRaw : String
	var _availableFrom : Media_AvailableFrom
	var _artist : String
	var _actors : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _adamID : ßs

	var _punchout : String
	var _directors : [String]
	var _writers : [String]
	var _producers : [String]
	var _artwork : String
	var _parentName : String
	var _rating : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ratingCount : Qe

	var _mediaKind : Media_MediaKindType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _releaseDate : ÿ…

	var _description_p : String
	var _notes : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numTracks : Ûu

	var _childQueried : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _discNumber : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _trackNumber : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seasonNumber : Ûu

	var _studio : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _runtimeSec : …e

	var _trailers : Media_Trailer
	var _previewURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tomatoMeterRating : Ûu

	var _contentRatingsSystem : String
	var _contentRatingsName : String
	var _hasHd_p : Bool
	var _hasCc_p : Bool
	var _wikipediaURL : String
	var _externalIds : Media_ExternalId
	var _storefront : String
	var _reviews : Media_Reviews
	var _watchListIdentifier : String
	var _isMediaContainer : Bool
	var _certifiedFresh : Bool

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _provider : Media_ProviderId // +0x10 (0x9)
	var _imageURL : String // +0x20 (0x10)
	var _webPunchoutURL : String // +0x30 (0x10)
	var _webPlayURL : String // +0x40 (0x10)
	var _appPunchoutURL : String // +0x50 (0x10)
	var _appPlayURL : String // +0x60 (0x10)
	var _title : String // +0x70 (0x10)
	var _price : String // +0x80 (0x10)
	var _offerType : Media_OfferType // +0x90 (0x9)
	var _bundleID : String // +0xa0 (0x10)
	var _id : String // +0xb0 (0x10)
	var _identifiers : [String] // +0xc0 (0x8)
	var _installURL : String // +0xc8 (0x10)
	var _minimumSubscriptionStatusNeeded : Media_MinimumSubscriptionStatusNeeded // +0xd8 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rankSignal : Ûu
 // +0xe4 (0x4)
	var _iOsserviceState : Media_VodServiceState // +0xe8 (0x9)
	var _wEbserviceState : Media_VodServiceState // +0xf8 (0x9)

	// Swift methods
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_DeviceState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _companionName : String
	var _deviceName : String
	var _inputOrigin : String
	var _isAppleTv : Bool
	var _isCarDnd : Bool
	var _isCarplay : Bool
	var _isEyesFree : Bool
	var _isHomePod : Bool
	var _isLockedWithPasscode : Bool
	var _isMac : Bool
	var _isMultiUser : Bool
	var _isPad : Bool
	var _isPhone : Bool
	var _isTextToSpeechEnabled : Bool
	var _isVox : Bool
	var _isVoiceGenderFemale : Bool
	var _isVoiceGenderMale : Bool
	var _isVoiceGenderUnknown : Bool
	var _isVoiceTriggerEnabled : Bool
	var _isWatch : Bool
	var _siriLocale : String
	var _userAssignedDeviceName : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_RowAlignment {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case higher  
	case lower  
 }

 enum PegasusAPI.Searchfoundation_ColumnAlignment {

	// Properties
	case UNRECOGNIZED : Int
	case left  
	case center  
	case right  
 }

 struct PegasusAPI.Searchfoundation_TableAlignmentSchema {

	// Properties
	var tableColumnAlignment : Searchfoundation_TableColumnAlignment
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _metadata : Searchfoundation_StringDictionary
 }

 struct PegasusAPI.Searchfoundation_TableColumnAlignment {

	// Properties
	var columnAlignment : Searchfoundation_ColumnAlignment
	var dataAlignment : Searchfoundation_TextAlignment
	var isEqualWidth : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Electionspb_Status {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case scheduled  
	case runoff  
	case cancelled  
	case inProgress  
	case votesFinalized  
	case closeToCall  
 }

 enum PegasusAPI.Electionspb_DialogID {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case usElectionPollAppleNews  
	case whoWonPresident  
	case whoWonStatePresident  
	case whoWonStateSenate  
	case whoWonStateGovernor  
	case whoWonOfficeCandidate  
	case whoWonOffice  
	case whenIsGeneralElection  
	case whoWonDistrictHouse  
 }

 struct PegasusAPI.Electionspb_ElectionRace {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Electionspb_Candidate {

	// Properties
	var siribaseID : String
	var name : String
	var runningMate : String
	var politicalParty : String
	var isWinner : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var delegateCount : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var voteCount : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var delegateCountTotal : Ûu

	var statesWon : [String]
	var incumbent : Bool
	var imageURL : String
	var politicalPartyName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _voteInfo : Electionspb_VoteInfo
 }

 struct PegasusAPI.Electionspb_PoliticalParty {

	// Properties
	var siribaseID : String
	var name : String
	var candidateInfo : Electionspb_Candidate
	var hasRaceToday_p : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _congressInfo : Electionspb_CongressInfo
 }

 struct PegasusAPI.Electionspb_ElectionsResponse {

	// Properties
	var electionRaces : Electionspb_ElectionRace
	var politicalParties : Electionspb_PoliticalParty
	var snippetType : String
	var dialogID : Electionspb_DialogID
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Electionspb_CongressInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var current : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var won : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var netChangeSeats : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var holdOverSeats : Ûu

	var inControl : Bool
	var hadControl : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Electionspb_VoteInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var voteCount : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var delegateCount : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var electoralVote : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Electionspb_RunOffInfo {

	// Properties
	var raceDate : String
	var raceID : String
	var candidatesInfo : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Electionspb_PollTiming {

	// Properties
	var startDatetime : String
	var closeDatetime : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _siribaseID : String
	var _name : String
	var _politicalPartyID : String
	var _politicalParty : String
	var _jurisdiction : String
	var _raceDate : String
	var _raceType : [String]
	var _officeContested : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _delegateCount : Ûu

	var _precinctReported : Float
	var _candidateInfo : Electionspb_Candidate
	var _isSuperTuesday : Bool
	var _isFirstRace : Bool
	var _isToday : Bool
	var _isCancelled : Bool
	var _isInFuture : Bool
	var _lastUpdated : String
	var _winnerDeclared : Bool
	var _totalVoteInfo : Electionspb_VoteInfo
	var _neededVoteInfo : Electionspb_VoteInfo
	var _electionFlags : [String : Bool]
	var _status : Electionspb_Status
	var _runoffInfo : Electionspb_RunOffInfo
	var _pollTiming : Electionspb_PollTiming
	var _eevp : Float
	var _district : String
	var _imageURL : String
	var _newsURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numberOfSeats : Ûu


	// Swift methods
 }

 struct PegasusAPI.Snippetpb_AppsSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _adamID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _storefrontID : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _language : ßs

	var _name : String
	var _appStoreURL : String
	var _developerName : String
	var _description_p : String
	var _bundleID : String
	var _releaseDate : String
	var _popularity : Double
	var _kind : Amppb_MediaKindType
	var _userRating : Amppb_UserRating
	var _artwork : Amppb_Artwork
	var _deviceFamilies : [String]
	var _genreNames : [String]
	var _isAppStoreSearch : Bool

	// Swift methods
 }

 struct PegasusAPI.Kgqsapipb_Thing {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_Citation {

	// Properties
	var id : String
	var foreignID : String
	var value : String
	var type : String
	var score : Float
	var scoreType : String
	var entropy : Float
	var locale : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _title : String
	var _redirects : [String]
	var _disambiguations : [String]
	var _titleCleaned : String
	var _redirectsCleaned : [String]
	var _disambiguationsCleaned : [String]
	var _anchorText : [String]
	var _alternativeReadings : [String]
	var _shortAbstract : String
	var _birthDate : String
	var _deathDate : String
	var _birthPlaces : [String]
	var _deathPlaces : [String]
	var _spouses : [String]
	var _children : [String]
	var _parents : [String]
	var _height : String
	var _homepageurl : String
	var _wikipageurl : String
	var _thumbnailurl : String
	var _foundingDate : String
	var _governingBody : String
	var _length : String
	var _width : String
	var _nationalAnthem : String
	var _mottos : [String]
	var _population : String
	var _currency : String
	var _capitalcity : String
	var _latitude : String
	var _longitude : String
	var _nearestCity : String
	var _numberOfVisitors : String
	var _visitYear : String
	var _largestCity : String
	var _languages : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pageviews : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _index : Ûu

	var _isSexualTopic : Bool
	var _isDisputedTerritory : Bool
	var _englishLanguageLink : String
	var _dbpediaClasses : [String]
	var _wikipediaCategories : [String]
	var _titleQualifier : String
	var _locale : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _modtimeSecs : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _indexedTimestamp : Qe

	var _runtime : String
	var _releaseDate : String
	var _ingredient : [String]
	var _numberOfEmployees : String
	var _numberOfStudents : String
	var _date : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _revID : Qe

	var _thumbNail3XURL : String
	var _thumbNailNanoURLN27 : String
	var _thumbNailNanoURLN28 : String

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_AttributionFooterCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _leadingAttribution : Searchfoundation_RichText
	var _leadingAttributionPunchout : Searchfoundation_Punchout
	var _trailingAttribution : Searchfoundation_RichText
	var _trailingAttributionPunchout : Searchfoundation_Punchout

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_TableRowCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _richData : Searchfoundation_RichText
	var _tableIdentifier : String
	var _alignmentSchema : Searchfoundation_TableAlignmentSchema
	var _data : Searchfoundation_FormattedText
	var _isSubHeader : Bool
	var _tabGroupIdentifier : String
	var _reducedRowHeight : Bool
	var _verticalAlign : Searchfoundation_RowAlignment
	var _alignRowsToHeader : Bool

	// Swift methods
 }

 struct PegasusAPI.Sportspb_MotorsportStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rank : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _points : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _poles : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _starts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _averageStart : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _averageFinish : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _podiums : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _top5 : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _top10 : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _top15 : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _top20 : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _didNotFinish : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lapsCompleted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lapsLed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalLedPercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numberFastestLaps : ÿ‹


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ButtonCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _title : Searchfoundation_RichText
	var _thumbnail : Searchfoundation_Image

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ActionItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_MediaOffer {

	// Properties
	var sublabel : String
	var offerIdentifier : String
	var isEnabled : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _actionItem : Searchfoundation_ActionItem
	var _image : Searchfoundation_Image
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _label : String
	var _labelForLocalMedia : String
	var _isOverlay : Bool
	var _storeIdentifiers : [String]
	var _requiresLocalMedia : Bool
	var _localMediaIdentifier : String
	var _punchout : Searchfoundation_Punchout
	var _applicationBundleIdentifier : String
	var _contactIdentifier : String
	var _phoneNumber : String
	var _email : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsData : #_

	var _latitude : Searchfoundation_GraphicalFloat
	var _longitude : Searchfoundation_GraphicalFloat
	var _provider : String
	var _offerType : String
	var _type : String
	var _labelItunes : String
	var _isItunes : Bool
	var _icon : Searchfoundation_Image
	var _baseIcon : Searchfoundation_Image
	var _location : Searchfoundation_LatLng
	var _messageIdentifier : String
	var _messageURL : Searchfoundation_URL
	var _persistentID : String
	var _mediaEntityType : Searchfoundation_MediaEntityType
	var _universalLibraryID : String
	var _interactionContentType : String
	var _customDirectionsPunchout : Searchfoundation_Punchout
	var _shouldSearchDirectionsAlongCurrentRoute : Bool
	var _directionsMode : Searchfoundation_MapsDirectionsMode

	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_SearchSuggestionType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case proactive  
	case recents  
	case proactiveCategory  
	case contextual  
	case userTyped  
	case coreSpotlightContent  
	case thirdPartyProvider  
	case pastEngagement  
	case parsecCategory  
	case siri  
	case web  
	case application  
	case webAsTyped  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_ResultType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case local  
	case coreSpotlight  
	case nsuserActivity  
	case safariTophit  
	case calculator  
	case conversion  
	case dictionaryDefinition  
	case google  
	case yahoo  
	case bing  
	case duckduckgo  
	case yandex  
	case baidu  
	case proactiveSuggest  
	case localSuggest  
	case serverSuggest  
	case qihoo  
	case sogou  
	case siriAction  
	case siriSuggest  
	case installedClip  
	case uninstalledClip  
	case webClip  
	case ecosia  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_EngagementActionTarget {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case directions  
	case call  
	case message  
	case play  
	case view  
	case open  
	case intentModify  
	case subscribe  
	case unsubscribe  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_EngagementDestination {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case card  
	case punchout  
	case none  
	case insert  
	case findOnPage  
	case lastSearch  
	case mapsCard  
	case itunesSheet  
	case hostedHtmlpage  
	case queryBuilder  
	case siriOverlay  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_CardSectionType {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case appLink  
	case description_  
	case keyValueData  
	case map  
	case mediaInfo  
	case mediaPlayer  
	case nowPlaying  
	case richTitle  
	case row  
	case scoreboard  
	case socialMediaPost  
	case stockChart  
	case tableHeaderRow  
	case tableRow  
	case textColumns  
	case title  
	case trackList  
	case audioPlayback  
	case flight  
	case activityIndicator  
	case web  
	case message  
	case detailedRow  
	case images  
	case suggestion  
	case selectableGrid  
	case sectionHeader  
	case metaInfo  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_FBTH {

	// Properties
	case UNRECOGNIZED : Int
	case tophitNo  
	case tophitShouldBe  
	case tophitMustBe  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_TriggerVisibleResultsEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case resultListUpdated  
	case scroll  
	case showMore  
	case peek  
	case pop  
	case showLess  
	case cardSwipe  
	case click  
	case viewResized  
	case scrollUp  
	case scrollDown  
	case resumeSearch  
	case arrowUp  
	case arrowDown  
	case showMoreResults  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_SessionEndTriggerEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case noPreviousSession  
	case externalRequest  
	case sessionIdle  
	case maxSessionTimePassed  
	case guidChanged  
	case criticalMemory  
	case engagementReceived  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_ActionCardType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case normal  
	case maps  
	case itunesSheet  
	case hostedHtmlpage  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_TriggerSearchRequestEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case newCharacter  
	case imecommit  
	case backspace  
	case voiceSearch  
	case dictation  
	case copyAndPaste  
	case dragAndDrop  
	case suggestion  
	case prefetch  
	case partialSuggestion  
	case lookup  
	case crossButton  
	case showMore  
	case card  
	case imageLoad  
	case bag  
	case unlockDevice  
	case correction  
	case warm  
	case flight  
	case suggestQueries  
	case searchOnly  
	case returnKey  
	case suggestWithResults  
	case queryBuilder  
	case resumeSearch  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_EndpointType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsec  
	case google  
	case yahoo  
	case bing  
	case duckduckgo  
	case parsecSearch  
	case parsecImage  
	case yandex  
	case baidu  
	case parsecBag  
	case parsecCard  
	case parsecWarm  
	case parsecFlight  
	case qihoo  
	case sogou  
	case ecosia  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_IndexType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case spotlight  
	case calculator  
	case coreDuet  
	case safariBookmarks  
	case safariHistory  
	case lookupDictionary  
	case engagedCompletionCache  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_CardDisappearEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case back  
	case swipe  
	case pop  
	case done  
	case replaced  
	case backgroundTap  
	case close  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_ClearInputTriggerEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case crossButton  
	case cut  
	case backspace  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_SectionEngagementTriggerEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case searchInApp  
	case showMore  
	case showLess  
	case clear  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_VisibleSectionHeaderType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case searchInApp  
	case showMore  
	case normal  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_KnownFeedbackType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case safariAutoFill  
	case crowdsourcing  
	case spotlightResultFeatures  
	case safariAutoPlay  
	case trystero  
	case engagedCompletionFeatures  
	case proactiveEventTracker  
	case phiDes  
	case duetExpert  
	case userReport  
	case usage  
	case feedbackV2  
	case feedbackV2Pb  
	case proactiveEventTrackerAggregated  
	case handwashing  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackGrade {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case disastrous  
	case bad  
	case ok  
	case good  
	case excellent  
	case other  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_TriggerEngagementEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case enter  
	case tap  
	case click  
	case doubleClick  
	case peek  
	case pop  
	case reveal  
	case arrowUp  
	case arrowDown  
	case threeFingersTap  
	case swipe  
	case forcedAfterListUpdate  
	case shortcut  
	case pan  
	case swipeLeft  
	case swipeRight  
	case clear  
	case drag  
	case multipleSelection  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_ViewAppearEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case swipeDown  
	case todayView  
	case lockScreen  
	case breadcrumb  
	case keyboardShortcut  
	case mouseClickOnMenu  
	case appLaunch  
	case newTab  
	case tapToInput  
	case newWindow  
	case click  
	case tabSwitch  
	case orb  
	case contextualMenu  
	case lookupHintTap  
	case lookupTap  
	case swipeUp  
	case swipeLeft  
	case swipeRight  
	case startComposing  
	case findPopularItems  
	case pullDownHomeScreen  
	case notificationCenter  
	case partialPullDown  
	case unlockDevice  
	case didEnterForeground  
	case back  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_ViewDisappearEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case killed  
	case homeButton  
	case taskSwitcher  
	case cancel  
	case escape  
	case closeWindowByKeyboard  
	case closeWindowByMouse  
	case minimizeWindowByKeyboard  
	case minimizeWindowByMouse  
	case switchedToOtherApp  
	case quitApp  
	case lockButton  
	case clickNotificationBanner  
	case phoneCall  
	case lostFocus  
	case done  
	case swipeDown  
	case swipeUp  
	case swipeLeft  
	case swipeRight  
	case shareButton  
	case deviceIdle  
	case didEnterBackground  
	case goToSite  
	case didChangeTab  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_TimingDataDictKeys {

	// Properties
	case UNRECOGNIZED : Int
	case timingDataKeyUnknown  
	case timingDataConnectionReused  
	case timingDataConnectionPeerAddress  
	case timingDataConnectionInterfaceIdentifier  
	case timingDataConnectionUuid  
	case timingDataConnectionStartTimeCounts  
	case timingDataConnectionStopTimeCounts  
	case timingDataNstatRxpackets  
	case timingDataNstatRxbytes  
	case timingDataNstatTxpackets  
	case timingDataNstatTxbytes  
	case timingDataNstatRxduplicateBytes  
	case timingDataNstatRxoutOfOrderBytes  
	case timingDataNstatTxretransmit  
	case timingDataNstatConnectAttempts  
	case timingDataNstatConnectSuccesses  
	case timingDataNstatMinRtt  
	case timingDataNstatAvgRtt  
	case timingDataNstatVarRtt  
	case timingDataNstatCellRxpackets  
	case timingDataNstatCellTxpackets  
	case timingDataNstatWifiRxpackets  
	case timingDataNstatWifiTxpackets  
	case timingDataNstatWiredRxpackets  
	case timingDataNstatWiredTxpackets  
	case timingDataTcpfastOpenStats  
	case timingDataTcpinfoAtStart  
	case timingDataTcpinfoAtStop  
	case timingDataLocalAddressAndPort  
	case timingDataRemoteAddressAndPort  
	case timingDataNetworkProtocolName  
	case timingDataConnectionRace  
	case timingDataQuicwhitelistedDomain  
	case timingDataRequestHeaderSize  
	case timingDataResponseHeaderSize  
	case timingDataResponseBodyBytesReceived  
	case timingDataResponseBodyBytesDecoded  
	case timingDataFetchStart  
	case timingDataDomainLookupStart  
	case timingDataDomainLookupEnd  
	case timingDataConnectStart  
	case timingDataSecureConnectionStart  
	case timingDataConnectEnd  
	case timingDataRequestStart  
	case timingDataRequestEnd  
	case timingDataResponseStart  
	case timingDataResponseEnd  
	case timingDataRedirectStart  
	case timingDataRedirectEnd  
	case timingDataTuscanyStats  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_MKPlaceViewFeedbackType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case phoneNumber  
	case website  
	case postalAddress  
	case addContact  
	case share  
	case directionsToHere  
	case directionsFromHere  
	case dismissed  
	case reportAproblem  
	case editContact  
	case deleteContact  
	case flyoverTour  
	case allPhotos  
	case photo  
	case addPhoto  
	case allReviews  
	case review  
	case writeReview  
	case deal  
	case checkin  
	case moreInfo  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_SKStoreProductPageResult {

	// Properties
	case UNRECOGNIZED : Int
	case skproductPageResultCanceled  
	case skproductPageResultClosed  
	case skproductPageResultDownloadComplete  
	case skproductPageResultGotoStore  
	case skproductPageResultPurchased  
	case skproductPageResultRightBarButtonAction  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_LookupHintRelevancy {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case good  
	case bad  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_FlusherEndpoint {

	// Properties
	case UNRECOGNIZED : Int
	case crowdsourcing  
	case feedback  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case searchViewAppear  
	case searchViewDisappear  
	case ranking  
	case rankSections  
	case resultRanking  
	case result  
	case engagement  
	case visibleResults  
	case cardSection  
	case mapsCardSection  
	case storeCardSection  
	case startSearch  
	case endSearch  
	case startNetworkSearch  
	case endNetworkSearch  
	case startLocalSearch  
	case endLocalSearch  
	case error  
	case customUnknown  
	case suggestionEngagement  
	case cardViewDisappear  
	case visibleSuggestions  
	case resultsReceivedAfterTimeout  
	case lateSectionsAppended  
	case clearInput  
	case sectionEngagement  
	case visibleSectionHeader  
	case didGoToSite  
	case didGoToSearch  
	case sessionMissingResults  
	case sessionMissingSuggestions  
	case resultGrading  
	case lookupHintRelevancyGraded  
	case connectionInvalidated  
	case engagementCard  
	case sessionEnd  
	case cardViewAppear  
	case skipSearch  
	case cacheHit  
	case cbaengagement  
	case clientTiming  
	case customCrowdsourcing  
	case customSafariAutofill  
	case customSpotlightResultFeatures  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_LookupSelectionType {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case explicit  
	case hintTap  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_SkipSearchTriggerEvent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case lessThanMinimumQueryLength  
	case bagDisabled  
	case bagFetchFailed  
	case cacheHit  
	case emptyQueryInput  
	case queryInputWithUrischemePrefix  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_NullValue {

	// Properties
	case UNRECOGNIZED : Int
	case nullValue  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_CBAEngagementType {

	// Properties
	case UNRECOGNIZED : Int
	case noCbamatch  
	case effectiveTldplusOneMatch  
	case parameterStrippedMatch  
	case exactMatch  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_BundleIdentifier {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case parsecWebIndex  
	case application  
	case preferences  
	case mobileMail  
	case mobileSafari  
	case mobileSms  
	case stocks  
	case parsecStocks  
	case tapToRadar  
	case searchdZkwapps  
	case searchdSuggestions  
	case podcasts  
	case mobileAddressBook  
	case documentsApp  
	case coreSuggestions  
	case mobileDocumentsFileProvider  
	case music  
	case mobileCal  
	case otherSearchWeb  
	case otherSearchAppStore  
	case otherSearchMaps  
	case suggestionListUserTypedString  
	case suggestionListParsec  
	case otherTapToRadar  
	case spotlightUisearchThrough  
	case weather  
	case maps  
	case googleCompletion  
	case history  
	case safariCompletionListSearchEngineSuggestion  
	case googleSearch  
	case safariCompletionListUserTypedString  
	case appleHistory  
	case safariCompletionListFindOnPage  
	case topHit  
	case appleTopHit  
	case icloudTab  
	case safariCompletionListRecentSearch  
	case bookmark  
	case yahooCompletion  
	case appleBookmarks  
	case appleOther  
	case bingCompletion  
	case hashtagImagesQuerySuggestion  
	case safariCompletionListRestoredSearch  
	case ddgcompletion  
	case yahooSearch  
	case tweetie  
	case addressBox  
	case spotlightSuggestionListLocal  
	case ddgsearch  
	case bingSearch  
	case appleNews  
	case appleCoreSuggestions  
	case giphyForMessenger  
	case appleSettings  
	case youtube  
	case whatsApp  
	case appleApplications  
	case riffsyKeyboard  
	case spotlightSuggestionListContact  
	case yelp  
	case microsoftOfficeOutlook  
	case pinterest  
	case appleMail  
	case hashtagImagesCategory  
	case mobileNotes  
	case applePdfs  
	case appleDocuments  
	case googleChromeIos  
	case appleDeveloper  
	case googleMaps  
	case appleDirectories  
	case baiduCompletion  
	case baiduSearch  
	case appleReminders  
	case applePhotos  
	case appleDictionary  
	case siriCompletion  
	case googlePhotos  
	case appleIbooks  
	case linkedin  
	case appleNumbers  
	case appleMobileTimer  
	case pandora  
	case hashtagImagesRecent  
	case mlbatBat  
	case yahooAerogram  
	case dropbox  
	case appleLookupSearchThrough  
	case appleCalendar  
	case airBnb  
	case stubHub  
	case groupon  
	case appleCalculator  
	case twitch  
	case appleKeynote  
	case zillow  
	case appleVoiceMemos  
	case safariCompletionListQuickSearch  
	case hashtagImagesZkw  
	case safariSearchSuggestion  
	case zkwsuggestions  
	case otherSearchSiri  
	case safariSwitchToTab  
	case safariQuickWebsiteSearch  
	case spotlightSiriSuggestion  
	case appleContacts  
	case parsecAppStore  
	case parsecMaps  
	case parsecWiki  
	case parsecKg  
	case parsecNews  
	case parsecWeather  
	case spotlightSearchInApp  
	case spotlightWebSuggestionsUserTyped  
	case spotlightWebSuggestionsParsec  
	case spotlightWebRelatedSearch  
	case spotlightTopHits  
	case spotlightRelatedSearch  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_Client {

	// Properties
	case UNRECOGNIZED : Int
	case unknownClient  
	case safari  
	case spotlight  
	case images  
	case news  
 }

 enum PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackDeletionReason {

	// Properties
	case UNRECOGNIZED : Int
	case deletionReasonUnknown  
	case age  
	case size  
	case unknownVersion  
	case mismatchedVersion  
	case filesystem  
	case corruption  
	case json  
	case jetsamPrevention  
	case tooManyFiles  
	case diagnosticsAndUsageDisabled  
	case empty  
	case uploadSuccess  
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_TCPInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_TuscanyConnectionInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_NetworkTimingData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultSectionForFeedback {

	// Properties
	var results : Apple_Parsec_Feedback_V2_SearchResultForFeedback
	var identifier : String
	var rankingScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fallbackResultSection : #_

	var bundleID : OneOf_BundleID
	var isInitiallyHidden : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_BundleID {

	// Properties
	case bundleIdentifier : String
	case knownBundleIdentifier : Apple_Parsec_Feedback_V2_BundleIdentifier
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ActionItemForFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _punchout : Apple_Parsec_Feedback_V2_PunchoutForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SearchSuggestionForFeedback {

	// Properties
	var identifier : String
	var suggestion : String
	var query : String
	var score : Double
	var type : Apple_Parsec_Feedback_V2_SearchSuggestionType
	var fbr : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_PunchoutForFeedback {

	// Properties
	var name : String
	var label : String
	var urls : [String]
	var bundleID : OneOf_BundleID
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_BundleID {

	// Properties
	case bundleIdentifier : String
	case knownBundleIdentifier : Apple_Parsec_Feedback_V2_BundleIdentifier
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SearchResultForFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_ResultBundleIdentifier {

	// Properties
	case resultBundleID : String
	case knownResultBundleID : Apple_Parsec_Feedback_V2_BundleIdentifier
 }

 enum PegasusAPI.OneOf_SectionBundleID {

	// Properties
	case sectionBundleIdentifier : String
	case knownSectionBundleIdentifier : Apple_Parsec_Feedback_V2_BundleIdentifier
 }

 enum PegasusAPI.OneOf_ApplicationBundleID {

	// Properties
	case applicationBundleIdentifier : String
	case knownApplicationBundleIdentifier : Apple_Parsec_Feedback_V2_BundleIdentifier
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_Feedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SearchViewAppearFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var viewAppearEvent : Apple_Parsec_Feedback_V2_ViewAppearEvent
	var isOnLockScreen : Bool
	var isOverApp : Bool
	var readerTextAvailable : Bool
	var preexistingInput : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SearchViewDisappearFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var viewDisappearEvent : Apple_Parsec_Feedback_V2_ViewDisappearEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_RankingFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var blendingDuration : Double
	var sections : Apple_Parsec_Feedback_V2_SectionRankingFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SectionRankingFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var results : Apple_Parsec_Feedback_V2_ResultRankingFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var localSectionPosition : …e

	var personalizationScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _section : Apple_Parsec_Feedback_V2_ResultSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultRankingFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var hiddenResults : Apple_Parsec_Feedback_V2_SearchResultForFeedback
	var duplicateResults : Apple_Parsec_Feedback_V2_SearchResultForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var localResultPosition : …e

	var personalizationScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Apple_Parsec_Feedback_V2_SearchResultForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Apple_Parsec_Feedback_V2_SearchResultForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var actionEngaged : Bool
	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerEngagementEvent
	var destination : Apple_Parsec_Feedback_V2_EngagementDestination
	var actionTarget : Apple_Parsec_Feedback_V2_EngagementActionTarget
	var titleText : String
	var matchesUnengagedSuggestion : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Apple_Parsec_Feedback_V2_SearchResultForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_VisibleResultsFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var results : Apple_Parsec_Feedback_V2_SearchResultForFeedback
	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerVisibleResultsEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _goTakeoverResult : Apple_Parsec_Feedback_V2_SearchResultForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardSectionForFeedback {

	// Properties
	var cardSectionID : String
	var actionTarget : String
	var actionDestination : String
	var resultID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardForFeedback {

	// Properties
	var cardSections : Apple_Parsec_Feedback_V2_CardSectionForFeedback
	var fbr : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardSectionFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var cardSectionID : String
	var resultID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _cardSection : Apple_Parsec_Feedback_V2_CardSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardSectionEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerEngagementEvent
	var actionCardType : Apple_Parsec_Feedback_V2_ActionCardType
	var destinationWasParpunchout : Bool
	var parPunchoutActionTarget : String
	var cardSectionID : String
	var resultID : String
	var actionTarget : Apple_Parsec_Feedback_V2_EngagementActionTarget
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _destination : Apple_Parsec_Feedback_V2_PunchoutForFeedback
	var _cardSection : Apple_Parsec_Feedback_V2_CardSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_MapsCardSectionEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerEngagementEvent
	var actionCardType : Apple_Parsec_Feedback_V2_ActionCardType
	var feedbackType : Apple_Parsec_Feedback_V2_MKPlaceViewFeedbackType
	var cardSectionID : String
	var resultID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _destination : Apple_Parsec_Feedback_V2_PunchoutForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_StoreCardSectionEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerEngagementEvent
	var actionCardType : Apple_Parsec_Feedback_V2_ActionCardType
	var productPageResult : Apple_Parsec_Feedback_V2_SKStoreProductPageResult
	var cardSectionID : String
	var resultID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _destination : Apple_Parsec_Feedback_V2_PunchoutForFeedback
	var _cardSection : Apple_Parsec_Feedback_V2_CardSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_StartSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var uuid : String
	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerSearchRequestEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_EndSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var uuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_StartNetworkSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var uuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : ßs

	var url : String
	var headers : [String : String]
	var endpoint : Apple_Parsec_Feedback_V2_EndpointType
	var trigger : OneOf_Trigger
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tuscanyStatus : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var bodyData : #_

	var experimentID : String
	var treatmentID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Trigger {

	// Properties
	case triggerEvent : Apple_Parsec_Feedback_V2_TriggerSearchRequestEvent
	case lookupSelectionType : Apple_Parsec_Feedback_V2_LookupSelectionType
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_EndNetworkSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var responseSize : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var statusCode : Ûu

	var uuid : String
	var parsecStatus : String
	var fbq : String
	var duration : Double
	var partialClientIp : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _timingData : Apple_Parsec_Feedback_V2_NetworkTimingData
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_StartLocalSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var uuid : String
	var triggerEvent : Apple_Parsec_Feedback_V2_TriggerSearchRequestEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : ßs

	var indexType : Apple_Parsec_Feedback_V2_IndexType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_EndLocalSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var uuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_Error {

	// Properties
	var domain : String
	var reason : String
	var code : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ErrorFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _error : Apple_Parsec_Feedback_V2_Error
	var _underlyingError : Apple_Parsec_Feedback_V2_Error
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CustomFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var jsonFeedback : #_

	var feedbackType : Apple_Parsec_Feedback_V2_KnownFeedbackType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SuggestionEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _suggestion : Apple_Parsec_Feedback_V2_SearchSuggestionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardViewDisappearFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var cardDisappearEvent : Apple_Parsec_Feedback_V2_CardDisappearEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _card : Apple_Parsec_Feedback_V2_CardForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CardViewAppearFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var level : …e

	var fbr : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _card : Apple_Parsec_Feedback_V2_CardForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_VisibleSuggestionsFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var suggestions : Apple_Parsec_Feedback_V2_SearchSuggestionForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultsReceivedAfterTimeoutFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var results : Apple_Parsec_Feedback_V2_SearchResultForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_LateSectionsAppendedFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var sections : Apple_Parsec_Feedback_V2_ResultSectionForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ClearInputFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var triggerEvent : Apple_Parsec_Feedback_V2_ClearInputTriggerEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SectionEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var triggerEvent : Apple_Parsec_Feedback_V2_SectionEngagementTriggerEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _section : Apple_Parsec_Feedback_V2_ResultSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_VisibleSectionHeaderFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var headerType : Apple_Parsec_Feedback_V2_VisibleSectionHeaderType
	var sectionID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_DidGoToSiteFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_DidGoToSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var endpoint : Apple_Parsec_Feedback_V2_EndpointType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SessionMissingResultsFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var results : Apple_Parsec_Feedback_V2_SearchResultForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SessionMissingSuggestionsFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var suggestions : Apple_Parsec_Feedback_V2_SearchSuggestionForFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ResultGradingFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var grade : Apple_Parsec_Feedback_V2_FeedbackGrade
	var textFeedback : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Apple_Parsec_Feedback_V2_SearchResultForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_Range {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var location : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var length : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_LookupHintRelevancyFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var domain : String
	var discarded : Bool
	var grade : Apple_Parsec_Feedback_V2_LookupHintRelevancy
	var context : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _hintRange : Apple_Parsec_Feedback_V2_Range
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ConnectionInvalidatedFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SessionEndFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var reason : Apple_Parsec_Feedback_V2_SessionEndTriggerEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ClientTimingFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var eventName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var nanosecondInterval : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_FeedbackPayload {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_ContainedFeedback {

	// Properties
	case feedback : Apple_Parsec_Feedback_V2_Feedback
	case searchViewAppearFeedback : Apple_Parsec_Feedback_V2_SearchViewAppearFeedback
	case searchViewDisappearFeedback : Apple_Parsec_Feedback_V2_SearchViewDisappearFeedback
	case rankingFeedback : Apple_Parsec_Feedback_V2_RankingFeedback
	case sectionRankingFeedback : Apple_Parsec_Feedback_V2_SectionRankingFeedback
	case resultRankingFeedback : Apple_Parsec_Feedback_V2_ResultRankingFeedback
	case resultFeedback : Apple_Parsec_Feedback_V2_ResultFeedback
	case resultEngagementFeedback : Apple_Parsec_Feedback_V2_ResultEngagementFeedback
	case visibleResultsFeedback : Apple_Parsec_Feedback_V2_VisibleResultsFeedback
	case cardSectionFeedback : Apple_Parsec_Feedback_V2_CardSectionFeedback
	case mapsCardSectionEngagementFeedback : Apple_Parsec_Feedback_V2_MapsCardSectionEngagementFeedback
	case storeCardSectionEngagementFeedback : Apple_Parsec_Feedback_V2_StoreCardSectionEngagementFeedback
	case startSearchFeedback : Apple_Parsec_Feedback_V2_StartSearchFeedback
	case endSearchFeedback : Apple_Parsec_Feedback_V2_EndSearchFeedback
	case startNetworkSearchFeedback : Apple_Parsec_Feedback_V2_StartNetworkSearchFeedback
	case endNetworkSearchFeedback : Apple_Parsec_Feedback_V2_EndNetworkSearchFeedback
	case startLocalSearchFeedback : Apple_Parsec_Feedback_V2_StartLocalSearchFeedback
	case endLocalSearchFeedback : Apple_Parsec_Feedback_V2_EndLocalSearchFeedback
	case errorFeedback : Apple_Parsec_Feedback_V2_ErrorFeedback
	case customFeedback : Apple_Parsec_Feedback_V2_CustomFeedback
	case suggestionEngagementFeedback : Apple_Parsec_Feedback_V2_SuggestionEngagementFeedback
	case cardViewDisappearFeedback : Apple_Parsec_Feedback_V2_CardViewDisappearFeedback
	case visibleSuggestionsFeedback : Apple_Parsec_Feedback_V2_VisibleSuggestionsFeedback
	case resultsReceivedAfterTimeoutFeedback : Apple_Parsec_Feedback_V2_ResultsReceivedAfterTimeoutFeedback
	case lateSectionsAppendedFeedback : Apple_Parsec_Feedback_V2_LateSectionsAppendedFeedback
	case clearInputFeedback_p : Apple_Parsec_Feedback_V2_ClearInputFeedback
	case sectionEngagementFeedback : Apple_Parsec_Feedback_V2_SectionEngagementFeedback
	case visibleSectionHeaderFeedback : Apple_Parsec_Feedback_V2_VisibleSectionHeaderFeedback
	case didGoToSiteFeedback : Apple_Parsec_Feedback_V2_DidGoToSiteFeedback
	case didGoToSearchFeedback : Apple_Parsec_Feedback_V2_DidGoToSearchFeedback
	case sessionMissingResultsFeedback : Apple_Parsec_Feedback_V2_SessionMissingResultsFeedback
	case sessionMissingSuggestionsFeedback : Apple_Parsec_Feedback_V2_SessionMissingSuggestionsFeedback
	case resultGradingFeedback : Apple_Parsec_Feedback_V2_ResultGradingFeedback
	case lookupHintRelevancyFeedback : Apple_Parsec_Feedback_V2_LookupHintRelevancyFeedback
	case connectionInvalidatedFeedback : Apple_Parsec_Feedback_V2_ConnectionInvalidatedFeedback
	case cardSectionEngagementFeedback : Apple_Parsec_Feedback_V2_CardSectionEngagementFeedback
	case sessionEndFeedback : Apple_Parsec_Feedback_V2_SessionEndFeedback
	case cardViewAppearFeedback : Apple_Parsec_Feedback_V2_CardViewAppearFeedback
	case skipSearchFeedback : Apple_Parsec_Feedback_V2_SkipSearchFeedback
	case cacheHitFeedback : Apple_Parsec_Feedback_V2_CacheHitFeedback
	case cbaEngagementFeedback : Apple_Parsec_Feedback_V2_CBAEngagementFeedback
	case clientTimingFeedback : Apple_Parsec_Feedback_V2_ClientTimingFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SkipSearchFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var triggerEvent : Apple_Parsec_Feedback_V2_SkipSearchTriggerEvent
	var experimentID : String
	var treatmentID : String
	var experimentNamespaceID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CacheHitFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

	var input : String
	var triggerEvent : Apple_Parsec_Feedback_V2_SkipSearchTriggerEvent
	var uuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ClientSession {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_Struct {

	// Properties
	var stringKeyFields : Apple_Parsec_Feedback_V2_Value
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intKeyFields :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_Value {

	// Properties
	var kind : OneOf_Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Kind {

	// Properties
	case nullValue : Apple_Parsec_Feedback_V2_NullValue
	case numberValue : Double
	case stringValue : String
	case boolValue : Bool
	case structValue : Apple_Parsec_Feedback_V2_Struct
	case listValue : Apple_Parsec_Feedback_V2_ListValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	case bytesValue : #_

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ListValue {

	// Properties
	var values : Apple_Parsec_Feedback_V2_Value
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_CBAEngagementFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var queryID : ßs

	var cbaType : Apple_Parsec_Feedback_V2_CBAEngagementType
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_UserReportFeedback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var uuidBytes : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _result : Apple_Parsec_Feedback_V2_SearchResultForFeedback
	var _userSelection : Apple_Parsec_Feedback_V2_PunchoutForFeedback
	var _cardSection : Apple_Parsec_Feedback_V2_CardSectionForFeedback
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_DeviceContext {

	// Properties
	var country : String
	var deviceModel : String
	var locale : String
	var osVersion : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_UsageSinceLookback {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collectionStartTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var collectionEndTimestamp : Qe

	var client : Apple_Parsec_Feedback_V2_Client
WARNING: couldn't find address 0x0 (0x0) in binary!
	var totalUsagesInCollectionPeriod : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var configuredLookbackTimeInDays : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var activeDaysInCollectionPeriod : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var totalEngagements : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _context : Apple_Parsec_Feedback_V2_DeviceContext
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SafariUsagePropensity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_SpotlightUsagePropensity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_ImagesUsagePropensity {

	// Properties
	var zkw : Float
	var recentResult : Float
	var other : Float
	var querySuggestion : Float
	var image : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var totalEngagements : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_NewsUsagePropensity {

	// Properties
	var other : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var totalEngagements : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_EngagementTriggerRatio {

	// Properties
	var go : Float
	var tap : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var totalEngagements : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_EngagementShareRatio {

	// Properties
	var shareOfEngagements : Float
	var shareOfInternetEngagements : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Apple_Parsec_Feedback_V2_UsageEnvelope {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_Kind {

	// Properties
	case usageSinceLookback : Apple_Parsec_Feedback_V2_UsageSinceLookback
	case safariUsagePropensity : Apple_Parsec_Feedback_V2_SafariUsagePropensity
	case spotlightUsagePropensity : Apple_Parsec_Feedback_V2_SpotlightUsagePropensity
	case imagesUsagePropensity : Apple_Parsec_Feedback_V2_ImagesUsagePropensity
	case newsUsagePropensity : Apple_Parsec_Feedback_V2_NewsUsagePropensity
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _avgRtt : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cellRxpackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cellTxpackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _connectAttempts : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _connectSuccesses : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minRtt : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rxBytes : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rxDuplicateBytes : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rxOutOfOrderBytes : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _rxPackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _txBytes : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _txPackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _txRetransmitPackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _varRtt : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wifiRxpackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wifiTxpackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wiredRxpackets : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wiredTxpackets : ßs

	var _statsType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _txRetransmitBytes : ßs


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pathType : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fallbackReason : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fallbackReasonCategory : Ûu

	var _fallbackDelay : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _edgeType : Ûu

	var _edgeAddress : String
	var _isMultipath : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _multipathSubflowCount : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _multipathConnectedSubflowCount : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _multipathPrimarySubflowInterfaceIndex : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _multipathSubflowSwitchCounts : String
	var _firstTxByteTimeStamp : Double
	var _firstTxByteDelay : Double
	var _connectionDelay : Double
	var _tfosucceeded : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _iptype : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interfaceType : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minimumRtt : …e

	var _timeIntervalSinceLastUsage : Double
	var _timeToFirstByte : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tunnelConnectionError : Ûu

	var _isTfoprobeSucceeded : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _initialBytesLeftOver : …e

	var _tcpInfo : Apple_Parsec_Feedback_V2_TCPInfo

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _interfaceIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _peerAddress : #_

	var _connectionRace : Bool
	var _connectionReused : Bool
	var _startTimeCounts : Apple_Parsec_Feedback_V2_TCPInfo
	var _stopTimeCounts : Apple_Parsec_Feedback_V2_TCPInfo
	var _connectionUuid : String
	var _networkProtocolName : String
	var _quicwhitelistedDomain : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redirectCount : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redirectCountW3C : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _requestHeaderSize : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _responseBodyBytesDecoded : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _responseBodyBytesReceived : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _responseHeaderSize : …e

	var _tfosuccess : Bool
	var _timingDataInit : Double
	var _tuscany : Apple_Parsec_Feedback_V2_TuscanyConnectionInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _connectStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _connectEnd : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _domainLookupStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _domainLookupEnd : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fetchStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redirectStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redirectEnd : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _requestStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _requestEnd : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _responseStart : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _responseEnd : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _secureConnectStart : …e


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _topHit : Apple_Parsec_Feedback_V2_FBTH
	var _action : Apple_Parsec_Feedback_V2_ActionItemForFeedback
	var _punchout : Apple_Parsec_Feedback_V2_PunchoutForFeedback
	var _type : Apple_Parsec_Feedback_V2_ResultType
	var _localFeatures : Apple_Parsec_Feedback_V2_Struct
	var _resultType : String
	var _rankingScore : Double
	var _isStaticCorrection : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryID : ßs

	var _intendedQuery : String
	var _correctedQuery : String
	var _completedQuery : String
	var _isLocalApplicationResult : Bool
	var _publiclyIndexable : Bool
	var _fbr : String
	var _userInput : String
	var _isFuzzyMatch : Bool
	var _doNotFold : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _blockID : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hashedIdentifier : ßs

	var _resultBundleIdentifier : OneOf_ResultBundleIdentifier
	var _sectionBundleID : OneOf_SectionBundleID
	var _applicationBundleID : OneOf_ApplicationBundleID
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entityData : #_

	var _shouldUseCompactDisplay : Bool
	var _noGoTakeover : Bool
	var _preferTopPlatter : Bool
	var _wasCompact : Bool
	var _didTakeoverGo : Bool
	var _usesCompactDisplay : Bool

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _containedFeedback : OneOf_ContainedFeedback
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queryID : ßs


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _agent : String
	var _userGuidString : String
	var _resourceVersions : [String : String]
	var _sessionStart : Double
	var _previousSessionEndReason : Apple_Parsec_Feedback_V2_SessionEndTriggerEvent
	var _removeTimestamps : Bool
	var _parsecDeveloperID : String
	var _duEnabled : Bool
	var _countryCode : String
	var _locale : String
	var _usageSinceLookback : Apple_Parsec_Feedback_V2_UsageSinceLookback
	var _cohortsFeedback : Apple_Parsec_Feedback_V2_UsageEnvelope
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _jsonFeedback : #_

	var _feedback : Apple_Parsec_Feedback_V2_FeedbackPayload

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _localGoto : Float
	var _localTap : Float
	var _parsecGoto : Float
	var _parsecTap : Float
	var _thirdPartyGoto : Float
	var _thirdPartyTap : Float
	var _thirdPartyCompletionOrRecentSearch : Float
	var _goToSite : Float
	var _other : Float
	var _parsecWeb : Float
	var _parsecAppStore : Float
	var _parsecMaps : Float
	var _parsecWiki : Float
	var _parsecNews : Float
	var _parsecStocks : Float
	var _parsecWeather : Float
	var _parsecOther : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalEngagements : Ûu

	var _topHitTriggerRatio : Apple_Parsec_Feedback_V2_EngagementTriggerRatio
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalTopHitEngagements : Ûu

	var _engagementShareRatio : Apple_Parsec_Feedback_V2_EngagementShareRatio

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _appLaunch : Float
	var _onDeviceAddressBookData : Float
	var _onDeviceOtherPersonalData : Float
	var _punchout : Float
	var _thirdPartyInAppContent : Float
	var _parsec : Float
	var _querySuggestion : Float
	var _other : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalEngagements : Ûu

	var _siriSuggestions : Float
	var _parsecWeb : Float
	var _parsecAppStore : Float
	var _parsecMaps : Float
	var _parsecWiki : Float
	var _parsecNews : Float
	var _parsecStocks : Float
	var _parsecWeather : Float
	var _parsecOther : Float
	var _webSuggestions : Float
	var _topHitTriggerRatio : Apple_Parsec_Feedback_V2_EngagementTriggerRatio
	var _querySuggestionTriggerRatio : Apple_Parsec_Feedback_V2_EngagementTriggerRatio
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalTopHitEngagements : Ûu

	var _engagementShareRatio : Apple_Parsec_Feedback_V2_EngagementShareRatio

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _kind : OneOf_Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _collectionStartTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _collectionEndTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredLookbackTimeInDays : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalSessions : Ûu

	var _context : Apple_Parsec_Feedback_V2_DeviceContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uuidBytes : #_


	// Swift methods
 }

 struct PegasusAPI.Snippetpb_StocksSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _symbol : String
	var _exchange : String
	var _price : String
	var _change : String
	var _percentChange : String
	var _currency : String
	var _open : String
	var _high : String
	var _low : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _volume : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _marketCap : Qe

	var _peRatio : String
	var _dividendYield : String
	var _fiftytwoWeekRange : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _avgDailyVolume : Qe

	var _eps : String
	var _status : String
	var _dataTimestamp : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fetchTimestamp : Qe


	// Swift methods
 }

 struct PegasusAPI.Sportspb_HockeyStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assistsPowerPlay : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assistsShortHanded : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _assistsTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _blocks : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsGameWinning : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsOvertime : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsPowerPlay : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsShortHanded : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _penaltyMinutes : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _plusMinus : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pointsPowerPlay : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pointsShortHanded : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pointsTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shootoutAttempts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shootoutGoals : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _skaterStatsShotsOnGoal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _overtimeLosses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _emptyNetAgainst : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsAgainstTotal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _goalsAgainstAverage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _savePercentage : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shootoutAttemptsAgainst : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shootoutGoalsAgainst : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shotsAgainst : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shutouts : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesPlayed : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesStarted : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hits : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saves : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _losses : ÿ‹


	// Swift methods
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_KGView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case news  
	case city  
	case celebrity  
	case company  
	case movie  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_ElectionView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_WebAnswerView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_DictionaryView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_FoodNutritionView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_MapsView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_SportsView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_NewsView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_StocksView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 enum PegasusAPI.Apple_Parsec_Siri_V2alpha_WeatherView {

	// Properties
	case UNRECOGNIZED : Int
	case default  
 }

 struct PegasusAPI.Apple_Parsec_Siri_V2alpha_LayoutView {

	// Properties
	var layoutType : OneOf_LayoutType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_LayoutType {

	// Properties
	case kg : Apple_Parsec_Siri_V2alpha_KGView
	case election : Apple_Parsec_Siri_V2alpha_ElectionView
	case dictionary : Apple_Parsec_Siri_V2alpha_DictionaryView
	case webAnswer : Apple_Parsec_Siri_V2alpha_WebAnswerView
	case foodNutrition : Apple_Parsec_Siri_V2alpha_FoodNutritionView
	case sports : Apple_Parsec_Siri_V2alpha_SportsView
	case maps : Apple_Parsec_Siri_V2alpha_MapsView
	case news : Apple_Parsec_Siri_V2alpha_NewsView
	case stocks : Apple_Parsec_Siri_V2alpha_StocksView
	case weather : Apple_Parsec_Siri_V2alpha_WeatherView
 }

 struct PegasusAPI.Searchfoundation_WebCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var htmlString : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Sportspb_SportsTeam {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_Team {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_TeamLocalizations {

	// Properties
	var locale : [String]
	var nickName : String
	var displayName : String
	var labels : [String]
	var location : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _abbr : String
	var _divisionAbbr : String
	var _coachName : String
	var _nickName : String
	var _location : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lineScoreTotals : String
	var _lineScores : Sportspb_LineScore
	var _logo : String
	var _darkLogo : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _wins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _losses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _overTimeLosses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ties : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _score : {

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _aggregateScore : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shootoutScore : ÿ‹

	var _atHome : Bool
	var _league : String
	var _localizedLeague : String
	var _sport : Sportspb_SportName
	var _id : String
	var _url : String
	var _webLink : String
	var _appLink : String
	var _localizations : Sportspb_TeamLocalizations
	var _logoCdnURL : String
	var _darkLogoCdnURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seriesWins : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seriesLosses : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seriesTies : ÿ‹

	var _isSeriesWinner : Bool

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _localizations : Sportspb_TeamLocalizations
	var _id : String
	var _nickName : String
	var _displayName : String
	var _abbreviation : String
	var _labels : [String]
	var _coachName : String
	var _location : String
	var _venue : String
	var _state : String
	var _country : String
	var _city : String
	var _collegeFullName : String
	var _collegeCommonName : String
	var _collegeSubdivisionName : String
	var _divisionName : String
	var _divisionAbbreviation : String
	var _divisionID : String
	var _conferenceName : String
	var _conferenceID : String
	var _conferenceAbbreviation : String
	var _sports : String
	var _league : String
	var _zeusURL : String
	var _darkZeusURL : String
	var _externalIds : [String]
	var _logo : [String]
	var _liveScoresURL : String
	var _punchOutURL : [String]
	var _locale : [String]
	var _webLink : [String]
	var _appLink : [String]
	var _seasonName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _season : Ûu


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ScoreboardCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_SportsTeam {

	// Properties
	var record : String
	var score : String
	var accessibilityDescription : String
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _logo : Searchfoundation_Image
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _title : String
	var _subtitle : String
	var _team1 : Searchfoundation_SportsTeam
	var _team2 : Searchfoundation_SportsTeam
	var _accessibilityDescription : String
	var _eventStatus : String

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_MapsDetailedRowCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mapsData : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Nnerapipb_Request {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Nnerapipb_KGIntent {

	// Properties
	var intent : String
	var prob : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_EntityTypeFine {

	// Properties
	var type : String
	var prob : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_TokenLabel {

	// Properties
	var token : String
	var pos : String
	var depLabel : String
	var ontoNotesType : String
	var entityTypeCoarse : String
	var siriParse : String
	var argMask : String
	var entityTypeFine : Nnerapipb_EntityTypeFine
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_IntentExecution {

	// Properties
	var intent : String
	var prob : Float
	var execution : [String]
	var arg1 : Nnerapipb_NNERCandidate
	var arg2 : Nnerapipb_NNERCandidate
	var args : Nnerapipb_NNERCandidate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_NNERCandidate {

	// Properties
	var prob : Float
	var spanText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var startToken : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endToken : Ûu

	var entityID : String
	var entityName : String
	var argName : String
	var probLr : Float
	var lrFeatures : Nnerapipb_NNERFeature
	var rerankerFeatures : Nnerapipb_NNERFeature
	var types : [String]
	var topics : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_StaticSpan {

	// Properties
	var spanText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var startToken : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endToken : Ûu

	var id : String
	var spanLabel : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_NNERSpan {

	// Properties
	var spanText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endChar : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var startToken : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endToken : Ûu

	var slotID : String
	var slotTypes : [String]
	var qidConstraint : String
	var match : String
	var matchType : String
	var matchPattern : String
	var matchAnswerExpression : String
	var matchCollective : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_NNERFeature {

	// Properties
	var name : String
	var value : Double
	var weight : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Nnerapipb_NNERResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Nnerapipb_NNERCacheEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expiry : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var searchTime : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _value : Nnerapipb_NNERResponse
 }

 struct PegasusAPI.Nnerapipb_NNERParams {

	// Properties
	var nnerProbThreshold : Double
	var mmtlIntentProbThreshold : Double
	var mmtlArgProbThreshold : Double
	var mmtlMinProbForMoreLabels : Double
	var mthCacheDisabled : Bool
	var aliasCurationDisabled : Bool
	var enableNnerCepCheckForSpotlight : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
	var _lang : String
	var _locale : String
	var _probThreshold : Double
	var _rankerThreshold : Double
	var _aliasCurationEnabled : Bool
	var _entitySlice : String
	var _siriParseSlice : String
	var _model : String
	var _debug : Bool
	var _mthEnabled : Bool
	var _hasCep_p : Bool
	var _useragent : Useragentpb_UserAgent
	var _nnerParams : Nnerapipb_NNERParams
	var _country : String
	var _tokens : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tokenStartOffsets :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _tokenEndOffsets :  empty-list 

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _timing : Qe

	var _query : String
	var _normalizedQuery : String
	var _candidates : Nnerapipb_NNERCandidate
	var _spans : Nnerapipb_NNERSpan
	var _entities : String
	var _status : String
	var _reason : String
	var _siriDomain : String
	var _intentExecution : Nnerapipb_IntentExecution
	var _intents : Nnerapipb_KGIntent
	var _intentArg1 : Nnerapipb_NNERCandidate
	var _intentArg2 : Nnerapipb_NNERCandidate
	var _tokenLabels : Nnerapipb_TokenLabel
	var _isMthCacheResponse : Bool
	var _staticSpans : Nnerapipb_StaticSpan

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_FormattedText {

	// Properties
	var isEmphasized : Bool
	var isBold : Bool
	var textColor : Searchfoundation_TextColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _text : Searchfoundation_Text
	var _glyph : Searchfoundation_Image
 }

 struct PegasusAPI.Searchfoundation_KeyValueTuple {

	// Properties
	var key : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_StringDictionary {

	// Properties
	var keyValues : Searchfoundation_KeyValueTuple
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Amppb_MediaKindType {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case albumID  
	case artistID  
	case musicVideoID  
	case playlistID  
	case tvEpisodeID  
	case tvSeasonID  
	case movieID  
	case movieBundleID  
	case shortFilmID  
	case epubBookID  
	case bookID  
	case audioBookID  
	case courseID  
	case podcastID  
	case podcastEpisodeID  
	case iossoftwareID  
	case desktopAppID  
	case appCategoryID  
	case moreResultsID  
	case ibookID  
	case songID  
 }

 struct PegasusAPI.Amppb_Artwork {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ßs

	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_ContentRating {

	// Properties
	var advisories : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rank : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : ßs

	var name : String
	var system : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_Description {

	// Properties
	var short : String
	var standard : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_EbookInfo {

	// Properties
	var languageDisplayString : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pageCount : ßs

	var publisher : String
	var seller : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_Preview {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var duration : ßs

	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_MovieClip {

	// Properties
	var title : String
	var clipAssets : Amppb_Preview
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _previewArtwork : Amppb_Artwork
 }

 struct PegasusAPI.Amppb_Asset {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var duration : ßs

	var size : Double
	var flavor : String
	var isClosedCaptioned : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _preview : Amppb_Preview
 }

 struct PegasusAPI.Amppb_SoftwareInfo {

	// Properties
	var supportURL : String
	var websiteURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_Offer {

	// Properties
	var assets : Amppb_Asset
	var variant : String
	var type : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_UserRating {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ratingCountCurrentVersion : ßs

	var valueCurrentVersion : Double
	var value : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ratingCount : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_RottenTomatoesReviews {

	// Properties
	var tomatoMeterPercentage : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Amppb_Child {

	// Properties
	var name : String
	var url : String
	var parentName : String
	var offers : Amppb_Offer
WARNING: couldn't find address 0x0 (0x0) in binary!
	var discNumber : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var trackNumber : ßs

	var kind : Amppb_MediaKindType
	var releaseDate : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _artwork : Amppb_Artwork
 }

 struct PegasusAPI.Amppb_Parent {

	// Properties
	var releaseDate : String
	var children : Amppb_Child
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _description_p : Amppb_Description
	var _itunesNotes : Amppb_Description
	var _userRating : Amppb_UserRating
 }

 struct PegasusAPI.Amppb_Content {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _artwork : Amppb_Artwork
	var _genreNames : [String]
	var _url : String
	var _contentRatingsBySystem : Amppb_ContentRating
	var _bornOrFormed : String
	var _origin : String
	var _offers : Amppb_Offer
	var _softwareInfo : Amppb_SoftwareInfo
	var _collectionID : String
	var _collectionName : String
	var _description_p : Amppb_Description
	var _itunesNotes : Amppb_Description
	var _deviceFamilies : [String]
	var _bundleID : String
	var _bundleDisplayName : String
	var _copyright : String
	var _kind : Amppb_MediaKindType
	var _id : String
	var _nameRaw : String
	var _userRating : Amppb_UserRating
	var _rottenTomatoesReviews : Amppb_RottenTomatoesReviews
	var _eBookInfo : Amppb_EbookInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _discNumber : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _trackNumber : ßs

	var _artistName : String
	var _artistBio : [String]
	var _releaseDate : String
	var _children : Amppb_Child
	var _movieClips : Amppb_MovieClip
	var _parent : Amppb_Parent

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_CardSectionType {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case appLink  
	case description_  
	case keyValueData  
	case map  
	case mediaInfo  
	case mediaPlayer  
	case nowPlaying  
	case richTitle  
	case row  
	case scoreboard  
	case socialMediaPost  
	case stockChart  
	case tableHeaderRow  
	case tableRow  
	case textColumns  
	case title  
	case trackList  
	case audioPlayback  
	case flight  
	case activityIndicator  
	case web  
	case message  
	case detailedRow  
	case images  
	case suggestion  
	case selectableGrid  
	case sectionHeader  
	case metaInfo  
	case watchList  
	case mapsDetailedRow  
	case button  
	case horizontalButtonCard  
	case verticalLayout  
	case product  
	case horizontalScroll  
	case mediaRemoteControl  
	case mapPlace  
	case compactRow  
	case worldMap  
	case attributionFooter  
	case grid  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_MatchType {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case stemAndStop  
	case stemAndStopSuffix  
	case simpleStemAndStopSuffix  
	case stop  
	case stopSuffix  
	case stem  
	case stopWithoutSynonyms  
	case compareContains  
	case comparePrefix  
	case compare  
	case phonetic  
	case identityContains  
	case identityPrefix  
	case identitySynonym  
	case identity  
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_MatchingSpan {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.OneOf_Value {

	// Properties
	case floatValue : Float
	case doubleValue : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	case intValue : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	case longValue : Qe

	case stringValue : String
	case dateTimeValue : Com_Apple_Siri_Product_Proto_DateTime
	case scalarValue : Com_Apple_Siri_Product_Proto_ScalarValue
	case semanticTagValue : String
	case semanticValue : Com_Apple_Siri_Product_Proto_SemanticValue
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_ScalarValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_SemanticValue {

	// Properties
	var ontologyNodePojoClassName : String
	var serializedValue : String
	var semanticValueClassName : String
	var tags : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _label : String
	var _serializedValue : Com_Apple_Siri_Product_Proto_Value
	var _input : String
	var _matchedTerm : String
	var _prefix : Com_Apple_Siri_Product_Proto_MatchingSpan
	var _suffix : Com_Apple_Siri_Product_Proto_MatchingSpan
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startWithoutPrefix : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endWithoutSuffix : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _confidence : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _prefixSuffixConfidence : …e

	var _explicit : Bool
	var _isSuffixVariableMatch : Bool
	var _isPrefixVariableMatch : Bool
	var _isPayloadVariableMatch : Bool
	var _locale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numWords : …e

	var _matchType : Com_Apple_Siri_Product_Proto_MatchType
	var _appID : String
	var _matcherNames : [String]
	var _tags : [String]
	var _altInterpretationConfidences : [String : Double]
	var _altInterpretationPhoneSequences : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metadata : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _preItnphrasesStartTime : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _preItnphrasesEndTime : ßs


	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _value : OneOf_Value

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _value : Com_Apple_Siri_Product_Proto_Value
	var _unit : Com_Apple_Siri_Product_Proto_SemanticValue

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_DynamicURLImageResource {

	// Properties
	var formatURL : String
	var supportsResizing : Bool
	var imageOptions : Searchfoundation_ImageOption
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _pixelWidth : Searchfoundation_GraphicalFloat
	var _pixelHeight : Searchfoundation_GraphicalFloat
 }

 enum PegasusAPI.Kgqsapipb_KGQueryFunc {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case get  
	case pvp  
	case type  
	case triple  
	case entity  
	case any  
	case min  
	case max  
	case sortAsc  
	case sortDesc  
	case add  
	case sub  
	case avg  
	case and  
	case or  
	case not  
	case if  
	case lt  
	case gt  
 }

 enum PegasusAPI.Kgqsapipb_KGQueryArg {

	// Properties
	case UNRECOGNIZED : Int
	case s  
	case p  
	case o  
 }

 enum PegasusAPI.Kgqsapipb_IndexType {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case factIndex  
	case entityIndex  
 }

 struct PegasusAPI.Kgqsapipb_KGQueryTree {

	// Properties
	var query : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var limit : Ûu

	var lang : String
	var country : String
	var kgq : String
	var contextFacts : Kgqsapipb_Fact
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _root : Kgqsapipb_KGQueryNode
 }

 struct PegasusAPI.Kgqsapipb_KGQueryNode {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_KGQueryParam {

	// Properties
	var terms : [String]
	var type : TypeEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _child : Kgqsapipb_KGQueryNode
 }

 enum PegasusAPI.TypeEnum {

	// Properties
	case UNRECOGNIZED : Int
	case string  
	case float  
	case time  
	case var  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _func : String
	var _args : Kgqsapipb_KGQueryParam
	var _next : Kgqsapipb_KGQueryNode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _limit : Ûu

	var _weight : Float
	var _indexType : Kgqsapipb_IndexType
	var _executed : Bool
	var _skipExec : Bool
	var _resultIds : [String]

	// Swift methods
 }

 struct PegasusAPI.Snippetpb_MediaSnippet {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _storefrontID : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _languageID : ßs

	var _adamID : String
	var _name : String
	var _kind : Amppb_MediaKindType
	var _artistName : String
	var _description_p : String
	var _url : String
	var _releaseDate : String
	var _genreNames : [String]
	var _artwork : Amppb_Artwork
	var _offers : Amppb_Offer
	var _userRating : Amppb_UserRating
	var _eBookInfo : Amppb_EbookInfo
	var _children : Amppb_Child
	var _origin : String
	var _bornOrFormed : String
	var _contentRatingsBySystem : Amppb_ContentRating
	var _parentName : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_ButtonAlignment {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case left  
	case top  
	case bottom  
	case right  
	case center  
 }

 struct PegasusAPI.Searchfoundation_RichTitleCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _title : String
	var _subtitle : String
	var _contentAdvisory : String
	var _titleImage : Searchfoundation_Image
	var _isCentered : Bool
	var _descriptionText : String
	var _rating : Float
	var _ratingText : String
	var _reviewGlyph : Searchfoundation_Image
	var _reviewText : String
	var _reviewNewLine : Bool
	var _moreGlyphs : Searchfoundation_Image
	var _auxiliaryTopText : String
	var _auxiliaryMiddleText : String
	var _auxiliaryBottomText : String
	var _auxiliaryBottomTextColor : Searchfoundation_TextColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _auxiliaryAlignment : Ûu

	var _hideVerticalDivider : Bool
	var _titleAlign : Searchfoundation_TextAlignment
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _titleWeight : Ûu

	var _titleNoWrap : Bool
	var _thumbnailCropCircle : Bool
	var _imageOverlay : Searchfoundation_Image
	var _playAction : Searchfoundation_ActionItem
	var _playActionAlign : Searchfoundation_ButtonAlignment
	var _offers : Searchfoundation_MediaOffer
	var _footnote : String
	var _richSubtitle : Searchfoundation_RichText
	var _subtitleIsEmphasized : Bool

	// Swift methods
 }

 struct PegasusAPI.Resultlinkingpb_Domain {

	// Properties
	var name : String
	var link : String
	var title : String
	var resultID : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Resultlinkingpb_DomainList {

	// Properties
	var domains : Resultlinkingpb_Domain
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Resultlinkingpb_LinkedResults {

	// Properties
	var domainList : Resultlinkingpb_DomainList
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Resultlinkingpb_LocaleLinkingDocument {

	// Properties
	var aboverrides : Resultlinkingpb_LinkedResults
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Resultlinkingpb_LinkingDocument {

	// Properties
	var localeLinkingDoc : Resultlinkingpb_LocaleLinkingDocument
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Resultlinkingpb_ResultLinking {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _linkingDocument : Resultlinkingpb_LinkingDocument
 }

 struct PegasusAPI.Resultlinkingpb_ResultLink {

	// Properties
	var resultLinks : Resultlinkingpb_Domain
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_QueryFeatures {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_IntentRankerModel {

	// Properties
	var type : String
	var version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_FeatureEntity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var start : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var end : Ûu

	var sem : String
	var syn : String
	var types : [String]
	var ontologyPaths : Kgqsapipb_OntologyPath
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_OntologyPath {

	// Properties
	var ontology : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_CFGFeature {

	// Properties
	var name : String
	var values : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_IntentFeatures {

	// Properties
	var query : String
	var dbQueryPattern : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dbQueryDepth : Ûu

	var popularity : Float
	var parsingScore : Float
	var affinityScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var parseHeight : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var intentPosition : Ûu

	var hasResponse_p : Bool
	var entityTypes : [String]
	var entityNames : [String]
	var attributes : [String]
	var cfgFeatures : Kgqsapipb_CFGFeature
	var noReferDbQueryPattern : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var noReferQueryDepth : Ûu

	var prunerScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
	var _qsyn : String
	var _pattern : String
	var _algo : String
	var _flowDomain : String
	var _executedDomain : String
	var _parser : String
	var _entities : Kgqsapipb_FeatureEntity
	var _dbQueryPattern : [String]
	var _unfulfilledCfgdbquery : [String]
	var _unfulfilledCfgdbqueryPattern : [String]
	var _aProps : [String]
	var _props : Kgqsapipb_Pair
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _pageviews : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _frequency : Qe

	var _extractionDate : String
	var _extractionSource : String
	var _bodyPart : String
	var _locale : String
	var _intentRankerModel : Kgqsapipb_IntentRankerModel
	var _executableQueryString : String

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_KeyValueDataCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var data : Searchfoundation_KeyValueTuple
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
	var _accessoryImage : Searchfoundation_Image
 }

 struct PegasusAPI.Sportspb_Athlete {

	// Properties
	var sport : Sportspb_SportName
	var sportAthlete : OneOf_SportAthlete
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _attributes : Sportspb_AthleteAttributes
	var _team : Sportspb_SportsTeam
 }

 enum PegasusAPI.OneOf_SportAthlete {

	// Properties
	case baseballAthlete : Sportspb_BaseballAthlete
	case basketballAthlete : Sportspb_BasketballAthlete
	case cricketAthlete : Sportspb_CricketAthlete
	case footballAthlete : Sportspb_FootballAthlete
	case hockeyAthlete : Sportspb_HockeyAthlete
	case motorAthlete : Sportspb_MotorAthlete
	case rugbyAthlete : Sportspb_RugbyAthlete
	case soccerAthlete : Sportspb_SoccerAthlete
 }

 struct PegasusAPI.Sportspb_AthleteAttributes {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_AthleteLocalizations {

	// Properties
	var locale : [String]
	var name : String
	var nickNames : [String]
	var labels : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_BaseballAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_BaseballStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_BasketballAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_BasketballStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_CricketAthlete {

	// Properties
	var debutODI : String
	var debutT20 : String
	var debutTest : String
	var batStyle : String
	var skillType : String
	var skillTypeStyle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_CricketStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_FootballAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_FootballStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_HockeyAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_HockeyStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_MotorAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_MotorsportStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_RugbyAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _stats : Sportspb_RugbyStats
	var _statMetadata : Sportspb_StatMetadata
 }

 struct PegasusAPI.Sportspb_SoccerAthlete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_AthleteList {

	// Properties
	var athletes : Sportspb_Athlete
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_SportsRoster {

	// Properties
	var athletes : Sportspb_Athlete
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _team : Sportspb_SportsTeam
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _firstName : String
	var _lastName : String
	var _name : String
	var _position : String
	var _positionAbbr : String
	var _positionID : String
	var _birthPlace : String
	var _birthDate : String
	var _deathDate : String
	var _birthCity : String
	var _birthCountry : String
	var _height : String
	var _weight : String
	var _uniformNo : String
	var _thumbnail : String
	var _college : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _draftYear : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _draftRound : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _draftPick : Ûu

	var _url : String
	var _webLink : String
	var _appLink : String
	var _thumbnailCdnURL : String
	var _localizations : Sportspb_AthleteLocalizations

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _stats : Sportspb_SoccerStats
	var _statMetadata : Sportspb_StatMetadata

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_FlightStatus {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case active  
	case canceled  
	case diverted  
	case dataSourceNeeded  
	case landed  
	case notOperational  
	case redirected  
	case scheduled  
	case delayed  
 }

 enum PegasusAPI.Searchfoundation_ApiResultType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case flights  
 }

 enum PegasusAPI.Searchfoundation_ApiStatus {

	// Properties
	case UNRECOGNIZED : Int
	case ok  
	case noResults  
	case error  
 }

 struct PegasusAPI.Searchfoundation_Flight {

	// Properties
	var flightID : String
	var carrierCode : String
	var carrierName : String
	var flightNumber : String
	var legs : Searchfoundation_FlightLeg
	var operatorCarrierCode : String
	var operatorFlightNumber : String
	var carrierPhoneNumber : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_FlightLeg {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Searchfoundation_Airport {

	// Properties
	var code : String
	var city : String
	var street : String
	var district : String
	var state : String
	var postalCode : String
	var countryCode : String
	var country : String
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _timezone : Searchfoundation_TimeZone
	var _location : Searchfoundation_LatLng
 }

 struct PegasusAPI.Searchfoundation_ApiResults {

	// Properties
	var status : Searchfoundation_ApiStatus
	var resultType : Searchfoundation_ApiResultType
	var flights : Searchfoundation_Flight
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _status : Searchfoundation_FlightStatus
	var _departurePublishedTime : Searchfoundation_Date
	var _departureActualTime : Searchfoundation_Date
	var _departureTerminal : String
	var _departureGate : String
	var _departureAirport : Searchfoundation_Airport
	var _arrivalPublishedTime : Searchfoundation_Date
	var _arrivalActualTime : Searchfoundation_Date
	var _arrivalTerminal : String
	var _arrivalGate : String
	var _arrivalAirport : Searchfoundation_Airport
	var _divertedAirport : Searchfoundation_Airport
	var _title : String
	var _baggageClaim : String
	var _departureGateClosedTime : Searchfoundation_Date
	var _departureRunwayTime : Searchfoundation_Date
	var _arrivalRunwayTime : Searchfoundation_Date
	var _arrivalGateTime : Searchfoundation_Date

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_SuggestionCardSectionType {

	// Properties
	case UNRECOGNIZED : Int
	case query  
	case contact  
	case application  
	case siri  
	case web  
 }

 struct PegasusAPI.Searchfoundation_SuggestionCardSection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _punchoutOptions : Searchfoundation_Punchout
	var _punchoutPickerTitle : String
	var _punchoutPickerDismissText : String
	var _canBeHidden : Bool
	var _hasTopPadding_p : Bool
	var _hasBottomPadding_p : Bool
	var _type : String
	var _separatorStyle : Searchfoundation_SeparatorStyle
	var _backgroundColor : Searchfoundation_Color
	var _suggestionText : Searchfoundation_RichText
	var _isContact : Bool
	var _scopedSearchSectionBundleIdentifier : String
	var _suggestionType : Searchfoundation_SuggestionCardSectionType
	var _detailText : Searchfoundation_RichText
	var _thumbnail : Searchfoundation_Image

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_Date {

	// Properties
	var secondsSince1970 : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_TimeZone {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_GraphicalFloat {

	// Properties
	var doubleValue : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_PointSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _width : Searchfoundation_GraphicalFloat
	var _height : Searchfoundation_GraphicalFloat
 }

 struct PegasusAPI.Searchfoundation_Color {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _redComponent : Searchfoundation_GraphicalFloat
	var _greenComponent : Searchfoundation_GraphicalFloat
	var _blueComponent : Searchfoundation_GraphicalFloat
	var _alphaComponent : Searchfoundation_GraphicalFloat
 }

 enum PegasusAPI.Geopb_CartoSignificance {

	// Properties
	case UNRECOGNIZED : Int
	case significanceMedium  
	case significanceDefault  
	case significanceExtraExtraLow  
	case significanceExtraLow  
	case significanceLow  
	case significanceHigh  
	case significanceExtraHigh  
	case significanceExtraExtraHigh  
 }

 enum PegasusAPI.Geopb_SpatialPlaceLookupCategory {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case entertainment  
	case amusementpark  
	case aquarium  
	case zoo  
	case stadium  
	case skatePark  
	case culture  
	case landmark  
	case museum  
	case restaurant  
	case nightlife  
	case park  
	case airport  
	case shopping  
	case beach  
	case mountain  
	case fitness  
	case activity  
	case diving  
	case hiking  
	case performance  
	case hospital  
 }

 enum PegasusAPI.Geopb_SpatialEventLookupCategory {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case artsandmuseums  
	case businessandtechnology  
	case community  
	case dance  
	case educational  
	case familyevents  
	case festivalsandfairs  
	case musicconcerts  
	case nightlife  
	case sports  
	case theater  
	case tours  
	case appleevent  
 }

 enum PegasusAPI.Geopb_PhotoType {

	// Properties
	case UNRECOGNIZED : Int
	case storefront  
	case topRated  
	case user  
	case primary  
	case standard  
 }

 struct PegasusAPI.Geopb_KeyValuePair {

	// Properties
	var key : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Address {

	// Properties
	var formattedAddressLine : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _structuredAddress : Geopb_StructuredAddress
 }

 struct PegasusAPI.Geopb_StructuredAddress {

	// Properties
	var country : String
	var countryCode : String
	var administrativeArea : String
	var administrativeAreaCode : String
	var subAdministrativeArea : String
	var locality : String
	var postCode : String
	var thoroughfare : String
	var subThoroughfare : String
	var dependentLocality : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_LatLng {

	// Properties
	var lat : Double
	var lng : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _clientSideExtensions : }

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _serverSideExtensions : }

 }

 struct PegasusAPI.Geopb_PopularityScore {

	// Properties
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Category {

	// Properties
	var id : String
	var score : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_BrandReference {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var brandMuid : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_BrandKey {

	// Properties
	var id : String
	var scope : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_MerchantMetaData {

	// Properties
	var merchantIdentifier : MerchantIdentifier
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.MerchantIdentifier {

	// Properties
	var merchantCategory : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_KeywordData {

	// Properties
	var other : Keyword
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Keyword {

	// Properties
	var text : String
	var locale : String
	var confidence : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_BusinessCard {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Source {

	// Properties
	var sourceName : String
	var sourceID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geocode {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _center : Geopb_LatLng
 }

 struct PegasusAPI.LocalizedName {

	// Properties
	var languageCode : String
	var name : String
	var phoneticName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.LocalizedAddress {

	// Properties
	var displayLocale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _address : Geopb_Address
 }

 struct PegasusAPI.Geopb_StreamingEnvelope {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _businessCard : Geopb_BusinessCard
 }

 struct PegasusAPI.Geopb_CartoIconZoom {

	// Properties
	var minZoom : Float
	var maxZoom : Float
	var popLowestMinZoom : Float
	var popDefaultMinZoom : Float
	var popHighestMinZoom : Float
	var cartoSignificance : Geopb_CartoSignificance
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Taxonomy {

	// Properties
	var category : Category
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.LocalizedCategory {

	// Properties
	var locale : String
	var name : String
	var shortName : String
	var searchBarToken : String
	var placecard : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.IconMapping {

	// Properties
	var countryCode : String
	var countryCode3A : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var poiType : …e

	var isIconSuppressed : Bool
	var state : String
	var cartoSignificance : Geopb_CartoSignificance
	var cartoZoom : Geopb_CartoIconZoom
	var cartoZoomIndoor : Geopb_CartoIconZoom
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Category {

	// Properties
	var id : String
	var description_p : String
	var localization : LocalizedCategory
	var isDeprecated : Bool
	var icon : IconMapping
	var spatialPlaceLookupCategory : Geopb_SpatialPlaceLookupCategory
	var spatialEventLookupCategory : Geopb_SpatialEventLookupCategory
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _applicability : Applicability
 }

 struct PegasusAPI.Applicability {

	// Properties
	var countryWhitelist : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_PhotoVariant {

	// Properties
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : …e

	var photoSize : PhotoSize
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.PhotoSize {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case xsmall  
	case small  
	case medium  
	case large  
	case xlarge  
	case original  
	case xsmallsquared  
	case smallsquared  
	case mediumsquared  
	case largesquared  
	case slideshow  
 }

 struct PegasusAPI.Geopb_PhotoCaption {

	// Properties
	var caption : String
	var locale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_PhotoLicense {

	// Properties
	var name : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_PhotoUser {

	// Properties
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Photo {

	// Properties
	var id : String
	var sourceName : String
	var type : Geopb_PhotoType
	var photoVariant : Geopb_PhotoVariant
	var license : Geopb_PhotoLicense
	var webURL : String
	var isChinaSuppressed : Bool
	var isHighQuality : Bool
	var isBusinessOwned : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _caption : Geopb_PhotoCaption
	var _user : Geopb_PhotoUser
 }

 struct PegasusAPI.Geopb_Review {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.User {

	// Properties
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _image : Geopb_Photo
 }

 struct PegasusAPI.Geopb_Rating {

	// Properties
	var score : Double
	var maxScore : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numberOfRatings : Ûu

	var provider : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numberOfReviews : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _review : Geopb_Review
 }

 struct PegasusAPI.Geopb_LocalizedDescription {

	// Properties
	var locale : String
	var shortAbstract : String
	var title : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Description {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _description_p : Geopb_LocalizedDescription
 }

 struct PegasusAPI.Geopb_ProviderTypedScore {

	// Properties
	var type : String
	var weight : Float
	var score : Float
	var languageScore : ProviderLanguageScore
	var languageWeight : ProviderLanguageWeight
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.ProviderLanguageScore {

	// Properties
	var language : String
	var score : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.ProviderLanguageWeight {

	// Properties
	var language : String
	var weight : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_LocalizedFactoid {

	// Properties
	var label : String
	var locale : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Factoid {

	// Properties
	var factoidType : String
	var factoid : Geopb_LocalizedFactoid
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Price {

	// Properties
	var indicator : String
	var currencyCode : String
	var minRate : Float
	var maxRate : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_QuickLink {

	// Properties
	var id : String
	var type : QuickLinkType
	var url : String
	var adamID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _category : Geopb_Category
 }

 enum PegasusAPI.QuickLinkType {

	// Properties
	case UNRECOGNIZED : Int
	case restaurantUnknown  
	case restaurantMenu  
	case restaurantOrder  
	case restaurantReservation  
	case restaurantGiftCard  
	case restaurantPickup  
	case restaurantDelivery  
	case restaurantQueue  
	case hotelRoomsAndRates  
	case hotelFrontDesk  
	case hotelAmenities  
	case theaterNowPlaying  
	case eventsTicketing  
	case retailStoreShop  
	case retailStoreOrders  
	case retailStoreSupport  
	case retailServiceQuote  
	case retailServiceAppointment  
	case retailServicePortfolio  
	case retailServiceServices  
	case airlineBookTravel  
	case airlineCheckIn  
	case airlineFlightStatus  
	case airlineFeesPolicies  
 }

 struct PegasusAPI.Geopb_AdditionalInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alltimePageViews : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var monthlyPageViews : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Volatiles {

	// Properties
	var vendorID : String
	var vendorInternalPlaceID : String
	var photo : Geopb_Photo
	var rating : Geopb_Rating
	var description_p : Geopb_Description
	var score : Geopb_ProviderTypedScore
	var factoid : Geopb_Factoid
	var price : Geopb_Price
	var quickLink : Geopb_QuickLink
	var additionalInfo : Geopb_AdditionalInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_HoursPeriod {

	// Properties
	var hours : Geopb_Hours
	var presence : Presence
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _period : Geopb_Period
 }

 enum PegasusAPI.Presence {

	// Properties
	case UNRECOGNIZED : Int
	case normal  
	case closedhidden  
	case closedvisible  
 }

 struct PegasusAPI.Geopb_Period {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startTimestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var endTimestamp : ßs

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Hours {

	// Properties
	var day : DayOfWeek
	var timeRange : Geopb_TimeRange
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.DayOfWeek {

	// Properties
	case UNRECOGNIZED : Int
	case sunday  
	case monday  
	case tuesday  
	case wednesday  
	case thursday  
	case friday  
	case saturday  
	case everyday  
 }

 struct PegasusAPI.Geopb_TimeRange {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var from : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var to : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_Timezone {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Geopb_BrandDefinition {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var muid : ßs

	var brandID : String
	var scope : String
	var consumer : Consumer
	var poisImportant : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _card : Geopb_BusinessCard
 }

 enum PegasusAPI.Consumer {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case search  
	case display  
	case searchResult  
 }

 struct PegasusAPI.Geopb_MessageProfile {

	// Properties
	var id : String
	var intentID : String
	var groupID : String
	var url : String
	var visibility : Visibility
	var primaryProfile : Bool
	var fallbackProfile : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Visibility {

	// Properties
	case UNRECOGNIZED : Int
	case prerelease  
	case preflight  
	case carry  
	case production  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _id : ßs

	var _version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _encryptID : ßs

	var _prefName : String
	var _altName : [String]
	var _prefPhone : String
	var _altPhone : [String]
	var _address : Geopb_StructuredAddress
	var _prefURL : String
	var _altURL : [String]
	var _categoryLabel : Geopb_KeyValuePair
	var _prefSource : Source
	var _altSource : Source
	var _isClosed : Bool
	var _prefGeocode : Geocode
	var _attribute : Geopb_KeyValuePair
	var _localizedNames : LocalizedName
	var _hoursPeriod : Geopb_HoursPeriod
	var _localizedAddresses : LocalizedAddress
	var _merchantMetadata : Geopb_MerchantMetaData
	var _timezone : Geopb_Timezone
	var _popularityScore : Geopb_PopularityScore
	var _prefCategory : Geopb_Category
	var _altCategory : Geopb_Category
	var _brandKey : Geopb_BrandKey
	var _brand : Geopb_BrandReference
	var _keywordData : Geopb_KeywordData
	var _messageProfile : Geopb_MessageProfile
	var _applePayCategoryID : [String]

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _snippet : String
	var _score : Double
	var _reviewTime : Double
	var _reviewer : User
	var _uid : String
	var _languageCode : String
	var _isChinaSuppressed : Bool

	// Swift methods
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_FlightRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Apple_Parsec_Search_V2_FlightResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var apiData : #_

	var status : FlightStatusCode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.FlightStatusCode {

	// Properties
	case UNRECOGNIZED : Int
	case statusOk  
	case statusError  
	case statusNoResults  
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _query : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _date : ßs

	var _secretKey : String
	var _countryCode : String
	var _locale : String
	var _effectiveSystemLanguage : String
	var _preferredLanguages : [String]
	var _inputMode : String
	var _location : Apple_Parsec_Search_V2_Location
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _installedAppsSignature : #_

	var _routineMode : Apple_Parsec_Search_V2_RoutineMode
	var _transportationMode : Apple_Parsec_Search_V2_TransportationMode
	var _userGuid : String
	var _uiScale : Float
	var _mapsSession : Apple_Parsec_Search_V2_MapsSession
	var _flightBundleID : String

	// Swift methods
 }

 enum PegasusAPI.Searchfoundation_MediaEntityType {

	// Properties
	case UNRECOGNIZED : Int
	case item  
	case collection  
	case artist  
	case genre  
	case album  
	case composer  
	case albumArtist  
 }

 struct PegasusAPI.Searchfoundation_MediaDetail {

	// Properties
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _content : Searchfoundation_Text
 }

 struct PegasusAPI.Searchfoundation_MediaItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _title : String
	var _subtitleText : Searchfoundation_Text
	var _thumbnail : Searchfoundation_Image
	var _reviewGlyph : Searchfoundation_Image
	var _overlayImage : Searchfoundation_Image
	var _reviewText : String
	var _punchout : Searchfoundation_Punchout
	var _subtitleCustomLineBreaking : [String]
	var _buyOptions : Searchfoundation_MediaOffer
	var _contentAdvisory : String
	var _contentAdvisoryImage : Searchfoundation_Image

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_NowPlayingCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
	var subtitle : String
	var movies : Searchfoundation_MediaItem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_ImagesCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var images : Searchfoundation_Image
	var borderless : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 enum PegasusAPI.Typespb_Domain {

	// Properties
	case UNRECOGNIZED : Int
	case unspecified  
	case web  
	case kg  
	case news  
	case weather  
	case apps  
	case stocks  
	case sports  
	case maps  
	case qis  
	case webImages  
	case precomputedWebanswers  
	case dictionary  
	case movies  
	case tv  
	case flights  
	case media  
	case gif  
	case sis  
	case realityObjects  
	case kgcn  
	case basemap  
	case visualShopping  
	case visualArt2D  
	case visualMedia2D  
	case visualLandmark  
	case visualNature  
	case kgv2  
	case ampMusic  
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_StatefulValue {

	// Properties
	var label : String
	var input : String
	var confidence : Double
	var inferred : Bool
	var path : [String]
	var tags : [String]
	var value : OneOf_Value
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Value {

	// Properties
	case stringValue : String
	case semanticValue : Com_Apple_Siri_Product_Proto_SemanticValue
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_StatefulValues {

	// Properties
	var values : Com_Apple_Siri_Product_Proto_StatefulValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_MultiCardinalState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : Ûu

	var states : Com_Apple_Siri_Product_Proto_StatefulValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_MultiCardinalStateCombo {

	// Properties
	var nodeName : String
	var stateValues : Com_Apple_Siri_Product_Proto_MultiCardinalState
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_MultiCardinalStateCombos {

	// Properties
	var values : Com_Apple_Siri_Product_Proto_MultiCardinalStateCombo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_NLState {

	// Properties
	var domainName : String
	var nodeValueListMap : Com_Apple_Siri_Product_Proto_StatefulValues
	var mcNodeValueListMap : Com_Apple_Siri_Product_Proto_MultiCardinalStateCombos
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Sportspb_TvStatus {

	// Properties
	case UNRECOGNIZED : Int
	case none  
	case watchLive  
	case watchNow  
	case inFuture  
 }

 enum PegasusAPI.Sportspb_InGameEventType {

	// Properties
	case UNRECOGNIZED : Int
	case noEvent  
	case goal  
	case shot  
	case yellowCard  
	case redCard  
	case substitution  
	case ownGoal  
	case penaltyKickGoal  
	case shootoutGoal  
	case shootoutSave  
	case shootoutMiss  
 }

 struct PegasusAPI.Sportspb_EventDetails {

	// Properties
	var id : String
	var queriedTeamID : String
	var teams : Sportspb_Team
	var toppers : Sportspb_TopPerformerList
	var displayBoxScores : Sportspb_DisplayBoxScoreList
	var athletes : Sportspb_Athlete
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _sportsEvent : Sportspb_SportsEvent
	var _next : Sportspb_SportsEvent
	var _displayPlayByPlays : Sportspb_DisplayPlayByPlay
 }

 struct PegasusAPI.Sportspb_TeamSchedule {

	// Properties
	var events : Sportspb_SportsEvent
	var queriedID : String
	var url : String
	var verb : String
	var entities : [String]
	var entityType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _league : Sportspb_SportsLeague
 }

 struct PegasusAPI.Sportspb_MatchUp {

	// Properties
	var otherEvents : Sportspb_SportsEvent
	var queriedID : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _next : Sportspb_SportsEvent
	var _last : Sportspb_SportsEvent
 }

 struct PegasusAPI.Sportspb_SportsEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Sportspb_GameStats {

	// Properties
	var teamStats : Sportspb_TeamStats
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_TeamStats {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _teamID : Sportspb_TeamId
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _shotsOnGoal : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _totalShots : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fouls : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cornerKicks : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _offsides : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ballPossession : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _yellowCards : ÿ‹

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redCards : ÿ‹

 }

 struct PegasusAPI.Sportspb_TopPerformerList {

	// Properties
	var performers : Sportspb_TopPerformer
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_TopPerformer {

	// Properties
	var category : String
	var id : String
	var nickName : String
	var displayName : String
	var name : String
	var firstName : String
	var lastName : String
	var webLink : [String]
	var appLink : [String]
	var header : [String]
	var stats : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_DisplayBoxScoreList {

	// Properties
	var boxScores : Sportspb_DisplayBoxScore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_DisplayBoxScore {

	// Properties
	var id : String
	var header : [String]
	var stats : Sportspb_StatsList
	var footer : [String]
	var teamID : String
	var teamAbbr : String
	var league : String
	var playerInitials : [String]
	var playerIds : [String]
	var siriParams : Sportspb_SiriParams
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_SiriParams {

	// Properties
	var params : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_StatsList {

	// Properties
	var stats : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_DisplayPlayByPlay {

	// Properties
	var header : [String]
	var stats : Sportspb_Stat
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _period : Sportspb_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastUpdateTime : ÿ…

 }

 struct PegasusAPI.Sportspb_Period {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : Ûu

	var textFormat : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_Stat {

	// Properties
	var line : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var eventID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_TeamId {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_InGameEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var period : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var minutes : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var additionalMinutes : Qe

	var type : Sportspb_InGameEventType
	var player : String
	var otherPlayer : String
	var subType : Sportspb_InGameEventType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _teamID : Sportspb_TeamId
 }

 struct PegasusAPI.Sportspb_SoccerInGameEvents {

	// Properties
	var goals : Sportspb_InGameEvent
	var shots : Sportspb_InGameEvent
	var cards : Sportspb_InGameEvent
	var substitutions : Sportspb_InGameEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Sportspb_InGameEvents {

	// Properties
	var events : Sportspb_InGameEvent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _soccer : Sportspb_SoccerInGameEvents
 }

 struct PegasusAPI.Sportspb_TvStation {

	// Properties
	var tvStationID : String
	var tvStationName : String
	var tvStationIsNational : Bool
	var tvStationShortName : String
	var countryAbbreviation : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _watchlistIdentifier : String
	var _tvStatus : Sportspb_TvStatus
	var _location : String
	var _league : String
	var _localizedLeague : String
	var _sport : Sportspb_SportName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startTime : ÿ…

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startDateNoTime : ÿ…

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startDate : ÿ…

	var _team0 : Sportspb_SportsTeam
	var _team1 : Sportspb_SportsTeam
	var _tVStation : String
	var _tVStationAbbr : String
	var _venue : String
	var _city : String
	var _winnerID : String
	var _url : String
	var _hasRecord_p : Bool
	var _renderedAsBigView : Bool
	var _inGameEvents : Sportspb_InGameEvents
	var _gameStats : Sportspb_GameStats
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _regularPeriods : Ûu

	var _status : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _period : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minutes : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _seconds : Ûu

	var _boxscoreAvailable : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _modtimeSecs : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _balls : Ûu

	var _inningDivision : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _outs : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _strikes : Ûu

	var _resultText : String
	var _tossWinTeamID : String
	var _tossDecision : String
	var _seriesName : String
	var _seriesGameNumber : String
	var _seriesStatus : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentBatsmanID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentBowlerID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentRunnerID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _matchDay : Ûu

	var _matchType : [String]
	var _isShootout : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _week : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _originalWeek : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _legPartnerEventID : Ûu

	var _webLink : String
	var _appLink : String
	var _canBeHidden : Bool
	var _siriParams : [String : String]
	var _sportsLeague : Sportspb_SportsLeague
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _season : Ûu

	var _eventTitle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventTypeID : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventRoundID : Ûu

	var _eventRoundName : String
	var _seasonType : Sportspb_SeasonType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _gamesInSeries : Ûu

	var _seriesGameIsIfNecessary : Bool
	var _tournamentPhase : Sportspb_TournamentPhase
	var _tvStations : Sportspb_TvStation

	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_MoreResults {

	// Properties
	var label : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Searchfoundation_TextAlignment {

	// Properties
	case UNRECOGNIZED : Int
	case left  
	case center  
	case right  
 }

 enum PegasusAPI.Searchfoundation_TextColor {

	// Properties
	case UNRECOGNIZED : Int
	case default  
	case red  
	case green  
	case orange  
	case blue  
	case yellow  
	case purple  
 }

 struct PegasusAPI.Searchfoundation_Text {

	// Properties
	var text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxLines : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_MediaPlayerCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var title : String
	var subtitle : String
	var mediaItems : Searchfoundation_MediaItem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Snippetpb_RealityObjectsSnippet {

	// Properties
	var id : String
	var name : String
	var usdzURL : String
	var imageURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Searchfoundation_SelectableGridCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
	var entries : Searchfoundation_TitleSubtitleTuple
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initialSelectedIndex : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 struct PegasusAPI.Searchfoundation_TitleSubtitleTuple {

	// Properties
	var title : String
	var subtitle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Locationpb_Source {

	// Properties
	case UNRECOGNIZED : Int
	case undefinedSource  
	case userRequestSource  
	case reverseGeoSource  
	case ipsource  
 }

 struct PegasusAPI.Locationpb_Point {

	// Properties
	var lat : Double
	var lng : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Locationpb_Location {

	// Properties
	var lat : Float
	var lon : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Locationpb_RevGeo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Locationpb_CityApple {

	// Properties
	var cityNames : [String : String]
	var country : String
	var state : String
	var latLngString : String
	var timezone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var population : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _latLng : Locationpb_Point
 }

 struct PegasusAPI.Locationpb_LandmarkContext {

	// Properties
	var landmarkTargetS2Cell : [String]
	var landmarkTargetMuid : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numLandmarkTarget : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Locationpb_GeoContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _landmarkContext : Locationpb_LandmarkContext
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _country : String
	var _state : String
	var _county : String
	var _city : String
	var _postalCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _placeIds :  empty-list 
	var _latLng : Locationpb_Point
	var _cityLookup : Locationpb_CityApple
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metroID : Ûu

	var _source : Locationpb_Source
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _s2 : ßs


	// Swift methods
 }

 struct PegasusAPI.Searchfoundation_ProductCardSection {

	// Properties
	var punchoutOptions : Searchfoundation_Punchout
	var punchoutPickerTitle : String
	var punchoutPickerDismissText : String
	var canBeHidden : Bool
	var hasTopPadding_p : Bool
	var hasBottomPadding_p : Bool
	var type : String
	var separatorStyle : Searchfoundation_SeparatorStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var productJson : #_

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _backgroundColor : Searchfoundation_Color
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_ValueType {

	// Properties
	case UNRECOGNIZED : Int
	case nullValueType  
	case double  
	case float  
	case int  
	case long  
	case string  
	case dateTime  
	case scalar  
	case semanticTag  
	case semanticValue  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_OriginType {

	// Properties
	case UNRECOGNIZED : Int
	case nullOriginType  
	case userContext  
	case userCurrent  
	case userInferred  
	case agentDefault  
	case agentDevice  
	case agentDropped  
	case agentInferred  
	case agentDerived  
	case agentRelaxed  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_MitigatorClassification {

	// Properties
	case UNRECOGNIZED : Int
	case mitigatorNotSet  
	case ok  
	case sorry  
	case silent  
 }

 enum PegasusAPI.Com_Apple_Siri_Product_Proto_MetaDomainAction {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case read  
	case dataResolutionCompleted  
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_AdjustmentReason {

	// Properties
	var explanation : String
	var sourceClass : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_DerivedOrigin {

	// Properties
	var derivedFrom : Com_Apple_Siri_Product_Proto_TerminalElement
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _adjustmentReason : Com_Apple_Siri_Product_Proto_AdjustmentReason
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Origin {

	// Properties
	var originType : Com_Apple_Siri_Product_Proto_OriginType
	var originDetail : OneOf_OriginDetail
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_OriginDetail {

	// Properties
	case reason : String
	case matchingSpan : Com_Apple_Siri_Product_Proto_MatchingSpan
	case derivedOrigin : Com_Apple_Siri_Product_Proto_DerivedOrigin
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_OriginalElementValue {

	// Properties
	var isFresh : Bool
	var input : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_ElementValue {

	// Properties
	var semanticTags : [String]
	var valueType : Com_Apple_Siri_Product_Proto_ValueType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _origin : Com_Apple_Siri_Product_Proto_Origin
	var _originalValue : Com_Apple_Siri_Product_Proto_OriginalElementValue
	var _value : Com_Apple_Siri_Product_Proto_Value
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_TerminalElement {

	// Properties
	var elementValue : Com_Apple_Siri_Product_Proto_ElementValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_NonTerminalElement {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_Element {

	// Properties
	var ontologyNodeName : String
	var resultIds : [String]
	var node : OneOf_Node
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.OneOf_Node {

	// Properties
	case terminalElement : Com_Apple_Siri_Product_Proto_TerminalElement
	case nonTerminalElement : Com_Apple_Siri_Product_Proto_NonTerminalElement
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_IntentNode {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var parentIndex : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _element : Com_Apple_Siri_Product_Proto_Element
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_ProtoIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_IntentHierarchy {

	// Properties
	var intents : Com_Apple_Siri_Product_Proto_ProtoIntent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var languageContainerTopLevelIntents :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var previousIntentsIndices :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alternativeIntentsIndices :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_IntegerList {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var integerValue :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Com_Apple_Siri_Product_Proto_ProtoNLData {

	// Properties
	var nlState : Com_Apple_Siri_Product_Proto_NLState
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _intentHierarchy : Com_Apple_Siri_Product_Proto_IntentHierarchy
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _score : Double
	var _originalInput : String
	var _allWordsMatched : Bool
	var _primary : Bool
	var _usingExplicitInput : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentRank : …e

	var _nerbasedParse : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentID : …e

	var _nlState : Com_Apple_Siri_Product_Proto_NLState
	var _mitigatorClassification : Com_Apple_Siri_Product_Proto_MitigatorClassification
	var _strippedVoiceTrigger : String
	var _invalidVoiceTrigger : Bool
	var _suggested : Bool
	var _metaDomainAction : Com_Apple_Siri_Product_Proto_MetaDomainAction
	var _intentTree : Com_Apple_Siri_Product_Proto_IntentNode

	// Swift methods
 }

 struct PegasusAPI.Kgqsapipb_Entity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 enum PegasusAPI.Domain {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case kg  
	case apps  
	case sports  
	case stocks  
	case weather  
	case flights  
	case tv  
	case movies  
	case media  
	case baike  
 }

 struct PegasusAPI.Kgqsapipb_ClaimTrimmed {

	// Properties
	var id : String
	var propID : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Claim {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_Qualifierinfo {

	// Properties
	var qualifierID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var qualifierOrder : Ûu

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Claims {

	// Properties
	var claims : Kgqsapipb_Claim
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Pronunciation {

	// Properties
	var value : String
	var format : Format
WARNING: couldn't find address 0x0 (0x0) in binary!
	var order : …e

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _assertion : Kgqsapipb_Assertion
 }

 enum PegasusAPI.Format {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case ipa  
 }

 struct PegasusAPI.Kgqsapipb_Name {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_Localizations {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

	var _storage : _StorageClass
 }

 struct PegasusAPI.Kgqsapipb_Langval {

	// Properties
	var language : String
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Sitelink {

	// Properties
	var site : String
	var title : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Localizedurl {

	// Properties
	var url : String
	var locale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 struct PegasusAPI.Kgqsapipb_Reference {

	// Properties
	var shortText : String
	var url : String
	var claim : Kgqsapipb_Claim
	var sourceID : String
	var localizedURL : Kgqsapipb_Localizedurl
	var pipeline : Origin
	var annotation : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 enum PegasusAPI.Origin {

	// Properties
	case UNRECOGNIZED : Int
	case invalid  
	case wikidata  
	case lapedia  
	case musicbrainz  
	case itunesImport  
	case itunesSongs  
	case itunesSongSelection  
	case discogs  
	case usda  
	case infobox  
	case dictionary  
	case forbes  
	case recurringDateObjects  
	case nexus  
	case inference  
	case hatchery  
	case ontology  
	case ampApps  
	case curation  
	case webtables  
	case ampPopularity  
	case wikipediaPageView  
	case parsecEngagement  
	case dbpedia  
	case nnerAlias  
 }

 struct PegasusAPI.Kgqsapipb_Property {

	// Properties
	var id : String
	var enlabel : [String]
	var claims : Kgqsapipb_Claim
	var labels : Kgqsapipb_Langval
	var descriptions : Kgqsapipb_Langval
	var aliases : Kgqsapipb_Langval
	var shortAbstract : Kgqsapipb_Langval
	var locale : [String]
	var primary : [String]
	var secondary : [String]
	var localizations : Kgqsapipb_Localizations
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var indexedTimestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ¿Ž

 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _domain : Domain
	var _locale : [String]
	var _label : String
	var _enlabel : String
	var _description_p : String
	var _claims : Kgqsapipb_Claim
	var _labels : Kgqsapipb_Langval
	var _descriptions : Kgqsapipb_Langval
	var _siteLinks : Kgqsapipb_Sitelink
	var _aliases : Kgqsapipb_Langval
	var _shortAbstract : Kgqsapipb_Langval
	var _primary : [String]
	var _secondary : [String]
	var _localizations : Kgqsapipb_Localizations
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _timestamp : Qe

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _indexedTimestamp : Qe

	var _assertion : Kgqsapipb_Assertion

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _id : String
	var _epid : String
	var _entityID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _order : Ûu

	var _lionProb : Double
	var _propID : String
	var _propName : String
	var _propEnName : String
	var _propType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _propTypeCode : Ûu

	var _valueType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _valueTypeCode : Ûu

	var _value : String
	var _localizedValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _valuePrecision : Ûu

	var _valueLocales : [String]
	var _qualifiers : Kgqsapipb_Claim
	var _qualifierInfo : Kgqsapipb_Qualifierinfo
	var _attention : String
	var _references : Kgqsapipb_Reference
	var _geoContainers : [String]
	var _confidence : Float
	var _assertion : Kgqsapipb_Assertion

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _displayName : String
	var _spokenName : String
	var _orderedPronunciation : Kgqsapipb_Pronunciation
	var _displayNameAssertion : Kgqsapipb_Assertion
	var _spokenNameAssertion : Kgqsapipb_Assertion
	var _qualifiers : Kgqsapipb_Claim

	// Swift methods
 }

 class PegasusAPI._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _locale : [String]
	var _primary : [String]
	var _secondary : [String]
	var _descriptions : [String]
	var _shortAbstract : [String]
	var _primaryName : Kgqsapipb_Name
	var _secondaryName : Kgqsapipb_Name
	var _assertion : Kgqsapipb_Assertion

	// Swift methods
 }
