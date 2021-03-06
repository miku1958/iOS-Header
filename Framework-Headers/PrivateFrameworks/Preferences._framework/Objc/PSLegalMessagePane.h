//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString, UIWebView;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate>
{
    UIWebView *_webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)handlesDoneButton;
- (id)htmlFileLocation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutInsetContent:(struct CGRect)arg1;
- (id)markupString;
- (id)scrollViewToBeInsetted;
- (BOOL)shouldInsetContent;
- (void)viewDidBecomeVisible;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end

