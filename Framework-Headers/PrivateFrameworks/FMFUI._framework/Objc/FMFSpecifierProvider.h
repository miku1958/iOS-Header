//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMFUI/AAUISpecifierProvider-Protocol.h>

@class AIDAAccountManager, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>
{
    id<AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
    AIDAAccountManager *_accountManager;
}

@property (strong, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)arg1;
- (BOOL)isAccountInGrayMode;
- (BOOL)locationServicesDisabledByRestrictions;
- (void)locationSharingSpecifierWasTapped:(id)arg1;
- (BOOL)shouldEnableLocationSharingSpecifier;
- (BOOL)shouldShowLocationSharingSpecifier;

@end

