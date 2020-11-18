//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CertOperations : NSObject
{
}

+ (id)certVersion:(struct __SecCertificate *)arg1;
+ (id)rootBaseVersionsForRootType:(unsigned int)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3;
+ (id)rootCurrentVersionForRootType:(unsigned int)arg1 inEnvironment:(id)arg2;
+ (id)rootTrustedVersionsForRootType:(unsigned int)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3;
+ (BOOL)verifyCertData:(id)arg1 withCert:(struct __SecCertificate **)arg2 withPubKey:(struct __SecKey **)arg3 stingray:(BOOL)arg4 enroll:(BOOL)arg5 env:(id)arg6 duplicate:(BOOL)arg7 sigVerification:(BOOL)arg8 error:(id *)arg9;

@end
