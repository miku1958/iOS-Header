//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSDictionary, NSString, _HMMediaSession;

@protocol _HMMediaSessionDelegate <NSObject>
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateMediaState:(NSDictionary *)arg2;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateRouteUID:(NSString *)arg2;
@end
