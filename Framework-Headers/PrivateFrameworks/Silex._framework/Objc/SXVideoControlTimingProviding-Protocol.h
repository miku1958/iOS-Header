//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideo;

@protocol SXVideoControlTimingProviding <NSObject>
- (double)autoAppearanceTimeIntervalForVideo:(id<SXVideo>)arg1;
- (double)autoHideTimeIntervalForVideo:(id<SXVideo>)arg1;
- (double)moreFromVisibilityTimeIntervalForVideo:(id<SXVideo>)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id<SXVideo>)arg1;
- (double)upNextAppearanceTimeIntervalForVideo:(id<SXVideo>)arg1;
@end
