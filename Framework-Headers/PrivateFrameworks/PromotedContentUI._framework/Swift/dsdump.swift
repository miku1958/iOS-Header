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
 protocol PromotedContentUI.WebConsoleLogging // 1 requirements
 {
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
	var x : ±k
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ±k
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ±k
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ±k
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.OpenURLOptionsKey {

	// Properties
	var _rawValue : NSString
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
	var startTime : yk
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endTime : ük
 }

 class PromotedContentUI.ExpandViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var webView : PromotedContentWebView // +0x8 (0x8)
	var closeButton : UIButton // +0x10 (0x8)
	var maximumExpandedSize : CGSize // +0x18 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expandedDestinationURL : j // +0x0 (0x0)
	var tapGestureRecognizer : TapGestureRecognizer // +0x0 (0x8)
	var webProcessDelegate : weak APWebProcessDelegate? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_closeButtonPadding : j // +0x0 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x46bc000164e8 (0x6bc000164e8) in binary!
	0x8008  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x7ffc000161c8 (0x7fc000161c8) in binary!
	0x748c  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x7480000161a0 (0x480000161a0) in binary!
	0x7fd8  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x425800016228 (0x25800016228) in binary!
	0x424c  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x745e000161f0 (0x45e000161f0) in binary!
	0x7fa8  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xbcfffb74f0  @objc ExpandViewController.(null) <stripped>
	0x1c4fffb7808  @objc ExpandViewController. <stripped>
	0x75c00016128  @objc ExpandViewController.UHâÂHç=›_ <stripped>
WARNING: couldn't find address 0x161d4fffb8af8 (0x1d4fffb8af8) in binary!
	0x5ec00016418  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x16174fffb8c00 (0x174fffb8c00) in binary!
	0x72c00016050  @objc ExpandViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.CalendarEventViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : j // +0x0 (0x0)
	var calendarEvent : CalendarEvent // +0x0 (0x8)
	var eventStore : EKEventStore // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7f5c00016128 (0x75c00016128) in binary!
	0x73ec  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x45ec00016418 (0x5ec00016418) in binary!
	0x73e2  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x7f2c00016050 (0x72c00016050) in binary!
	0x18000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x461800015f60 (0x61800015f60) in binary!
	0x68000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x5c1400016018 (0x41400016018) in binary!
	0x738c  @objc CalendarEventViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.SafariViewController : SFSafariViewController /System/Library/Frameworks/SafariServices.framework/SafariServices {

	// Properties
	var notificationObserver : NSObject?
	var actionDelegate : ActionViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c1400016018 (0x41400016018) in binary!
	0x738c  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x738000016168 (0x38000016168) in binary!
	0x7382  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x4a2b000161c0 (0x22b000161c0) in binary!
	0x7ec0  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x274fffbecd8  @objc SafariViewController.(null) <stripped>
	0x244fffbf390  @objc SafariViewController.ÖˇÑ2 <stripped>
	0x1ecfffbfb48  @objc SafariViewController.R <stripped>
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
	var $__lazy_storage_$_scrollableAncestor : UIScrollView??

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5b10000160d0 (0x310000160d0) in binary!
	0x4b06  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x4afa00016258 (0x2fa00016258) in binary!
	0x4aee  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x4ae200016208 (0x2e200016208) in binary!
	0x7e70  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x4ae000015f78 (0x2e000015f78) in binary!
	0x5fe8  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x5fdc00015f50 (0x7dc00015f50) in binary!
	0x4abc  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x4ac900016210 (0x2c900016210) in binary!
	0x7e28  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x6fcfffc1790  @objc TapGestureRecognizer.(null) <stripped>
	0x25cfffc1a28  @objc TapGestureRecognizer.ˇˇfD <stripped>
	0x6c4fffc1d30  @objc TapGestureRecognizer.D <stripped>
	0x27cfffc42e8  @objc TapGestureRecognizer.l;LâÁHãu–Ëz <stripped>
	0x684fffc49c0  @objc TapGestureRecognizer.Ë} <stripped>
	0x65cfffc4e18  @objc TapGestureRecognizer.C <stripped>

	// Swift methods
	0xcc10  func <stripped> // getter 
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

 enum PromotedContentUI.SizeChangeError { }

 class PromotedContentUI.MetricsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let startsCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var frameObserver : af
	var currentlyViewable : Bool
	var context : APPCPromotableContext?
	var promotedContent : APPCPromotableContent
	var debugView : PromotedContentDebugView
	var forcedReadiness : Bool
	var wasTapped : Bool
	var isBackgrounded : Bool
	var timingTracking : VisibilityTiming
	var visibilityChecker : VisibilityChecker
	var needToSendOnScreen : Bool
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate?
	var visbilityCheckingView : weak UIView?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offsetObserver : af
	var _isCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readinessObserver : af
	var visibleThresholds : [Int]
	var contentView : PromotedContentView
	var ready : Bool
	var readyDelegate : weak APPCMetricsViewReadyDelegate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var promotedContentInfo : ˚e

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e1400016290 (0x61400016290) in binary!
	0x7e08  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x408800016258 (0x8800016258) in binary!
	0x407c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x407000016258 (0x7000016258) in binary!
	0x5a3c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x405800015eb0 (0x5800015eb0) in binary!
	0x528e  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7250000161f0 (0x250000161f0) in binary!
	0x5a0c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x527c00015e70 (0x27c00015e70) in binary!
	0x59f4  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x401000015e48 (0x1000015e48) in binary!
	0x59dc  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x524c00015ec0 (0x24c00015ec0) in binary!
	0x5270  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x59b800016198 (0x1b800016198) in binary!
	0x3fd4  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x43e400016210 (0x3e400016210) in binary!
	0x7d30  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7d2400015de0 (0x52400015de0) in binary!
	0x5255  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7d0c00015db8 (0x50c00015db8) in binary!
	0x523d  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3f8000016220 (0x78000016220) in binary!
	0x7ce8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7cdc00016218 (0x4dc00016218) in binary!
	0x66a0  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7cc400016210 (0x4c400016210) in binary!
	0x5208  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7cac00015dd0 (0x4ac00015dd0) in binary!
	0x38000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x433c00016168 (0x33c00016168) in binary!
	0x51d8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7c7c00015da0 (0x47c00015da0) in binary!
	0x18000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7c64000163c8 (0x464000163c8) in binary!
	0x18000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x58b000015e70 (0xb000015e70) in binary!
	0x298000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3ec000015ea0 (0x6c000015ea0) in binary!
	0x7c28  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x488200016678 (0x8200016678) in binary!
	0x7c10  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x393400016658 (0x13400016658) in binary!
	0x3e84  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3e7800015d20 (0x67800015d20) in binary!
	0x65b0  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7bd400016610 (0x3d400016610) in binary!
	0x6d70  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6d64000165e8 (0x564000165e8) in binary!
	0x6d58  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6d4c000165c0 (0x54c000165c0) in binary!
	0x6d4e  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x38dc00016598 (0xdc00016598) in binary!
	0x6d28  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6d2a00016570 (0x52a00016570) in binary!
	0x6d10  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6d0400016548 (0x50400016548) in binary!
	0x6cf8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6cec00016520 (0x4ec00016520) in binary!
	0x6ce0  @objc MetricsView.(null) <stripped>

	// Swift methods
	0x12540  func <stripped> // getter 
	0x12580  func <stripped> // setter 
	0x125e0  func <stripped> // modifyCoroutine 
	0x128f0  func <stripped> // getter 
	0x12920  func <stripped> // setter 
	0x12970  func <stripped> // getter 
	0x13070  func <stripped> // getter 
	0x13190  func <stripped> // getter 
	0x132b0  func <stripped> // getter 
	0x13370  func <stripped> // setter 
	0x13450  func <stripped> // modifyCoroutine 
	0x135a0  func <stripped> // getter 
	0x13a20  func <stripped> // method 
	0x13e90  func <stripped> // method 
	0x13ee0  func <stripped> // method 
	0x14170  func <stripped> // method 
	0x14420  func <stripped> // method 
	0x14520  func <stripped> // method 
	0x14950  func <stripped> // method 
	0x150b0  func <stripped> // method 
	0x15240  func <stripped> // method 
	0x153d0  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentDebugView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _debugLabel : TranslatesOff
	var context : weak APPCPromotableContext?
	var promotedContent : APPCPromotableContent?
	var readiness : Readiness
	var updateDelegate : DebugViewUpdates

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x433c00016168 (0x33c00016168) in binary!
	0x51d8  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x7c7c00015da0 (0x47c00015da0) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x7c64000163c8 (0x464000163c8) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>

	// Swift methods
	0x17620  func <stripped> // getter 
	0x17f80  func <stripped> // method 
	0x18050  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentUIModule : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x58b000015e70 (0xb000015e70) in binary!
	0x298000000c  @objc PromotedContentUIModule.(null) <stripped>
 }

 class PromotedContentUI.PromotedContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let webView : PromotedContentWebView // +0x8 (0x8)
	let privacyMarkerView : PrivacyMarker // +0x10 (0x8)
	let dimmerView : DimmerView // +0x18 (0x8)
	let videoProgressMetricThresholds : [Int] // +0x20 (0x8)
	let customPrivacyHandling : Bool // +0x28 (0x1)
	let outstreamVisibleThreshold : Int // +0x30 (0x8)
	let nonOutstreamVisibleThreshold : Int // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mraidActionTypes :  empty-list  // +0x40 (0x8)
	var tapGestureRecognizer : TapGestureRecognizer // +0x48 (0x8)
	var expandedAdTapGestureRecognizer : TapGestureRecognizer // +0x50 (0x8)
	var expandedAdFrame : CGRect // +0x58 (0x21)
	var videoProgressMetricStatus : [Int : Bool] // +0x80 (0x8)
	var visiblePercentage : Int // +0x88 (0x8)
	var unfairLock : APUnfairLock // +0x90 (0x8)
	var promotedContent : APPCPromotableContent // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastPerformedAction : ;d // +0xa0 (0x8)
	var shouldBlockNavigation : Bool // +0xa8 (0x1)
	var tapWasRecognized : Bool // +0xa9 (0x1)
	var nativeArticleOnDisplay : Bool // +0xaa (0x1)
	var interactionDelegate : InteractionDelegate // +0xb0 (0x10)
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate? // +0xc0 (0x8)
	var readiness : Readiness // +0xc8 (0x8)
	var nativeView : UIView? // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var oldPercentageTimestamp : Ae // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newPercentageTimestamp : Ae // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var overriddenPrivacyMarkerPosition : ˘c // +0x3 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3ec000015ea0 (0x6c000015ea0) in binary!
	0x7c28  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x488200016678 (0x8200016678) in binary!
	0x7c10  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x393400016658 (0x13400016658) in binary!
	0x3e84  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3e7800015d20 (0x67800015d20) in binary!
	0x65b0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x7bd400016610 (0x3d400016610) in binary!
	0x6d70  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6d64000165e8 (0x564000165e8) in binary!
	0x6d58  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6d4c000165c0 (0x54c000165c0) in binary!
	0x6d4e  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x38dc00016598 (0xdc00016598) in binary!
	0x6d28  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6d2a00016570 (0x52a00016570) in binary!
	0x6d10  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6d0400016548 (0x50400016548) in binary!
	0x6cf8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6cec00016520 (0x4ec00016520) in binary!
	0x6ce0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6cd4000164f8 (0x4d4000164f8) in binary!
	0x3dac  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x477a00015bb0 (0x77a00015bb0) in binary!
	0x5db8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x5dac00015b88 (0x5ac00015b88) in binary!
	0x4756  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3d7000015b60 (0x57000015b60) in binary!
	0x5da8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3d5800015b38 (0x55800015b38) in binary!
	0x3d4c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x57cc00016028 (0x7cc00016028) in binary!
	0x57c8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x4f7c00015bf0 (0x77c00015bf0) in binary!
	0x4fa0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x412c00015f58 (0x12c00015f58) in binary!
	0x7a78  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x7a6c000160b0 (0x26c000160b0) in binary!
	0x4fb0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x7a5400015b78 (0x25400015b78) in binary!
	0x28000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3cc800015a00 (0x4c800015a00) in binary!
	0x7a30  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x224fffdd5d8  @objc PromotedContentView.(null) <stripped>
	0x1fcfffdd0f0  @objc PromotedContentView.ˇˇ]√UHâÂHç=›_ <stripped>
	0x1dcfffda868  @objc PromotedContentView. <stripped>
	0x1b4fffdb0e0  @objc PromotedContentView.| <stripped>
	0x18cfffdc928  @objc PromotedContentView.Lâˇˇ”Hâ√Hâ«LâÊLâÚHâ¡Ë_‚ <stripped>
	0x164fffdcdf0  @objc PromotedContentView.Hâ«LâÊLâÚHâ¡Ë_‚ <stripped>
	0x5ea00015a08  @objc PromotedContentView.ÚHâ¡Ë_‚ <stripped>
WARNING: couldn't find address 0x15b9cfffe18c0 (0x39cfffe18c0) in binary!
	0x16c00015a90  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xfffe1988 (0xfffe1988) in binary!
	0x15400015b20  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x15b0cfffed540 (0x30cfffed540) in binary!
	0x5d800015bc0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x15994fffed688 (0x194fffed688) in binary!
	0x7cc00015df8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x15b54fffed8a0 (0x354fffed8a0) in binary!
	0x10c00015a30  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xfffed908 (0xfffed908) in binary!
	0x7f800015938  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xfffeda20 (0xfffeda20) in binary!
	0x54000015938  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x161b4fffee7f8 (0x1b4fffee7f8) in binary!
	0xc400015918  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x159dcfffef190 (0x1dcfffef190) in binary!
	0x18000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x78a4000159c8 (0xa4000159c8) in binary!
	0x28000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x4ddc00015de0 (0x5dc00015de0) in binary!
	0x3f28  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x284ffff6ac8  @objc PromotedContentView.(null) <stripped>

	// Swift methods
	0x197e0  func <stripped> // getter 
	0x19ce0  func <stripped> // method 
	0x19dc0  func <stripped> // method 
	0x1a1d0  func <stripped> // method 
	0x1a550  func <stripped> // method 
	0x1a800  func <stripped> // method 
	0x1a960  func <stripped> // method 
 }

 enum PromotedContentUI.Readiness { }

 class PromotedContentUI.Atomic {
 class PromotedContentUI.VisibilityChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let visibilityOperationLimit : Int
	let visibilityWorkQueue : OS_dispatch_queue
	var visibilityOperationCount : Int

	// Swift methods
	0x2e8d0  func <stripped> // method 
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
WARNING: couldn't find address 0x45ea00015a08 (0x5ea00015a08) in binary!
	0x55dc  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x796c00015a90 (0x16c00015a90) in binary!
	0x78000000c  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x795400015b20 (0x15400015b20) in binary!
	0x6de4  @objc WebViewWarmer.(null) <stripped>
 }

 class PromotedContentUI.CalendarEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let description : String // +0x10 (0x10)
	let location : String? // +0x20 (0x10)
	let summary : String? // +0x30 (0x10)
	let url : String? // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : yk // +0x37 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let end : ük // +0x6100085 (0x0)
	let allDay : Bool // +0x19 (0x1)
	let recurrence : EKRecurrenceRule? // +0x45545f5f (0x8)
	let workQueue : OS_dispatch_queue // +0x0 (0x8)

	// Swift methods
 }

 class PromotedContentUI.StoreProductViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : j // +0x0 (0x0)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
	var adamIdentifier : NSNumber // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var storeProductViewController : SKStoreProductViewController // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x795400015b20 (0x15400015b20) in binary!
	0x6de4  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x6dd800015bc0 (0x5d800015bc0) in binary!
	0x4428  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x3fcc00015df8 (0x7cc00015df8) in binary!
	0x6dc2  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x790c00015a30 (0x10c00015a30) in binary!
	0x18000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x3ff800015938 (0x7f800015938) in binary!
	0x48000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x554000015938 (0x54000015938) in binary!
	0x3b5c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x78c400015918 (0xc400015918) in binary!
	0x78b8  @objc StoreProductViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.MetricsVideoView : APPCMetricsView {

	// Properties
	let privacyMarker : PrivacyMarker
	var representationFetched : (_:)?
	var videoView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x554000015938 (0x54000015938) in binary!
	0x3b5c  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x78c400015918 (0xc400015918) in binary!
	0x78b8  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff4150  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x554ffff63e8  @objc MetricsVideoView.(null) <stripped>

	// Swift methods
	0x3d450  func <stripped> // getter 
	0x3d480  func <stripped> // method 
	0x3d570  func <stripped> // method 
	0x3d7e0  func <stripped> // method 
 }

 class PromotedContentUI.PreloadingMetricView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var metricsView : MetricsView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyClosure :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyListeners : af

	// Swift methods
 }

 class PromotedContentUI.WeakMetricsView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var metricsView : MetricsView

	// Swift methods
 }

 class PromotedContentUI.PreloadedMetricViewHolder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let cleanupTimeout : Double
	var locks : SynchronizedDictionary
	var views : PreloadingMetricView
	var vendedViews : WeakMetricsView
	var cleanupTimers : [String : NSTimer]
	var viewsLock : APUnfairLock
	var cleanupTimersLock : APUnfairLock

	// Swift methods
	0x3e7e0  func <stripped> // modifyCoroutine 
	0x3e810  func <stripped> // modifyCoroutine 
	0x3e850  func <stripped> // method 
	0x3e9b0  func <stripped> // method 
	0x3f1f0  func <stripped> // method 
	0x3f490  func <stripped> // method 
	0x3f870  func <stripped> // method 
	0x3fa40  func <stripped> // method 
	0x3fca0  func <stripped> // method 
 }

 enum PromotedContentUI.PrivacyMarkerType {

	// Properties
	case display  
	case native  
	case outstream  
	case preroll  
 }

 enum PromotedContentUI.MetricsAppAdViewType {

	// Properties
	case screenshot  
	case video  
 }

 class PromotedContentUI.MetricsAppAdView : APPCMetricsView {

	// Properties
	var appView : ASCLockupView? // +0xa8 (0x8)
	var adamId : String // +0xb0 (0x10)
	var adType : MetricsAppAdViewType // +0xc0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78a4000159c8 (0xa4000159c8) in binary!
	0x28000000c  @objc MetricsAppAdView.(null) <stripped>

	// Swift methods
	0x42250  func <stripped> // method 
 }

 class PromotedContentUI.SynchronizedDictionary : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let synchronizedLock : APUnfairLock
	var dict : [String : APUnfairRecursiveLock]

	// Swift methods
	0x42950  func <stripped> // method 
 }

 class PromotedContentUI.DimmerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dimmed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4ddc00015de0 (0x5dc00015de0) in binary!
	0x3f28  @objc DimmerView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x284ffff6ac8  @objc DimmerView.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.PrivacyMarker : UIButton /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleLabelRegularFontSize : ±k // +0x8 (0x8)
	let markerLabel : UILabel // +0x10 (0x8)
	let markerView : UIView // +0x18 (0x8)
	var privacyMarkerType : PrivacyMarkerType // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var privacyMarkerPosition : A^ // +0x28 (0x8)
	var minimumTappableSize : CGSize // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x34bc00015f18 (0x4bc00015f18) in binary!
	0x54c4  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x4da400015da8 (0x5a400015da8) in binary!
	0x3ef0  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x3ac800016198 (0x2c800016198) in binary!
	0x3abc  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x782400015948 (0x2400015948) in binary!
	0x18000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x547000015830 (0x47000015830) in binary!
	0x38000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x7a0400015a00 (0x20400015a00) in binary!
	0x3e90  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x77dc00015900 (0x7dc00015900) in binary!
	0x198000000c  @objc PrivacyMarker.(null) <stripped>

	// Swift methods
	0x44dc0  func <stripped> // getter 
	0x45360  func <stripped> // getter 
	0x453a0  func <stripped> // setter 
	0x45400  func <stripped> // modifyCoroutine 
	0x45c50  func <stripped> // method 
	0x45d20  func <stripped> // method 
	0x46000  func <stripped> // method 
	0x46250  func <stripped> // method 
	0x46360  func <stripped> // method 
	0x46470  func <stripped> // method 
	0x46870  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentWebView : WKWebView /System/Library/Frameworks/WebKit.framework/WebKit {

	// Properties
	var _processDelegate : WebConsoleLogging
	var webProcessProxy : APWebProcessProxyProtocol?
	var remoteObjectInterface : Any?
	var browserContextControllerDidLoad : Bool
	var unfairLock : APUnfairLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a0400015a00 (0x20400015a00) in binary!
	0x3e90  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x77dc00015900 (0x7dc00015900) in binary!
	0x198000000c  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x77c400015800 (0x7c400015800) in binary!
	0x77b8  @objc PromotedContentWebView.(null) <stripped>

	// Swift methods
	0x47160  func <stripped> // getter 
	0x47320  func <stripped> // method 
	0x473e0  func <stripped> // method 
 }
