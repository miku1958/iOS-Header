//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/UIWebPDFViewHandlerDelegate-Protocol.h>

@class UIWebView;
@protocol NSObject><UIWebPDFViewHandlerDelegate;

__attribute__((visibility("hidden")))
@interface QLPDFHanderDelegateForwarder : NSObject <UIWebPDFViewHandlerDelegate>
{
    id<NSObject><UIWebPDFViewHandlerDelegate> _delegate;
    UIWebView *_webView;
}

@property (nonatomic) id<NSObject><UIWebPDFViewHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) UIWebView *webView; // @synthesize webView=_webView;

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
