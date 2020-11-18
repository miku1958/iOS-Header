//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoControlTimingProviding-Protocol.h>

@class NSString, SXTimeline;
@protocol SXVideoControlTimingConfiguration, SXVideoSkipThresholdProviding;

@interface SXVideoControlTimingManager : NSObject <SXVideoControlTimingProviding>
{
    id<SXVideoControlTimingConfiguration> _timingConfiguration;
    id<SXVideoSkipThresholdProviding> _skipThresholdProvider;
    SXTimeline *_timeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXVideoSkipThresholdProviding> skipThresholdProvider; // @synthesize skipThresholdProvider=_skipThresholdProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property (readonly, nonatomic) id<SXVideoControlTimingConfiguration> timingConfiguration; // @synthesize timingConfiguration=_timingConfiguration;

- (void).cxx_destruct;
- (double)autoAppearanceTimeIntervalForVideo:(id)arg1;
- (double)autoHideTimeIntervalForVideo:(id)arg1;
- (id)initWithControlTimingConfiguration:(id)arg1 skipThresholdProvider:(id)arg2 timeline:(id)arg3;
- (double)moreFromVisibilityTimeIntervalForVideo:(id)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id)arg1;
- (double)upNextAppearanceTimeIntervalForVideo:(id)arg1;

@end

