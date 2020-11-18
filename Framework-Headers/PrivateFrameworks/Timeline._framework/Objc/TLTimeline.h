//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@class NSDate, NSTimer, TLTimelineEntryNode, TLTimelineWindow;
@protocol TLTimelineDelegate, TLTimelineEntry;

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying>
{
    TLTimelineEntryNode *_leftmostNode;
    TLTimelineEntryNode *_rightmostNode;
    TLTimelineWindow *_nowWindow;
    NSTimer *_timer;
    id<TLTimelineDelegate> _delegate;
    BOOL _delegateRespondsToTimerFired;
    BOOL _updatesNowNodeOnSignificantTimeChange;
    int _notifyToken;
    BOOL _paused;
}

@property (readonly, nonatomic) NSDate *dateOfLastEntryInTimeline;
@property (weak, nonatomic) id<TLTimelineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSDate *endOfVisibilityForNowEntry;
@property (readonly, nonatomic) id<TLTimelineEntry> lastEntry;
@property (readonly, nonatomic) long long nodeCapacity;
@property (readonly, nonatomic) id<TLTimelineEntry> nowEntry;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) BOOL updatesNowNodeOnSignificantTimeChange;

+ (id)TLTimelineSegmentFromSortedEntries:(id)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_nowEntry;
- (id)_nowNode;
- (void)_recycleAllNodes;
- (id)_rightmostDate;
- (void)_setupWithEntry:(id)arg1;
- (id)_sortedEntries:(id)arg1;
- (void)_timerFired;
- (void)_updateNowWindow;
- (void)_updateTimer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entriesWithinDateInterval:(id)arg1;
- (void)extendRightFromDate:(id)arg1 withEntries:(id)arg2;
- (void)extendTimelineFromDate:(id)arg1 withEntries:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntry:(id)arg1;
- (id)initWithWindow:(id)arg1 paused:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)nowWindow;
- (void)resetWithEntry:(id)arg1;

@end
