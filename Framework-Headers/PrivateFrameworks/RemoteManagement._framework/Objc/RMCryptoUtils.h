//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMCryptoUtils : NSObject
{
}

+ (id)signData:(id)arg1 withIdentity:(struct __SecIdentity *)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(BOOL)arg4 error:(id *)arg5;
+ (id)signPropertyList:(id)arg1 withIdentity:(struct __SecIdentity *)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(BOOL)arg4 error:(id *)arg5;

@end

