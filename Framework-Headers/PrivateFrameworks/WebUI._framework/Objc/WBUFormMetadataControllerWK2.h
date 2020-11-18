//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSFormMetadataController.h>

#import <WebUI/WKWebProcessPlugInFormDelegatePrivate-Protocol.h>

@class NSDictionary, NSString, WBSFormMetadata, WBUWebProcessPlugInPageController, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;
@protocol WBUFormMetadataObserver;

@interface WBUFormMetadataControllerWK2 : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate>
{
    WKWebProcessPlugInScriptWorld *_scriptWorld;
    WBUWebProcessPlugInPageController *_pageController;
    id<WBUFormMetadataObserver> _observer;
    NSDictionary *_assistedNodeMetadata;
    BOOL _shouldListenForFormChanges;
    WBSFormMetadata *_unsubmittedForm;
    WKWebProcessPlugInFrame *_unsubmittedFormFrame;
    BOOL _autoFillInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WKWebProcessPlugInScriptWorld *scriptWorld;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_observer;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 didAssociateFormControls:(id)arg2;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(BOOL)arg4;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 userIsInteracting:(BOOL)arg4;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5;
- (BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1;
- (BOOL)_willNavigateFrameWithUnsubmittedForm:(id)arg1 loadingWillBeDeferred:(BOOL)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 selectFieldAfterFilling:(id)arg5;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)clearScriptWorld;
- (void)collectFormMetadataForPreFilling;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 replyIdentifier:(id)arg3;
- (void)collectURLsForPreFilling;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)dealloc;
- (void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3;
- (void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2;
- (BOOL)didStartProvisionalLoadForFrame:(id)arg1;
- (void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)initWithPageController:(id)arg1;
- (void)invalidate;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (BOOL)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
- (BOOL)shouldIncludeUnannotatedControls;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;

@end

