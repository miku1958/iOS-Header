//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKDevice, NSData, NSString;

@protocol AKAnisetteProvisioningDaemonProtocol <NSObject>
- (void)eraseAnisetteForDevice:(AKDevice *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 device:(AKDevice *)arg2 completion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 device:(AKDevice *)arg2 completion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)provisionAnisetteForDevice:(AKDevice *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)syncAnisetteWithSIMData:(NSData *)arg1 device:(AKDevice *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

