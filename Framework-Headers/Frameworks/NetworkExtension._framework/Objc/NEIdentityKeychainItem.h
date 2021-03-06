//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
{
}

+ (id)copyIdentities:(id)arg1 fromDomain:(long long)arg2;
+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg1;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity *)arg1 persistentReference:(id)arg2;
+ (id)importPKCS12Data:(id)arg1 passphrase:(id)arg2;
- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (void)sync;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;

@end

