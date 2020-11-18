//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSAccountStore, VSKeychainGenericPassword;

@interface VSAccount : NSObject
{
    VSAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_accountDescription;
    NSString *_identityProviderDisplayName;
    NSString *_identityProviderID;
    NSString *_username;
    NSString *_authenticationToken;
}

@property (copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property (weak, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (copy, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property (copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property (copy, nonatomic) NSString *identityProviderDisplayName; // @synthesize identityProviderDisplayName=_identityProviderDisplayName;
@property (copy, nonatomic) NSString *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property (strong, nonatomic) VSKeychainGenericPassword *keychainItem;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)description;

@end
