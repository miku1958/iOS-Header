//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebJSPropertiesDelegate-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebJSProperties, AMSUIWebView, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSPropertiesDelegate>
{
    AMSUIWebView *_webView;
    AMSUIWebClientContext *_context;
    AMSUIWebJSProperties *_properties;
}

@property (weak, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AMSUIWebJSProperties *properties; // @synthesize properties=_properties;
@property (readonly) Class superclass;
@property (weak, nonatomic) AMSUIWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (BOOL)_canInteractWithJS;
- (void)_observeNotifications;
- (void)_postSubscriptionChangedWithType:(long long)arg1;
- (void)_purchaseDidSucceed:(id)arg1;
- (void)_subscriptionStatusChangeAppStore:(id)arg1;
- (void)_subscriptionStatusChangeMusic:(id)arg1;
- (void)_subscriptionStatusChangeNews:(id)arg1;
- (void)_subscriptionStatusChangeTV:(id)arg1;
- (void)_subscriptionStatusChangeiCloud:(id)arg1;
- (id)_syncPropertiesScriptWithProperties:(id)arg1;
- (id)createWebView;
- (id)initWithContext:(id)arg1;
- (id)loadPageModelWithInfo:(id)arg1;
- (id)postEvent:(id)arg1 options:(id)arg2;
- (void)propertiesDidChange:(id)arg1;
- (id)runJSRequest:(id)arg1;
- (id)syncProperties;

@end
