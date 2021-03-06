//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/CUIKSingleDayTimelineViewItem-Protocol.h>

@class EKCalendarDate, EKDayOccurrenceContentPayload, EKDayOccurrenceState, EKDayOccurrenceView, EKEvent, NSDate, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem>
{
    struct CGRect _stagedFrame;
    struct CGRect _unPinnedViewFrame;
    double _visibleHeight;
    BOOL _visibleHeightLocked;
    double _travelTimeHeight;
    long long _sizeClass;
    long long _currentRequestId;
    EKDayOccurrenceContentPayload *_stagedPayload;
    BOOL _usesSmallText;
    BOOL _isProposedTime;
    BOOL _isLoadingAsync;
    BOOL _hasPrecedingDuration;
    BOOL _hasTrailingDuration;
    EKEvent *_event;
    unsigned long long _eventIndex;
    EKDayOccurrenceView *_view;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    double _travelTime;
    double _topPinningProximity;
    double _bottomPinningProximity;
    EKDayOccurrenceState *_currentState;
}

@property (nonatomic) double bottomPinningProximity; // @synthesize bottomPinningProximity=_bottomPinningProximity;
@property (readonly, nonatomic) EKDayOccurrenceState *currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *end;
@property (copy, nonatomic) EKCalendarDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property (nonatomic) BOOL hasPrecedingDuration; // @synthesize hasPrecedingDuration=_hasPrecedingDuration;
@property (nonatomic) BOOL hasTrailingDuration; // @synthesize hasTrailingDuration=_hasTrailingDuration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideTravelTime;
@property (nonatomic) BOOL isLoadingAsync; // @synthesize isLoadingAsync=_isLoadingAsync;
@property (nonatomic) BOOL isProposedTime; // @synthesize isProposedTime=_isProposedTime;
@property (readonly, nonatomic) NSDate *start;
@property (copy, nonatomic) EKCalendarDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, copy, nonatomic) EKCalendarDate *startDateIncludingTravelTime;
@property (readonly, nonatomic) NSDate *startWithTravelTime;
@property (readonly) Class superclass;
@property (nonatomic) double topPinningProximity; // @synthesize topPinningProximity=_topPinningProximity;
@property (nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property (nonatomic) double travelTimeHeight;
@property struct CGRect unPinnedViewFrame;
@property (nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property (strong, nonatomic) EKDayOccurrenceView *view; // @synthesize view=_view;
@property (readonly, nonatomic) double viewMaxNaturalTextHeight;
@property (nonatomic) double visibleHeight;
@property (readonly) BOOL visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;
- (void).cxx_destruct;
- (void)_requestPayloadAnimated:(BOOL)arg1 drawSynchronously:(BOOL)arg2;
- (void)_updateWithPayload:(id)arg1;
- (id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPinned;
- (void)resetVisibleHeight;
- (void)setStagedFrame:(struct CGRect)arg1;
- (struct CGRect)stagedFrame;

@end

