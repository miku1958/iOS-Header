//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGPlaybackStatePrerollAttributes;

@protocol PGMutablePlaybackState <NSObject>

@property (nonatomic) double contentDuration;
@property (nonatomic) long long contentType;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (strong, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow;

- (void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3;
@end
