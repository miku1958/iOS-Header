//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;

@protocol BCSCacheClearing <NSObject>
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)clearCachesForType:(long long)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
