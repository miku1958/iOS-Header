//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_SEKey : NSObject
{
    id _keyHolder;
    id _accessControl;
    id _keyType;
}

@property (readonly, nonatomic) struct __SecAccessControl *accessControl;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly) struct __SecKey *key;
@property (readonly, nonatomic) id keyType; // @synthesize keyType=_keyType;
@property (readonly, nonatomic) id objectID;

+ (BOOL)hasSEP;
+ (void)runsInSystemSession;
+ (void)setupKeybagForTesting:(BOOL)arg1;
- (void).cxx_destruct;
- (id)attestKey:(id)arg1 nonce:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (id)computeSharedSecret:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (BOOL)deleteWithACMContext:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)initWithKeyType:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 applePayEnabled:(BOOL)arg3 ACMContext:(id)arg4 error:(id *)arg5;
- (id)initWithObjectID:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (BOOL)lifetimeControlWithType:(long long)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)publicKeyWithError:(id *)arg1;
- (id)recryptData:(id)arg1 attributes:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (id)signDigest:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;

@end

