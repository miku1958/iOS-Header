//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCMediaRemoteMuxer, MPRemoteCommandCenter;

@protocol MPCMediaRemoteMuxerDelegate <NSObject>
- (void)updateSupportedCommandsForCommandCenter:(MPRemoteCommandCenter *)arg1 muxer:(MPCMediaRemoteMuxer *)arg2 action:(SEL)arg3;
@end

