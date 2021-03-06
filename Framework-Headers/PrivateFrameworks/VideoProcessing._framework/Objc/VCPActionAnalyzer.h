//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPSegment;

@interface VCPActionAnalyzer : NSObject
{
    NSMutableArray *_internalResults;
    VCPSegment *_activeSegment;
    struct HinkleyDetector *_activeHinkleyDetector;
    float _activeThreshold;
    BOOL _firstFrame;
    BOOL _verbose;
    int _postProcessStart;
}

- (void).cxx_destruct;
- (id)activeSegment;
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 andActionScore:(float)arg2;
- (void)dealloc;
- (BOOL)decideSegmentPointBasedOnActionScore:(float)arg1;
- (BOOL)decideSegmentPointUsingHinkleyDetector:(float)arg1;
- (int)finalizeWithDestructiveTrimStart:(CDStruct_1b6d18a9)arg1 trimEnd:(CDStruct_1b6d18a9)arg2;
- (id)init;
- (BOOL)isActive:(float)arg1;
- (BOOL)isScoreValid:(float)arg1;
- (int)mergeConsecutiveShortSegments;
- (int)mergeSameTypeSegments;
- (int)mergeSparseShortSegments;
- (int)postProcessSegmentsWithCaptureTime:(CDStruct_1b6d18a9)arg1 trimStart:(CDStruct_1b6d18a9)arg2;
- (int)prepareTrimmingWithTrimStart:(CDStruct_1b6d18a9)arg1 andTrimEnd:(CDStruct_1b6d18a9)arg2;
- (void)printSegments:(id)arg1;
- (id)segments;
- (void)updateActiveThreshold;

@end

