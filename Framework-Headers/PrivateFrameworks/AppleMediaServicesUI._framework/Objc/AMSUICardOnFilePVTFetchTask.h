//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSUIPaymentVerificationMetrics, NSDictionary, NSString, UIViewController;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSUICardOnFilePVTFetchTask : AMSTask
{
    ACAccount *_account;
    NSDictionary *_accountParameters;
    id<AMSBagProtocol> _bag;
    NSString *_displayName;
    AMSUIPaymentVerificationMetrics *_metrics;
    ACAccount *_originalAccount;
    UIViewController *_viewController;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NSDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) ACAccount *originalAccount; // @synthesize originalAccount=_originalAccount;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

+ (id)_accountToUseFromGivenAccount:(id)arg1 accountParameters:(id)arg2 activeiTunesAccount:(id)arg3;
+ (id)_encoderWithBag:(id)arg1 account:(id)arg2;
+ (BOOL)_isCardOnFileOnStack:(id)arg1;
+ (id)_promiseToFetchURLResponseForAccount:(id)arg1 accountParameters:(id)arg2 url:(id)arg3 bag:(id)arg4;
+ (id)_sessionWithBag:(id)arg1 account:(id)arg2 accountParameters:(id)arg3;
+ (id)_tokenFromObject:(id)arg1;
+ (id)_tokenResultFromTokenString:(id)arg1;
- (void).cxx_destruct;
- (id)_promiseToFetchCardOnStackBooleanURL:(id)arg1;
- (id)_promiseToFetchCardOnStackTokenURL:(id)arg1;
- (id)_promiseToLoadBooleanURL;
- (id)_promiseToLoadPVTURL;
- (id)_promiseToPromptAfterCancel;
- (id)_promiseToPromptBeforeBiometricAuth;
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2 bag:(id)arg3 displayName:(id)arg4 metrics:(id)arg5 viewController:(id)arg6;
- (id)performTask;

@end

