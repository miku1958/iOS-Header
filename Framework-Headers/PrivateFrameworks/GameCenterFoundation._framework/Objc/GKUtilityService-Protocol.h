//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSArray;

@protocol GKUtilityService <NSObject>
- (oneway void)getStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSString *, NSString *, NSString *, NSData *, NSDictionary *, NSError *))arg2;
@end

