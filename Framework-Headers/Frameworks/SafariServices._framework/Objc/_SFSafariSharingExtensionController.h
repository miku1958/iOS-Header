//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;
@protocol SFSharingExtensionWebProcessController;

@interface _SFSafariSharingExtensionController : NSObject
{
    WKWebView *_webView;
    id<SFSharingExtensionWebProcessController> _extensionControllerProxy;
}

- (void).cxx_destruct;
- (id)_extensionControllerProxy;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;
- (void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

