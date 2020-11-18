//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSError, NSHTTPURLResponse, NSString, NSURLRequest, SUScriptInterface, SUViewController, SUWebViewManager;

@protocol SUWebViewManagerDelegate <NSObject>

@optional
- (SUScriptInterface *)newScriptInterfaceForWebViewManager:(SUWebViewManager *)arg1;
- (SUViewController *)viewControllerForWebViewManager:(SUWebViewManager *)arg1;
- (void)webViewManager:(SUWebViewManager *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceivePrimaryResponse:(NSHTTPURLResponse *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceiveTitle:(NSString *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didRejectInvalidRequest:(NSURLRequest *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 webDocumentViewDidSetFrame:(struct CGRect)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 willInjectScriptInterface:(SUScriptInterface *)arg2;
- (void)webViewManagerDidFinishLoad:(SUWebViewManager *)arg1;
- (void)webViewManagerDidStartLoad:(SUWebViewManager *)arg1;
@end

