//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAdaptiveLearning : NSObject
{
    NSMutableDictionary *_callHistoryTBR;
    BOOL _dirty;
    int _adaptiveLearningState;
    int _shortTermHistoryLength;
    int _longTermHistoryLength;
    double _shortTermAdjustmentFactor;
    double _longTermAdjustmentFactor;
    double _shortTermValueWeight;
    double _longTermValueWeight;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly) int adaptiveLearningState; // @synthesize adaptiveLearningState=_adaptiveLearningState;

- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)saveCallSegmentHistory;
- (void)updateTargetBitrateForSegment:(id)arg1 newValue:(int)arg2;

@end
