//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKIdentityConfiguration, NSData, NSString;
@protocol CRKCertificate, CRKIdentity, CRKPrivateKey;

@protocol CRKKeychain <NSObject>
- (NSData *)addCertificate:(id<CRKCertificate>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addIdentity:(id<CRKIdentity>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addPrivateKey:(id<CRKPrivateKey>)arg1 toAccessGroup:(NSString *)arg2;
- (id<CRKCertificate>)certificateWithPersistentID:(NSData *)arg1;
- (id<CRKIdentity>)identityWithPersistentID:(NSData *)arg1;
- (id<CRKCertificate>)makeCertificateWithData:(NSData *)arg1;
- (id<CRKIdentity>)makeIdentityWithCertificate:(id<CRKCertificate>)arg1 privateKey:(id<CRKPrivateKey>)arg2;
- (id<CRKIdentity>)makeIdentityWithConfiguration:(CRKIdentityConfiguration *)arg1;
- (id<CRKPrivateKey>)makePrivateKeyWithData:(NSData *)arg1;
- (NSData *)passwordForService:(NSString *)arg1;
- (id<CRKPrivateKey>)privateKeyWithPersistentID:(NSData *)arg1;
- (void)removeItemWithPersistentID:(NSData *)arg1;
- (void)setPassword:(NSData *)arg1 forService:(NSString *)arg2 accessGroup:(NSString *)arg3;
@end
