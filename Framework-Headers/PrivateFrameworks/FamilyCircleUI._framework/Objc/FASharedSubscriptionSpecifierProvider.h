//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, FASharedServicesResponse, NSArray, NSDictionary, NSOperationQueue, PSListController, PSSpecifier;
@protocol FASharedSubscriptionSpecifierProviderDelegeate;

@interface FASharedSubscriptionSpecifierProvider : NSObject
{
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    BOOL _updateSubsriptionSpecifiers;
    BOOL _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
    NSArray *_specifiers;
    id<FASharedSubscriptionSpecifierProviderDelegeate> _delegate;
}

@property (weak, nonatomic) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;

- (void).cxx_destruct;
- (void)_delayedLoadIfNeeded;
- (void)_handleSubscriptionListResponse:(id)arg1;
- (id)_iconURLStringForService:(id)arg1;
- (BOOL)_launchWithResourceDictionary:(id)arg1;
- (void)_loadSubscriptionServices;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (id)_serviceSpecifiersFromArray:(id)arg1;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)_specifierNamed:(id)arg1;
- (id)_valueForServiceSpecifier:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;
- (void)reloadSpecifiers;

@end

