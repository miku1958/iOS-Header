//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSafeBrowsingWebProcessController-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, _SFSecurityInfo, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;
@protocol _SFSafeBrowsingWarningResponseObserver;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInPageSafeBrowsingController : NSObject <_SFSafeBrowsingWebProcessController>
{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_safeBrowsingControllerInterface;
    _SFSecurityInfo *_securityInfo;
    BOOL _canGoBack;
    CDUnknownBlockType _completionHandler;
    id<_SFSafeBrowsingWarningResponseObserver> _responseObserver;
    NSDictionary *_localizedStrings;
    NSMutableSet *_safeURLCache;
    NSMutableSet *_provisionalURLsNeedingSafeBrowsingCheck;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canSkipSafeBrowsingCheckForURL:(id)arg1;
- (void)_clearSafeBrowsingControllerInterface;
- (id)_responseObserverProxy;
- (void)_setUpSafeBrowsingControllerInterface;
- (void)cleanUpForNewPageLoad;
- (void)dealloc;
- (void)didRespondToSecurityWarning:(long long)arg1;
- (id)initWithPageController:(id)arg1;
- (void)injectPhishingAlertBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (id)localizedStringForString:(id)arg1;
- (void)performSafeBrowsingCheckForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 canGoBack:(BOOL)arg2 localizedStrings:(id)arg3;
- (void)safeBrowsingDatabaseDidUpdate;
- (void)securityWarningPageLoaded;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(BOOL)arg2;
- (BOOL)urlPassesFastSafeBrowsingCheck:(id)arg1;

@end
