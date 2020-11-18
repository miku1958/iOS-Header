//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/FASetupDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSOperationQueue, NSString, SSAccount, UIViewController;
@protocol FAFamilySetupPrompterDelegate;

@interface FAFamilySetupPrompter : NSObject <FASetupDelegate>
{
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    SSAccount *_iTunesAccount;
    UIViewController *_presentingViewController;
    NSOperationQueue *_networkingQueue;
    BOOL _isRequestInFlight;
    id<FAFamilySetupPrompterDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FAFamilySetupPrompterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_goToFamilySetup;
- (void)_goToInvitations;
- (void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(BOOL)arg2;
- (void)_showConfirmationForStartingFamilySetup;
- (void)_showConfirmationForStartingFamilySetupWithPendingInvite;
- (void)_showPendingInvitesDialog;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1;
- (void)dealloc;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (id)init;
- (id)initWithiTunesAccount:(id)arg1;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2;

@end
