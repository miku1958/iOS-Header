 protocol SleepHealthUI.QuickScheduleOverrideViewControllerDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SleepHealthUI.ScheduleOccurrenceEditModelConsuming // 1 requirements
 {
	// method
 }
 protocol SleepHealthUI.FeedbackGenerator // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SleepHealthUI.TimeInBedComputable // 2 requirements
 {
	// getter
	// getter
 }
 protocol SleepHealthUI.TextTableViewCellProviding // 2 requirements
 {
	// getter
	// getter
 }
 protocol SleepHealthUI.ScheduleOccurrenceViewModelProviding // 1 requirements
 {
	// getter
 }
 protocol SleepHealthUI.SleepScheduleProviding // 4 requirements
 {
	// getter
	// getter
	// getter
	// method
 }
 protocol SleepHealthUI.EnableSchedulePromptViewControllerDelegate // 1 requirements
 {
	// method
 }
 protocol SleepHealthUI.OnboardPromptViewControllerDelegate // 2 requirements
 {
	// method
	// method
 }

 class SleepHealthUI.ScheduleOccurrenceEditModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let alarmConfigurationDidChange : Á´ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let modelWasEdited : ø´ // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let validScheduleRangePublisher : ≈´ // +0x20 (0x8)
	var originalOccurrence : HKSPSleepScheduleOccurrence // +0x28 (0x8)
	let isAdding : Bool // +0x30 (0x1)
	let isSingleDayOverride : Bool // +0x31 (0x1)
	var otherOccurrenceDays : HKSPWeekdays // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sleepDurationGoalPublisher : u´ // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sleepSchedulePublisher : c´ // +0x48 (0x8)
	let pairedWatchSupportsSleep : Bool // +0x50 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gregorianCalendar : }© // +0x6100085 (0x0)
	var mutableOccurrence : HKSPMutableSleepScheduleOccurrence // +0x0 (0x8)

	// Swift methods
	0x91e0  func ScheduleOccurrenceEditModel.originalOccurrence.getter // getter 
	0x92b0  func ScheduleOccurrenceEditModel.otherOccurrenceDays.getter // getter 
	0x94c0  class func ScheduleOccurrenceEditModel.__allocating_init(occurrence:isAdding:isSingleDayOverride:weekdaysWithExistingOccurrences:sleepDurationGoalPublisher:sleepSchedulePublisher:pairedWatchSupportsSleep:gregorianCalendar:) // init 
 }

 class SleepHealthUI.SleepScheduleComponentsEditView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : SleepScheduleComponentsViewModel // +0x19 (0x0)
	let componentsHeader : SleepScheduleComponentsHeader // +0x45545f5f (0x8)
	let clock : SleepScheduleClock // +0x0 (0x8)
	let timeInBed : UILabel // +0x0 (0x8)
	let clockCaption : SleepScheduleClockCaption // +0x0 (0x8)
	var clockWidthConstraint : NSLayoutConstraint? // +0x0 (0x8)
	var captionTopConstraint : NSLayoutConstraint? // +0x0 (0x8)
	var $__lazy_storage_$_formatter : NSDateComponentsFormatter? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x60240001d360 (0x240001d360) in binary!
	0x643e  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x64320001cfc8 (0x4320001cfc8) in binary!
	0x7eb0  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x641a0001d078 (0x41a0001d078) in binary!
	0x7d00  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7cf40001c9a8 (0x4f40001c9a8) in binary!
	0x7ce8  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7cdc0001c980 (0x4dc0001c980) in binary!
	0x5de8  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7e5c0001ca10 (0x65c0001ca10) in binary!
	0x28000000c  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x86d40001d070 (0x6d40001d070) in binary!
	0x5f88  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2a4fffb47d0  @objc SleepScheduleComponentsEditView.(null) <stripped>
	0xfffb4a58  @objc SleepScheduleComponentsEditView.Hâ⁄ˇá∑ <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x6f4fffb6040  @objc SleepScheduleComponentsEditView.(null) <stripped>
	0x734fffb6a28  @objc SleepScheduleComponentsEditView. <stripped>

	// Swift methods
	0xc5d0  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.getter // getter 
	0xc6a0  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.setter // setter 
	0xc710  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.modify // modifyCoroutine 
	0xc880  func <stripped> // getter 
	0xeeb0  func <stripped> // method 
	0xf6d0  func <stripped> // method 
	0xfb30  func <stripped> // method 
	0xfd30  func <stripped> // method 
 }

 class SleepHealthUI.EditScheduleLinkTableViewCell : HKSHTextTableViewCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x86d40001d070 (0x6d40001d070) in binary!
	0x5f88  @objc EditScheduleLinkTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2a4fffb47d0  @objc EditScheduleLinkTableViewCell.(null) <stripped>

	// Swift methods
 }

 struct SleepHealthUI.Model {

	// Properties
	var title : String // +0x0
	var textColor : UIColor? // +0x10
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmSnoozeTableViewCell : HKSwitchTableViewCell /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x86b40001d050 (0x6b40001d050) in binary!
	0x5f68  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7e0c0001c9c0 (0x60c0001c9c0) in binary!
	0x58000000c  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x5f440001d280 (0x7440001d280) in binary!
	0x635e  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>

	// Swift methods
	0x11200  func <stripped> // method 
 }

 class SleepHealthUI.SleepScheduleClockCaption : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let labels : [UILabel]
	var message : Message

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f440001d280 (0x7440001d280) in binary!
	0x635e  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7c440001c8e0 (0x4440001c8e0) in binary!
	0x5d50  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7dc40001c978 (0x5c40001c978) in binary!
	0x118000000c  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x5efc0001d238 (0x6fc0001d238) in binary!
	0x7da0  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7f9a0001d138 (0x79a0001d138) in binary!
	0x62fe  @objc SleepScheduleClockCaption.(null) <stripped>

	// Swift methods
	0x12c20  func <stripped> // getter 
	0x12e20  func <stripped> // method 
	0x13030  func <stripped> // method 
 }

 enum SleepHealthUI.Message {

	// Properties
	case goalMet  
	case goalMiss  
	case bedtimeConflictsWithPreviousDayWakeUp  
	case wakeUpConflictsWithNextDayBedtime  
 }

 class SleepHealthUI.QuickScheduleOverrideViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : ScheduleOccurrenceEditModel
	let alarmPreviewPlayer : AlarmPreviewPlayer
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alarmConfigurationObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var modelEditObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var eventRecordChangeObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduleChangeObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sleepDurationGoalObserver : Y®
WARNING: couldn't find address 0x0 (0x0) in binary!
	var validScheduleRangeObserver : Y®
	var sleepScheduleProvider : SleepScheduleProviding
	var modelHasChanged : Bool
	var tonePickerStyleProvider : TKTonePickerStyleProvider?
	var vibrationPickerStyleProvider : TKVibrationPickerStyleProvider?
	var delegate : QuickScheduleOverrideViewControllerDelegate
	var dataSource : DataSource

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5efc0001d238 (0x6fc0001d238) in binary!
	0x7da0  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7f9a0001d138 (0x79a0001d138) in binary!
	0x62fe  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7e400001c878 (0x6400001c878) in binary!
	0x7d70  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62f40001c858 (0x2f40001c858) in binary!
	0x570a  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62fb0001c830 (0x2fb0001c830) in binary!
	0x62fd  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62f10001c808 (0x2f10001c808) in binary!
	0x62f3  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62e70001c7e0 (0x2e70001c7e0) in binary!
	0x62db  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62dd0001d0d8 (0x2dd0001d0d8) in binary!
	0x62dc  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7cec0001c8a0 (0x4ec0001c8a0) in binary!
	0xc8000000c  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x56860001c6f0 (0x6860001c6f0) in binary!
	0x567a  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x566e0001c6c8 (0x66e0001c6c8) in binary!
	0x5662  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x64610001c6a0 (0x4610001c6a0) in binary!
	0x620e  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62020001d3f8 (0x2020001d3f8) in binary!
	0x61f6  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x61ea0001ce60 (0x1ea0001ce60) in binary!
	0x7c68  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7c5c0001cfc0 (0x45c0001cfc0) in binary!
	0x7c50  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc18a8  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xa4fffc0b90  @objc QuickScheduleOverrideViewController.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.DataSource {
 struct SleepHealthUI.ScheduleOccurrenceDataSourceItem {

	// Properties
	let identifier : Identifier // +0x0
 }

 enum SleepHealthUI.Identifier {

	// Properties
	case reuse : String
	case scheduleWeekdays : HKSPWeekdays
 }

 class SleepHealthUI.ForceDoubleZerosDateComponentsFormatter : NSDateComponentsFormatter /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c380001ce08 (0x4380001ce08) in binary!
	0x5d30  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x7a3c0001c7b0 (0x23c0001c7b0) in binary!
	0x5d18  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5c4fffc1280  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
	0x76cfffc1438  @objc ForceDoubleZerosDateComponentsFormatter.êu <stripped>

	// Swift methods
 }

 class SleepHealthUI.BriefOneHourIsSixtyMinDateComponentsFormatter : HKSHForceDoubleZerosDateComponentsFormatter {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a8c0001c800 (0x28c0001c800) in binary!
	0x5d68  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x6c580001ce28 (0x4580001ce28) in binary!
	0x5d50  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x64fffc06a8  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
	0x54fffc09a0  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.â«ËU[ <stripped>
 }

 class SleepHealthUI.ShorterDateComponentsFormatter : NSDateComponentsFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var options : HKTimePeriodStringFormatOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c940001cfd0 (0x4940001cfd0) in binary!
	0x6b84  @objc ShorterDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5c7c0001cfb0 (0x47c0001cfb0) in binary!
	0x7988  @objc ShorterDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x42cfffc4638  @objc ShorterDateComponentsFormatter.(null) <stripped>
	0x3f4fffc4fd0  @objc ShorterDateComponentsFormatter.UHâÂHãI	E <stripped>

	// Swift methods
 }

 class SleepHealthUI.ShortHourDateComponentsFormatter : NSDateComponentsFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var options : HKTimePeriodStringFormatOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5d040001d040 (0x5040001d040) in binary!
	0x6bf4  @objc ShortHourDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5cec0001d020 (0x4ec0001d020) in binary!
	0x79f8  @objc ShortHourDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x58cfffc14f8  @objc ShortHourDateComponentsFormatter.(null) <stripped>
	0x734fffc2060  @objc ShortHourDateComponentsFormatter. <stripped>

	// Swift methods
 }

 class SleepHealthUI.ShortMinuteDateComponentsFormatter : HKSHForceDoubleZerosDateComponentsFormatter {

	// Properties
	var options : HKTimePeriodStringFormatOptions // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ccc0001d008 (0x4cc0001d008) in binary!
	0x6bbc  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5cb40001cfe8 (0x4b40001cfe8) in binary!
	0x79c0  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x554fffc0e20  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
	0x6fcfffc1068  @objc ShortMinuteDateComponentsFormatter. <stripped>

	// Swift methods
 }

 class SleepHealthUI.AbbreviatedOneHourIsSixtyMinDateComponentsFormatter : HKSHBriefOneHourIsSixtyMinDateComponentsFormatter {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7aa40001c818 (0x2a40001c818) in binary!
	0x48000000c  @objc AbbreviatedOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
 }

 struct SleepHealthUI.DragState {

	// Properties
	let movement : Movement // +0x0
	var gestureState : GestureState // +0x1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastTouchAngle : ’´ // +0x8
	var lastTouchTime : Double // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var editingAngle : ’´ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var angularVelocity : ’´ // +0x20
	let dampeningZoneTimingFunction : CAMediaTimingFunction // +0x28
 }

 enum SleepHealthUI.GestureState {

	// Properties
	case began  
	case editing  
 }

 enum SleepHealthUI.Movement {

	// Properties
	case arc  
	case bedtime  
	case wakeUp  
 }

 enum SleepHealthUI.ScheduleStatus {

	// Properties
	case alarm  
 }

 class SleepHealthUI.SleepScheduleClock : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : Model // +0x8 (0x2a)
	var configuration : Configuration // +0x38 (0x188)
	let gestureRecognizer : UILongPressGestureRecognizer // +0x1c0 (0x8)
	let track : CAShapeLayer // +0x1c8 (0x8)
	let ring : CAShapeLayer // +0x1d0 (0x8)
	let grabber : RingGrabber // +0x1d8 (0x8)
	let dial : SleepScheduleClockDial // +0x1e0 (0x8)
	let bedtimeHand : SleepScheduleClockHand // +0x1e8 (0x8)
	let wakeUpHand : SleepScheduleClockHand // +0x1f0 (0x8)
	var majorFeedbackGenerator : FeedbackGenerator // +0x1f8 (0x28)
	var minorFeedbackGenerator : FeedbackGenerator // +0x220 (0x28)
	var dragState : DragState // +0x248 (0x30)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c5c0001cf98 (0x45c0001cf98) in binary!
	0x7b00  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x606a0001cfb0 (0x6a0001cfb0) in binary!
	0x605e  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x79440001c590 (0x1440001c590) in binary!
	0x7938  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x7b880001c568 (0x3880001c568) in binary!
	0x6d4d  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x6d410001c540 (0x5410001c540) in binary!
	0x5a20  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x7a940001c648 (0x2940001c648) in binary!
	0xd8000000c  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x5ff20001d080 (0x7f20001d080) in binary!
	0x601f  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x60130001c450 (0x130001c450) in binary!
	0x5fce  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x5fc20001cf90 (0x7c20001cf90) in binary!
	0x5fb6  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x6cc90001c418 (0x4c90001c418) in binary!
	0x6cbd  @objc SleepScheduleClock.(null) <stripped>
	0x6d80  variable initialization expression of QuickScheduleOverrideViewController.dataSource

	// Swift methods
	0x210e0  func <stripped> // modifyCoroutine 
 }

 class SleepHealthUI.RingGrabber : CAReplicatorLayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let texture : CAShapeLayer
	var isHalted : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activeAngleOffset : ’´
	var configuration : Configuration
	let tickInterval : Double
	var $__lazy_storage_$_totalInstances : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_transformAngle : {§

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5b240001cef0 (0x3240001cef0) in binary!
	0x5b18  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x79bc0001c448 (0x1bc0001c448) in binary!
	0x7818  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x79a40001c558 (0x1a40001c558) in binary!
	0x68000000c  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x5adc0001ce18 (0x2dc0001ce18) in binary!
	0x7980  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x5eea0001ca80 (0x6ea0001ca80) in binary!
	0x7168  @objc RingGrabber.(null) <stripped>

	// Swift methods
	0x267f0  func <stripped> // getter 
	0x26870  func <stripped> // getter 
	0x26fe0  func <stripped> // method 
 }

 struct SleepHealthUI.Configuration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lineLength : ’´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lineWidth : ’´ // +0x8
 }

 class SleepHealthUI.SleepScheduleClockDial : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var configuration : Configuration // +0x8 (0xc0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5adc0001ce18 (0x2dc0001ce18) in binary!
	0x7980  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x5eea0001ca80 (0x6ea0001ca80) in binary!
	0x7168  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x58dc0001cac0 (0xdc0001cac0) in binary!
	0x7950  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7a4fffd04f8  @objc SleepScheduleClockDial.(null) <stripped>
	0x4ccfffd08d0  @objc SleepScheduleClockDial.UHâÂ1¿]√Ñ <stripped>
	0x1940001cb30  @objc SleepScheduleClockDial.ã= <stripped>

	// Swift methods
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var backgroundColor : UIColor // +0x0
	var tickColor : UIColor // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tickOuterRadius : ’´ // +0x10
	var tickLineCap : CGLineCap // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tickWidth : ’´ // +0x20
	var minorTickMinuteIncrement : Int // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var majorTickLength : ’´ // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minorTickLength : ’´ // +0x38
	var labelMinorIncrement : Int // +0x40
	var labelMajorIncrement : Int // +0x48
	var labelMinorTextStyle : TextStyle // +0x50
	var labelMajorTextStyle : TextStyle // +0x58
	var labelMajorSmallerTextStyle : TextStyle // +0x60
	var maximumCharacterCountBeforeUsingSmallerTextStyle : Int // +0x68
	var labelMajorColor : UIColor // +0x70
	var labelMinorColor : UIColor // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var labelCenterRadius : ’´ // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var labelToIconSpacing : ’´ // +0x88
	var midnightIconSymbol : String // +0x90
	var midnightIconColor : UIColor // +0xa0
	var noonIconSymbol : String // +0xa8
	var noonIconColor : UIColor // +0xb8
 }

 class SleepHealthUI.FilledBackgroundSystemImageView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView
	let fillColor : UIColor

	// ObjC -> Swift bridged methods
	0x7130  variable initialization expression of SleepScheduleComponentsHeader.$__lazy_storage_$_wakeUpDayLabel
WARNING: couldn't find address 0x58a40001ca88 (0xa40001ca88) in binary!
	0x7918  @objc FilledBackgroundSystemImageView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x74fffd1dd0  @objc FilledBackgroundSystemImageView.(null) <stripped>
	0x494fffd2778  @objc FilledBackgroundSystemImageView.AUATSPHã[ù <stripped>

	// Swift methods
	0x2d1b0  class func FilledBackgroundSystemImageView.__allocating_init(systemImageName:configuration:fillColor:tintColor:) // init 
	0x2d5d0  func FilledBackgroundSystemImageView.setImageTintColor(_:) // method 
 }

 struct SleepHealthUI.DateDescription {

	// Properties
	var dayContext : DayContext // +0x0
	var dayPeriod : HKSPDayPeriod // +0x8
	var isSingleDayOverride : Bool // +0x10
 }

 enum SleepHealthUI.DayContext {

	// Properties
	case today  
	case tomorrow  
	case other  
 }

 class SleepHealthUI.ScheduleOccurrenceComponentsAccessibilityTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HKSHScheduleOccurrenceComponentsAccessibilityTableViewCellDelegate? // +0x8 (0x8)
	let component : Component // +0x10 (0x1)
	var model : SleepScheduleComponentsViewModel // +0x0 (0x0)
	var $__lazy_storage_$_alertImageView : UIImageView? // +0x0 (0x8)
	let titleLabel : UILabel // +0x5 (0x8)
	let datePicker : UIDatePicker // +0x71000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81940001cb30 (0x1940001cb30) in binary!
	0x78f8  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.(null) <stripped>
	0x78e0  variable initialization expression of ScheduleOccurrenceView.isUsingVerticalLayout
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x54cfffd4b48  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.(null) <stripped>
	0xfffd4bf0  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.ÉI <stripped>

	// Swift methods
	0x2e4b0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.getter // getter 
	0x2e4f0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.setter // setter 
	0x2e540  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.modify // modifyCoroutine 
	0x2e630  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.getter // getter 
	0x2e670  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.setter // setter 
	0x2e6c0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.modify // modifyCoroutine 
	0x2e710  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.timeComponents.getter // getter 
	0x2e9e0  func <stripped> // getter 
	0x2ec80  func <stripped> // method 
	0x2ed10  func <stripped> // method 
	0x2ee90  func <stripped> // method 
	0x2efe0  func <stripped> // method 
	0x2f490  func <stripped> // method 
	0x2f610  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.apply(_:) // method 
	0x2f9f0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.clockDidChange(_:) // method 
	0x2fe80  func <stripped> // method 
	0x30120  func <stripped> // method 
	0x305c0  func <stripped> // method 
 }

 enum SleepHealthUI.Component {

	// Properties
	case bedtime  
	case wakeUp  
 }

 class SleepHealthUI.ScheduleOccurrenceTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var viewModelProviding : ScheduleOccurrenceViewModelProviding
	var occurrenceView : ScheduleOccurrenceView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x815c0001caf8 (0x15c0001caf8) in binary!
	0x5a10  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x78b40001c468 (0xb40001c468) in binary!
	0x38000000c  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x59ec0001cc58 (0x1ec0001cc58) in binary!
	0x59e0  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>

	// Swift methods
	0x31830  func ScheduleOccurrenceTableViewCell.viewModelProviding.getter // getter 
	0x31900  func ScheduleOccurrenceTableViewCell.viewModelProviding.setter // setter 
	0x31970  func ScheduleOccurrenceTableViewCell.viewModelProviding.modify // modifyCoroutine 
 }

 class SleepHealthUI.ScheduleOccurrenceTitleTableViewHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleView : ScheduleOccurrenceTitleView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x59ec0001cc58 (0x1ec0001cc58) in binary!
	0x59e0  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x78840001c438 (0x840001c438) in binary!
	0xa8000000c  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x59bc0001ccf8 (0x1bc0001ccf8) in binary!
	0x7860  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>

	// Swift methods
	0x325e0  class func ScheduleOccurrenceTitleTableViewHeaderView.__allocating_init(titleText:subtitleText:screenSize:reuseIdentifier:) // init 
 }

 class SleepHealthUI.SleepScheduleComponentsHeader : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : SleepScheduleComponentsViewModel // +0x65745f5f (0x0)
	let bedtimeTitleLabel : UILabel // +0x0 (0x8)
	let wakeUpTitleLabel : UILabel // +0x0 (0x8)
	let bedtimeTimeLabel : UILabel // +0x0 (0x8)
	let wakeUpTimeLabel : UILabel // +0x0 (0x8)
	var $__lazy_storage_$_bedtimeDayLabel : UILabel? // +0x0 (0x8)
	var $__lazy_storage_$_wakeUpDayLabel : UILabel? // +0x0 (0x8)
	let sizingTimeLabel : UILabel // +0x0 (0x8)
	var isIn24HourTime : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x59bc0001ccf8 (0x1bc0001ccf8) in binary!
	0x7860  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x74c40001d048 (0x4c40001d048) in binary!
	0x74d8  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x783c0001d010 (0x3c0001d010) in binary!
	0x5da6  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x768c0001c2a0 (0x68c0001c2a0) in binary!
	0x7680  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x578c0001c970 (0x78c0001c970) in binary!
	0x7800  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x39cfffd9b88  @objc SleepScheduleComponentsHeader.(null) <stripped>
	0x37cfffd9eb0  @objc SleepScheduleComponentsHeader. <stripped>
	0x440001c9e0  @objc SleepScheduleComponentsHeader.u»Ë1± <stripped>
WARNING: couldn't find address 0x1cc34fffda930 (0x434fffda930) in binary!
	0x6040001c208  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x1c344fffda9b8 (0x344fffda9b8) in binary!
	0x48000000c  @objc SleepScheduleComponentsHeader.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.ScheduleOccurrenceSectionTableViewHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let headerView : ScheduleOccurrenceHeaderView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76540001d000 (0x6540001d000) in binary!
	0x5930  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x59240001cc60 (0x1240001cc60) in binary!
	0x77c8  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x434fffda930  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
	0x344fffda9b8  @objc ScheduleOccurrenceSectionTableViewHeaderView.â¬Aˇ‘Hâ«Ëá_ <stripped>

	// Swift methods
	0x36b20  func ScheduleOccurrenceSectionTableViewHeaderView.title.getter // getter 
	0x36bb0  func ScheduleOccurrenceSectionTableViewHeaderView.title.setter // setter 
	0x36c30  func ScheduleOccurrenceSectionTableViewHeaderView.title.modify // modifyCoroutine 
 }

 class SleepHealthUI.ScheduleOccurrenceComponentsEditTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var editView : SleepScheduleComponentsEditView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x80440001c9e0 (0x440001c9e0) in binary!
	0x58f8  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x76040001c208 (0x6040001c208) in binary!
	0x7790  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x34cfffe0398  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
	0x30cfffe0590  @objc ScheduleOccurrenceComponentsEditTableViewCell.Ñ <stripped>

	// Swift methods
	0x373f0  func ScheduleOccurrenceComponentsEditTableViewCell.editView.getter // getter 
	0x37490  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.getter // getter 
	0x374d0  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.setter // setter 
	0x37630  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.modify // modifyCoroutine 
 }

 class SleepHealthUI.TextTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : TextTableViewCellProviding

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xffff8218 in binary!
WARNING: couldn't find offset 0xffff8218 in binary!
	0x0  @objc TextTableViewCell.Ï¡ <stripped>
WARNING: couldn't find offset 0xffffa0b0 in binary!
WARNING: couldn't find offset 0xffffa0b0 in binary!
	0x0  @objc TextTableViewCell.j <stripped>
WARNING: couldn't find address 0x1c00000001 (0x1c00000001) in binary!
	0x6000000000  @objc TextTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x100000000000003 (0x3) in binary!
	0x1010001  @objc TextTableViewCell.(null) <stripped>

	// Swift methods
	0x39cd0  func TextTableViewCell.model.getter // getter 
	0x39d40  func TextTableViewCell.model.setter // setter 
	0x39da0  func TextTableViewCell.model.modify // modifyCoroutine 
	0x39e10  func <stripped> // method 
	0x39f40  func <stripped> // method 
 }

 struct SleepHealthUI.Conflict {

	// Properties
	let rawValue : Int // +0x0
 }

 struct SleepHealthUI.SleepScheduleComponentsViewModel {

	// Properties
	var alarmEnabled : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gregorianCalendar : }©
	var timeFormatter : NSDateFormatter
	var validScheduleRange : HKSPSleepScheduleRange?
	var includeDayLabelsInHeader : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var roundedBedtimeComponents : °
WARNING: couldn't find address 0x0 (0x0) in binary!
	var roundedWakeUpComponents : °
WARNING: couldn't find address 0x0 (0x0) in binary!
	var wakeUpComponents : °
	var crossesDayBoundary : Bool
	var dayLabelFormatter : NSDateFormatter
	var bedtimeShowsAlert : Bool
	var wakeUpShowsAlert : Bool
	var conflict : Conflict
	var dayBeforeWakeUpDay : String?
	var wakeUpDay : String?
	var roundedFormattedBedtimeTime : String?
	var roundedFormattedWakeUpTime : String?
 }

 class SleepHealthUI.RelativeWeekdayFormatter : NSDateFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var $__lazy_storage_$_relativeDateFormatter : NSDateFormatter?
	var $__lazy_storage_$_nonRelativeDateFormatter : NSDateFormatter?
	var $__lazy_storage_$_weekdayFormatter : NSDateFormatter?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x58cc0001c4f8 (0xcc0001c4f8) in binary!
	0x75d8  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x58b40001cbf0 (0xb40001cbf0) in binary!
	0x7758  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe0740  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0xc4fffe0928  @objc RelativeWeekdayFormatter.(null) <stripped>

	// Swift methods
	0x3cf50  func <stripped> // getter 
	0x3cff0  func <stripped> // getter 
	0x3d0d0  func <stripped> // getter 
 }

 class SleepHealthUI.TonePickerStyleProvider : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75ac0001c320 (0x5ac0001c320) in binary!
	0x1c8000000c  @objc TonePickerStyleProvider.(null) <stripped>
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmVolumeTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let configuration : Configuration
	let slider : UISlider

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e640001c800 (0x6640001c800) in binary!
	0x5718  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x75bc0001c170 (0x5bc0001c170) in binary!
	0x88000000c  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x56f40001ca30 (0x6f40001ca30) in binary!
	0x7598  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>

	// Swift methods
	0x3dc30  func ScheduleOccurrenceAlarmVolumeTableViewCell.alarmVolume.getter // getter 
	0x3dcd0  func <stripped> // method 
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var backgroundColor : UIColor // +0x0
	var sliderValueImageColor : UIColor // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var horizontalMargin : ’´ // +0x10
 }

 struct SleepHealthUI.Model {

	// Properties
	var bedtime : TimeOfDay // +0x0
	var wakeUp : TimeOfDay // +0x10
	var timeInBedGoal : Double? // +0x20
	var alarmEnabled : Bool // +0x29
 }

 struct SleepHealthUI.TimeOfDay {

	// Properties
	var hour : Int // +0x0
	var minute : Int // +0x8
 }

 class SleepHealthUI.SleepScheduleClockHand : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let background : CAShapeLayer
	var symbol : Symbol
	let image : UIImageView
	var configuration : Configuration

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x56f40001ca30 (0x6f40001ca30) in binary!
	0x7598  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x76500001cdf8 (0x6500001cdf8) in binary!
	0x7786  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x5b230001bfd8 (0x3230001bfd8) in binary!
	0x762c  @objc SleepScheduleClockHand.(null) <stripped>
	0x7550  variable initialization expression of ScheduleOccurrenceAlarmVolumeTableViewCell.slider
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xe4fffef088  @objc SleepScheduleClockHand.(null) <stripped>
	0x49c0001c680  @objc SleepScheduleClockHand.Í` <stripped>
WARNING: couldn't find address 0x1c99cfffef748 (0x19cfffef748) in binary!
	0x27a0001c610  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x1c0acfffef860 (0xacfffef860) in binary!
	0x38000000c  @objc SleepScheduleClockHand.(null) <stripped>

	// Swift methods
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var backgroundColor : UIColor // +0x0
	var highlightedBackgroundColor : UIColor // +0x8
	var iconColor : UIColor // +0x10
	var highlightedIconColor : UIColor // +0x18
	var filter : CAFilter? // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var iconPointSize : ’´ // +0x28
 }

 enum SleepHealthUI.Symbol {

	// Properties
	case bedtime  
	case wakeUpAlarmEnabled  
	case wakeUpAlarmDisabled  
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var ringGoalMetColor : UIColor // +0x0
	var ringGoalMissColor : UIColor // +0x8
	var trackColor : UIColor // +0x10
	var grabberGoalMetColor : UIColor // +0x18
	var grabberGoalMissColor : UIColor // +0x20
	var ringShadowColor : UIColor // +0x28
	var ringShadowOffset : CGSize // +0x30
	var ringShadowOpacity : Float // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ’´ // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ringInset : ’´ // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ringWidth : ’´ // +0x58
	var handSize : CGSize // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handIconPointSize : ’´ // +0x70
WARNING: couldn't find address 0x0 (0x0) in binary!
	var grabberLineWidth : ’´ // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var grabberLineLength : ’´ // +0x80
	var gestureStartDelay : Double // +0x88
	var increment : Double // +0x90
	var minimumTimeInBed : Double // +0x98
	var maximumTimeInBed : Double // +0xa0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var majorFeedbackAngularVelocityMinimum : ’´ // +0xa8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minorFeedbackAngularVelocityMaximum : ’´ // +0xb0
	var majorFeedbackHourInterval : Int // +0xb8
	var minorFeedbackMinuteInterval : Int // +0xc0
	var dialConfiguration : Configuration // +0xc8
 }

 struct SleepHealthUI.ScheduleOccurrenceViewModel {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bedtimeComponents : ·ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wakeUpComponents : ·ü
	let weekdays : HKSPWeekdays
	let alarmState : AlarmState
	let showWeekdaysText : Bool
	let weekdaysTextColor : UIColor?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var relativeWakeUpDate : †
WARNING: couldn't find address 0x0 (0x0) in binary!
	var relativeBedtimeDate : †
	let relativeWeekdayFormatter : RelativeWeekdayFormatter
 }

 enum SleepHealthUI.AlarmState {

	// Properties
	case enabled  
	case snoozed  
	case disabled  
 }

 class SleepHealthUI.AlarmPreviewPlayer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var configuration : TLAlertConfiguration
	var alert : TLAlert?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alarmConfigurationDidChangeObserver : Y®

	// Swift methods
	0x4a340  class func AlarmPreviewPlayer.__allocating_init(model:) // init 
	0x4ad30  func AlarmPreviewPlayer.play() // method 
	0x4b150  func AlarmPreviewPlayer.stop() // method 
 }

 class SleepHealthUI.ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell : HKSHScheduleOccurrenceComponentsAccessibilityTableViewCell {

	// Properties
	let dayLabel : UILabel // +0x6569665f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7dcc0001c768 (0x5cc0001c768) in binary!
	0x7530  @objc ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x19cfffef748  @objc ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell.(null) <stripped>

	// Swift methods
	0x4bfa0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x549c0001c680 (0x49c0001c680) in binary!
	0x5660  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
WARNING: couldn't find address 0x5a7a0001c610 (0x27a0001c610) in binary!
	0x74f8  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x164fffefc90  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
	0xfffefec8  @objc ScheduleOccurrenceHeaderView.ˇˇf)Öp¸ˇˇHãµ¸ˇˇLã5∏¿ <stripped>

	// Swift methods
	0x4c700  func <stripped> // getter 
	0x4cba0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceDeleteTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : Model

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d740001c710 (0x5740001c710) in binary!
	0x5628  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x74cc0001c080 (0x4cc0001c080) in binary!
	0x38000000c  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7d440001c6e0 (0x5440001c6e0) in binary!
	0x55f8  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>

	// Swift methods
	0x4cfb0  func <stripped> // method 
 }

 struct SleepHealthUI.Model {

	// Properties
	var isSingleDayOverride : Bool // +0x0
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmSoundTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d440001c6e0 (0x5440001c6e0) in binary!
	0x55f8  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x749c0001c050 (0x49c0001c050) in binary!
	0x38000000c  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7d140001c6b0 (0x5140001c6b0) in binary!
	0x55c8  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>

	// Swift methods
	0x4d780  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmEnabledTableViewCell : HKSwitchTableViewCell /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d140001c6b0 (0x5140001c6b0) in binary!
	0x55c8  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x746c0001c020 (0x46c0001c020) in binary!
	0xd8000000c  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x72bc0001bea8 (0x2bc0001bea8) in binary!
	0x72b0  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>

	// Swift methods
	0x4de20  func <stripped> // method 
 }

 class SleepHealthUI.QuickScheduleManagementViewController : UINavigationController /System/Library/Frameworks/UIKit.framework/UIKit, OnboardPromptViewControllerDelegate,  EnableSchedulePromptViewControllerDelegate {

	// Properties
	let sleepStore : HKSPSleepStore // +0x8 (0x8)
	var sleepDelegate : weak HKSHQuickScheduleManagementViewControllerDelegate? // +0x10 (0x8)
	let sleepScheduleProvider : SleepScheduleProvider // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gregorianCalendar : }© // +0x0 (0x0)
	let featureAvailability : HKFeatureAvailabilityProviding // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var appStateObserver : Y® // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72bc0001bea8 (0x2bc0001bea8) in binary!
	0x72b0  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x59b20001be80 (0x1b20001be80) in binary!
	0x5a14  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x55740001cdd0 (0x5740001cdd0) in binary!
	0x7418  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x74d80001be40 (0x4d80001be40) in binary!
	0x7606  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x74b80001bef0 (0x4b80001bef0) in binary!
	0x7ec1  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x552c0001cda8 (0x52c0001cda8) in binary!
	0x59b4  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x73c40001bf78 (0x3c40001bf78) in binary!
	0x38000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x59220001bc78 (0x1220001bc78) in binary!
	0x5916  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x73940001c7b8 (0x3940001c7b8) in binary!
	0x58000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x737c0001c4d8 (0x37c0001c4d8) in binary!
	0x4d22  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x4d160001bd88 (0x5160001bd88) in binary!
	0x71c0  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x734c0001bf00 (0x34c0001bf00) in binary!
	0x38000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x73340001cb08 (0x3340001cb08) in binary!
	0x52a8  @objc QuickScheduleManagementViewController.(null) <stripped>

	// Swift methods
	0x4f280  func QuickScheduleManagementViewController.sleepDelegate.getter // getter 
	0x4f300  func QuickScheduleManagementViewController.sleepDelegate.setter // setter 
	0x4f350  func QuickScheduleManagementViewController.sleepDelegate.modify // modifyCoroutine 
	0x4f4e0  class func QuickScheduleManagementViewController.__allocating_init(sleepStore:) // init 
	0x4fc20  class func <stripped> // init 
 }

 class SleepHealthUI.SleepScheduleProvider : NSObject /usr/lib/libobjc.A.dylib, SleepScheduleProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let currentSchedulePublisher : c´
WARNING: couldn't find address 0x0 (0x0) in binary!
	let currentGoalPublisher : u´
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventRecordPublisher : c†
	let sleepStore : HKSPSleepStore
	var query : HKQuery?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x737c0001c4d8 (0x37c0001c4d8) in binary!
	0x4d22  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x4d160001bd88 (0x5160001bd88) in binary!
	0x71c0  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x734c0001bf00 (0x34c0001bf00) in binary!
	0x38000000c  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x73340001cb08 (0x3340001cb08) in binary!
	0x52a8  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x546c0001c7a8 (0x46c0001c7a8) in binary!
	0x58000000c  @objc SleepScheduleProvider.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.TintedTitleTrayButton : OBTrayButton /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73340001cb08 (0x3340001cb08) in binary!
	0x52a8  @objc TintedTitleTrayButton.(null) <stripped>
WARNING: couldn't find address 0x546c0001c7a8 (0x46c0001c7a8) in binary!
	0x58000000c  @objc TintedTitleTrayButton.(null) <stripped>
WARNING: couldn't find address 0x73c80001be00 (0x3c80001be00) in binary!
	0x72f8  @objc TintedTitleTrayButton.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.EnableSchedulePromptViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	var delegate : EnableSchedulePromptViewControllerDelegate // +0x8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73800001bdb8 (0x3800001bdb8) in binary!
	0x72b0  @objc EnableSchedulePromptViewController.(null) <stripped>
	0x7298  @objc EnableSchedulePromptViewController.HâﬁË∞ÓˇˇE1ˇ1€Lâ¯Hâ⁄Hçeÿ[A\A]A^A_]√Hç=ﬂ <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x704ffff9c10  @objc EnableSchedulePromptViewController.(null) <stripped>
	0x52cffff9c38  @objc EnableSchedulePromptViewController.#B <stripped>

	// Swift methods
 }

 class SleepHealthUI.OnboardPromptViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	var delegate : OnboardPromptViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73c80001be00 (0x3c80001be00) in binary!
	0x72f8  @objc OnboardPromptViewController.(null) <stripped>
WARNING: couldn't find address 0x72ec0001cd70 (0x2ec0001cd70) in binary!
	0x8040  @objc OnboardPromptViewController.(null) <stripped>
WARNING: couldn't find address 0x72d40001be88 (0x2d40001be88) in binary!
	0x48000000c  @objc OnboardPromptViewController.(null) <stripped>
WARNING: couldn't find address 0x73800001bdb8 (0x3800001bdb8) in binary!
	0x72b0  @objc OnboardPromptViewController.(null) <stripped>
	0x7298  @objc OnboardPromptViewController.HâﬁË∞ÓˇˇE1ˇ1€Lâ¯Hâ⁄Hçeÿ[A\A]A^A_]√Hç=ﬂ <stripped>

	// Swift methods
	0x53270  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var viewModel : ScheduleOccurrenceViewModel // +0x0 (0x0)
	let weekdaysLabel : UILabel // +0x0 (0x8)
	let bedtimeComponentView : ScheduleComponentView // +0x0 (0x8)
	let wakeUpComponentView : ScheduleComponentView // +0x0 (0x8)
	var currentLayoutConstraints : [NSLayoutConstraint] // +0x0 (0x8)
	var isUsingVerticalLayout : Bool? // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70ec0001be60 (0xec0001be60) in binary!
	0x53c8  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x8bfc0001c360 (0x3fc0001c360) in binary!
	0x6a60  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x57ca0001c360 (0x7ca0001c360) in binary!
	0x7248  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x51bc0001c3a0 (0x1bc0001c3a0) in binary!
	0x7230  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x69cffffbf18  @objc ScheduleOccurrenceView.(null) <stripped>
	0x5acffffc3a0  @objc ScheduleOccurrenceView.5€? <stripped>
	0x3340001c670  @objc ScheduleOccurrenceView.^A_]√Hâ÷Ë}G <stripped>
WARNING: couldn't find address 0x1c2c4ffffd030 (0x2c4ffffd030) in binary!
	0x14c0001c330  @objc ScheduleOccurrenceView.(null) <stripped>

	// Swift methods
	0x56770  func ScheduleOccurrenceView.viewModel.getter // getter 
	0x567e0  func ScheduleOccurrenceView.viewModel.setter // setter 
	0x56840  func ScheduleOccurrenceView.viewModel.modify // modifyCoroutine 
	0x568b0  func ScheduleOccurrenceView.bedtimeTimeText.getter // getter 
	0x568d0  func ScheduleOccurrenceView.wakeUpTimeText.getter // getter 
	0x56990  func ScheduleOccurrenceView.wakeUpTitleText.getter // getter 
	0x569f0  func <stripped> // getter 
	0x57460  func <stripped> // method 
	0x57550  func <stripped> // method 
	0x578d0  func <stripped> // method 
	0x57c40  func <stripped> // method 
	0x58770  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleComponentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let timeLabel : UILabel // +0x10 (0x8)
	let dayLabel : UILabel // +0x18 (0x8)
	var $__lazy_storage_$_timeFont : UIFont? // +0x20 (0x8)
	var $__lazy_storage_$_notSetTimeFont : UIFont? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70840001bdf8 (0x840001bdf8) in binary!
	0x5360  @objc ScheduleComponentView.(null) <stripped>
WARNING: couldn't find address 0x51840001c368 (0x1840001c368) in binary!
	0x71f8  @objc ScheduleComponentView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2c4ffffd030  @objc ScheduleComponentView.(null) <stripped>
	0x574ffffd1a8  @objc ScheduleComponentView.ˇH9tHãΩ˝ˇˇËˆ` <stripped>

	// Swift methods
	0x58ed0  func <stripped> // getter 
	0x58f00  func <stripped> // getter 
	0x594a0  func <stripped> // method 
	0x596b0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceTitleView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let title : UILabel // +0x8 (0x8)
	let subtitle : ScheduleOccurrenceHeaderView // +0x10 (0x8)
	var topConstraint : NSLayoutConstraint? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x53340001c670 (0x3340001c670) in binary!
	0x574e  @objc ScheduleOccurrenceTitleView.(null) <stripped>
WARNING: couldn't find address 0x514c0001c330 (0x14c0001c330) in binary!
	0x71c0  @objc ScheduleOccurrenceTitleView.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x4533a4d4152  @objc ScheduleOccurrenceTitleView.(null) <stripped>
WARNING: couldn't find address 0x5568746c61654870 (0x46c61654870) in binary!
	0x56c533a5443  @objc ScheduleOccurrenceTitleView.(null) <stripped>

	// Swift methods
	0x5a340  class func ScheduleOccurrenceTitleView.__allocating_init(titleText:subtitleText:screenSize:) // init 
 }

 enum __C.HKSPDayPeriod { }

 struct __C.HKTimePeriodStringFormatOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.HKSPWeekdays {

	// Properties
	let rawValue : UInt
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.ComparisonResult { }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ’´
 }

 struct __C.TraitKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FeatureKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.HKSPSleepLaunchURLRoute {

	// Properties
	var _rawValue : NSString
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CGLineCap { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ’´
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ’´
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ’´
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ’´
 }
