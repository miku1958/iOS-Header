//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSArray;

@protocol GKProfileService <NSObject>
- (oneway void)getProfilesForPlayerIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

