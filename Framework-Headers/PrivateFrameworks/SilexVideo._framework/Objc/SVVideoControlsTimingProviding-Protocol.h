//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo;

@protocol SVVideoControlsTimingProviding <NSObject>
- (double)autoAppearanceTimeIntervalForVideo:(id<SVVideo>)arg1;
- (double)autoHideTimeIntervalForVideo:(id<SVVideo>)arg1;
- (double)moreFromVisibilityTimeIntervalForVideo:(id<SVVideo>)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id<SVVideo>)arg1;
- (double)upNextAppearanceTimeIntervalForVideo:(id<SVVideo>)arg1;
@end

