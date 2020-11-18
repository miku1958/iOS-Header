 protocol PromotedContentUI.FrameWatchable // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol PromotedContentUI.DebugViewUpdates // 1 requirements
 {
	// method
 }
 protocol PromotedContentUI.ActionViewControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol PromotedContentUI.InteractionDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol PromotedContentUI.PresentableActions // 2 requirements
 {
	// method
	// method
 }
 protocol PromotedContentUI.ActionViewController // 1 requirements
 {
	// class init
 }
 protocol PromotedContentUI.MetricsViewReportable // 3 requirements
 {
	// method
	// method
	// method
 }

 enum __C.Phase { }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : Åg
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : Åg
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Åg
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Åg
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AutoresizingMask {

	// Properties
	let rawValue : UInt
 }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct PromotedContentUI.VisibilityTiming {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startTime : Ig
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endTime : og
 }

 class PromotedContentUI.ExpandViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var webView : PromotedContentWebView // +0x8 (0x8)
	var closeButton : UIButton // +0x10 (0x8)
	var maximumExpandedSize : CGSize // +0x18 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expandedDestinationURL : f // +0x0 (0x0)
	var tapGestureRecognizer : TapGestureRecognizer // +0x0 (0x8)
	var webProcessDelegate : weak APWebProcessDelegate? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_closeButtonPadding : ıe // +0x0 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3dec000180f8 (0x5ec000180f8) in binary!
	0x7118  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x710c00017e28 (0x10c00017e28) in binary!
	0x6a7c  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x6a7000017e00 (0x27000017e00) in binary!
	0x70e8  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x398800017e88 (0x18800017e88) in binary!
	0x397c  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x6a4e00017e50 (0x24e00017e50) in binary!
	0x70b8  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x51cfffbe0a0  @objc ExpandViewController.(null) <stripped>
	0x574fffbe3a8  @objc ExpandViewController.âﬂˇ§ <stripped>
	0x6c00017d88  @objc ExpandViewController.Hâ√(@ <stripped>
WARNING: couldn't find address 0x17e34fffbf668 (0x634fffbf668) in binary!
	0x51c00018028  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x17dd4fffbf770 (0x5d4fffbf770) in binary!
	0x3c00017cb0  @objc ExpandViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.CalendarEventViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : f // +0x0 (0x0)
	var calendarEvent : CalendarEvent // +0x0 (0x8)
	var eventStore : EKEventStore // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x706c00017d88 (0x6c00017d88) in binary!
	0x69dc  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x3d1c00018028 (0x51c00018028) in binary!
	0x69d2  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x703c00017cb0 (0x3c00017cb0) in binary!
	0x18000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x3d4800017bd0 (0x54800017bd0) in binary!
	0x58000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x698800017d20 (0x18800017d20) in binary!
	0x697c  @objc CalendarEventViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.SafariViewController : SFSafariViewController /System/Library/Frameworks/SafariServices.framework/SafariServices {

	// Properties
	var notificationObserver : NSObject?
	var actionDelegate : ActionViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x698800017d20 (0x18800017d20) in binary!
	0x697c  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x697e00017e40 (0x17e00017e40) in binary!
	0x416f  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x6fdc00017c50 (0x7dc00017c50) in binary!
	0xc8000000c  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x515800017d38 (0x15800017d38) in binary!
	0x421e  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x421200017ea0 (0x21200017ea0) in binary!
	0x4206  @objc SafariViewController.(null) <stripped>
 }

 class PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let kMaximumTimeSinceTap : Double
	var touchDownHandler : TapGestureHandlerArguments
	var touchMovedHandler : TapGestureHandlerArguments
	var touchUpHandler : TapGestureHandlerArguments
	var shouldBlockNavigation : Bool
	var mostRecentTapLocation : CGPoint
	var lastTrackedTouch : Phase
	var mostRecentTapTimestamp : Double?
	var location : CGPoint
	var pointIsInsideView : Bool
	var preventedTouches : Set<UIView>

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x515800017d38 (0x15800017d38) in binary!
	0x421e  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x421200017ea0 (0x21200017ea0) in binary!
	0x4206  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x41fa00017e60 (0x1fa00017e60) in binary!
	0x6f88  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x41f800017be8 (0x1f800017be8) in binary!
	0x5710  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x570400017bc0 (0x70400017bc0) in binary!
	0x41d4  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x41e100017e58 (0x1e100017e58) in binary!
	0x6f40  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x1a8000000c (0x1a8000000c) in binary!
	0x364fffc9708  @objc TapGestureRecognizer.(null) <stripped>
	0x77cfffc9d80  @objc TapGestureRecognizer. <stripped>
	0x324fffc9ec8  @objc TapGestureRecognizer. <stripped>
	0x2fcfffca120  @objc TapGestureRecognizer.D <stripped>
	0x364fffca428  @objc TapGestureRecognizer.AWAVSHÉÏLâÔËÌ <stripped>
	0x6ccfffca4c0  @objc TapGestureRecognizer.«D <stripped>

	// Swift methods
 }

 struct PromotedContentUI.TapGestureHandlerArguments {

	// Properties
	let recognizer : TapGestureRecognizer // +0x0
	let point : CGPoint // +0x8
	let inside : Bool // +0x18
 }

 struct PromotedContentUI.TranslatesOff {

	// Properties
	var value : A
 }

 enum PromotedContentUI.SizeChangeError {

	// Properties
	case onScreen  
 }

 class PromotedContentUI.MetricsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let startsCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var frameObserver : c
	var currentlyViewable : Bool
	var context : APPCPromotableContext?
	var promotedContent : APPCPromotableContent
	var debugView : PromotedContentDebugView
	var forcedReadiness : Bool
	var timingTracking : VisibilityTiming
	var visibilityChecker : VisibilityChecker
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate?
	var visbilityCheckingView : weak UIView?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offsetObserver : c
	var _isCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readinessObserver : c
	var visibleThresholds : [Int]
	var contentView : PromotedContentView
	var ready : Bool
	var readyDelegate : weak APPCMetricsViewReadyDelegate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var promotedContentInfo : °b

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50c000017b78 (0xc000017b78) in binary!
	0x37cc  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x494200017ed8 (0x14200017ed8) in binary!
	0x6884  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x509000017b38 (0x9000017b38) in binary!
	0x4930  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x507800017b10 (0x7800017b10) in binary!
	0x3784  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x506000017e98 (0x6000017e98) in binary!
	0x4900  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x492400017b78 (0x12400017b78) in binary!
	0x503c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x374800017ee0 (0x74800017ee0) in binary!
	0x3b58  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6e8400017bd0 (0x68400017bd0) in binary!
	0x6e78  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x490900017a80 (0x10900017a80) in binary!
	0x6e60  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x48f100017a58 (0xf100017a58) in binary!
	0x36f4  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6e3c00017e38 (0x63c00017e38) in binary!
	0x6e30  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x5d8400017e30 (0x58400017e30) in binary!
	0x6e18  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x48bc00017e28 (0xbc00017e28) in binary!
	0x6e00  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x674fffcc228  @objc MetricsView.(null) <stripped>
	0x29400017da0  @objc MetricsView.`  <stripped>
WARNING: couldn't find address 0x17ddcfffceed8 (0x5dcfffceed8) in binary!
	0x5b400017a28  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0xfffcf1d0 (0xfffcf1d0) in binary!
	0x59c00018008  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0xfffcfdf8 (0xfffcfdf8) in binary!
	0x71800017af8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0xfffcfeb0 (0xfffcfeb0) in binary!
	0x61800017b28  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x1826cffff6fb8 (0x26cffff6fb8) in binary!
	0x7ba00018250  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x1824cfffef330 (0x24cfffef330) in binary!
	0xcc00018230  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x1821cfffef958 (0x21cfffef958) in binary!
	0x5d0000179a8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x181fcffff08b0 (0x1fcffff08b0) in binary!
	0x50c000181e8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x181d4ffff10f8 (0x1d4ffff10f8) in binary!
	0x37c000181c0  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x181acffff11b0 (0x1acffff11b0) in binary!
	0x36400018198  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x18184ffff1248 (0x184ffff1248) in binary!
	0x7400018170  @objc MetricsView.(null) <stripped>

	// Swift methods
	0xfcd0  func <stripped> // getter 
	0xfd10  func <stripped> // setter 
	0xfd70  func <stripped> // modifyCoroutine 
	0x10020  func <stripped> // getter 
	0x10050  func <stripped> // setter 
	0x100a0  func <stripped> // getter 
	0x10530  func <stripped> // getter 
	0x10650  func <stripped> // getter 
	0x10770  func <stripped> // getter 
	0x10830  func <stripped> // setter 
	0x10910  func <stripped> // modifyCoroutine 
	0x10a60  func <stripped> // getter 
	0x10fc0  func <stripped> // method 
	0x11300  func <stripped> // method 
	0x11340  func <stripped> // method 
	0x115d0  func <stripped> // method 
	0x11980  func <stripped> // method 
	0x11d70  func <stripped> // method 
	0x12450  func <stripped> // method 
	0x125a0  func <stripped> // method 
	0x12730  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentDebugView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _debugLabel : TranslatesOff
	var context : weak APPCPromotableContext?
	var promotedContent : APPCPromotableContent?
	var readiness : Readiness
	var updateDelegate : DebugViewUpdates

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3a9400017da0 (0x29400017da0) in binary!
	0x4870  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x6db400017a28 (0x5b400017a28) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x6d9c00018008 (0x59c00018008) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>

	// Swift methods
	0x14ca0  func <stripped> // getter 
	0x15600  func <stripped> // method 
	0x156d0  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentUIModule : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4f1800017af8 (0x71800017af8) in binary!
	0x298000000c  @objc PromotedContentUIModule.(null) <stripped>
 }

 class PromotedContentUI.PromotedContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let webView : PromotedContentWebView
	let privacyMarkerView : PrivacyMarker
	let dimmerView : DimmerView
	let videoProgressMetricThresholds : [Int]
	let customPrivacyHandling : Bool
	let outstreamVisibleThreshold : Int
	let nonOutstreamVisibleThreshold : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mraidActionTypes :  empty-list 
	var tapGestureRecognizer : TapGestureRecognizer
	var expandedAdTapGestureRecognizer : TapGestureRecognizer
	var expandedAdFrame : CGRect
	var videoProgressMetricStatus : [Int : Bool]
	var visiblePercentage : Int
	var unfairLock : APUnfairLock
	var promotedContent : APPCPromotableContent
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastPerformedAction : ’`
	var shouldBlockNavigation : Bool
	var tapWasRecognized : Bool
	var interactionDelegate : InteractionDelegate
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate?
	var readiness : Readiness
	var nativeView : UIView?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var overriddenPrivacyMarkerPosition : £`

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x361800017b28 (0x61800017b28) in binary!
	0x6d60  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3fba00018250 (0x7ba00018250) in binary!
	0x6d48  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x30cc00018230 (0xcc00018230) in binary!
	0x35dc  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x35d0000179a8 (0x5d0000179a8) in binary!
	0x5c78  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6d0c000181e8 (0x50c000181e8) in binary!
	0x6388  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x637c000181c0 (0x37c000181c0) in binary!
	0x6370  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x636400018198 (0x36400018198) in binary!
	0x6366  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x307400018170 (0x7400018170) in binary!
	0x6340  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x634200018148 (0x34200018148) in binary!
	0x6328  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x631c00018120 (0x31c00018120) in binary!
	0x6310  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6304000180f8 (0x304000180f8) in binary!
	0x62f8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x62ec000180d0 (0x2ec000180d0) in binary!
	0x3504  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3eb200017848 (0x6b200017848) in binary!
	0x5500  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x54f400017820 (0x4f400017820) in binary!
	0x3e8e  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x34c8000177f8 (0x4c8000177f8) in binary!
	0x54f0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x34b0000177d0 (0x4b0000177d0) in binary!
	0x34a4  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x4dd400017c28 (0x5d400017c28) in binary!
	0x4dd0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x461400017878 (0x61400017878) in binary!
	0x4638  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x388400017b90 (0x8400017b90) in binary!
	0x6bb0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6ba400017cd8 (0x3a400017cd8) in binary!
	0x4648  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6b8c00017800 (0x38c00017800) in binary!
	0x28000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3420000176a8 (0x420000176a8) in binary!
	0x6b68  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x6c4fffe2520  @objc PromotedContentView.(null) <stripped>
	0x69cfffe1e58  @objc PromotedContentView.=øœ <stripped>
	0x67cfffdf730  @objc PromotedContentView.Hã]–HâﬂLâÍËs¸ <stripped>
	0x654fffe00f8  @objc PromotedContentView. <stripped>
	0x62cfffe1570  @objc PromotedContentView.ˇWhLã%<ü <stripped>
	0xfffe1bb8  @objc PromotedContentView.™ <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2cfffe8640  @objc PromotedContentView.(null) <stripped>
	0xfffe8708  @objc PromotedContentView.ˇHãE¿HâEÄHã5¸ï <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x79cffff3dc0  @objc PromotedContentView.(null) <stripped>
	0x634ffff3f08  @objc PromotedContentView. <stripped>
	0x7e4ffff4120  @objc PromotedContentView.A_]Èd <stripped>
	0xffff4188  @objc PromotedContentView.â”Iâ˝Lã%‚ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff42a0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5c4ffff5078  @objc PromotedContentView.(null) <stripped>
	0xffff5a00  @objc PromotedContentView. <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1b4ffff6df8  @objc PromotedContentView.(null) <stripped>
	0x47c00017ba0  @objc PromotedContentView.Hç}–ËÁ <stripped>
WARNING: couldn't find address 0x17734ffff74d8 (0x734ffff74d8) in binary!
	0x464000179d0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x1797cffff7e20 (0x17cffff7e20) in binary!
	0x24800017d90  @objc PromotedContentView.(null) <stripped>

	// Swift methods
	0x16bb0  func <stripped> // getter 
	0x17070  func <stripped> // method 
	0x17150  func <stripped> // method 
	0x17ff0  func <stripped> // method 
	0x183f0  func <stripped> // method 
	0x18470  func <stripped> // method 
	0x187f0  func <stripped> // method 
	0x18aa0  func <stripped> // method 
	0x18c00  func <stripped> // method 
 }

 enum PromotedContentUI.Readiness { }

 class PromotedContentUI.Atomic {
 class PromotedContentUI.VisibilityChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let visibilityOperationLimit : Int
	let visibilityWorkQueue : OS_dispatch_queue
	var visibilityOperationCount : Int

	// Swift methods
	0x2dc80  func <stripped> // method 
 }

 enum PromotedContentUI.TapActionError {

	// Properties
	case unmatchedTapAction  
	case invalidCalendarDescription  
	case invalidCalendarStartDate  
	case invalidCalendarRecurrence  
 }

 class PromotedContentUI.WebViewWarmer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var finished : ()?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3d2a000176a8 (0x52a000176a8) in binary!
	0x4c4c  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x6aac00017720 (0x2ac00017720) in binary!
	0x78000000c  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x6a94000177b0 (0x294000177b0) in binary!
	0x6404  @objc WebViewWarmer.(null) <stripped>
 }

 class PromotedContentUI.CalendarEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let description : String // +0x10 (0x10)
	let location : String? // +0x20 (0x10)
	let summary : String? // +0x30 (0x10)
	let url : String? // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : Ig // +0x3 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let end : og // +0x2e (0x0)
	let allDay : Bool // +0x6100085 (0x1)
	let recurrence : EKRecurrenceRule? // +0x19 (0x8)
	let workQueue : OS_dispatch_queue // +0x0 (0x8)

	// Swift methods
 }

 class PromotedContentUI.StoreProductViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : f // +0x0 (0x0)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
	var adamIdentifier : NSNumber // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var storeProductViewController : SKStoreProductViewController // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a94000177b0 (0x294000177b0) in binary!
	0x6404  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x63f800017850 (0x3f800017850) in binary!
	0x3b88  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x372c00017a38 (0x72c00017a38) in binary!
	0x63e2  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x6a4c000176c0 (0x24c000176c0) in binary!
	0x18000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x3758000175d8 (0x758000175d8) in binary!
	0x38000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x4bb0000175d8 (0x3b0000175d8) in binary!
	0x6a10  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x6a0400017678 (0x20400017678) in binary!
	0x28000000c  @objc StoreProductViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.MetricsVideoView : APPCMetricsView {

	// Properties
	let privacyMarker : PrivacyMarker
	var representationFetched : (_:)?
	var videoView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4bb0000175d8 (0x3b0000175d8) in binary!
	0x6a10  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x6a0400017678 (0x20400017678) in binary!
	0x28000000c  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x449c00017a08 (0x49c00017a08) in binary!
	0x36a8  @objc MetricsVideoView.(null) <stripped>

	// Swift methods
	0x3c020  func <stripped> // getter 
	0x3c050  func <stripped> // method 
	0x3c140  func <stripped> // method 
	0x3c2d0  func <stripped> // method 
 }

 class PromotedContentUI.PreloadingInterstitial : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var metricsView : MetricsView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyClosure :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyListeners : c

	// Swift methods
 }

 class PromotedContentUI.PreloadedInterstitialHolder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var views : PreloadingInterstitial

	// Swift methods
 }

 enum PromotedContentUI.PrivacyMarkerType {

	// Properties
	case display  
	case outstream  
	case preroll  
 }

 class PromotedContentUI.DimmerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dimmed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x449c00017a08 (0x49c00017a08) in binary!
	0x36a8  @objc DimmerView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x734ffff74d8  @objc DimmerView.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.PrivacyMarker : UIButton /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleLabelRegularFontSize : Åg // +0x8 (0x8)
	let markerLabel : UILabel // +0x10 (0x8)
	let markerView : UIView // +0x18 (0x8)
	var privacyMarkerType : PrivacyMarkerType // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var privacyMarkerPosition : o[ // +0x28 (0x8)
	var minimumTappableSize : CGSize // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2c7c00017ba0 (0x47c00017ba0) in binary!
	0x4b54  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x4464000179d0 (0x464000179d0) in binary!
	0x3670  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x324800017d90 (0x24800017d90) in binary!
	0x323c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x6984000175f8 (0x184000175f8) in binary!
	0x18000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x4b00000174f8 (0x300000174f8) in binary!
	0x38000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x6b64000176b0 (0x364000176b0) in binary!
	0x3610  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x693c000175b0 (0x13c000175b0) in binary!
	0x188000000c  @objc PrivacyMarker.(null) <stripped>

	// Swift methods
	0x3db00  func <stripped> // getter 
	0x3e0a0  func <stripped> // getter 
	0x3e0e0  func <stripped> // setter 
	0x3e140  func <stripped> // modifyCoroutine 
	0x3e990  func <stripped> // method 
	0x3ea60  func <stripped> // method 
	0x3ed40  func <stripped> // method 
	0x3ef90  func <stripped> // method 
	0x3f0a0  func <stripped> // method 
	0x3f1b0  func <stripped> // method 
	0x3f5b0  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentWebView : WKWebView /System/Library/Frameworks/WebKit.framework/WebKit {

	// Properties
	var _processDelegate : weak APWebProcessDelegate?
	var webProcessProxy : APWebProcessProxyProtocol?
	var remoteObjectInterface : Any?
	var browserContextControllerDidLoad : Bool
	var unfairLock : APUnfairLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b64000176b0 (0x364000176b0) in binary!
	0x3610  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x693c000175b0 (0x13c000175b0) in binary!
	0x188000000c  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x6924000174c0 (0x124000174c0) in binary!
	0x6918  @objc PromotedContentWebView.(null) <stripped>

	// Swift methods
	0x3fe80  func <stripped> // getter 
	0x40030  func <stripped> // method 
	0x400f0  func <stripped> // method 
 }
