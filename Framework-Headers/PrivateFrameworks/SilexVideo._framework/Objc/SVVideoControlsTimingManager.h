//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoControlsTimingProviding-Protocol.h>

@class NSString, SVTimeline;
@protocol SVVideoControlsTimingConfiguration, SVVideoSkipThresholdProviding;

@interface SVVideoControlsTimingManager : NSObject <SVVideoControlsTimingProviding>
{
    id<SVVideoControlsTimingConfiguration> _timingConfiguration;
    id<SVVideoSkipThresholdProviding> _skipThresholdProvider;
    SVTimeline *_timeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoSkipThresholdProviding> skipThresholdProvider; // @synthesize skipThresholdProvider=_skipThresholdProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property (readonly, nonatomic) id<SVVideoControlsTimingConfiguration> timingConfiguration; // @synthesize timingConfiguration=_timingConfiguration;

- (void).cxx_destruct;
- (double)autoAppearanceTimeIntervalForVideo:(id)arg1;
- (double)autoHideTimeIntervalForVideo:(id)arg1;
- (id)initWithControlTimingConfiguration:(id)arg1 skipThresholdProvider:(id)arg2 timeline:(id)arg3;
- (double)moreFromVisibilityTimeIntervalForVideo:(id)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id)arg1;
- (double)upNextAppearanceTimeIntervalForVideo:(id)arg1;

@end

