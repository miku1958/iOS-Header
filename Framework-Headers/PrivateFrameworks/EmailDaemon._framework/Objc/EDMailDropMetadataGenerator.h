//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/WKNavigationDelegate-Protocol.h>

@class EFPromise, NSMutableArray, NSString, WKWebView;

@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    NSMutableArray *_scriptHandlers;
    EFPromise *_activePromise;
}

@property (strong, nonatomic) EFPromise *activePromise; // @synthesize activePromise=_activePromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *scriptHandlers; // @synthesize scriptHandlers=_scriptHandlers;
@property (readonly) Class superclass;
@property (strong, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (void)_addScriptHandlerForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_findMailDropNodesInFileURL:(id)arg1 promise:(id)arg2;
- (BOOL)_shouldSearchForMailDropNodesInFileURL:(id)arg1;
- (void)dealloc;
- (void)generateMailDropMetadataForContentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMailDropAttachmentViewForContentURL:(id)arg1 HTMLByContentID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tearDownWebView;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)withTimeout:(double)arg1 do:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
