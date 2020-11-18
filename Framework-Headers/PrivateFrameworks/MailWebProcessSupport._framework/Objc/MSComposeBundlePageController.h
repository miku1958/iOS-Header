//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailWebProcessSupport/MSBundlePageController-Protocol.h>
#import <MailWebProcessSupport/MSComposeBodyFieldController-Protocol.h>
#import <MailWebProcessSupport/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class JSContext, JSValue, NSMutableArray, NSString, WKWebProcessPlugInBrowserContextController;
@protocol MSComposeBodyFieldObserver, WKWebProcessPlugIn;

@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController>
{
    unsigned long long _performOnPageSuspendCount;
    NSMutableArray *_blocksToPerformOnPage;
    JSValue *_jsBodyField;
    id<WKWebProcessPlugIn> _plugIn;
    WKWebProcessPlugInBrowserContextController *_controller;
    JSContext *_jsContext;
}

@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) JSValue *jsBodyField; // @synthesize jsBodyField=_jsBodyField;
@property (readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property (readonly, nonatomic) id<MSComposeBodyFieldObserver> observerProxy;
@property (readonly, weak, nonatomic) id<WKWebProcessPlugIn> plugIn; // @synthesize plugIn=_plugIn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changeQuoteLevelBy:(long long)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)initializeBodyField:(id)arg1;
- (void)initializeGlobalObject;
- (void)invalidate;
- (void)performBodyFieldMethodOnPage:(id)arg1 withArguments:(id)arg2;
- (void)performOnPage:(CDUnknownBlockType)arg1;
- (void)resumePerformOnPage;
- (void)suspendPerformOnPage;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)willSendRequest:(id)arg1;

@end
