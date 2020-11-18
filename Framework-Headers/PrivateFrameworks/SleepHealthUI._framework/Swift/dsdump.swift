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
	let alarmConfigurationDidChange : ÁØ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let modelWasEdited : øØ // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let validScheduleRangePublisher : ≈Ø // +0x20 (0x8)
	var originalOccurrence : HKSPSleepScheduleOccurrence // +0x28 (0x8)
	let isAdding : Bool // +0x30 (0x1)
	let isSingleDayOverride : Bool // +0x31 (0x1)
	var otherOccurrenceDays : HKSPWeekdays // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sleepDurationGoalPublisher : uØ // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sleepSchedulePublisher : cØ // +0x48 (0x8)
	let pairedWatchSupportsSleep : Bool // +0x50 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gregorianCalendar : }≠ // +0x6100085 (0x0)
	var mutableOccurrence : HKSPMutableSleepScheduleOccurrence // +0x0 (0x8)

	// Swift methods
	0x8d80  func ScheduleOccurrenceEditModel.originalOccurrence.getter // getter 
	0x8e50  func ScheduleOccurrenceEditModel.otherOccurrenceDays.getter // getter 
	0x9060  class func ScheduleOccurrenceEditModel.__allocating_init(occurrence:isAdding:isSingleDayOverride:weekdaysWithExistingOccurrences:sleepDurationGoalPublisher:sleepSchedulePublisher:pairedWatchSupportsSleep:gregorianCalendar:) // init 
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
WARNING: couldn't find address 0x5fe40001f5b0 (0x7e40001f5b0) in binary!
	0x63fe  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x63f20001f218 (0x3f20001f218) in binary!
	0x7e60  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x63da0001f2c8 (0x3da0001f2c8) in binary!
	0x7cb0  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7ca40001ebf8 (0x4a40001ebf8) in binary!
	0x7c98  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7c8c0001ebd0 (0x48c0001ebd0) in binary!
	0x5da8  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x7e0c0001ec60 (0x60c0001ec60) in binary!
	0x28000000c  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x86840001f2c0 (0x6840001f2c0) in binary!
	0x5f48  @objc SleepScheduleComponentsEditView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4f4fffb55c0  @objc SleepScheduleComponentsEditView.(null) <stripped>
	0xfffb5848  @objc SleepScheduleComponentsEditView.åE <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x144fffb6e30  @objc SleepScheduleComponentsEditView.(null) <stripped>
	0x184fffb7818  @objc SleepScheduleComponentsEditView.Hç[  <stripped>

	// Swift methods
	0xc170  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.getter // getter 
	0xc230  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.setter // setter 
	0xc2a0  func SleepScheduleComponentsEditView.includeDayLabelsInHeader.modify // modifyCoroutine 
	0xc410  func <stripped> // getter 
	0xea40  func <stripped> // method 
	0xf260  func <stripped> // method 
	0xf6c0  func <stripped> // method 
	0xf8c0  func <stripped> // method 
 }

 class SleepHealthUI.EditScheduleLinkTableViewCell : HKSHTextTableViewCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x86840001f2c0 (0x6840001f2c0) in binary!
	0x5f48  @objc EditScheduleLinkTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4f4fffb55c0  @objc EditScheduleLinkTableViewCell.(null) <stripped>

	// Swift methods
 }

 struct SleepHealthUI.Model {

	// Properties
	var title : String // +0x0
	var textColor : UIColor? // +0x10
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmSnoozeTableViewCell : HKSwitchTableViewCell /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x86640001f2a0 (0x6640001f2a0) in binary!
	0x5f28  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7dbc0001ec10 (0x5bc0001ec10) in binary!
	0x58000000c  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x5f040001f4d0 (0x7040001f4d0) in binary!
	0x631e  @objc ScheduleOccurrenceAlarmSnoozeTableViewCell.(null) <stripped>

	// Swift methods
	0x10d90  func <stripped> // method 
 }

 class SleepHealthUI.SleepScheduleClockCaption : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let labels : [UILabel]
	var message : Message

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f040001f4d0 (0x7040001f4d0) in binary!
	0x631e  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7bf40001eb30 (0x3f40001eb30) in binary!
	0x5d10  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7d740001ebc8 (0x5740001ebc8) in binary!
	0x118000000c  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x5ebc0001f488 (0x6bc0001f488) in binary!
	0x7d50  @objc SleepScheduleClockCaption.(null) <stripped>
WARNING: couldn't find address 0x7f4a0001f388 (0x74a0001f388) in binary!
	0x62be  @objc SleepScheduleClockCaption.(null) <stripped>

	// Swift methods
	0x127b0  func <stripped> // getter 
	0x129b0  func <stripped> // method 
	0x12bc0  func <stripped> // method 
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
	var alarmConfigurationObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var modelEditObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var eventRecordChangeObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduleChangeObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sleepDurationGoalObserver : Y¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var validScheduleRangeObserver : Y¨
	var sleepScheduleProvider : SleepScheduleProviding
	var modelHasChanged : Bool
	var tonePickerStyleProvider : TKTonePickerStyleProvider?
	var vibrationPickerStyleProvider : TKVibrationPickerStyleProvider?
	var delegate : QuickScheduleOverrideViewControllerDelegate
	var dataSource : DataSource

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ebc0001f488 (0x6bc0001f488) in binary!
	0x7d50  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7f4a0001f388 (0x74a0001f388) in binary!
	0x62be  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7df00001eac8 (0x5f00001eac8) in binary!
	0x7d20  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62b40001eaa8 (0x2b40001eaa8) in binary!
	0x56ca  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62bb0001ea80 (0x2bb0001ea80) in binary!
	0x62bd  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62b10001ea58 (0x2b10001ea58) in binary!
	0x62b3  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x62a70001ea30 (0x2a70001ea30) in binary!
	0x629b  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x629d0001f328 (0x29d0001f328) in binary!
	0x629c  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7c9c0001eaf0 (0x49c0001eaf0) in binary!
	0xc8000000c  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x56460001e940 (0x6460001e940) in binary!
	0x563a  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x562e0001e918 (0x62e0001e918) in binary!
	0x5622  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x64210001e8f0 (0x4210001e8f0) in binary!
	0x61ce  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x61c20001f648 (0x1c20001f648) in binary!
	0x61b6  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x61aa0001f0b0 (0x1aa0001f0b0) in binary!
	0x7c18  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x7c0c0001f210 (0x40c0001f210) in binary!
	0x7c00  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc2678  @objc QuickScheduleOverrideViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2f4fffc1960  @objc QuickScheduleOverrideViewController.(null) <stripped>

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
WARNING: couldn't find address 0x6be80001f058 (0x3e80001f058) in binary!
	0x5cf0  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x79ec0001ea00 (0x1ec0001ea00) in binary!
	0x5cd8  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x14fffc2050  @objc ForceDoubleZerosDateComponentsFormatter.(null) <stripped>
	0x1bcfffc2208  @objc ForceDoubleZerosDateComponentsFormatter.â„HÉ¿HÉ‡H)√Hâ‹Hãùî <stripped>

	// Swift methods
 }

 class SleepHealthUI.BriefOneHourIsSixtyMinDateComponentsFormatter : HKSHForceDoubleZerosDateComponentsFormatter {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a3c0001ea50 (0x23c0001ea50) in binary!
	0x5d28  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x6c080001f078 (0x4080001f078) in binary!
	0x5d10  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2b4fffc1478  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
	0x2a4fffc1770  @objc BriefOneHourIsSixtyMinDateComponentsFormatter.√UHâÂH=lX <stripped>
 }

 class SleepHealthUI.ShorterDateComponentsFormatter : NSDateComponentsFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var options : HKTimePeriodStringFormatOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c540001f220 (0x4540001f220) in binary!
	0x6b34  @objc ShorterDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5c3c0001f200 (0x43c0001f200) in binary!
	0x7938  @objc ShorterDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x67cfffc5408  @objc ShorterDateComponentsFormatter.(null) <stripped>
	0x644fffc5da0  @objc ShorterDateComponentsFormatter.UHâÂAWAVATSHÉÏHâ}ÿIâ«Hç=] <stripped>

	// Swift methods
 }

 class SleepHealthUI.ShortHourDateComponentsFormatter : NSDateComponentsFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var options : HKTimePeriodStringFormatOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5cc40001f290 (0x4c40001f290) in binary!
	0x6ba4  @objc ShortHourDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5cac0001f270 (0x4ac0001f270) in binary!
	0x79a8  @objc ShortHourDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7dcfffc22c8  @objc ShortHourDateComponentsFormatter.(null) <stripped>
	0x184fffc2e30  @objc ShortHourDateComponentsFormatter.SPIâ∆1ˇËÏ5 <stripped>

	// Swift methods
 }

 class SleepHealthUI.ShortMinuteDateComponentsFormatter : HKSHForceDoubleZerosDateComponentsFormatter {

	// Properties
	var options : HKTimePeriodStringFormatOptions // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c8c0001f258 (0x48c0001f258) in binary!
	0x6b6c  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x5c740001f238 (0x4740001f238) in binary!
	0x7970  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7a4fffc1bf0  @objc ShortMinuteDateComponentsFormatter.(null) <stripped>
	0x14cfffc1e38  @objc ShortMinuteDateComponentsFormatter.Éƒ[A]A^]ÈÆ: <stripped>

	// Swift methods
 }

 class SleepHealthUI.AbbreviatedOneHourIsSixtyMinDateComponentsFormatter : HKSHBriefOneHourIsSixtyMinDateComponentsFormatter {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a540001ea68 (0x2540001ea68) in binary!
	0x48000000c  @objc AbbreviatedOneHourIsSixtyMinDateComponentsFormatter.(null) <stripped>
 }

 struct SleepHealthUI.DragState {

	// Properties
	let movement : Movement // +0x0
	var gestureState : GestureState // +0x1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastTouchAngle : ’Ø // +0x8
	var lastTouchTime : Double // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var editingAngle : ’Ø // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var angularVelocity : ’Ø // +0x20
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
WARNING: couldn't find address 0x5c1c0001f1e8 (0x41c0001f1e8) in binary!
	0x7ab0  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x602a0001f200 (0x2a0001f200) in binary!
	0x601e  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x78f40001e7e0 (0xf40001e7e0) in binary!
	0x78e8  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x7b380001e7b8 (0x3380001e7b8) in binary!
	0x6cfd  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x6cf10001e790 (0x4f10001e790) in binary!
	0x59e0  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x7a440001e898 (0x2440001e898) in binary!
	0xd8000000c  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x5fb20001f2d0 (0x7b20001f2d0) in binary!
	0x5fdf  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x5fd30001e6a0 (0x7d30001e6a0) in binary!
	0x5f8e  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x5f820001f1e0 (0x7820001f1e0) in binary!
	0x5f76  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x6c790001e668 (0x4790001e668) in binary!
	0x6c6d  @objc SleepScheduleClock.(null) <stripped>
WARNING: couldn't find address 0x6d3c0001e640 (0x53c0001e640) in binary!
	0x6d30  @objc SleepScheduleClock.(null) <stripped>

	// Swift methods
	0x20c50  func <stripped> // modifyCoroutine 
 }

 class SleepHealthUI.RingGrabber : CAReplicatorLayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let texture : CAShapeLayer
	var isFrozen : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activeAngleOffset : ’Ø
	var configuration : Configuration
	let tickInterval : Double
	var $__lazy_storage_$_totalInstances : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_transformAngle : {®

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ae40001f140 (0x2e40001f140) in binary!
	0x5ad8  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x796c0001e698 (0x16c0001e698) in binary!
	0x77c8  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x79540001e7a8 (0x1540001e7a8) in binary!
	0x68000000c  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x5a9c0001f068 (0x29c0001f068) in binary!
	0x7930  @objc RingGrabber.(null) <stripped>
WARNING: couldn't find address 0x5eaa0001ecd0 (0x6aa0001ecd0) in binary!
	0x7118  @objc RingGrabber.(null) <stripped>

	// Swift methods
	0x26360  func <stripped> // getter 
	0x263e0  func <stripped> // getter 
	0x26b50  func <stripped> // method 
 }

 struct SleepHealthUI.Configuration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lineLength : ’Ø // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lineWidth : ’Ø // +0x8
 }

 class SleepHealthUI.SleepScheduleClockDial : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var configuration : Configuration // +0x8 (0xc0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5a9c0001f068 (0x29c0001f068) in binary!
	0x7930  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x5eaa0001ecd0 (0x6aa0001ecd0) in binary!
	0x7118  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x589c0001ed10 (0x9c0001ed10) in binary!
	0x7900  @objc SleepScheduleClockDial.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1f4fffd12b8  @objc SleepScheduleClockDial.(null) <stripped>
	0x71cfffd1690  @objc SleepScheduleClockDial.]√f.Ñ <stripped>
	0x1440001ed80  @objc SleepScheduleClockDial.√Ä <stripped>

	// Swift methods
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var backgroundColor : UIColor // +0x0
	var tickColor : UIColor // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tickOuterRadius : ’Ø // +0x10
	var tickLineCap : CGLineCap // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tickWidth : ’Ø // +0x20
	var minorTickMinuteIncrement : Int // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var majorTickLength : ’Ø // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minorTickLength : ’Ø // +0x38
	var labelMinorIncrement : Int // +0x40
	var labelMajorIncrement : Int // +0x48
	var labelMinorTextStyle : TextStyle // +0x50
	var labelMajorTextStyle : TextStyle // +0x58
	var labelMajorSmallerTextStyle : TextStyle // +0x60
	var maximumCharacterCountBeforeUsingSmallerTextStyle : Int // +0x68
	var labelMajorColor : UIColor // +0x70
	var labelMinorColor : UIColor // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var labelCenterRadius : ’Ø // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var labelToIconSpacing : ’Ø // +0x88
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
WARNING: couldn't find address 0x5a4c0001f018 (0x24c0001f018) in binary!
	0x70e0  @objc FilledBackgroundSystemImageView.(null) <stripped>
WARNING: couldn't find address 0x58640001ecd8 (0x640001ecd8) in binary!
	0x78c8  @objc FilledBackgroundSystemImageView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2c4fffd2b90  @objc FilledBackgroundSystemImageView.(null) <stripped>
	0x6e4fffd3538  @objc FilledBackgroundSystemImageView.ƒ[]√ <stripped>

	// Swift methods
	0x2cd10  class func FilledBackgroundSystemImageView.__allocating_init(systemImageName:configuration:fillColor:tintColor:) // init 
	0x2d130  func FilledBackgroundSystemImageView.setImageTintColor(_:) // method 
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
	let datePicker : UIDatePicker // +0x70000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81440001ed80 (0x1440001ed80) in binary!
	0x78a8  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x59fc0001efc8 (0x1fc0001efc8) in binary!
	0x7890  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x79cfffd58f8  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.(null) <stripped>
	0xfffd59a0  @objc ScheduleOccurrenceComponentsAccessibilityTableViewCell.ˇ‘Hâﬂˇ%≠ <stripped>

	// Swift methods
	0x2e010  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.getter // getter 
	0x2e050  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.setter // setter 
	0x2e0a0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.delegate.modify // modifyCoroutine 
	0x2e190  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.getter // getter 
	0x2e1d0  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.setter // setter 
	0x2e220  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.model.modify // modifyCoroutine 
	0x2e270  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.timeComponents.getter // getter 
	0x2e540  func <stripped> // getter 
	0x2e7e0  func <stripped> // method 
	0x2e870  func <stripped> // method 
	0x2e9f0  func <stripped> // method 
	0x2eb40  func <stripped> // method 
	0x2eff0  func <stripped> // method 
	0x2f170  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.apply(_:) // method 
	0x2f550  func ScheduleOccurrenceComponentsAccessibilityTableViewCell.clockDidChange(_:) // method 
	0x2f9e0  func <stripped> // method 
	0x2fc80  func <stripped> // method 
	0x30120  func <stripped> // method 
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
WARNING: couldn't find address 0x810c0001ed48 (0x10c0001ed48) in binary!
	0x59d0  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x78640001e6b8 (0x640001e6b8) in binary!
	0x38000000c  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x59ac0001eea8 (0x1ac0001eea8) in binary!
	0x59a0  @objc ScheduleOccurrenceTableViewCell.(null) <stripped>

	// Swift methods
	0x31380  func ScheduleOccurrenceTableViewCell.viewModelProviding.getter // getter 
	0x31450  func ScheduleOccurrenceTableViewCell.viewModelProviding.setter // setter 
	0x314c0  func ScheduleOccurrenceTableViewCell.viewModelProviding.modify // modifyCoroutine 
 }

 class SleepHealthUI.ScheduleOccurrenceTitleTableViewHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleView : ScheduleOccurrenceTitleView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x59ac0001eea8 (0x1ac0001eea8) in binary!
	0x59a0  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x78340001e688 (0x340001e688) in binary!
	0xa8000000c  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x597c0001ef48 (0x17c0001ef48) in binary!
	0x7810  @objc ScheduleOccurrenceTitleTableViewHeaderView.(null) <stripped>

	// Swift methods
	0x32120  class func ScheduleOccurrenceTitleTableViewHeaderView.__allocating_init(titleText:subtitleText:screenSize:reuseIdentifier:) // init 
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
WARNING: couldn't find address 0x597c0001ef48 (0x17c0001ef48) in binary!
	0x7810  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x74740001f298 (0x4740001f298) in binary!
	0x7488  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x77ec0001f260 (0x7ec0001f260) in binary!
	0x5d66  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x763c0001e4f0 (0x63c0001e4f0) in binary!
	0x7630  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x574c0001ebc0 (0x74c0001ebc0) in binary!
	0x77b0  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5ecfffda928  @objc SleepScheduleComponentsHeader.(null) <stripped>
	0x5ccfffdac50  @objc SleepScheduleComponentsHeader.Æ <stripped>
	0x7f40001ec30  @objc SleepScheduleComponentsHeader.˜–I!E <stripped>
WARNING: couldn't find address 0x1ee84fffdb6d0 (0x684fffdb6d0) in binary!
	0x5b40001e458  @objc SleepScheduleComponentsHeader.(null) <stripped>
WARNING: couldn't find address 0x1e594fffdb758 (0x594fffdb758) in binary!
	0x48000000c  @objc SleepScheduleComponentsHeader.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.ScheduleOccurrenceSectionTableViewHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let headerView : ScheduleOccurrenceHeaderView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76040001f250 (0x6040001f250) in binary!
	0x58f0  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x58e40001eeb0 (0xe40001eeb0) in binary!
	0x7778  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x684fffdb6d0  @objc ScheduleOccurrenceSectionTableViewHeaderView.(null) <stripped>
	0x594fffdb758  @objc ScheduleOccurrenceSectionTableViewHeaderView.Iâ≈HãΩ@˛ˇˇHãµÄ˝ˇˇˇ)Æ <stripped>

	// Swift methods
	0x36660  func ScheduleOccurrenceSectionTableViewHeaderView.title.getter // getter 
	0x366f0  func ScheduleOccurrenceSectionTableViewHeaderView.title.setter // setter 
	0x36770  func ScheduleOccurrenceSectionTableViewHeaderView.title.modify // modifyCoroutine 
 }

 class SleepHealthUI.ScheduleOccurrenceComponentsEditTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var editView : SleepScheduleComponentsEditView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ff40001ec30 (0x7f40001ec30) in binary!
	0x58b8  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x75b40001e458 (0x5b40001e458) in binary!
	0x7740  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x59cfffe12a8  @objc ScheduleOccurrenceComponentsEditTableViewCell.(null) <stripped>
	0x55cfffe14a0  @objc ScheduleOccurrenceComponentsEditTableViewCell.“Ën0 <stripped>

	// Swift methods
	0x36f30  func ScheduleOccurrenceComponentsEditTableViewCell.editView.getter // getter 
	0x36fd0  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.getter // getter 
	0x37010  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.setter // setter 
	0x37170  func ScheduleOccurrenceComponentsEditTableViewCell.showsComponentsHeader.modify // modifyCoroutine 
 }

 class SleepHealthUI.TextTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : TextTableViewCellProviding

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xffff8378 in binary!
WARNING: couldn't find offset 0xffff8378 in binary!
	0x0  @objc TextTableViewCell.ã}–Ëê <stripped>
WARNING: couldn't find offset 0xffffa200 in binary!
WARNING: couldn't find offset 0xffffa200 in binary!
	0x0  @objc TextTableViewCell.ˇˇæ <stripped>
WARNING: couldn't find address 0x1c00000001 (0x1c00000001) in binary!
	0x6400000000  @objc TextTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x100000000000004 (0x4) in binary!
	0x301010001  @objc TextTableViewCell.(null) <stripped>

	// Swift methods
	0x399b0  func TextTableViewCell.model.getter // getter 
	0x39a20  func TextTableViewCell.model.setter // setter 
	0x39a80  func TextTableViewCell.model.modify // modifyCoroutine 
	0x39af0  func <stripped> // method 
	0x39c20  func <stripped> // method 
 }

 struct SleepHealthUI.Conflict {

	// Properties
	let rawValue : Int // +0x0
 }

 struct SleepHealthUI.SleepScheduleComponentsViewModel {

	// Properties
	var alarmEnabled : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gregorianCalendar : }≠
	var timeFormatter : NSDateFormatter
	var validScheduleRange : HKSPSleepScheduleRange?
	var includeDayLabelsInHeader : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var roundedBedtimeComponents : •
WARNING: couldn't find address 0x0 (0x0) in binary!
	var roundedWakeUpComponents : •
WARNING: couldn't find address 0x0 (0x0) in binary!
	var wakeUpComponents : •
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
WARNING: couldn't find address 0x588c0001e748 (0x8c0001e748) in binary!
	0x7588  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x58740001ee40 (0x740001ee40) in binary!
	0x7708  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe1650  @objc RelativeWeekdayFormatter.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x314fffe1838  @objc RelativeWeekdayFormatter.(null) <stripped>

	// Swift methods
	0x3cc00  func <stripped> // getter 
	0x3cca0  func <stripped> // getter 
	0x3cd80  func <stripped> // getter 
 }

 class SleepHealthUI.TonePickerStyleProvider : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x755c0001e570 (0x55c0001e570) in binary!
	0x1c8000000c  @objc TonePickerStyleProvider.(null) <stripped>
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmVolumeTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let configuration : Configuration
	let slider : UISlider

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e140001ea50 (0x6140001ea50) in binary!
	0x56d8  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x756c0001e3c0 (0x56c0001e3c0) in binary!
	0x88000000c  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x56b40001ec80 (0x6b40001ec80) in binary!
	0x7548  @objc ScheduleOccurrenceAlarmVolumeTableViewCell.(null) <stripped>

	// Swift methods
	0x3d8e0  func ScheduleOccurrenceAlarmVolumeTableViewCell.alarmVolume.getter // getter 
	0x3d980  func <stripped> // method 
 }

 struct SleepHealthUI.Configuration {

	// Properties
	var backgroundColor : UIColor // +0x0
	var sliderValueImageColor : UIColor // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var horizontalMargin : ’Ø // +0x10
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
WARNING: couldn't find address 0x56b40001ec80 (0x6b40001ec80) in binary!
	0x7548  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x76000001f048 (0x6000001f048) in binary!
	0x7736  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x5ae30001e228 (0x2e30001e228) in binary!
	0x75dc  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x549c0001e910 (0x49c0001e910) in binary!
	0x7500  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x334fffeff18  @objc SleepScheduleClockHand.(null) <stripped>
	0x45c0001e8d0  @objc SleepScheduleClockHand.a <stripped>
WARNING: couldn't find address 0x1ebecffff05c8 (0x3ecffff05c8) in binary!
	0x23a0001e860  @objc SleepScheduleClockHand.(null) <stripped>
WARNING: couldn't find address 0x1e2fcffff06e0 (0x2fcffff06e0) in binary!
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
	var iconPointSize : ’Ø // +0x28
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
	var width : ’Ø // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ringInset : ’Ø // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ringWidth : ’Ø // +0x58
	var handSize : CGSize // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handIconPointSize : ’Ø // +0x70
WARNING: couldn't find address 0x0 (0x0) in binary!
	var grabberLineWidth : ’Ø // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var grabberLineLength : ’Ø // +0x80
	var gestureStartDelay : Double // +0x88
	var increment : Double // +0x90
	var minimumTimeInBed : Double // +0x98
	var maximumTimeInBed : Double // +0xa0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var majorFeedbackAngularVelocityMinimum : ’Ø // +0xa8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minorFeedbackAngularVelocityMaximum : ’Ø // +0xb0
	var majorFeedbackHourInterval : Int // +0xb8
	var minorFeedbackMinuteInterval : Int // +0xc0
	var dialConfiguration : Configuration // +0xc8
 }

 struct SleepHealthUI.ScheduleOccurrenceViewModel {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bedtimeComponents : ·£
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wakeUpComponents : ·£
	let weekdays : HKSPWeekdays
	let alarmState : AlarmState
	let showWeekdaysText : Bool
	let weekdaysTextColor : UIColor?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var relativeWakeUpDate : §
WARNING: couldn't find address 0x0 (0x0) in binary!
	var relativeBedtimeDate : §
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
	var alarmConfigurationDidChangeObserver : Y¨

	// Swift methods
	0x49f70  class func AlarmPreviewPlayer.__allocating_init(model:) // init 
	0x4a960  func AlarmPreviewPlayer.play() // method 
	0x4ad80  func AlarmPreviewPlayer.stop() // method 
 }

 class SleepHealthUI.ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell : HKSHScheduleOccurrenceComponentsAccessibilityTableViewCell {

	// Properties
	let dayLabel : UILabel // +0x6569665f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d7c0001e9b8 (0x57c0001e9b8) in binary!
	0x74e0  @objc ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3ecffff05c8  @objc ScheduleOccurrenceComponentsAndDayAccessibilityTableViewCell.(null) <stripped>

	// Swift methods
	0x4bbd0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x545c0001e8d0 (0x45c0001e8d0) in binary!
	0x5620  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
WARNING: couldn't find address 0x5a3a0001e860 (0x23a0001e860) in binary!
	0x74a8  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3b4ffff0b10  @objc ScheduleOccurrenceHeaderView.(null) <stripped>
	0xffff0d48  @objc ScheduleOccurrenceHeaderView.± <stripped>

	// Swift methods
	0x4c320  func <stripped> // getter 
	0x4c7c0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceDeleteTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var model : Model

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d240001e960 (0x5240001e960) in binary!
	0x55e8  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x747c0001e2d0 (0x47c0001e2d0) in binary!
	0x38000000c  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7cf40001e930 (0x4f40001e930) in binary!
	0x55b8  @objc ScheduleOccurrenceDeleteTableViewCell.(null) <stripped>

	// Swift methods
	0x4cbd0  func <stripped> // method 
 }

 struct SleepHealthUI.Model {

	// Properties
	var isSingleDayOverride : Bool // +0x0
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmSoundTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7cf40001e930 (0x4f40001e930) in binary!
	0x55b8  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x744c0001e2a0 (0x44c0001e2a0) in binary!
	0x38000000c  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x7cc40001e900 (0x4c40001e900) in binary!
	0x5588  @objc ScheduleOccurrenceAlarmSoundTableViewCell.(null) <stripped>

	// Swift methods
	0x4d3a0  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceAlarmEnabledTableViewCell : HKSwitchTableViewCell /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7cc40001e900 (0x4c40001e900) in binary!
	0x5588  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x741c0001e270 (0x41c0001e270) in binary!
	0xb8000000c  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x726c0001e0f8 (0x26c0001e0f8) in binary!
	0x7260  @objc ScheduleOccurrenceAlarmEnabledTableViewCell.(null) <stripped>

	// Swift methods
	0x4da30  func <stripped> // method 
 }

 class SleepHealthUI.QuickScheduleManagementViewController : UINavigationController /System/Library/Frameworks/UIKit.framework/UIKit, OnboardPromptViewControllerDelegate,  EnableSchedulePromptViewControllerDelegate {

	// Properties
	let sleepStore : HKSPSleepStore // +0x8 (0x8)
	var sleepDelegate : weak HKSHQuickScheduleManagementViewControllerDelegate? // +0x10 (0x8)
	let sleepScheduleProvider : SleepScheduleProvider // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gregorianCalendar : }≠ // +0x0 (0x0)
	let featureAvailability : HKFeatureAvailabilityProviding // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var appStateObserver : Y¨ // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x726c0001e0f8 (0x26c0001e0f8) in binary!
	0x7260  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x59720001e0d0 (0x1720001e0d0) in binary!
	0x59d4  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x55340001f018 (0x5340001f018) in binary!
	0x7494  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x74800001e158 (0x4800001e158) in binary!
	0x7d96  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x55040001eff8 (0x5040001eff8) in binary!
	0x598c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x738c0001e1e0 (0x38c0001e1e0) in binary!
	0x18000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x73740001ea38 (0x3740001ea38) in binary!
	0x58000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x735c0001e758 (0x35c0001e758) in binary!
	0x4d12  @objc QuickScheduleManagementViewController.(null) <stripped>
	0x71a0  variable initialization expression of ScheduleOccurrenceDeleteTableViewCell.model
WARNING: couldn't find address 0x732c0001e180 (0x32c0001e180) in binary!
	0x38000000c  @objc QuickScheduleManagementViewController.(null) <stripped>
WARNING: couldn't find address 0x73140001ed88 (0x3140001ed88) in binary!
	0x5298  @objc QuickScheduleManagementViewController.(null) <stripped>

	// Swift methods
	0x4f160  func QuickScheduleManagementViewController.sleepDelegate.getter // getter 
	0x4f1e0  func QuickScheduleManagementViewController.sleepDelegate.setter // setter 
	0x4f230  func QuickScheduleManagementViewController.sleepDelegate.modify // modifyCoroutine 
	0x4f3c0  class func QuickScheduleManagementViewController.__allocating_init(sleepStore:) // init 
	0x4f550  class func <stripped> // init 
 }

 class SleepHealthUI.SleepScheduleProvider : NSObject /usr/lib/libobjc.A.dylib, SleepScheduleProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let currentSchedulePublisher : cØ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let currentGoalPublisher : uØ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventRecordPublisher : m§
	let sleepStore : HKSPSleepStore
	var query : HKQuery?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x735c0001e758 (0x35c0001e758) in binary!
	0x4d12  @objc SleepScheduleProvider.(null) <stripped>
	0x71a0  variable initialization expression of ScheduleOccurrenceDeleteTableViewCell.model
WARNING: couldn't find address 0x732c0001e180 (0x32c0001e180) in binary!
	0x38000000c  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x73140001ed88 (0x3140001ed88) in binary!
	0x5298  @objc SleepScheduleProvider.(null) <stripped>
WARNING: couldn't find address 0x545c0001ea28 (0x45c0001ea28) in binary!
	0x58000000c  @objc SleepScheduleProvider.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.TintedTitleTrayButton : OBTrayButton /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73140001ed88 (0x3140001ed88) in binary!
	0x5298  @objc TintedTitleTrayButton.(null) <stripped>
WARNING: couldn't find address 0x545c0001ea28 (0x45c0001ea28) in binary!
	0x58000000c  @objc TintedTitleTrayButton.(null) <stripped>
WARNING: couldn't find address 0x73a80001e080 (0x3a80001e080) in binary!
	0x72d8  @objc TintedTitleTrayButton.(null) <stripped>

	// Swift methods
 }

 class SleepHealthUI.EnableSchedulePromptViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	var delegate : EnableSchedulePromptViewControllerDelegate

	// ObjC -> Swift bridged methods
	0x7290  variable initialization expression of ScheduleOccurrenceView.weekdaysLabel
WARNING: couldn't find address 0x7ef40001ef58 (0x6f40001ef58) in binary!
	0x7278  @objc EnableSchedulePromptViewController.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x184ffff9cc0  @objc EnableSchedulePromptViewController.(null) <stripped>
	0x77cffff9ce8  @objc EnableSchedulePromptViewController.˛ˇˇHãù(˛ˇˇHâﬁAˇ‘Hâ«Ë\R <stripped>

	// Swift methods
 }

 class SleepHealthUI.OnboardPromptViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	var delegate : OnboardPromptViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73a80001e080 (0x3a80001e080) in binary!
	0x72d8  @objc OnboardPromptViewController.(null) <stripped>
WARNING: couldn't find address 0x72cc0001efe0 (0x2cc0001efe0) in binary!
	0x7f30  @objc OnboardPromptViewController.(null) <stripped>
WARNING: couldn't find address 0x72b40001e108 (0x2b40001e108) in binary!
	0x48000000c  @objc OnboardPromptViewController.(null) <stripped>
	0x7290  variable initialization expression of ScheduleOccurrenceView.weekdaysLabel
WARNING: couldn't find address 0x7ef40001ef58 (0x6f40001ef58) in binary!
	0x7278  @objc OnboardPromptViewController.(null) <stripped>

	// Swift methods
	0x51e80  func <stripped> // method 
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
WARNING: couldn't find address 0x70cc0001e0e0 (0xcc0001e0e0) in binary!
	0x53b8  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x8a8c0001e5e0 (0x28c0001e5e0) in binary!
	0x6a40  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x57ba0001e5e0 (0x7ba0001e5e0) in binary!
	0x7228  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x51ac0001e620 (0x1ac0001e620) in binary!
	0x7210  @objc ScheduleOccurrenceView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x11cffffbfc8  @objc ScheduleOccurrenceView.(null) <stripped>
	0x2cffffc3e0  @objc ScheduleOccurrenceView.ÿR <stripped>
	0x3240001e8f0  @objc ScheduleOccurrenceView.Lã`¯IãD$@Hâ„HÉ¿HÉ‡H)√Hâ‹Hã_é <stripped>
WARNING: couldn't find address 0x1e544ffffd060 (0x544ffffd060) in binary!
	0x13c0001e5b0  @objc ScheduleOccurrenceView.(null) <stripped>

	// Swift methods
	0x555a0  func ScheduleOccurrenceView.viewModel.getter // getter 
	0x55610  func ScheduleOccurrenceView.viewModel.setter // setter 
	0x55670  func ScheduleOccurrenceView.viewModel.modify // modifyCoroutine 
	0x556e0  func ScheduleOccurrenceView.bedtimeTimeText.getter // getter 
	0x55700  func ScheduleOccurrenceView.wakeUpTimeText.getter // getter 
	0x557c0  func ScheduleOccurrenceView.wakeUpTitleText.getter // getter 
	0x55820  func <stripped> // getter 
	0x56280  func <stripped> // method 
	0x56370  func <stripped> // method 
	0x566f0  func <stripped> // method 
	0x56a60  func <stripped> // method 
	0x57590  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleComponentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let timeLabel : UILabel // +0x10 (0x8)
	let dayLabel : UILabel // +0x18 (0x8)
	var $__lazy_storage_$_timeFont : UIFont? // +0x20 (0x8)
	var $__lazy_storage_$_notSetTimeFont : UIFont? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70640001e078 (0x640001e078) in binary!
	0x5350  @objc ScheduleComponentView.(null) <stripped>
WARNING: couldn't find address 0x51740001e5e8 (0x1740001e5e8) in binary!
	0x71d8  @objc ScheduleComponentView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x544ffffd060  @objc ScheduleComponentView.(null) <stripped>
	0x7f4ffffd1d8  @objc ScheduleComponentView.ãï¯˝ˇˇHã≠Ø <stripped>

	// Swift methods
	0x57cf0  func <stripped> // getter 
	0x57d20  func <stripped> // getter 
	0x582c0  func <stripped> // method 
	0x58460  func <stripped> // method 
 }

 class SleepHealthUI.ScheduleOccurrenceTitleView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let title : UILabel // +0x8 (0x8)
	let subtitle : ScheduleOccurrenceHeaderView // +0x10 (0x8)
	var topConstraint : NSLayoutConstraint? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x53240001e8f0 (0x3240001e8f0) in binary!
	0x573e  @objc ScheduleOccurrenceTitleView.(null) <stripped>
	0x71a0  variable initialization expression of ScheduleOccurrenceDeleteTableViewCell.model
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x4533a4d4152  @objc ScheduleOccurrenceTitleView.(null) <stripped>
WARNING: couldn't find address 0x5568746c61654870 (0x46c61654870) in binary!
	0x56c533a5443  @objc ScheduleOccurrenceTitleView.(null) <stripped>

	// Swift methods
	0x590e0  class func ScheduleOccurrenceTitleView.__allocating_init(titleText:subtitleText:screenSize:) // init 
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
	let rawValue : ’Ø
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
	var width : ’Ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ’Ø
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ’Ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ’Ø
 }
