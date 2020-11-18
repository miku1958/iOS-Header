//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine;

@interface _MPCLeaseManager : NSObject
{
    BOOL _isPreparingForImminentPlaybackIntent;
    MPCPlaybackEngine *_playbackEngine;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;

- (void).cxx_destruct;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)prepareForPlayback;

@end
