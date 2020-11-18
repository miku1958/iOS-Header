//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAdaptiveLearning : NSObject
{
    NSMutableDictionary *_callHistory;
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
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)previousISBRForSegment:(id)arg1;
- (void)saveCallSegmentHistory;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;

@end

