//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_dateArray;
}

- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)init;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1;
- (id)p_getFPSInfo:(BOOL)arg1;
- (void)reset;
- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(BOOL)arg6 slide:(long long)arg7;

@end

