//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameSessionService-Protocol.h>

@class NSArray, NSString;

@protocol GKGameSessionServicePrivate <GKGameSessionService>
- (oneway void)getFriendPlayersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getZonesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)saveConnectionStateForLostPlayerWithCloudID:(NSString *)arg1 sessionIdentifier:(NSString *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)sendInvitePushForSessionWithID:(NSString *)arg1 userMessage:(NSString *)arg2 recipientIDs:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
@end

