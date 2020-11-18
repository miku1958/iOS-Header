//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/AAUIServerHook-Protocol.h>
#import <iCloudQuotaUI/AMSUIDynamicViewControllerDelegate-Protocol.h>

@class AAUIServerHookResponse, ICQUpgradeFlowManager, NSDictionary, NSString, RUIObjectModel, UIViewController;
@protocol AAUIServerHookDelegate, ICQServerHookDelegate;

@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, AAUIServerHook>
{
    ICQUpgradeFlowManager<ICQServerHookDelegate> *_flowManager;
    NSDictionary *_clientInfo;
    long long _statusCode;
    CDUnknownBlockType _completionHandler;
    long long _amsErrorCode;
    long long _amsAction;
    NSString *_buyParamsStr;
    UIViewController *_presentingViewController;
    id<AAUIServerHookDelegate> _delegate;
    NSString *_buffervar;
}

@property (strong, nonatomic) NSString *buffervar; // @synthesize buffervar=_buffervar;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RUIObjectModel *objectModel;
@property (strong, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)initWithFlowManager:(id)arg1;
- (void)launchBundleOffer;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAdditionalParameters:(id)arg1;
- (BOOL)shouldMatchElement:(id)arg1;
- (BOOL)shouldMatchModel:(id)arg1;

@end
