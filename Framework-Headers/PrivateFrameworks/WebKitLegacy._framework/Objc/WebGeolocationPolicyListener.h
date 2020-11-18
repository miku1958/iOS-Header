//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebAllowDenyPolicyListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> _geolocation;
    struct RetainPtr<WebView *> _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2;
- (BOOL)shouldClearCache;

@end

