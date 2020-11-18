//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_sampleArray;
    double _startTimeInterval;
    double _endTimeInterval;
    unsigned long long _frameCount;
}

- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)formatInfoForLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 testName:(id)arg4 direction:(id)arg5 duration:(double)arg6 graphing:(BOOL)arg7 slide:(long long)arg8;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)init;
- (id)p_fpsInfo:(BOOL)arg1;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1;
- (id)p_modeFromArray:(id)arg1;
- (double)p_standardDeviationFromArray:(id)arg1 mean:(double)arg2;
- (void)reset;

@end

