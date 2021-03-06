//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSAccount, VSAccountMetadata, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderResponse : NSObject
{
    BOOL _didCreateAccount;
    VSAccountMetadata *_accountMetadata;
    VSAccount *_account;
    VSOptional *_logoLoadOperation;
}

@property (strong, nonatomic) VSAccount *account; // @synthesize account=_account;
@property (copy, nonatomic) VSAccountMetadata *accountMetadata; // @synthesize accountMetadata=_accountMetadata;
@property (nonatomic) BOOL didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property (strong, nonatomic) VSOptional *logoLoadOperation; // @synthesize logoLoadOperation=_logoLoadOperation;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

