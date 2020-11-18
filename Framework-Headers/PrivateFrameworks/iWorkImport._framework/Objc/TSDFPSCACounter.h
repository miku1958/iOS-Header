//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFPSCounter.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    unsigned long long _maxFrameDelta;
    BOOL _shouldRunTimer;
}

@property (nonatomic) BOOL shouldRunTimer; // @synthesize shouldRunTimer=_shouldRunTimer;

- (id)init;
- (void)p_updateFrameCount;
- (void)reset;
- (void)startLoggingFPS;
- (void)stopLoggingFPS;

@end

