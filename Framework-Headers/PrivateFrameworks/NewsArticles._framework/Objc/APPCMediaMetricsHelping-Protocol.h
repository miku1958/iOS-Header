//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol APPCMediaMetricsHelping
- (void)mediaContractedAtPosition:(double)arg1 fullScreen:(BOOL)arg2;
- (void)mediaExpandedAtPosition:(double)arg1 fullScreen:(BOOL)arg2;
- (void)mediaFinished;
- (void)mediaLoaded;
- (void)mediaPausedAtPosition:(double)arg1;
- (void)mediaPlayedAtPosition:(double)arg1;
- (void)mediaProgress:(long long)arg1;
- (void)mediaShowControlsAtPosition:(double)arg1;
- (void)mediaSkippedAtPosition:(double)arg1;
- (void)mediaStarted;
- (void)mediaVolumeChangedAtPosition:(double)arg1 volume:(float)arg2;
- (void)updateVisiblePercentage:(long long)arg1;
- (void)videoChosenWithVideoWidth:(float)arg1 videoHeight:(float)arg2;
@end

