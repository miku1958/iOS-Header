//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMediaTimeTracker, NSArray, NSString;

@interface MTPAFActivity : NSObject
{
    BOOL _stopped;
    long long _activityType;
    unsigned long long _startPosition;
    unsigned long long _lastPosition;
    NSString *_startTriggerType;
    NSString *_startReason;
    NSArray *_startEventData;
    NSString *_stopTriggerType;
    NSString *_stopReason;
    NSArray *_stopEventData;
    NSArray *_itemActivities;
    MTMediaTimeTracker *_timeTracker;
}

@property (nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) NSArray *itemActivities; // @synthesize itemActivities=_itemActivities;
@property (nonatomic) unsigned long long lastPosition; // @synthesize lastPosition=_lastPosition;
@property (strong, nonatomic) NSArray *startEventData; // @synthesize startEventData=_startEventData;
@property (nonatomic) unsigned long long startPosition; // @synthesize startPosition=_startPosition;
@property (strong, nonatomic) NSString *startReason; // @synthesize startReason=_startReason;
@property (strong, nonatomic) NSString *startTriggerType; // @synthesize startTriggerType=_startTriggerType;
@property (strong, nonatomic) NSArray *stopEventData; // @synthesize stopEventData=_stopEventData;
@property (strong, nonatomic) NSString *stopReason; // @synthesize stopReason=_stopReason;
@property (strong, nonatomic) NSString *stopTriggerType; // @synthesize stopTriggerType=_stopTriggerType;
@property (nonatomic) BOOL stopped; // @synthesize stopped=_stopped;
@property (strong, nonatomic) MTMediaTimeTracker *timeTracker; // @synthesize timeTracker=_timeTracker;

- (void).cxx_destruct;
- (void)addItemsFromPlaylist:(id)arg1 pafKit:(id)arg2;
- (id)initWithType:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6;
- (void)startItemActivityIfPossible:(id)arg1;
- (void)stopItemActivityIfPossible:(id)arg1;
- (void)stoppedAtMilliseconds:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)synchronizeAtMilliseconds:(unsigned long long)arg1;
- (void)updateItemActivities:(id)arg1;

@end
