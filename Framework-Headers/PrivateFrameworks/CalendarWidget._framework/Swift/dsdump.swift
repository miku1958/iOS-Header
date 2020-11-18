 protocol CalendarWidget.ViewModel // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol CalendarWidget.DataSource // 1 requirements
 {
	// method
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ì˝
 }

 struct CalendarWidget.CalendarWidget { }

 struct CalendarWidget.TimelineEntryProvider {

	// Properties
	let eventTimeline : EventTimeline // +0x0
 }

 struct CalendarWidget.CalendarWidgetView {

	// Properties
	var entry : CalendarTimelineEntry
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : G
 }

 struct CalendarWidget.NarrowAllDayView {

	// Properties
	var allDayEvents : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	let font : Ö
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : G
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fullLabelWidth : ?
 }

 struct CalendarWidget.Location {

	// Properties
	var title : String // +0x0
 }

 struct CalendarWidget.NarrowEventTitleText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var font : Ö
 }

 struct CalendarWidget.ColorBarView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var color : ≥
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.StripedBackgroundView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _displayScale : œÁ
 }

 struct CalendarWidget.MonthView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateLabelHeight : ?
	let monthNameFormat : String
	let monthDayLabelFormat : String
 }

 struct CalendarWidget.WeekRow {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var weekIndex : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.WeekLabelRow {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 enum CalendarWidget.WeekDayViewModel {

	// Properties
	case Visible : (dayComponent: Int, inWeekend: Bool, isToday: Bool, isPlaceholder: Bool)
	case Hidden  
 }

 struct CalendarWidget.WeekLabelData {

	// Properties
	let title : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let color : ≥ // +0x10
 }

 class CalendarWidget.EventTimeline : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dataSource : DataSource
	var events : Event
	var eventsByDay : DayEvents

	// Swift methods
 }

 struct CalendarWidget.WideAllDayView {

	// Properties
	var allDayEvents : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleFont : Ö
 }

 class CalendarWidget.NarrowMultidayLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class CalendarWidget.MultiDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	let id : String
	var dayViewModels : SingleDayViewModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceMaxHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenDays : Ì˝

	// Swift methods
	0x1f270  func <stripped> // getter 
	0x1f3c0  func <stripped> // getter 
	0x1f610  func <stripped> // method 
 }

 class CalendarWidget.SingleDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : √¸
	let viewHeights : ViewHeights
	var id : String
	var viewModels : ViewModel

	// Swift methods
	0x20c60  func <stripped> // getter 
	0x20c90  func <stripped> // getter 
	0x20e80  func <stripped> // getter 
	0x20fe0  func <stripped> // getter 
	0x21420  func <stripped> // getter 
	0x21600  func <stripped> // getter 
 }

 class CalendarWidget.EventViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var event : Event
	var overrideShowingLocation : Bool
	var overrideShowingTravelTime : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithTwoLines : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithThreeLines : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithFourLines : Ì˝

	// Swift methods
	0x1fc60  func <stripped> // getter 
	0x1fd10  func <stripped> // getter 
 }

 class CalendarWidget.ConflictingEventsViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
	var maxEventsToShow : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictCountHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictEventTitleHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenEachSubview : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictTimeHeight : Ì˝

	// Swift methods
	0x1ffd0  func <stripped> // getter 
	0x201a0  func <stripped> // getter 
 }

 class CalendarWidget.AllDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
	var collapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var individualHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenItems : Ì˝

	// Swift methods
	0x20400  func <stripped> // getter 
	0x20450  func <stripped> // getter 
 }

 class CalendarWidget.XMoreViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var xMoreHeight : Ì˝
	var visible : Bool

	// Swift methods
	0x20690  func <stripped> // getter 
	0x206d0  func <stripped> // getter 
 }

 class CalendarWidget.EmptyStateViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ì˝

	// Swift methods
 }

 class CalendarWidget.HeaderViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ì˝

	// Swift methods
	0x20a30  func <stripped> // getter 
 }

 struct CalendarWidget.ViewHeights {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headerHeight : Ì˝ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let allDayHeight : Ì˝ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictCountHeight : Ì˝ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithTwoLinesHeight : Ì˝ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithThreeLinesHeight : Ì˝ // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithFourLinesHeight : Ì˝ // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictTimeHeight : Ì˝ // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let xMoreHeight : Ì˝ // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let emptyStateLabelHeight : Ì˝ // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenEachConflictSubview : Ì˝ // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictEventTitleHeight : Ì˝ // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenItemsOnSameDay : Ì˝ // +0x58
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : Ì˝ // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topFlexibleSpaceHeight : Ì˝ // +0x68
 }

 struct CalendarWidget.WideXMoreView {

	// Properties
	var events : Event // +0x0
 }

 struct CalendarWidget.WideEventDetailsView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.WideEventTravelTimeText {

	// Properties
	var event : Event
 }

 struct CalendarWidget.NarrowMultidayEventsView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceHeight : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _headerHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allDayHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictCountHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithTwoLinesHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithThreeLinesHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithFourLinesHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictTimeHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _xMoreHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _emptyStateLabelHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictEventTitleHeight : ?
 }

 struct CalendarWidget.Event {

	// Properties
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDate : √¸
	var travelTime : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var calendarColor : ≥
	var identifier : String
	var allDay : Bool
	var appearanceState : AppearanceState
	var location : Location
 }

 enum CalendarWidget.AppearanceState {

	// Properties
	case none  
	case needsReply  
	case tentative  
	case declined  
	case cancelled  
	case birthday  
 }

 class CalendarWidget.EKUICalendarsIntent : INIntent /System/Library/Frameworks/Intents.framework/Intents {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe79c000181f0 (0x79c000181f0) in binary!
	0xe798  @objc EKUICalendarsIntent.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x1b4fffd9288  @objc EKUICalendarsIntent.(null) <stripped>
 }

 enum CalendarWidget.EKUICalendarsIntentResponseCode { }

 class CalendarWidget.EKUICalendarsIntentResponse : INIntentResponse /System/Library/Frameworks/Intents.framework/Intents {

	// Properties
	var code : EKUICalendarsIntentResponseCode

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7ee000181c8 (0x7ee000181c8) in binary!
	0xe7ea  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe7e9000181a0 (0x7e9000181a0) in binary!
	0xe758  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe75400018258 (0x75400018258) in binary!
	0x68000000c  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe73c00018168 (0x73c00018168) in binary!
	0xe730  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe72400018140 (0x72400018140) in binary!
	0xe718  @objc EKUICalendarsIntentResponse.(null) <stripped>

	// Swift methods
	0x31130  func EKUICalendarsIntentResponse.code.getter // getter 
 }

 struct CalendarWidget.NarrowXMoreView {

	// Properties
	var events : Event // +0x0
 }

 struct CalendarWidget.NarrowEventDetailsView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
	var hideTravelTime : Bool
	var hideLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : G
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.NarrowEventTimeText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
 }

 struct CalendarWidget.NarrowEventTravelTimeText {

	// Properties
	var event : Event
 }

 struct CalendarWidget.WideMultidayEventsView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : Ì˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _headerHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allDayHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithTwoLinesHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithThreeLinesHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _xMoreHeight : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _emptyStateLabelHeight : ?
 }

 struct CalendarWidget.DayEvents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let day : √¸
	let events : Event
	let allDayEvents : Event
 }

 struct CalendarWidget.WideTextHeaderView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
	let headerDateShortMonthFormat : String
	let headerDateFullMonthFormat : String
 }

 struct CalendarWidget.CalendarTimelineEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var simulatedDate : √¸
	var dayEvents : DayEvents
 }

 struct CalendarWidget.NarrowEmptyStateView { }

 class CalendarWidget.FakeEvents : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class CalendarWidget.EKUICalendar : INObject /System/Library/Frameworks/Intents.framework/Intents {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xecb400018200 (0x4b400018200) in binary!
	0xe6e0  @objc EKUICalendar.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x1577261646e  @objc EKUICalendar.(null) <stripped>
 }

 class CalendarWidget.EKUICalendarResolutionResult : INObjectResolutionResult /System/Library/Frameworks/Intents.framework/Intents {
	// Swift methods
	0x3f230  class func static EKUICalendarResolutionResult.success(with:) // method 
	0x3f2e0  class func static EKUICalendarResolutionResult.disambiguation(with:) // method 
	0x3f450  class func static EKUICalendarResolutionResult.confirmationRequired(with:) // method 
 }

 struct CalendarWidget.LargeWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : â
 }

 struct CalendarWidget.SmallWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : â
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
	let weekdayLabelFormat : String
	let monthDayLabelFormat : String
 }

 struct CalendarWidget.MediumWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : √¸
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : â
 }

 struct CalendarWidget.NarrowConflictsView {

	// Properties
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
	var numEventsToShow : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : G
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.ConflictTimeText {

	// Properties
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : √¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : /Á
 }

 struct CalendarWidget.ConflictEventTitleText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	let font : Ö
 }

 struct CalendarWidget.ConflictCountText {

	// Properties
	var numItems : Int // +0x0
 }

 struct CalendarWidget.WideDividerView {

	// Properties
	var visible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var leadingInset : _n
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : {
 }

 struct CalendarWidget.WideEmptyStateView {

	// Properties
	var centeredInSpace : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let minDistanceToContentAbove : Ì˝ // +0x8
 }

 struct CalendarWidget.WideEmptyStateTextView { }

 struct CalendarWidget.NarrowTextHeaderView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : √¸
 }

 class CalendarWidget.EventKitDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : EKEventStore

	// Swift methods
	0x4b340  func <stripped> // method 
	0x4bc30  func <stripped> // method 
 }

 class CalendarWidget.WideMultidayLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class CalendarWidget.SingleDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var xMoreEvents : Event // +0x10 (0x8)
	var uncompressedEvents : Event // +0x18 (0x8)
	var allDayEvents : Event // +0x20 (0x8)
	var forceXMoreHidden : Bool // +0x28 (0x1)
	var forceAllDayCompressed : Bool // +0x29 (0x1)
	var emptyStateViewPresent : Bool // +0x2a (0x1)
	var emptyStateViewCenteredInSpace : Bool // +0x2b (0x1)
	let viewHeights : ViewHeights // +0x30 (0x40)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : √¸ // +0x0 (0x0)
	let id : String // +0x74735f5f (0x10)

	// Swift methods
	0x4ee30  func <stripped> // method 
 }

 struct CalendarWidget.ViewHeights {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headerHeight : Ì˝ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let allDayHeight : Ì˝ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithTwoLinesHeight : Ì˝ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithThreeLinesHeight : Ì˝ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let xMoreHeight : Ì˝ // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let emptyStateLabelHeight : Ì˝ // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : Ì˝ // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenEventViews : Ì˝ // +0x38
 }

 class CalendarWidget.Utils : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct CalendarWidget.ContentSizeCategoryLimiter {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxSizeCategory : ÖÅ
	let content : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _actualSizeCategory : â
 }

 struct CalendarWidget.ViewSizingKey { }
