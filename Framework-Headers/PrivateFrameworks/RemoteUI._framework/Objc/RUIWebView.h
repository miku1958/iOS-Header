//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/UIWebViewDelegate-Protocol.h>

@class NSString, NSURL, UIWebView;

@interface RUIWebView : RUIElement <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_html;
    NSURL *_baseURL;
    id _delegate;
}

@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *html; // @synthesize html=_html;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isScrollEnabled;
- (void)dealloc;
- (id)sourceURL;
- (id)userStyleSheet;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end

