//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSString, VideoAttributes;

@protocol VCRemoteVideoManagerDelegate <NSObject>
- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(long long)arg3;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2;

@optional
- (void)remoteVideoServerDidDie;
@end

