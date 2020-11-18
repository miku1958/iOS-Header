//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableDictionary, SKUIMediaSocialAuthor;

@interface MSCLAccountStore : NSObject
{
    ACAccountStore *_accountStore;
    SKUIMediaSocialAuthor *_author;
    NSMutableDictionary *_externalServices;
}

@property (readonly, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;

- (void).cxx_destruct;
- (id)_facebookAppId;
- (void)_handleAccountStoreDidChange:(id)arg1;
- (id)accountForServiceIdentifier:(id)arg1;
- (id)createAccountForServiceIdentifier:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAuthor:(id)arg1;
- (BOOL)permissionForServiceIdentifier:(id)arg1;
- (void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)removeAccount:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)saveAccount:(id)arg1;
- (void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;

@end

