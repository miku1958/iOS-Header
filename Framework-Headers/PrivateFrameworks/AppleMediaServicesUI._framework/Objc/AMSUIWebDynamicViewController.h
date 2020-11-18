//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>

#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate>
{
    AMSUIWebClientContext *_context;
}

@property (strong, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)initWithContext:(id)arg1 URL:(id)arg2;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
