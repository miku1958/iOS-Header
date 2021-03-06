//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSFluidProgressStateSource-Protocol.h>
#import <SafariSharedUI/WBSTranslationContentExtractionDelegate-Protocol.h>
#import <SafariSharedUI/WBSTranslationContentFillingDelegate-Protocol.h>
#import <SafariSharedUI/WBSTranslationContextTranslating-Protocol.h>
#import <SafariSharedUI/WBSTranslationErrorControllerDelegate-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, WBSFluidProgressController, WBSFluidProgressState, WBSTranslationContextSnapshot, WBSTranslationDiagnosticData, WBSTranslationErrorController, WBSTranslationScrollInteractionAnalyticsHelper, _LTTranslationSession, _LTTranslator;
@protocol OS_dispatch_queue, WBSTranslationContentExtracting, WBSTranslationContentFilling, WBSTranslationContextDelegate, WBSTranslationContextLanguageDetecting, WBSTranslationContextPreferenceProviding, WBSTranslationContextTranslating;

@interface WBSTranslationContext : NSObject <WBSTranslationErrorControllerDelegate, WBSFluidProgressStateSource, WBSTranslationContentExtractionDelegate, WBSTranslationContentFillingDelegate, WBSTranslationContextTranslating>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    _LTTranslator *_translator;
    _LTTranslationSession *_cachedSession;
    id<WBSTranslationContextTranslating> _contentTranslator;
    id<WBSTranslationContentExtracting> _contentExtractor;
    id<WBSTranslationContentFilling> _contentFiller;
    id<WBSTranslationContextLanguageDetecting> _languageDetector;
    id<WBSTranslationContextDelegate> _delegate;
    NSString *_targetLocale;
    WBSTranslationDiagnosticData *_diagnosticData;
    NSNumber *_cachedClientIsUsingPrivateBrowsingValue;
    NSURL *_cachedWebViewURL;
    WBSTranslationErrorController *_errorController;
    WBSTranslationContextSnapshot *_snapshotToRestoreOnNextNavigation;
    NSArray *_cachedTextSamples;
    BOOL _hasReportedFirstParagraphFinishedFillingForAnalytics;
    BOOL _hasReportedInitialPageFinishedFillingForAnalytics;
    WBSTranslationScrollInteractionAnalyticsHelper *_scrollInteractionAnalyticsHelper;
    NSString *_previousPageTargetLocale;
    NSString *_previousPageSourceLocale;
    NSString *_previousPageHighLevelDomain;
    BOOL _nextNavigationIsEligibleForContinuedTranslation;
    struct os_unfair_lock_s _synchronousIvarLock;
    unsigned long long _state;
    NSString *_webpageLocale;
    id<WBSTranslationContextPreferenceProviding> _preferenceProvider;
    NSArray *_cachedSupportedLocalePairs;
    NSNumber *_cachedTranslationSupportedInCurrentRegion;
    unsigned long long _initiallyExtractedParagraphCount;
    unsigned long long _translatedParagraphCount;
    BOOL _hasFinishedInitialExtraction;
    WBSFluidProgressState *_fluidProgressState;
    WBSFluidProgressController *_fluidProgressController;
    NSArray *_cachedAllowedTargetLocaleIdentifiers;
    NSArray *_cachedAvailablePreferredTargetLocalesFilteredBySupportedLocales;
}

@property (readonly, nonatomic) NSArray *allowedTargetLocaleIdentifiers;
@property (readonly, nonatomic) NSArray *availableTargetLocaleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<WBSTranslationContextDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long detectionNotificationLevel;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (readonly, nonatomic) BOOL hasStartedTranslating;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldOfferTranslationUI;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *webpageLocale;

+ (id)translationContextWithWebView:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (id)_availableTargetLocaleIdentifiersConsideringCurrentWebpageLocale:(BOOL)arg1;
- (BOOL)_canLogSourcePageURL;
- (void)_cancelProgressForNavigation:(BOOL)arg1;
- (id)_currentSession;
- (id)_currentSnapshot;
- (void)_dominantLocaleForTextSample:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateJSONVersionOfContent:(id)arg1 forPurpose:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_generateJSONVersionOfErrors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_genericErrorMessage;
- (BOOL)_nextURLIsEligibleForContinuedTranslation:(id)arg1;
- (void)_notifyDelegateToReportProgressInUnifiedField:(BOOL)arg1;
- (void)_promptIfNeededToConsentToTranslationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reportFilledFirstParagraphIfNeeded;
- (void)_reportFinishedFillingInitialPageContentIfNeeded;
- (void)_reportLanguageDetectionAnalyticsForWebpageLocale:(id)arg1 notificationLevel:(unsigned long long)arg2;
- (void)_reportRequestedTranslationAnalyticsForWebpageLocale:(id)arg1 targetLocale:(id)arg2 requestType:(long long)arg3;
- (void)_requestTranslatingWebpageToLocale:(id)arg1 requestType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_restoreContextSnapshotIfNeeded:(id)arg1 forURL:(id)arg2;
- (void)_setState:(unsigned long long)arg1 usingLock:(BOOL)arg2;
- (void)_setState:(unsigned long long)arg1 usingLock:(BOOL)arg2 validatingTransitionIsAllowed:(BOOL)arg3;
- (void)_startProgressForExtractingContent;
- (BOOL)_translationSupportedInCurrentRegion;
- (void)_updateCachedAPISupportedValues;
- (void)_updateProgressForFinishingInitialContentExtraction;
- (void)_updateProgressWithExtractedParagraphCount:(unsigned long long)arg1;
- (void)_updateProgressWithTranslatedParagraphCount:(unsigned long long)arg1;
- (id)_userVisibleErrorMessageForError:(id)arg1;
- (BOOL)_validateTargetLocaleSynchronously:(id)arg1;
- (void)cacheTextSamples:(id)arg1;
- (void)clearFluidProgressState;
- (void)contentExtractor:(id)arg1 didExtractContent:(id)arg2;
- (void)contentExtractorDidFinishExtractingInitialContent:(id)arg1;
- (void)contentFiller:(id)arg1 didCompleteFillingItem:(id)arg2 withError:(id)arg3;
- (BOOL)createFluidProgressState;
- (BOOL)debugAlwaysShowConsentAlert;
- (void)dominantLocaleForTextSamples:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dominantLocaleForTextSamples:(id)arg1 url:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)errorController:(id)arg1 didReachThresholdForError:(id)arg2;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (void)generateDiagnosticDataForPurpose:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasConsentedToFirstTimeAlert;
- (BOOL)hasFailedURL;
- (BOOL)hideMessageInUnifiedField;
- (id)initWithContentExtractor:(id)arg1 contentFiller:(id)arg2 delegate:(id)arg3;
- (BOOL)isContinuedTranslationEnabled;
- (BOOL)isTranslationEnabled;
- (void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)owningWebViewDidCommitNavigationWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)owningWebViewDidDecidePolicy:(long long)arg1 forNavigationAction:(id)arg2 currentBackForwardListItem:(id)arg3;
- (void)owningWebViewWillNavigateAndSaveCurrentSnapshotToStore:(id)arg1 isEligibleForContinuedTranslation:(BOOL)arg2;
- (void)owningWebViewWillNavigateToBackForwardListItem:(id)arg1 inPageCache:(BOOL)arg2;
- (void)owningWebViewWillNavigateToBackForwardListItemWithSnapshotStore:(id)arg1 inPageCache:(BOOL)arg2;
- (id)progressState;
- (void)reloadPageInOriginalLanguage;
- (void)requestSendFeedbackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestTranslatingWebpageToLocale:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setConsentedToFirstTimeAlert:(BOOL)arg1;
- (void)setContentTranslator:(id)arg1;
- (void)setPreferenceProvider:(id)arg1;
- (void)setWebpageLocaleUsingCachedTextSamplesIfNeeded:(CDUnknownBlockType)arg1;
- (void)setWebpageLocaleWithExtractedTextSamples:(id)arg1 url:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)supportedLocalePairsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)translationContext:(id)arg1 translateWebpageContents:(id)arg2 toTargetLocale:(id)arg3 translationHandler:(CDUnknownBlockType)arg4;
- (void)updateMaxVisibleHeightPercentageIfNeeded:(double)arg1 userDriven:(BOOL)arg2;
- (id)userPreferredTargetLocales;
- (BOOL)validateTargetLocale:(id)arg1;
- (void)validateTargetLocale:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

