//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFSafariViewController;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountErrorManager : NSObject
{
    SFSafariViewController *_activeLoginViewController;
}

@property (weak, nonatomic) SFSafariViewController *activeLoginViewController; // @synthesize activeLoginViewController=_activeLoginViewController;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_dismissReloginViewController:(id)arg1;
- (void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1;
- (void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;
- (void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;
- (void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

