//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceCheck/NSObject-Protocol.h>

@class NSData, NSString;

@protocol DCDeviceMetadataProtocol <NSObject>
- (void)appAttestationAssert:(NSString *)arg1 keyId:(NSString *)arg2 clientDataHash:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)appAttestationAttestKey:(NSString *)arg1 keyId:(NSString *)arg2 clientDataHash:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)appAttestationCreateKey:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)appAttestationIsSupportedWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)fetchOpaqueBlobWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)isSupportedDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end
