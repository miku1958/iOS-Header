//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/BlockableScrollViewDelegate-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>
#import <EventKitUI/EKDayViewDataSource-Protocol.h>
#import <EventKitUI/EKDayViewDelegate-Protocol.h>
#import <EventKitUI/EKEventGestureControllerDelegate-Protocol.h>
#import <EventKitUI/UIScrollViewDelegate-Protocol.h>
#import <EventKitUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class CalendarOccurrencesCollection, EKDayOccurrenceView, EKDayView, EKDayViewWithGutters, EKEventEditViewController, EKEventGestureController, NSCalendar, NSDateComponents, NSString, NSTimer, ScrollSpringFactory, UIScrollView, UIView;
@protocol EKDayViewControllerDataSource, EKDayViewControllerDelegate, UIViewControllerPreviewing;

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, UIViewControllerPreviewingDelegate, EKDayOccurrenceViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate>
{
    UIView *_clipView;
    UIScrollView *_horizontalScrollingView;
    EKDayView *_previousDay;
    EKDayView *_currentDay;
    EKDayView *_nextDay;
    EKDayOccurrenceView *_proposedTimeView;
    EKDayViewWithGutters *_previousDayWithGutter;
    EKDayViewWithGutters *_currentDayWithGutter;
    EKDayViewWithGutters *_nextDayWithGutter;
    unsigned int _scrollViewAnimating:1;
    unsigned int _hasPendingNextDate:1;
    NSDateComponents *_pendingNextDate;
    unsigned int _hasPendingPreviousDate:1;
    NSDateComponents *_pendingPreviousDate;
    unsigned int _decelerating:1;
    unsigned int _settingDateFromScrolling:1;
    CalendarOccurrencesCollection *_occurrences;
    CalendarOccurrencesCollection *_previousDayOccurrences;
    CalendarOccurrencesCollection *_nextDayOccurrences;
    EKEventGestureController *_eventGestureController;
    ScrollSpringFactory *_decelerationSpringFactory;
    NSDateComponents *_originalDisplayDate;
    double _dayStart;
    double _dayEnd;
    BOOL _initialLoadHasOccurred;
    BOOL _instigatedDateChange;
    BOOL _viewAppeared;
    BOOL _resizing;
    BOOL _adjustingForDeceleration;
    BOOL _fingerDown;
    BOOL _correctAfterScroll;
    NSDateComponents *_targetDateComponents;
    BOOL _needToCompleteScrollingAnimation;
    BOOL _needToCompleteDeceleration;
    id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
    BOOL _showsBanner;
    BOOL _allowsDaySwitching;
    BOOL _allowsSelection;
    BOOL _alwaysAnimate;
    BOOL _disableGestureDayChange;
    BOOL _disableNotifyDateChangeDuringTracking;
    BOOL _animateAllDayAreaHeight;
    BOOL _shouldAutoscrollAfterAppearance;
    BOOL _notifyWhenTapOtherEventDuringDragging;
    BOOL _transitionedToSameDay;
    id<EKDayViewControllerDelegate> _delegate;
    id<EKDayViewControllerDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    double _gutterWidth;
    UIView *_gestureOccurrenceSuperview;
    EKEventEditViewController *_currentEditor;
    NSTimer *_showNowTimer;
    struct CGPoint _normalizedContentOffset;
}

@property (nonatomic) BOOL allowsDaySwitching; // @synthesize allowsDaySwitching=_allowsDaySwitching;
@property (nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property (nonatomic) BOOL alwaysAnimate; // @synthesize alwaysAnimate=_alwaysAnimate;
@property (nonatomic) BOOL animateAllDayAreaHeight; // @synthesize animateAllDayAreaHeight=_animateAllDayAreaHeight;
@property (copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, nonatomic) UIView *currentAllDayView;
@property (readonly, nonatomic) BOOL currentDayContainsOccurrences;
@property (readonly, nonatomic) UIView *currentDayContentGridView;
@property (readonly, nonatomic) EKDayView *currentDayView;
@property (strong, nonatomic) EKEventEditViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property (weak, nonatomic) id<EKDayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKDayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableGestureDayChange; // @synthesize disableGestureDayChange=_disableGestureDayChange;
@property (nonatomic) BOOL disableNotifyDateChangeDuringTracking; // @synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking;
@property (copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property (strong, nonatomic) UIView *gestureOccurrenceSuperview; // @synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview;
@property (nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint normalizedContentOffset; // @synthesize normalizedContentOffset=_normalizedContentOffset;
@property (nonatomic) BOOL notifyWhenTapOtherEventDuringDragging; // @synthesize notifyWhenTapOtherEventDuringDragging=_notifyWhenTapOtherEventDuringDragging;
@property (copy, nonatomic) NSDateComponents *pendingNextDate; // @synthesize pendingNextDate=_pendingNextDate;
@property (copy, nonatomic) NSDateComponents *pendingPreviousDate; // @synthesize pendingPreviousDate=_pendingPreviousDate;
@property (nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;
@property (nonatomic) BOOL shouldAutoscrollAfterAppearance; // @synthesize shouldAutoscrollAfterAppearance=_shouldAutoscrollAfterAppearance;
@property (strong, nonatomic) NSTimer *showNowTimer; // @synthesize showNowTimer=_showNowTimer;
@property (nonatomic) BOOL showsBanner; // @synthesize showsBanner=_showsBanner;
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitionedToSameDay; // @synthesize transitionedToSameDay=_transitionedToSameDay;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (BOOL)_canScrollToNow;
- (BOOL)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (void)_cleanUpTargetDateComponents;
- (void)_completeDecelerationIfNeeded;
- (void)_completeScrollingAnimationIfNeeded;
- (id)_createGutterDayViewWithDayView:(id)arg1;
- (void)_didRespondToApplicationDidBecomeActiveStateChange;
- (id)_eventGestureSuperview;
- (id)_eventsForDay:(id)arg1;
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2;
- (BOOL)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2;
- (BOOL)_isCurrentDayToday;
- (BOOL)_isResizing;
- (BOOL)_isViewInVisibleRect:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_notifyDelegateOfSelectedDateChange;
- (id)_occurrencesForDayView:(id)arg1;
- (void)_relayoutDays;
- (void)_relayoutDaysDuringScrolling;
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg1;
- (void)_scrollDayViewAfterRelayoutDays;
- (void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_setDayView:(id)arg1 toDate:(id)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setDisplayDateInternal:(id)arg1;
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint)arg1;
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;
- (BOOL)_shouldEndGestureEditingOnTap;
- (BOOL)_shouldRespondToApplicationDidBecomeActiveStateChange;
- (BOOL)_shouldScrollToNow;
- (void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (double)_showNowDelay;
- (void)_showNowTimerFired:(id)arg1;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)_stopShowNowTimer;
- (void)_updateAllDayAreaHeight;
- (double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(struct CGRect)arg2;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (BOOL)blockableScrollViewShouldAllowScrolling;
- (void)bringEventToFront:(id)arg1;
- (void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1;
- (id)createEventForEventGestureController:(id)arg1;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (id)currentPresentationController;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayView:(id)arg1 didUpdateScrollPosition:(struct CGPoint)arg2;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
- (void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)dayViewDidTapEmptySpace:(id)arg1;
- (void)dealloc;
- (BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(struct CGPoint)arg5;
- (void)editorDidCancelEditingEvent:(id)arg1;
- (void)editorDidDeleteEvent:(id)arg1;
- (void)editorDidSaveEvent:(id)arg1;
- (BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3;
- (BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(long long)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
- (BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(BOOL)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;
- (id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
- (struct CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (void)eventGestureController:(id)arg1 requestsShowEvent:(id)arg2;
- (double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)eventGestureControllerDidEndDragSession:(id)arg1;
- (BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)externallyEndedGestureDragging;
- (unsigned long long)firstVisibleSecond;
- (id)gestureController;
- (double)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (id)horizontalScrollView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)layoutContainerView:(id)arg1;
- (void)loadView;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(BOOL)arg2;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)preferredEventToSelectOnDate:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)reloadData;
- (void)reloadDataBetweenStart:(id)arg1 end:(id)arg2;
- (void)scrollDayViewAppropriatelyWithAnimation:(BOOL)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)scrollToNow:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 gutterWidth:(double)arg2;
- (void)setTimeZone:(id)arg1;
- (void)significantTimeChangeOccurred;
- (double)timedRegionOriginForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFrameForProposedTimeView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

