//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol BCSBloomFilterAndConfigRemoteFetching <NSObject>
- (void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(NSString *)arg2 completion:(void (^)(NSArray *, BCSConfigItem *, NSError *))arg3;
- (void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(NSString *)arg2 xpcActivity:(NSObject<OS_xpc_object> *)arg3 completion:(void (^)(NSArray *, BCSConfigItem *, NSError *))arg4;
@end
