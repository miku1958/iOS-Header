//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBUWebProcessPlugInPageController.h>

#import <WebUI/WBUFormAutoFiller-Protocol.h>
#import <WebUI/WBUInjectedJavaScriptWebProcessController-Protocol.h>

@class NSString, WBUFormMetadataControllerWK2, WKWebProcessPlugInScriptWorld, _WKRemoteObjectInterface;
@protocol WBUInjectedJavaScriptObserver;

@interface WBUWebProcessPlugInAutoFillPageController : WBUWebProcessPlugInPageController <WBUFormAutoFiller, WBUInjectedJavaScriptWebProcessController>
{
    _WKRemoteObjectInterface *_activityControllerInterface;
    id<WBUInjectedJavaScriptObserver> _activityJSObserverProxy;
    _WKRemoteObjectInterface *_autoFillerInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
    WBUFormMetadataControllerWK2 *_formMetadataController;
    unsigned long long _loadDeferringReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) WBUFormMetadataControllerWK2 *formMetadataController; // @synthesize formMetadataController=_formMetadataController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long loadDeferringReasons; // @synthesize loadDeferringReasons=_loadDeferringReasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activieJSObserverProxy;
- (void)addLoadDeferringReasons:(unsigned long long)arg1;
- (void)annotateForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)clearAutoFillMetadata;
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 replyIdentifier:(id)arg4;
- (void)collectURLsForPrefillingAtURL:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)removeLoadDeferringReasons:(unsigned long long)arg1;
- (void)resumeLoadingAfterSavingFormData;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 replyIdentifier:(id)arg5;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end

