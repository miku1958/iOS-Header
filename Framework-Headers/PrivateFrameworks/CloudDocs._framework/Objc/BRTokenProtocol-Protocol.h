//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRFileCoordinationProvider-Protocol.h>

@class NSString;

@protocol BRTokenProtocol <BRFileCoordinationProvider>
- (void)currentAccountCopyTokenWithBundleID:(NSString *)arg1 version:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;
- (void)getPrimaryiCloudAccountStatus:(void (^)(NSDictionary *, NSError *))arg1;
@end
