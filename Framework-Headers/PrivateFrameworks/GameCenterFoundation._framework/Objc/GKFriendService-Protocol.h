//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKPlayerInternal, NSArray;

@protocol GKFriendService <NSObject>
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getChallengableFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
@end

