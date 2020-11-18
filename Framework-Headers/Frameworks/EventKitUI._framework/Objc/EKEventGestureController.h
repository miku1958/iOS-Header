//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/UIAlertViewDelegate-Protocol.h>
#import <EventKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, NSString, NSTimer, UILongPressGestureRecognizer, UITapGestureRecognizer, _UIFeedbackDragSnappingBehavior;
@protocol EKEventGestureControllerDelegate, EKEventGestureControllerUntimedDelegate;

@interface EKEventGestureController : NSObject <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    UILongPressGestureRecognizer *_draggingGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    int _currentDraggingState;
    EKDayOccurrenceView *_draggingView;
    EKEvent *_event;
    int _currentDragType;
    struct CGPoint _firstTouchPoint;
    double _firstTouchTime;
    struct CGPoint _latestTouchPoint;
    struct CGPoint _previousTouchPoint;
    double _previousTouchTime;
    double _previousTouchVelocity;
    struct CGPoint _touchOffset;
    long long _touchOffsetDays;
    double _dateAtFirstTouchPoint;
    BOOL _isNewEvent;
    BOOL _isInCancelRegion;
    BOOL _isMultiDayTimedEvent;
    EKCalendarDate *_currentDay;
    BOOL _horizontalDragLocked;
    BOOL _dragLockDisabled;
    BOOL _isDragging;
    NSTimer *_scrollTimer;
    double _timeSinceEnteredPageMargin;
    double _firstContactOfDraggingViewTop;
    BOOL _hasStartedScrolling;
    long long _consecutivePageTurnCount;
    BOOL _forcedStart;
    BOOL _needsCommit;
    CDUnknownBlockType _alertSheetCompletionHandler;
    _UIFeedbackDragSnappingBehavior *_dragSnappingFeedback;
    BOOL _usesXDragOffsetInCancelRegion;
    BOOL _usesHorizontalDragLocking;
    BOOL _commitBlocked;
    id<EKEventGestureControllerUntimedDelegate> _untimedDelegate;
    id<EKEventGestureControllerDelegate> _delegate;
    NSString *_sessionIdentifierForDebug;
    EKDayOccurrenceView *_draggingViewSource;
}

@property (nonatomic) BOOL commitBlocked; // @synthesize commitBlocked=_commitBlocked;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEventGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dragGestureInProgress;
@property (readonly, nonatomic) EKDayOccurrenceView *draggingView; // @synthesize draggingView=_draggingView;
@property (strong, nonatomic) EKDayOccurrenceView *draggingViewSource; // @synthesize draggingViewSource=_draggingViewSource;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly, nonatomic) struct CGPoint firstTouchPoint; // @synthesize firstTouchPoint=_firstTouchPoint;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGPoint latestTouchPoint; // @synthesize latestTouchPoint=_latestTouchPoint;
@property (strong, nonatomic) NSString *sessionIdentifierForDebug; // @synthesize sessionIdentifierForDebug=_sessionIdentifierForDebug;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property (weak, nonatomic) id<EKEventGestureControllerUntimedDelegate> untimedDelegate; // @synthesize untimedDelegate=_untimedDelegate;
@property (nonatomic) BOOL usesHorizontalDragLocking; // @synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking;
@property (nonatomic) BOOL usesXDragOffsetInCancelRegion; // @synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion;

- (void).cxx_destruct;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;
- (BOOL)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2 floorAtAllDayRegionBottom:(BOOL)arg3;
- (void)_animateInNewEvent;
- (BOOL)_beginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_beginNewDragFromOffStateWithPoint:(struct CGPoint)arg1;
- (struct CGRect)_calculateFrameForDraggingViewIncludingTravelTime:(BOOL)arg1;
- (void)_cancel;
- (double)_capOccurrenceViewYOrigin:(double)arg1;
- (void)_cleanUpAllStateWithTouchPoint:(struct CGPoint)arg1 commit:(BOOL)arg2;
- (void)_commit;
- (void)_commitUntimed;
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(BOOL)arg2;
- (struct CGPoint)_computeOriginAtTouchPoint:(struct CGPoint)arg1 forDate:(double)arg2 isAllDay:(BOOL)arg3 allowXOffset:(BOOL)arg4 allowFloorAtRegionBottom:(BOOL)arg5;
- (double)_computeWidthForOccurrenceView;
- (BOOL)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint)arg1 event:(id)arg2;
- (id)_createNewEventIfNeededAtPoint:(struct CGPoint)arg1;
- (id)_createSystemPreviewImageForEvent:(id)arg1;
- (void)_createTemporaryView:(id)arg1 animated:(BOOL)arg2;
- (id)_debugStringForDraggingState:(int)arg1;
- (int)_draggingState;
- (BOOL)_flingOrCancelDraggingViewIfNeeded;
- (void)_handleLongPressResponseForOldAPI:(id)arg1;
- (void)_installScrollTimer;
- (BOOL)_isPointInCancelRegion:(struct CGPoint)arg1;
- (void)_longPress:(id)arg1;
- (void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2;
- (void)_manageFeedbackForStateChangeFrom:(int)arg1 to:(int)arg2;
- (double)_minimumDuration;
- (void)_removeScrollTimer;
- (void)_resumePreviousDrag;
- (void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint)arg1;
- (void)_scrollTimerFired:(id)arg1;
- (BOOL)_setDraggingState:(int)arg1 withPoint:(struct CGPoint)arg2 event:(id)arg3;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint)arg1;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint)arg1;
- (BOOL)_setUpNewDragGestureHandling;
- (void)_suspendCurrentDrag;
- (void)_tapGesture:(id)arg1;
- (void)_update;
- (void)_updateFlingToCancelParameters;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint)arg1;
- (id)_viewForTracking;
- (void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (BOOL)canProposeNewTime:(id)arg1;
- (void)dealloc;
- (void)didCrossDragBoundary:(int)arg1;
- (void)endForcedStart;
- (void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(BOOL)arg2 shouldUpdateOrigin:(BOOL)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)invalidate;
- (BOOL)isDraggingOccurrence;
- (id)originalStartDateForEvent:(id)arg1 includingTravel:(BOOL)arg2;
- (void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (void)removeDraggedOccurrence;
- (void)updateDraggingOccurrence;
- (void)updateDraggingOccurrenceForced:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateDraggingOccurrenceFrame;
- (void)updateDraggingOccurrenceFrameFromSource;
- (void)updateDraggingOccurrenceOrigin;

@end

