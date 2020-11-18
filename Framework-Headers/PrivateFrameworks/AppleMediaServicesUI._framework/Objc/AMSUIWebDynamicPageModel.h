//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class ACAccount, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider>
{
    AMSUIWebNavigationBarModel *_navigationBar;
    ACAccount *_account;
    NSDictionary *_clientOptions;
    NSDictionary *_metricsOverlay;
    NSURL *_URL;
    AMSUIWebClientContext *_context;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NSDictionary *clientOptions; // @synthesize clientOptions=_clientOptions;
@property (strong, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *metricsOverlay; // @synthesize metricsOverlay=_metricsOverlay;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end
