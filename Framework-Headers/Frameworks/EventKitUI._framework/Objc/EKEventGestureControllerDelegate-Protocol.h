//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKDayOccurrenceView, EKEvent, EKEventGestureController, UIView, UIViewController;

@protocol EKEventGestureControllerDelegate <NSObject>
- (EKEvent *)createEventForEventGestureController:(EKEventGestureController *)arg1;
- (EKDayOccurrenceView *)createOccurrenceViewForEventGestureController:(EKEventGestureController *)arg1;
- (UIViewController *)currentPresentationController;
- (BOOL)didScrollWhenEventGestureController:(EKEventGestureController *)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(struct CGPoint)arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 addViewToScroller:(UIView *)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 dateAtPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 didCancelEditingOccurrence:(EKEvent *)arg2 fadedOut:(BOOL)arg3;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 didCommitOccurrence:(EKEvent *)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(long long)arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSingleTapOccurrence:(EKEvent *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(BOOL)arg3;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewForOccurrence:(EKEvent *)arg2;
- (struct CGPoint)eventGestureController:(EKEventGestureController *)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 yPositionPerhapsMatchingAllDayOccurrence:(EKEvent *)arg2 atPoint:(struct CGPoint)arg3;
- (UIView *)occurrenceViewSuperviewForEventGestureController:(EKEventGestureController *)arg1;
- (double)timedRegionOriginForEventGestureController:(EKEventGestureController *)arg1;
- (UIView *)touchTrackingViewForEventGestureController:(EKEventGestureController *)arg1;

@optional
- (void)cleanUpAfterGestureFailureForEventGestureController:(EKEventGestureController *)arg1;
- (double)computeXDragOffsetForEventGestureController:(EKEventGestureController *)arg1 currentX:(double)arg2 startX:(double)arg3;
- (BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(EKEventGestureController *)arg1;
- (double)eventGestureController:(EKEventGestureController *)arg1 convertXForMargin:(double)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsShowEvent:(EKEvent *)arg2;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 shouldFadeOccurrenceAfterFling:(EKEvent *)arg2;
- (void)eventGestureControllerDidEndDragSession:(EKEventGestureController *)arg1;
- (BOOL)eventGestureControllerShouldAllowLongPress:(EKEventGestureController *)arg1;
- (BOOL)hasCorrectParentForDraggingView:(UIView *)arg1 isAllDay:(BOOL)arg2;
- (double)horizontalOffsetForPagingForEventGestureController:(EKEventGestureController *)arg1;
- (struct CGRect)marginFrameForEventGestureController:(EKEventGestureController *)arg1;
- (BOOL)moreThanOneDayVisibleForEventGestureController:(EKEventGestureController *)arg1;
- (struct UIEdgeInsets)pageChangeMarginsForEventGestureController:(EKEventGestureController *)arg1;
@end

