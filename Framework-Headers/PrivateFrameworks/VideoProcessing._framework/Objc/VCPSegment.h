//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPSegment : NSObject
{
    float _sumOfScore;
    float _curationScore;
    unsigned long long _numOfFrames;
    unsigned long long _numOfValidFrames;
    CDStruct_e83c9415 _timeRange;
}

@property (nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property (readonly, nonatomic) unsigned long long numOfFrames; // @synthesize numOfFrames=_numOfFrames;
@property (readonly, nonatomic) unsigned long long numOfValidFrames; // @synthesize numOfValidFrames=_numOfValidFrames;
@property (nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;

- (void)copyFrom:(id)arg1;
- (id)init;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 score:(float)arg2 valid:(BOOL)arg3;
- (BOOL)isContentTooShort;
- (void)mergeSegment:(id)arg1;
- (float)score;
- (float)sumOfScore;
- (void)trimSegment:(CDStruct_1b6d18a9)arg1 fromStart:(BOOL)arg2;
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;
- (void)updateSegment:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(BOOL)arg3;
- (void)updateWithFirstFrame:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(BOOL)arg3;

@end
