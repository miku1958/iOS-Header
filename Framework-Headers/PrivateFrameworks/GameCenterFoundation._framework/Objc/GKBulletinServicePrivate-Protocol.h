//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKBulletinService-Protocol.h>

@class NSArray, NSString;

@protocol GKBulletinServicePrivate <GKBulletinService>
- (oneway void)clearBulletinsForReceivedChallenges:(NSArray *)arg1;
- (oneway void)clearBulletinsForTurnBasedTurn:(NSString *)arg1 exchangeID:(NSString *)arg2;
- (oneway void)fetchBadgeCountsForBundleID:(NSString *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)fetchMessageImageForBundleID:(NSString *)arg1 handler:(void (^)(NSData *))arg2;
- (oneway void)markAllBadgesAsViewedForType:(unsigned long long)arg1;
@end

