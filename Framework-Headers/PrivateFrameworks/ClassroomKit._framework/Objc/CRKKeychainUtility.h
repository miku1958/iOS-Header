//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRKKeychainUtility : NSObject
{
}

+ (id)addItem:(void *)arg1 toGroup:(id)arg2;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (id)copyCertificatesWithPersistentIDs:(id)arg1;
+ (id)copyCommonNamesForCertificate:(struct __SecCertificate *)arg1;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (void *)copyItemWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyLeafCertificateForTrust:(struct __SecTrust *)arg1;
+ (struct __SecIdentity *)createIdentityWithCommonName:(id)arg1 error:(id *)arg2;
+ (id)getCertificateExpirationDate:(struct __SecCertificate *)arg1;
+ (id)getCertificateFingerprint:(struct __SecCertificate *)arg1;
+ (id)getCertificatesWithPersistentIDs:(id)arg1;
+ (id)getCommonNamesForCertificate:(struct __SecCertificate *)arg1;
+ (id)getIdentityExpirationDate:(struct __SecIdentity *)arg1;
+ (id)getIdentityFingerprint:(struct __SecIdentity *)arg1;
+ (id)getIdentityPublicCertificateData:(struct __SecIdentity *)arg1;
+ (struct __SecCertificate *)getLeafCertificateForTrust:(struct __SecTrust *)arg1;
+ (BOOL)itemExistsInKeychain:(void *)arg1;
+ (BOOL)removeItemWithPersistentID:(id)arg1;

@end

