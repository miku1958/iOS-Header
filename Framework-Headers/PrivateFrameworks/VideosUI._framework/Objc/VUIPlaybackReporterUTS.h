//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIPlaybackReporter.h>

@class VUIPostPlayConfig, WLKPlaybackReporter;

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter
{
    WLKPlaybackReporter *_reporter;
    VUIPostPlayConfig *_postPlayConfig;
}

@property (strong, nonatomic) VUIPostPlayConfig *postPlayConfig; // @synthesize postPlayConfig=_postPlayConfig;
@property (strong, nonatomic) WLKPlaybackReporter *reporter; // @synthesize reporter=_reporter;

+ (void)_cachePlaybackResumeTime:(id)arg1 absoluteResumeTime:(id)arg2 featureRelativeResumeTime:(id)arg3;
+ (BOOL)_shouldCacheResumeTimeForMediaType:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)_completionFudgeFactor;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_endSession:(id)arg1;
- (BOOL)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_reportForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (void)_reportLinearForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reportSummary:(id)arg1 sessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reportVODForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_wlkPlaybackRateForState:(id)arg1 player:(id)arg2;
- (long long)_wlkPlaybackStateForState:(id)arg1;
- (BOOL)enforceSinglePlaybackSession;
- (void)reportForPlayer:(id)arg1 completionState:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

