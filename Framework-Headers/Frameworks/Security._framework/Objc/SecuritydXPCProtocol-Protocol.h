//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;
@protocol SecuritydXPCCallbackProtocol;

@protocol SecuritydXPCProtocol <NSObject>
- (void)SecItemAddAndNotifyOnSync:(NSDictionary *)arg1 syncCallback:(id<SecuritydXPCCallbackProtocol>)arg2 complete:(void (^)(NSDictionary *, NSArray *, NSError *))arg3;
- (void)secItemDigest:(NSString *)arg1 accessGroup:(NSString *)arg2 complete:(void (^)(NSArray *, NSError *))arg3;
- (void)secItemFetchCurrentItemAcrossAllDevices:(NSString *)arg1 identifier:(NSString *)arg2 viewHint:(NSString *)arg3 fetchCloudValue:(BOOL)arg4 complete:(void (^)(NSData *, NSError *))arg5;
- (void)secItemSetCurrentItemAcrossAllDevices:(NSData *)arg1 newCurrentItemHash:(NSData *)arg2 accessGroup:(NSString *)arg3 identifier:(NSString *)arg4 viewHint:(NSString *)arg5 oldCurrentItemReference:(NSData *)arg6 oldCurrentItemHash:(NSData *)arg7 complete:(void (^)(NSError *))arg8;
@end

