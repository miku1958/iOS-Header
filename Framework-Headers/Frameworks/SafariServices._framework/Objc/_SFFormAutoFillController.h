//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFFormMetadataObserver-Protocol.h>
#import <SafariServices/_SFAuthenticationClient-Protocol.h>

@class NSMutableIndexSet, NSMutableSet, NSString, NSTimer, SFFormAutocompleteState, UIView, WKWebView, _SFAuthenticationContext, _SFAutoFillAuthenticationCache, _WKRemoteObjectInterface;
@protocol SFFormAutoFillControllerDelegate, SFFormAutoFiller, WBUFormAutoFillWebView;

@interface _SFFormAutoFillController : NSObject <SFFormMetadataObserver, _SFAuthenticationClient>
{
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id<SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id<SFFormAutoFiller> _autoFiller;
    BOOL _isCurrentlyAuthenticating;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    BOOL _metadataCorrectionsEnabled;
}

@property (readonly, nonatomic) _SFAutoFillAuthenticationCache *authenticationCache;
@property (readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL metadataCorrectionsEnabled; // @synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;

- (void).cxx_destruct;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_prefillTimerFired:(id)arg1;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)authenticateForAutoFillOnPageLoad:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFill;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 andFocusField:(id)arg4;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5;
- (void)dealloc;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(BOOL)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;

@end

