//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WebView.h>

#import <iWorkImport/WebFrameLoadDelegate-Protocol.h>
#import <iWorkImport/WebPolicyDelegate-Protocol.h>
#import <iWorkImport/WebResourceLoadDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUWebView : WebView <WebFrameLoadDelegate, WebResourceLoadDelegate, WebPolicyDelegate>
{
    BOOL mHasAttachments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createWebPreferencesForRendering;
+ (void)disableFrameScrollingRecursively:(id)arg1;
- (id)_urlToDownloadFromURL:(id)arg1;
- (BOOL)_validateURL:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadDataSynchronously:(id)arg1 textEncodingName:(id)arg2 resources:(id)arg3;
- (void)setHasAttachments:(BOOL)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;

@end

