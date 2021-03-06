//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSPromise, AMSUIPaymentVerificationMetrics, NSDictionary, NSString, UIViewController, WrappedAMSUIWebViewController;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>
{
    ACAccount *_account;
    NSDictionary *_accountParameters;
    id<AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSString *_displayName;
    unsigned long long _mode;
    UIViewController *_viewController;
    AMSUIPaymentVerificationMetrics *_metrics;
    AMSPromise *_resultPromise;
    WrappedAMSUIWebViewController *_webVC;
}

@property (readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) NSDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property (readonly, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (strong, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) AMSPromise *resultPromise; // @synthesize resultPromise=_resultPromise;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property (strong, nonatomic) WrappedAMSUIWebViewController *webVC; // @synthesize webVC=_webVC;

+ (id)_promiseToTryNextFlowWithResult:(id)arg1 error:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;
+ (id)_tokenFromDictionary:(id)arg1;
+ (id)accountForNetworkingFromAccount:(id)arg1 accountParameters:(id)arg2 accountStore:(id)arg3;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)performApplePayTask:(id)arg1;
+ (id)performCardOnFileTask:(id)arg1;
- (void).cxx_destruct;
- (void)_finishPromiseWithResult:(id)arg1 error:(id)arg2;
- (id)initWithMode:(unsigned long long)arg1 account:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;
- (id)initWithMode:(unsigned long long)arg1 accountParameters:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;
- (id)performApplePayTaskWithFeatureFlag:(BOOL)arg1;
- (id)performCardOnFileTaskWithFeatureFlag:(BOOL)arg1;
- (id)performTask;
- (id)performWebFlowTask;
- (void)setHeader:(id)arg1 withValueIn:(id)arg2 forKey:(id)arg3 onRequest:(id)arg4;
- (void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

