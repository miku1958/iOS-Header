//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/AAUISpecifierProvider-Protocol.h>

@class AIDAAccountManager, NSArray, NSString, PSSpecifier;
@protocol AAUISpecifierProviderDelegate;

@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider>
{
    id<AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
    AIDAAccountManager *_accountManager;
    PSSpecifier *_activelyLoadingSpecifier;
}

@property (strong, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property (strong, nonatomic) PSSpecifier *activelyLoadingSpecifier; // @synthesize activelyLoadingSpecifier=_activelyLoadingSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountPageSpecifierWasTapped:(id)arg1;
- (id)_appleAccount;
- (BOOL)_isSingleIdentity;
- (id)_storeAccount;
- (id)initWithAccountManager:(id)arg1;

@end

