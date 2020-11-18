//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKInviteInternal, GKMatchRequestInternal, GKPlayerInternal, NSArray, NSData, NSError, NSString;

@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>

@optional
- (void)applicationWillEnterForeground;
- (void)inviterCancelled;
- (void)setAcceptedInviteInternal:(GKInviteInternal *)arg1;
- (void)setAutomatchFailedWithError:(NSError *)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDefaultInvitationMessage:(NSString *)arg1;
- (void)setExistingPlayers:(NSArray *)arg1;
- (void)setFailedWithError:(NSError *)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInvitesFailedWithError:(NSError *)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setNearbyPlayer:(NSString *)arg1 reachable:(BOOL)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 responded:(long long)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 sentData:(NSData *)arg2;
@end
