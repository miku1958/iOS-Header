//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKServiceViewControllerDelegate-Protocol.h>

@class GKMatchRequestInternal, GKPlayerInternal, NSArray, NSData, NSError;

@protocol GKMatchmakerHostProtocol <GKServiceViewControllerDelegate>
- (void)cancelMatching;
- (void)cancelPendingInviteToPlayer:(GKPlayerInternal *)arg1;
- (void)finishWithError:(NSError *)arg1;
- (void)sendData:(NSData *)arg1;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setShareInvitees:(NSArray *)arg1;
- (void)shareMatchWithRequest:(GKMatchRequestInternal *)arg1 handler:(void (^)(NSURL *, NSError *))arg2;
- (void)startMatchingWithRequest:(GKMatchRequestInternal *)arg1;
@end

