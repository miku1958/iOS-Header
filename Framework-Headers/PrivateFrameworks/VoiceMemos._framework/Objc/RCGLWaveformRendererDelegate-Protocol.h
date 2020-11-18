//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCGLWaveformRenderer;

@protocol RCGLWaveformRendererDelegate <NSObject>
- (void)waveformRenderer:(RCGLWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
- (void)waveformRendererContentDidFinishLoading:(RCGLWaveformRenderer *)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCGLWaveformRenderer *)arg1;
@end
