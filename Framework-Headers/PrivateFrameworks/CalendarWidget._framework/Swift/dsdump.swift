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
	var width : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : }
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
	var _family : ×
 }

 struct CalendarWidget.NarrowAllDayView {

	// Properties
	var allDayEvents : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	let font : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : ×
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _fullLabelWidth : Ï
 }

 struct CalendarWidget.Location {

	// Properties
	var title : String // +0x0
 }

 struct CalendarWidget.NarrowEventTitleText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var font : 
 }

 struct CalendarWidget.ColorBarView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var color : C÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.StripedBackgroundView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _displayScale : _î
 }

 struct CalendarWidget.MonthView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateLabelHeight : Ï
	let monthNameFormat : String
	let monthDayLabelFormat : String
 }

 struct CalendarWidget.WeekRow {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var weekIndex : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.WeekLabelRow {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
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
	let color : C÷ // +0x10
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
	var headerDate : S
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleFont : 
 }

 class CalendarWidget.NarrowMultidayLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class CalendarWidget.MultiDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	let id : String
	var dayViewModels : SingleDayViewModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceMaxHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenDays : }

	// Swift methods
	0x1eeb0  func <stripped> // getter 
	0x1f000  func <stripped> // getter 
	0x1f250  func <stripped> // method 
 }

 class CalendarWidget.SingleDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : S
	let viewHeights : ViewHeights
	var id : String
	var viewModels : ViewModel

	// Swift methods
	0x208a0  func <stripped> // getter 
	0x208d0  func <stripped> // getter 
	0x20ac0  func <stripped> // getter 
	0x20c20  func <stripped> // getter 
	0x21060  func <stripped> // getter 
	0x21240  func <stripped> // getter 
 }

 class CalendarWidget.EventViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var event : Event
	var overrideShowingLocation : Bool
	var overrideShowingTravelTime : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithTwoLines : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithThreeLines : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightWithFourLines : }

	// Swift methods
	0x1f8a0  func <stripped> // getter 
	0x1f950  func <stripped> // getter 
 }

 class CalendarWidget.ConflictingEventsViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
	var maxEventsToShow : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictCountHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictEventTitleHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenEachSubview : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conflictTimeHeight : }

	// Swift methods
	0x1fc10  func <stripped> // getter 
	0x1fde0  func <stripped> // getter 
 }

 class CalendarWidget.AllDayViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
	var collapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var individualHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spacingBetweenItems : }

	// Swift methods
	0x20040  func <stripped> // getter 
	0x20090  func <stripped> // getter 
 }

 class CalendarWidget.XMoreViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var xMoreHeight : }
	var visible : Bool

	// Swift methods
	0x202d0  func <stripped> // getter 
	0x20310  func <stripped> // getter 
 }

 class CalendarWidget.EmptyStateViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : }

	// Swift methods
 }

 class CalendarWidget.HeaderViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ViewModel {

	// Properties
	var id : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : }

	// Swift methods
	0x20670  func <stripped> // getter 
 }

 struct CalendarWidget.ViewHeights {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headerHeight : } // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let allDayHeight : } // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictCountHeight : } // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithTwoLinesHeight : } // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithThreeLinesHeight : } // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithFourLinesHeight : } // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictTimeHeight : } // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let xMoreHeight : } // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let emptyStateLabelHeight : } // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenEachConflictSubview : } // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conflictEventTitleHeight : } // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenItemsOnSameDay : } // +0x58
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : } // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topFlexibleSpaceHeight : } // +0x68
 }

 struct CalendarWidget.WideXMoreView {

	// Properties
	var events : Event // +0x0
 }

 struct CalendarWidget.WideEventDetailsView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.WideEventTravelTimeText {

	// Properties
	var event : Event
 }

 struct CalendarWidget.NarrowMultidayEventsView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topFlexibleSpaceHeight : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _headerHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allDayHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictCountHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithTwoLinesHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithThreeLinesHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithFourLinesHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictTimeHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _xMoreHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _emptyStateLabelHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _conflictEventTitleHeight : Ï
 }

 struct CalendarWidget.Event {

	// Properties
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endDate : S
	var travelTime : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var calendarColor : C÷
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
WARNING: couldn't find address 0xe77c00018870 (0x77c00018870) in binary!
	0xe778  @objc EKUICalendarsIntent.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x34fffd9458  @objc EKUICalendarsIntent.(null) <stripped>
 }

 enum CalendarWidget.EKUICalendarsIntentResponseCode { }

 class CalendarWidget.EKUICalendarsIntentResponse : INIntentResponse /System/Library/Frameworks/Intents.framework/Intents {

	// Properties
	var code : EKUICalendarsIntentResponseCode

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7ce00018848 (0x7ce00018848) in binary!
	0xe7ca  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe7c900018820 (0x7c900018820) in binary!
	0xe738  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe734000188d8 (0x734000188d8) in binary!
	0x68000000c  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe71c000187e8 (0x71c000187e8) in binary!
	0xe710  @objc EKUICalendarsIntentResponse.(null) <stripped>
WARNING: couldn't find address 0xe704000187c0 (0x704000187c0) in binary!
	0xe6f8  @objc EKUICalendarsIntentResponse.(null) <stripped>

	// Swift methods
	0x30c80  func EKUICalendarsIntentResponse.code.getter // getter 
 }

 struct CalendarWidget.NarrowXMoreView {

	// Properties
	var events : Event // +0x0
 }

 struct CalendarWidget.NarrowEventDetailsView {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
	var hideTravelTime : Bool
	var hideLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : ×
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.NarrowEventTimeText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
 }

 struct CalendarWidget.NarrowEventTravelTimeText {

	// Properties
	var event : Event
 }

 struct CalendarWidget.WideMultidayEventsView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : }
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _headerHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allDayHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithTwoLinesHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _eventWithThreeLinesHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _xMoreHeight : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _emptyStateLabelHeight : Ï
 }

 struct CalendarWidget.DayEvents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let day : S
	let events : Event
	let allDayEvents : Event
 }

 struct CalendarWidget.WideTextHeaderView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
	var showDivider : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
	let headerDateShortMonthFormat : String
	let headerDateFullMonthFormat : String
 }

 struct CalendarWidget.CalendarTimelineEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var simulatedDate : S
	var dayEvents : DayEvents
 }

 struct CalendarWidget.NarrowEmptyStateView { }

 class CalendarWidget.FakeEvents : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class CalendarWidget.EKUICalendar : INObject /System/Library/Frameworks/Intents.framework/Intents {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xec9400018880 (0x49400018880) in binary!
	0xe6c0  @objc EKUICalendar.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x1577261646e  @objc EKUICalendar.(null) <stripped>
 }

 class CalendarWidget.EKUICalendarResolutionResult : INObjectResolutionResult /System/Library/Frameworks/Intents.framework/Intents {
	// Swift methods
	0x3ec90  class func static EKUICalendarResolutionResult.success(with:) // method 
	0x3ed40  class func static EKUICalendarResolutionResult.disambiguation(with:) // method 
	0x3eeb0  class func static EKUICalendarResolutionResult.confirmationRequired(with:) // method 
 }

 struct CalendarWidget.LargeWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : 
 }

 struct CalendarWidget.SmallWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
	let weekdayLabelFormat : String
	let monthDayLabelFormat : String
 }

 struct CalendarWidget.MediumWidgetContentView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentDate : S
	var dayEvents : DayEvents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sizeCategory : 
 }

 struct CalendarWidget.NarrowConflictsView {

	// Properties
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
	var numEventsToShow : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _family : ×
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.ConflictTimeText {

	// Properties
	var events : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headerDate : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar : ¿í
 }

 struct CalendarWidget.ConflictEventTitleText {

	// Properties
	var event : Event
WARNING: couldn't find address 0x0 (0x0) in binary!
	let font : 
 }

 struct CalendarWidget.ConflictCountText {

	// Properties
	var numItems : Int // +0x0
 }

 struct CalendarWidget.WideDividerView {

	// Properties
	var visible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var leadingInset : u
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _redactionReasons : 
 }

 struct CalendarWidget.WideEmptyStateView {

	// Properties
	var centeredInSpace : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let minDistanceToContentAbove : } // +0x8
 }

 struct CalendarWidget.WideEmptyStateTextView { }

 struct CalendarWidget.NarrowTextHeaderView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : S
 }

 class CalendarWidget.EventKitDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : EKEventStore

	// Swift methods
	0x4ac50  func <stripped> // method 
	0x4b540  func <stripped> // method 
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
	let date : S // +0x0 (0x0)
	let id : String // +0x74735f5f (0x10)

	// Swift methods
	0x4e730  func <stripped> // method 
 }

 struct CalendarWidget.ViewHeights {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headerHeight : } // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let allDayHeight : } // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithTwoLinesHeight : } // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventWithThreeLinesHeight : } // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let xMoreHeight : } // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let emptyStateLabelHeight : } // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenDays : } // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spacingBetweenEventViews : } // +0x38
 }

 class CalendarWidget.Utils : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct CalendarWidget.ContentSizeCategoryLimiter {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxSizeCategory : +ˆ
	let content : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _actualSizeCategory : 
 }

 struct CalendarWidget.ViewSizingKey { }
