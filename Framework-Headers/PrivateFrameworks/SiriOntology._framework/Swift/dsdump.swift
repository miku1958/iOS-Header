 protocol SiriOntology.IntentNode // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol SiriOntology.TerminalNodeBoundedSemanticValue // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol SiriOntology.TerminalNodeValueType // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol SiriOntology.NLIntentWrapper // 4 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// getter
 }
 protocol SiriOntology.PersonIntentNodeContaining // 1 requirements
 {
	// class base protocol
 }
 protocol SiriOntology.ProtobufIntentTreeConvertible // 1 requirements
 {
	// method
 }
 protocol SiriOntology.NonTerminalIntentNodeWrapper // 4 requirements
 {
	// class base protocol
	// getter
	// getter
	// class method
 }
 protocol SiriOntology.IntentNodeTraversable // 2 requirements
 {
	// getter
	// getter
 }
 protocol SiriOntology.IntentSignatureConvertible // 2 requirements
 {
	// getter
	// getter
 }
 protocol SiriOntology.OntologyNode // 3 requirements
 {
	// getter
	// getter
	// method
 }

 struct SiriOntology.TerminalIntentNode {

	// Properties
	let ontologyNodeName : String // +0x0
	let resultIDs : [String] // +0x10
	let elements : TerminalElement // +0x18
 }

 struct SiriOntology.TerminalElement {

	// Properties
	let value : Value // +0x0
	let semanticTags : [String] // +0x210
	let origin : Origin // +0x218
	let originalValue : OriginalValue // +0x508
 }

 enum SiriOntology.Value {

	// Properties
	case double : Double
	case float : Float
	case int : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case long : ·Ç
	case string : String
	case dateTime : DateTimeValue
	case scalar : ScalarValue
	case semanticTag : String
	case semantic : SemanticValue
 }

 struct SiriOntology.SemanticValue {

	// Properties
	let javaPojoName : String? // +0x0
	let value : String // +0x10
 }

 class SiriOntology.ScalarValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Value // +0x10 (0x20a)
	let unit : SemanticValue // +0x220 (0x20)

	// Swift methods
	0x54d0  class func TerminalElement.ScalarValue.__allocating_init(value:unit:) // init 
 }

 struct SiriOntology.Origin {

	// Properties
	let originType : OriginType // +0x0
	let originDetail : OriginDetail // +0x8
 }

 enum SiriOntology.OriginDetail {

	// Properties
	case reason : (reason: String?)
	case matchingSpan : MatchingSpan
	case derivedOrigin : DerivedOrigin
 }

 enum SiriOntology.OriginType {

	// Properties
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

 struct SiriOntology.DerivedOrigin {

	// Properties
	let adjustmentReason : AdjustmentReason // +0x0
	let derivedFrom : TerminalIntentNode // +0x20
 }

 struct SiriOntology.MatchingSpan {

	// Properties
	let label : String? // +0x0
	let value : Value // +0x10
	let input : String? // +0x220
	let matchedTerm : String? // +0x230
	let prefix : AnyMatchingSpan // +0x240
	let suffix : AnyMatchingSpan // +0x248
	let startIndex : Int // +0x250
	let endIndex : Int // +0x258
	let startIndexWithoutPrefix : Int // +0x260
	let endIndexWithoutSuffix : Int // +0x268
	let confidence : Int // +0x270
	let prefixSuffixConfidence : Int // +0x278
	let isExplicit : Bool // +0x280
	let isSuffixVariableMatch : Bool // +0x281
	let isPrefixVariableMatch : Bool // +0x282
	let isPayloadVariableMatch : Bool // +0x283
	let locale : String? // +0x288
	let numberOfWords : Int // +0x298
	let matchType : MatchType // +0x2a0
	let appId : String? // +0x2a8
	let matcherNames : [String] // +0x2b8
	let tags : [String] // +0x2c0
	let alternateInterpretationConfidences : [String : Double] // +0x2c8
	let alternateInterpretationPhoneSequences : [String : String] // +0x2d0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metadata : Ç // +0x2d8
 }

 enum SiriOntology.MatchType {

	// Properties
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

 struct SiriOntology.AdjustmentReason {

	// Properties
	let explanation : String? // +0x0
	let sourceClass : String? // +0x10
 }

 struct SiriOntology.OriginalValue {

	// Properties
	let isFresh : Bool // +0x0
	let input : String // +0x8
 }

 class SiriOntology.AnyMatchingSpan : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matchingSpan : MatchingSpan

	// Swift methods
	0x1e3b0  class func AnyMatchingSpan.__allocating_init(_:) // init 
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _adjustmentReason : Com_Apple_Siri_Product_Proto_AdjustmentReason
	var _derivedFrom : Com_Apple_Siri_Product_Proto_TerminalElement

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _originType : Com_Apple_Siri_Product_Proto_OriginType
	var _originDetail : OneOf_OriginDetail

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _semanticTags : [String] // +0x10 (0x8)
	var _origin : Com_Apple_Siri_Product_Proto_Origin // +0x0 (0x0)
	var _originalValue : Com_Apple_Siri_Product_Proto_OriginalElementValue // +0x0 (0x0)
	var _valueType : Com_Apple_Siri_Product_Proto_ValueType // +0x0 (0x9)
	var _value : Com_Apple_Siri_Product_Proto_Value // +0x0 (0x0)

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _ontologyNodeName : String
	var _resultIds : [String]
	var _node : OneOf_Node

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _element : Com_Apple_Siri_Product_Proto_Element
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _parentIndex : #Æ

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _score : Double
	var _originalInput : String
	var _allWordsMatched : Bool
	var _primary : Bool
	var _usingExplicitInput : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentRank : 7Æ
	var _nerbasedParse : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _intentID : 7Æ
	var _nlState : Com_Apple_Siri_Product_Proto_NLState
	var _mitigatorClassification : Com_Apple_Siri_Product_Proto_MitigatorClassification
	var _strippedVoiceTrigger : String
	var _invalidVoiceTrigger : Bool
	var _suggested : Bool
	var _metaDomainAction : Com_Apple_Siri_Product_Proto_MetaDomainAction
	var _intentTree : Com_Apple_Siri_Product_Proto_IntentNode

	// Swift methods
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_IntentNode {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_MetaDomainAction {

	// Properties
	case UNRECOGNIZED : Int
	case notSet  
	case read  
	case dataResolutionCompleted  
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_MitigatorClassification {

	// Properties
	case UNRECOGNIZED : Int
	case mitigatorNotSet  
	case ok  
	case sorry  
	case silent  
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Element {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.OneOf_Node {

	// Properties
	case terminalElement : Com_Apple_Siri_Product_Proto_TerminalElement
	case nonTerminalElement : Com_Apple_Siri_Product_Proto_NonTerminalElement
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_ValueType {

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

 struct SiriOntology.Com_Apple_Siri_Product_Proto_OriginalElementValue {

	// Properties
	var isFresh : Bool
	var input : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Origin {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_OriginType {

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

 enum SiriOntology.OneOf_OriginDetail {

	// Properties
	case reason : String
	case matchingSpan : Com_Apple_Siri_Product_Proto_MatchingSpan
	case derivedOrigin : Com_Apple_Siri_Product_Proto_DerivedOrigin
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_DerivedOrigin {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_TerminalElement {

	// Properties
	var elementValue : Com_Apple_Siri_Product_Proto_ElementValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_AdjustmentReason {

	// Properties
	var explanation : String
	var sourceClass : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_ProtoIntent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_IntentHierarchy {

	// Properties
	var intents : Com_Apple_Siri_Product_Proto_ProtoIntent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var languageContainerTopLevelIntents :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var previousIntentsIndices :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alternativeIntentsIndices :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_IntegerList {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var integerValue :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_NonTerminalElement {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_ElementValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 class SiriOntology.PersonOntologyNode : NonTerminalOntologyNode {
	// Swift methods
	0xb9640  class func PersonOntologyNode.__allocating_init(name:multicardinal:) // init 
 }

 enum SiriOntology.PersonSelfReference {

	// Properties
	case me  
 }

 enum SiriOntology.PersonNamePrefix {

	// Properties
	case mr  
	case mrs  
	case ms  
	case dr  
	case prof  
	case assoc  
	case rev  
	case fr  
	case atty  
	case hon  
	case pres  
	case gov  
	case coach  
	case ofc  
	case capt  
	case col  
	case lt_col  
	case maj  
	case lt  
	case sgt  
	case tpr  
	case cmdr  
	case lt_cmdr  
	case cpl  
	case det  
	case gen  
	case pvt  
	case adm  
	case sr  
	case junior  
	case senior  
	case contact  
	case son  
	case grandson  
	case nephew  
 }

 enum SiriOntology.PersonNamePostfix {

	// Properties
	case junior  
	case senior  
	case contact  
	case son  
	case grandson  
	case nephew  
	case mr  
	case mrs  
	case ms  
	case dr  
	case prof  
	case assoc  
	case rev  
	case fr  
	case atty  
	case hon  
	case pres  
	case gov  
	case coach  
	case ofc  
	case capt  
	case col  
	case lt_col  
	case maj  
	case lt  
	case sgt  
	case tpr  
	case cmdr  
	case lt_cmdr  
	case cpl  
	case det  
	case gen  
	case pvt  
	case adm  
	case sr  
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _meridiem : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hourOfDay : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _minute : 7Æ
	var _period : Com_Apple_Siri_Product_Proto_DateTimePeriod
	var _qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var _timeZoneID : String
	var _isStart : Bool
	var _isUserDefined : Bool
	var _is24HourStyleInput : Bool

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _year : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _month : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dayOfMonth : 7Æ
	var _dayOfWeek : Com_Apple_Siri_Product_Proto_DayOfWeek
	var _dateTimeHoliday : Com_Apple_Siri_Product_Proto_DateTimeHoliday
	var _qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var _isStart : Bool
	var _isUserDefined : Bool
	var _periods : Com_Apple_Siri_Product_Proto_DateTimePeriod
	var _calendarSystem : Com_Apple_Siri_Product_Proto_CalendarSystem
	var _fractionalPeriod : Com_Apple_Siri_Product_Proto_FractionalPeriod
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dayOfWeekOrdinalValue : #Æ

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _startDate : Com_Apple_Siri_Product_Proto_Date
	var _endDate : Com_Apple_Siri_Product_Proto_Date
	var _duration : Com_Apple_Siri_Product_Proto_Duration
	var _interval : Com_Apple_Siri_Product_Proto_Interval
	var _recurrence : Com_Apple_Siri_Product_Proto_Recurrence
	var _startTime : Com_Apple_Siri_Product_Proto_Time
	var _endTime : Com_Apple_Siri_Product_Proto_Time
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startPosition : #Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endPosition : #Æ
	var _temporalIntent : TemporalIntent

	// Swift methods
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_DateTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.TemporalIntent {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case past  
	case present  
	case future  
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Time {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Recurrence {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var magnitude : #Æ
	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Interval {

	// Properties
	var quantity : Double
	var period : Com_Apple_Siri_Product_Proto_Period
	var qualifier : Com_Apple_Siri_Product_Proto_Qualifier
	var isUserDefined : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Duration {

	// Properties
	var duration : Double
	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Date {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_CalendarSystem {

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

 enum SiriOntology.Com_Apple_Siri_Product_Proto_DayOfWeek {

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

 struct SiriOntology.Com_Apple_Siri_Product_Proto_FractionalPeriod {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numerator : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var denominator : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ordinalValue : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_DateTimeHoliday {

	// Properties
	var id : String
	var calendarSystem : Com_Apple_Siri_Product_Proto_CalendarSystem
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_Qualifier {

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

 struct SiriOntology.Com_Apple_Siri_Product_Proto_DateTimePeriod {

	// Properties
	var isStart : Bool
	var period : Com_Apple_Siri_Product_Proto_Period
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_Period {

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
 }

 struct SiriOntology.DateTimeValue {

	// Properties
	let startDate : Date // +0x0
	let endDate : Date // +0x98
	let duration : Duration // +0x130
	let interval : Interval // +0x140
	let recurrence : Recurrence // +0x150
	let startTime : Time // +0x160
	let endTime : Time // +0x1a8
	let startPosition : Int? // +0x1f0
	let endPosition : Int? // +0x200
	let temporalIntent : TemporalIntent // +0x209
 }

 struct SiriOntology.Date {

	// Properties
	let year : Int? // +0x0
	let month : Int? // +0x10
	let dayOfMonth : Int? // +0x20
	let dayOfWeek : DayOfWeek // +0x29
	let dateTimeHoliday : DateTimeHoliday // +0x30
	let qualifier : Qualifier // +0x41
	let isStart : Bool? // +0x42
	let isUserDefined : Bool? // +0x43
	let periods : DateTimePeriod // +0x48
	let calendarSystem : CalendarSystem // +0x50
	let fractionalPeriod : FractionalPeriod // +0x58
	let dayOfWeekOrdinalValue : Int? // +0x88
 }

 struct SiriOntology.Time {

	// Properties
	let meridiem : String? // +0x0
	let hourOfDay : Int? // +0x10
	let minute : Int? // +0x20
	let period : DateTimePeriod // +0x29
	let qualifier : Qualifier // +0x2b
	let timeZoneID : String? // +0x30
	let isStart : Bool? // +0x40
	let isUserDefined : Bool? // +0x41
	let is24HourStyleInput : Bool? // +0x42
 }

 struct SiriOntology.Duration {

	// Properties
	let duration : Double? // +0x0
	let period : Period // +0x9
 }

 struct SiriOntology.Interval {

	// Properties
	let quantity : Double? // +0x0
	let period : Period // +0x9
	let qualifier : Qualifier // +0xa
	let isUserDefined : Bool? // +0xb
 }

 struct SiriOntology.Recurrence {

	// Properties
	let magnitude : Int? // +0x0
	let period : Period // +0x9
 }

 struct SiriOntology.DateTimePeriod {

	// Properties
	let isStart : Bool? // +0x0
	let period : Period // +0x1
 }

 struct SiriOntology.FractionalPeriod {

	// Properties
	let numerator : Int? // +0x0
	let denominator : Int? // +0x10
	let ordinalValue : Int? // +0x20
 }

 struct SiriOntology.DateTimeHoliday {

	// Properties
	let identifier : String? // +0x0
	let calendarSystem : CalendarSystem // +0x10
 }

 enum SiriOntology.TemporalIntent {

	// Properties
	case past  
	case present  
	case future  
 }

 enum SiriOntology.Period {

	// Properties
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
	case happyHour  
	case dinner  
	case bedtime  
	case daytime  
	case night  
	case overnight  
	case tonight  
	case dayPeriod  
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
	case dayOfWeek  
	case weekend  
	case weekday  
	case week  
	case fortnight  
	case dayOfMonth  
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
 }

 enum SiriOntology.Qualifier {

	// Properties
	case plus  
	case minus  
	case approx  
	case early  
	case late  
	case every  
	case beginOf  
	case middleOf  
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

 enum SiriOntology.CalendarSystem {

	// Properties
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

 enum SiriOntology.DayOfWeek {

	// Properties
	case monday  
	case tuesday  
	case wednesday  
	case thursday  
	case friday  
	case saturday  
	case sunday  
 }

 struct SiriOntology.Scalar {

	// Properties
	let value : A?
	let unit : B?
 }

 class SiriOntology.NonTerminalOntologyNode : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String // +0x10 (0x10)
	let multicardinal : Bool // +0x20 (0x1)
	let childNodes : OntologyNode // +0x28 (0x8)
	var $__lazy_storage_$_recursiveParentForChildren : AnyOntologyNode // +0x30 (0x8)

	// Swift methods
	0xd8ad0  class func NonTerminalOntologyNode.__allocating_init(name:multicardinal:childNodes:) // init 
 }

 class SiriOntology.AppOntologyNode : NonTerminalOntologyNode {
	// Swift methods
	0xdb4f0  class func AppOntologyNode.__allocating_init(name:multicardinal:) // init 
 }

 enum SiriOntology.AppAttributes {

	// Properties
	case application  
 }

 enum SiriOntology.ProtobufDeserializationError {

	// Properties
	case invalidRootNodeIndex  
	case invalidParentNodeIndex  
	case invalidNodeTree  
 }

 class SiriOntology.TerminalOntologyNode {
 struct SiriOntology.NonTerminalIntentNode {

	// Properties
	let ontologyNodeName : String // +0x0
	let resultIDs : [String] // +0x10
	let childNodes : IntentNode // +0x18
 }

 struct SiriOntology.PersonIntentNode: PersonIntentNodeContaining {

	// Properties
	let intentNode : NonTerminalIntentNode // +0x0
	let ontologyNode : NonTerminalOntologyNode // +0x20
 }

 class SiriOntology.DomainOntologyNode : NonTerminalOntologyNode {

	// Properties
	let isInEventTree : Bool // +0x38 (0x1)

	// Swift methods
	0x102200  class func DomainOntologyNode.__allocating_init(name:childNodes:isInEventTree:) // init 
 }

 struct SiriOntology.NLIntent {

	// Properties
	let rootNode : IntentNode // +0x0
	let score : Double? // +0x28
	let originalInput : String? // +0x38
	let allWordsMatched : Bool // +0x48
	let primary : Bool // +0x49
	let usingExplicitInput : Bool // +0x4a
	let intentRank : Int? // +0x50
	let isNERBasedParse : Bool // +0x59
	let intentID : Int? // +0x60
	let nlState : NLState // +0x69
	let mitigatorClassification : MitigatorClassification // +0x6a
	let strippedVoiceTrigger : String? // +0x70
	let isInvalidVoiceTrigger : Bool // +0x80
	let isSuggested : Bool // +0x81
	let metaDomainActions : MetaDomainAction // +0x88
 }

 struct SiriOntology.NLState { }

 enum SiriOntology.MitigatorClassification {

	// Properties
	case ok  
	case sorry  
	case silent  
 }

 enum SiriOntology.MetaDomainAction {

	// Properties
	case read  
	case dataResolutionCompleted  
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _label : String
	var _serializedValue : Com_Apple_Siri_Product_Proto_Value
	var _input : String
	var _matchedTerm : String
	var _prefix : Com_Apple_Siri_Product_Proto_MatchingSpan
	var _suffix : Com_Apple_Siri_Product_Proto_MatchingSpan
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startWithoutPrefix : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endWithoutSuffix : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _confidence : 7Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _prefixSuffixConfidence : 7Æ
	var _explicit : Bool
	var _isSuffixVariableMatch : Bool
	var _isPrefixVariableMatch : Bool
	var _isPayloadVariableMatch : Bool
	var _locale : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numWords : 7Æ
	var _matchType : Com_Apple_Siri_Product_Proto_MatchType
	var _appID : String
	var _matcherNames : [String]
	var _tags : [String]
	var _altInterpretationConfidences : [String : Double]
	var _altInterpretationPhoneSequences : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metadata : O¹

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _value : OneOf_Value

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _value : Com_Apple_Siri_Product_Proto_Value
	var _unit : Com_Apple_Siri_Product_Proto_SemanticValue

	// Swift methods
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_SemanticValue {

	// Properties
	var ontologyNodePojoClassName : String
	var serializedValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 enum SiriOntology.OneOf_Value {

	// Properties
	case floatValue : Float
	case doubleValue : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	case intValue : #Æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case longValue : ·Ç
	case stringValue : String
	case dateTimeValue : Com_Apple_Siri_Product_Proto_DateTime
	case scalarValue : Com_Apple_Siri_Product_Proto_ScalarValue
	case semanticTagValue : String
	case semanticValue : Com_Apple_Siri_Product_Proto_SemanticValue
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_ScalarValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.Com_Apple_Siri_Product_Proto_MatchType {

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

 struct SiriOntology.Com_Apple_Siri_Product_Proto_MatchingSpan {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 class SiriOntology.AnyOntologyNode : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let ontologyNode : OntologyNode // +0x10 (0x28)

	// Swift methods
 }

 class SiriOntology._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _label : String
	var _input : String
	var _confidence : Double
	var _inferred : Bool
	var _path : [String]
	var _tags : [String]
	var _value : OneOf_Value

	// Swift methods
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_StatefulValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
	var _storage : _StorageClass
 }

 enum SiriOntology.OneOf_Value {

	// Properties
	case stringValue : String
	case semanticValue : Com_Apple_Siri_Product_Proto_SemanticValue
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_NLState {

	// Properties
	var domainName : String
	var nodeValueListMap : Com_Apple_Siri_Product_Proto_StatefulValues
	var mcNodeValueListMap : Com_Apple_Siri_Product_Proto_MultiCardinalStateCombos
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_MultiCardinalState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : #Æ
	var states : Com_Apple_Siri_Product_Proto_StatefulValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_MultiCardinalStateCombo {

	// Properties
	var nodeName : String
	var stateValues : Com_Apple_Siri_Product_Proto_MultiCardinalState
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_MultiCardinalStateCombos {

	// Properties
	var values : Com_Apple_Siri_Product_Proto_MultiCardinalStateCombo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }

 struct SiriOntology.Com_Apple_Siri_Product_Proto_StatefulValues {

	// Properties
	var values : Com_Apple_Siri_Product_Proto_StatefulValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ‰Ã
 }
