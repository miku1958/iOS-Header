//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSafeBrowsingWarningResponseObserver-Protocol.h>

@class NSString, WKWebView, _SFSecurityInfo, _WKRemoteObjectInterface;
@protocol _SFSafeBrowsingControllerDelegate, _SFSafeBrowsingWebProcessController;

@interface _SFSafeBrowsingController : NSObject <_SFSafeBrowsingWarningResponseObserver>
{
    WKWebView *_webView;
    _WKRemoteObjectInterface *_safeBrowsingResponseObserverInterface;
    id<_SFSafeBrowsingWebProcessController> _safeBrowsingControllerProxy;
    unsigned long long _safeBrowsingCheckSeed;
    BOOL _showingSecurityWarningPage;
    BOOL _loadingSecurityWarningPage;
    id<_SFSafeBrowsingControllerDelegate> _delegate;
    _SFSecurityInfo *_provisionalSecurityInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFSafeBrowsingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLoadingSecurityWarningPage) BOOL loadingSecurityWarningPage; // @synthesize loadingSecurityWarningPage=_loadingSecurityWarningPage;
@property (strong, nonatomic) _SFSecurityInfo *provisionalSecurityInfo; // @synthesize provisionalSecurityInfo=_provisionalSecurityInfo;
@property (readonly, nonatomic, getter=isShowingSecurityWarningPage) BOOL showingSecurityWarningPage; // @synthesize showingSecurityWarningPage=_showingSecurityWarningPage;
@property (readonly) Class superclass;

+ (id)_localizedStringsForSafeBrowsing;
- (void).cxx_destruct;
- (void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (id)_securityWarningPageURL;
- (void)_setUpSafeBrowsingObserverInterface;
- (void)cancelCheckForFraudulentWebsites;
- (void)commitProvisionalSecurityInfo;
- (void)didRespondToSafeBrowsingWarningWithResult:(long long)arg1;
- (void)hideSecurityWarningPage;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1;
- (id)safeBrowsingControllerProxy;
- (void)showSecurityWarningPageWithSecurityInfo:(id)arg1;
- (void)startCheckingFraudulentWebSitesWithURL:(id)arg1;
- (void)updateShowingSecurityWarningPageIfNeeded;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(BOOL)arg2;

@end
