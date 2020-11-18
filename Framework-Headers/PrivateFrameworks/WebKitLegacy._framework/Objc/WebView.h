//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

@class DOMCSSStyleDeclaration, DOMDocument, DOMRange, NSData, NSString, NSUndoManager, WAKWindow, WebBackForwardList, WebFrame, WebPreferences, WebScriptObject, WebViewPrivate;
@protocol WebDownloadDelegate, WebEditingDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate;

@interface WebView : WAKView
{
    WebViewPrivate *_private;
}

@property (nonatomic) id<WebUIDelegate> UIDelegate;
@property (copy, nonatomic) NSString *applicationNameForUserAgent;
@property (readonly, nonatomic) WebBackForwardList *backForwardList;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (readonly, nonatomic) BOOL canMakeTextLarger;
@property (readonly, nonatomic) BOOL canMakeTextSmaller;
@property (readonly, nonatomic) BOOL canMakeTextStandardSize;
@property (nonatomic, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;
@property (copy, nonatomic) NSString *customTextEncodingName;
@property (copy, nonatomic) NSString *customUserAgent;
@property (nonatomic) id<WebDownloadDelegate> downloadDelegate;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) id<WebEditingDelegate> editingDelegate;
@property (readonly, nonatomic) double estimatedProgress;
@property (nonatomic) id<WebFrameLoadDelegate> frameLoadDelegate;
@property (copy, nonatomic) NSString *groupName;
@property (strong, nonatomic) WAKWindow *hostWindow;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) WebFrame *mainFrame;
@property (readonly, nonatomic) DOMDocument *mainFrameDocument;
@property (readonly, copy, nonatomic) NSString *mainFrameTitle;
@property (copy, nonatomic) NSString *mainFrameURL;
@property (readonly, nonatomic) BOOL maintainsInactiveSelection;
@property (copy, nonatomic) NSString *mediaStyle;
@property (nonatomic) id<WebPolicyDelegate> policyDelegate;
@property (strong, nonatomic) WebPreferences *preferences;
@property (copy, nonatomic) NSString *preferencesIdentifier;
@property (nonatomic) id<WebResourceLoadDelegate> resourceLoadDelegate;
@property (readonly, nonatomic) DOMRange *selectedDOMRange;
@property (readonly, nonatomic) WebFrame *selectedFrame;
@property (readonly, nonatomic) int selectionAffinity;
@property (nonatomic) BOOL shouldCloseWithWindow;
@property (nonatomic) BOOL shouldUpdateWhileOffscreen;
@property (nonatomic) BOOL smartInsertDeleteEnabled;
@property (copy, nonatomic, getter=_sourceApplicationAuditData, setter=_setSourceApplicationAuditData:) NSData *sourceApplicationAuditData;
@property (readonly, nonatomic) BOOL supportsTextEncoding;
@property (nonatomic) float textSizeMultiplier;
@property (strong, nonatomic) DOMCSSStyleDeclaration *typingStyle;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) WebScriptObject *windowScriptObject;

+ (id)MIMETypesShownAsHTML;
+ (BOOL)_HTTPPipeliningEnabled;
+ (id)_MIMETypeForFile:(id)arg1;
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(BOOL)arg4;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 injectedFrames:(int)arg8;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectedFrames:(int)arg7;
+ (BOOL)_allowCookies;
+ (unsigned long long)_cacheModel;
+ (void)_cacheModelChangedNotification:(id)arg1;
+ (BOOL)_canHandleRequest:(id)arg1;
+ (BOOL)_canHandleRequest:(id)arg1 forMainFrame:(BOOL)arg2;
+ (BOOL)_canShowMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (void)_clearMemoryPressure;
+ (id)_decodeData:(id)arg1;
+ (BOOL)_didSetCacheModel;
+ (void)_disableAutoStartRemoteInspector;
+ (void)_disableRemoteInspector;
+ (void)_doNotStartObservingNetworkReachability;
+ (void)_enableRemoteInspector;
+ (id)_generatedMIMETypeForURLScheme:(id)arg1;
+ (Class)_getPDFRepresentationClass;
+ (Class)_getPDFViewClass;
+ (void)_handleMemoryWarning;
+ (BOOL)_hasRemoteInspectorSession;
+ (BOOL)_isRemoteInspectorEnabled;
+ (BOOL)_isUnderMemoryPressure;
+ (void)_makeAllWebViewsPerformSelector:(SEL)arg1;
+ (unsigned long long)_maxCacheModelInAnyInstance;
+ (void)_preferencesRemovedNotification:(id)arg1;
+ (void)_preflightSpellChecker;
+ (void)_preflightSpellCheckerNow:(id)arg1;
+ (id)_productivityDocumentMIMETypes;
+ (void)_registerPluginMIMEType:(id)arg1;
+ (void)_registerURLSchemeAsAllowingDatabaseAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsAllowingLocalStorageAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsSecure:(id)arg1;
+ (void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3;
+ (void)_releaseMemoryNow;
+ (void)_removeAllUserContentFromGroup:(id)arg1;
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(BOOL)arg4;
+ (void)_removeUserScriptFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_removeUserScriptsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_removeUserStyleSheetFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_removeUserStyleSheetsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_reportException:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
+ (BOOL)_representationExistsForURLScheme:(id)arg1;
+ (void)_resetOriginAccessWhitelists;
+ (void)_setAllowCookies:(BOOL)arg1;
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)arg1;
+ (void)_setCacheModel:(unsigned long long)arg1;
+ (void)_setDomainRelaxationForbidden:(BOOL)arg1 forURLScheme:(id)arg2;
+ (void)_setFontWhitelist:(id)arg1;
+ (void)_setHTTPPipeliningEnabled:(BOOL)arg1;
+ (void)_setLoadResourcesSerially:(BOOL)arg1;
+ (void)_setPDFRepresentationClass:(Class)arg1;
+ (void)_setPDFViewClass:(Class)arg1;
+ (void)_setShouldUseFontSmoothing:(BOOL)arg1;
+ (void)_setTileCacheLayerPoolCapacity:(unsigned int)arg1;
+ (BOOL)_shouldUseFontSmoothing;
+ (BOOL)_shouldWaitForMemoryClearMessage;
+ (id)_standardUserAgentWithApplicationName:(id)arg1;
+ (id)_supportedMIMETypes;
+ (void)_unregisterPluginMIMEType:(id)arg1;
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1;
+ (BOOL)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3 allowingPlugins:(BOOL)arg4;
+ (BOOL)canCloseAllWebViews;
+ (BOOL)canShowFile:(id)arg1;
+ (BOOL)canShowMIMEType:(id)arg1;
+ (BOOL)canShowMIMETypeAsHTML:(id)arg1;
+ (void)closeAllWebViews;
+ (void)discardAllCompiledCode;
+ (void)drainLayerPool;
+ (void)enableWebThread;
+ (void)garbageCollectNow;
+ (void)initialize;
+ (BOOL)isCharacterSmartReplaceExempt:(unsigned short)arg1 isPreviousCharacter:(BOOL)arg2;
+ (void)purgeInactiveFontData;
+ (void)registerForMemoryNotifications;
+ (void)registerURLSchemeAsLocal:(id)arg1;
+ (void)registerViewClass:(Class)arg1 representationClass:(Class)arg2 forMIMEType:(id)arg3;
+ (void)releaseFastMallocMemoryOnCurrentThread;
+ (void)setMIMETypesShownAsHTML:(id)arg1;
+ (BOOL)shouldIncludeInWebKitStatistics;
+ (void)willEnterBackgroundWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)DOMRangeOfString:(id)arg1 relativeTo:(id)arg2 options:(unsigned long long)arg3;
- (id)_UIDelegateForSelector:(SEL)arg1;
- (id)_UIDelegateForwarder;
- (id)_UIKitDelegate;
- (id)_UIKitDelegateForwarder;
- (void)_addObject:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)_addToAllWebViewsSet;
- (BOOL)_allowsMessaging;
- (void)_attachScriptDebuggerToAllFrames;
- (BOOL)_becomingFirstResponderFromOutside;
- (void)_cacheFrameLoadDelegateImplementations;
- (void)_cacheHistoryDelegateImplementations;
- (void)_cacheResourceLoadDelegateImplementations;
- (void)_cacheScriptDebugDelegateImplementations;
- (BOOL)_canResetZoom:(BOOL)arg1;
- (BOOL)_canShowMIMEType:(id)arg1;
- (BOOL)_canZoomIn:(BOOL)arg1;
- (BOOL)_canZoomOut:(BOOL)arg1;
- (void)_clearBackForwardCache;
- (void)_clearCredentials;
- (void)_clearDelegates;
- (void)_clearMainFrameName;
- (void)_close;
- (void)_closePluginDatabases;
- (void)_closeWindow;
- (void)_closeWithFastTeardown;
- (void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2;
- (struct CGSize)_contentsSizeRespectingOverflow;
- (BOOL)_continuousCheckingAllowed;
- (struct CGPoint)_convertPointFromRootView:(struct CGPoint)arg1;
- (struct CGRect)_convertRectFromRootView:(struct CGRect)arg1;
- (BOOL)_cookieEnabled;
- (void)_destroyAllPlugIns;
- (void)_detachScriptDebuggerFromAllFrames;
- (id)_deviceOrientationProvider;
- (void)_didCommitLoadForFrame:(id)arg1;
- (void)_didFinishScrollingOrZooming;
- (void)_dispatchPendingLoadRequests;
- (void)_dispatchTileDidDraw:(id)arg1;
- (void)_dispatchUnloadEvent;
- (id)_displayURL;
- (void)_documentScaleChanged;
- (id)_downloadURL:(id)arg1;
- (id)_editingDelegateForwarder;
- (id)_elementAtWindowPoint:(struct CGPoint)arg1;
- (void)_enterVideoFullscreenForVideoElement:(struct HTMLVideoElement *)arg1 mode:(unsigned int)arg2;
- (void)_executeCoreCommandByName:(id)arg1 value:(id)arg2;
- (void)_exitVideoFullscreen;
- (BOOL)_fetchCustomFixedPositionLayoutRect:(struct CGRect *)arg1;
- (struct CGSize)_fixedLayoutSize;
- (id)_fixedPositionContent;
- (BOOL)_flushCompositingChanges;
- (id)_focusedFrame;
- (id)_formDelegate;
- (id)_formDelegateForSelector:(SEL)arg1;
- (id)_formDelegateForwarder;
- (id)_frameLoadDelegateForwarder;
- (id)_frameViewAtWindowPoint:(struct CGPoint)arg1;
- (double)_gapBetweenPages;
- (void)_geolocationDidChangePosition:(id)arg1;
- (void)_geolocationDidFailWithMessage:(id)arg1;
- (id)_geolocationProvider;
- (id)_globalHistoryItem;
- (BOOL)_inFastImageScalingMode;
- (BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;
- (id)_initWithArguments:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)_insertNewlineInQuotedContent;
- (BOOL)_isClosed;
- (BOOL)_isClosing;
- (BOOL)_isLoading;
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)arg1;
- (BOOL)_isPerformingProgrammaticFocus;
- (BOOL)_isProcessingUserGesture;
- (BOOL)_isSoftwareRenderable;
- (BOOL)_isStopping;
- (BOOL)_isUsingAcceleratedCompositing;
- (BOOL)_isViewVisible;
- (int)_keyboardUIMode;
- (unsigned long long)_layoutMilestones;
- (void)_listenForLayoutMilestones:(unsigned long long)arg1;
- (void)_loadBackForwardListFromOtherView:(id)arg1;
- (BOOL)_locked_plugInsAreRunningInFrame:(id)arg1;
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)arg1 inFrame:(id)arg2;
- (struct Frame *)_mainCoreFrame;
- (id)_mainFrameOverrideEncoding;
- (void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (BOOL)_needsOneShotDrawingSynchronization;
- (BOOL)_needsPreHTML5ParserQuirks;
- (void)_notificationDidClick:(unsigned long long)arg1;
- (void)_notificationDidShow:(unsigned long long)arg1;
- (unsigned long long)_notificationIDForTesting:(struct OpaqueJSValue *)arg1;
- (id)_notificationProvider;
- (void)_notificationsDidClose:(id)arg1;
- (id)_objectForIdentifier:(unsigned long long)arg1;
- (id)_openNewWindowWithRequest:(id)arg1;
- (void)_overflowScrollPositionChangedTo:(struct CGPoint)arg1 forNode:(id)arg2 isUserScroll:(BOOL)arg3;
- (unsigned long long)_pageCount;
- (double)_pageLength;
- (BOOL)_paginationBehavesLikeColumns;
- (BOOL)_paginationLineGridEnabled;
- (int)_paginationMode;
- (void)_performResponderOperation:(SEL)arg1 with:(id)arg2;
- (id)_pluginForExtension:(id)arg1;
- (id)_pluginForMIMEType:(id)arg1;
- (BOOL)_pluginsAreRunning;
- (id)_policyDelegateForwarder;
- (void)_popPerformingProgrammaticFocus;
- (BOOL)_postsAcceleratedCompositingNotifications;
- (void)_preferencesChanged:(id)arg1;
- (void)_preferencesChangedNotification:(id)arg1;
- (void)_pushPerformingProgrammaticFocus;
- (float)_realZoomMultiplier;
- (BOOL)_realZoomMultiplierIsTextOnly;
- (void)_removeFromAllWebViewsSet;
- (void)_removeObjectForIdentifier:(unsigned long long)arg1;
- (unsigned long long)_renderTreeSize;
- (void)_replaceCurrentHistoryItem:(id)arg1;
- (void)_replaceSelectionWithNode:(id)arg1 matchStyle:(BOOL)arg2;
- (void)_resetAllGeolocationPermission;
- (void)_resetZoom:(id)arg1 isTextOnly:(BOOL)arg2;
- (id)_resourceLoadDelegateForwarder;
- (id)_responderForResponderOperations;
- (void)_restorePlugInsFromCache;
- (void)_retrieveKeyboardUIModeFromPreferences:(id)arg1;
- (void)_scaleWebView:(float)arg1 atOrigin:(struct CGPoint)arg2;
- (void)_scheduleCompositingLayerFlush;
- (void)_scheduleLayerFlushForPendingTileCacheRepaint;
- (id)_selectedOrMainFrame;
- (BOOL)_selectionIsAll;
- (BOOL)_selectionIsCaret;
- (void)_setAllowsMessaging:(BOOL)arg1;
- (void)_setBaseCTM:(struct CGAffineTransform)arg1 forContext:(struct CGContext *)arg2;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 buildVersion:(id)arg2 bundleVersion:(id)arg3;
- (void)_setCookieEnabled:(BOOL)arg1;
- (void)_setCustomFixedPositionLayoutRect:(struct CGRect)arg1;
- (void)_setCustomFixedPositionLayoutRectInWebThread:(struct CGRect)arg1 synchronize:(BOOL)arg2;
- (void)_setDeviceOrientationProvider:(id)arg1;
- (void)_setFixedLayoutSize:(struct CGSize)arg1;
- (void)_setFontFallbackPrefersPictographs:(BOOL)arg1;
- (void)_setFormDelegate:(id)arg1;
- (void)_setGapBetweenPages:(double)arg1;
- (void)_setGeolocationProvider:(id)arg1;
- (void)_setGlobalHistoryItem:(struct HistoryItem *)arg1;
- (void)_setHostApplicationProcessIdentifier:(int)arg1 auditToken:(CDStruct_6ad76789)arg2;
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)arg1;
- (void)_setIsVisible:(BOOL)arg1;
- (void)_setMaintainsInactiveSelection:(BOOL)arg1;
- (BOOL)_setMediaLayer:(id)arg1 forPluginView:(id)arg2;
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)arg1;
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(BOOL)arg1;
- (void)_setNotificationProvider:(id)arg1;
- (void)_setPageLength:(double)arg1;
- (void)_setPaginationBehavesLikeColumns:(BOOL)arg1;
- (void)_setPaginationLineGridEnabled:(BOOL)arg1;
- (void)_setPaginationMode:(int)arg1;
- (void)_setPostsAcceleratedCompositingNotifications:(BOOL)arg1;
- (void)_setResourceLoadSchedulerSuspended:(BOOL)arg1;
- (void)_setUIKitDelegate:(id)arg1;
- (void)_setUIWebViewUserAgentWithBuildVersion:(id)arg1;
- (void)_setUseFastImageScalingMode:(BOOL)arg1;
- (void)_setUseFixedLayout:(BOOL)arg1;
- (void)_setVisibilityState:(int)arg1 isInitialState:(BOOL)arg2;
- (void)_setWantsTelephoneNumberParsing:(BOOL)arg1;
- (void)_setWebGLEnabled:(BOOL)arg1;
- (void)_setZoomMultiplier:(float)arg1 isTextOnly:(BOOL)arg2;
- (BOOL)_shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(int)arg3 stillSelecting:(BOOL)arg4;
- (void)_simplifyMarkup:(id)arg1 endNode:(id)arg2;
- (void)_startAllPlugIns;
- (void)_stopAllPlugIns;
- (void)_stopAllPlugInsForPageCache;
- (void)_synchronizeCustomFixedPositionLayoutRect;
- (id)_touchEventRegions;
- (void)_updateActiveState;
- (void)_updateScreenScaleFromWindow;
- (void)_updateVisibilityState;
- (BOOL)_useFixedLayout;
- (struct String)_userAgentString;
- (BOOL)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3;
- (void)_viewGeometryDidChange;
- (float)_viewScaleFactor;
- (void)_viewWillDrawInternal;
- (int)_visibilityState;
- (void)_wakWindowScreenScaleChanged:(id)arg1;
- (void)_wakWindowVisibilityChanged:(id)arg1;
- (BOOL)_wantsTelephoneNumberParsing;
- (BOOL)_webGLEnabled;
- (id)_webMailDelegate;
- (id)_webcore_effectiveFirstResponder;
- (void)_willStartScrollingOrZooming;
- (void)_zoomIn:(id)arg1 isTextOnly:(BOOL)arg2;
- (float)_zoomMultiplier:(BOOL)arg1;
- (void)_zoomOut:(id)arg1 isTextOnly:(BOOL)arg2;
- (BOOL)acceptsFirstResponder;
- (void)addCaretChangeListener:(id)arg1;
- (void)addVisitedLinks:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (BOOL)allowsNewCSSAnimationsWhileSuspended;
- (BOOL)allowsRemoteInspection;
- (BOOL)allowsUndo;
- (void)applyStyle:(id)arg1;
- (BOOL)areMemoryCacheDelegateCallsEnabled;
- (struct CGColor *)backgroundColor;
- (BOOL)becomeFirstResponder;
- (BOOL)canMarkAllTextMatches;
- (BOOL)canResetPageZoom;
- (BOOL)canZoomPageIn;
- (BOOL)canZoomPageOut;
- (id)candidateList;
- (void)capitalizeWord:(id)arg1;
- (id)caretChangeListener;
- (id)caretChangeListeners;
- (void)caretChanged;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)changeBaseWritingDirection:(id)arg1;
- (void)changeBaseWritingDirectionToLTR:(id)arg1;
- (void)changeBaseWritingDirectionToRTL:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)clearText:(id)arg1;
- (void)close;
- (void)complete:(id)arg1;
- (id)computedStyleForElement:(id)arg1 pseudoElement:(id)arg2;
- (void)copy:(id)arg1;
- (void)copyFont:(id)arg1;
- (unsigned long long)countMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 highlight:(BOOL)arg3 limit:(unsigned long long)arg4 markMatches:(BOOL)arg5;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 highlight:(BOOL)arg4 limit:(unsigned long long)arg5 markMatches:(BOOL)arg6;
- (unsigned long long)countMatchesForText:(id)arg1 options:(unsigned long long)arg2 highlight:(BOOL)arg3 limit:(unsigned long long)arg4 markMatches:(BOOL)arg5;
- (BOOL)cssAnimationsSuspended;
- (id)currentNodeHighlight;
- (void)cut:(id)arg1;
- (void)dealloc;
- (BOOL)defersCallbacks;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteSelection;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (id)documentViewAtWindowPoint:(struct CGPoint)arg1;
- (id)editableDOMRangeForPoint:(struct CGPoint)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (BOOL)findString:(id)arg1 options:(unsigned long long)arg2;
- (void)forceRequestCandidatesForTesting;
- (id)fullScreenPlaceholderView;
- (BOOL)goBack;
- (void)goBack:(id)arg1;
- (BOOL)goForward;
- (void)goForward:(id)arg1;
- (BOOL)goToBackForwardItem:(id)arg1;
- (id)historyDelegate;
- (void)ignoreSpelling:(id)arg1;
- (void)indent:(id)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)insertBacktab:(id)arg1;
- (void)insertDictationPhrases:(id)arg1 metadata:(id)arg2;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertText:(id)arg1;
- (id)inspector;
- (BOOL)interactiveFormValidationEnabled;
- (BOOL)isAutomaticDashSubstitutionEnabled;
- (BOOL)isAutomaticLinkDetectionEnabled;
- (BOOL)isAutomaticQuoteSubstitutionEnabled;
- (BOOL)isAutomaticSpellingCorrectionEnabled;
- (BOOL)isAutomaticTextReplacementEnabled;
- (BOOL)isSelectTrailingWhitespaceEnabled;
- (BOOL)isTrackingRepaints;
- (void)lowercaseWord:(id)arg1;
- (id)mainFrameIconURL;
- (void)makeBaseWritingDirectionLeftToRight:(id)arg1;
- (void)makeBaseWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextStandardSize:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (unsigned long long)markAllMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 highlight:(BOOL)arg3 limit:(unsigned long long)arg4;
- (float)mediaVolume;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)outdent:(id)arg1;
- (void)overWrite:(id)arg1;
- (struct Page *)page;
- (void)pageDown:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (float)pageSizeMultiplier;
- (void)pageUp:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAsRichText:(id)arg1;
- (void)pasteFont:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (id)previousValidKeyView;
- (id)quickLookContentForURL:(id)arg1;
- (id)rectsForTextMatches;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)reload:(id)arg1;
- (void)reloadFromOrigin:(id)arg1;
- (void)removeAllCaretChangeListeners;
- (void)removeCaretChangeListener:(id)arg1;
- (void)removeVisitedLink:(id)arg1;
- (void)replaceSelectionWithArchive:(id)arg1;
- (void)replaceSelectionWithMarkupString:(id)arg1;
- (void)replaceSelectionWithNode:(id)arg1;
- (void)replaceSelectionWithText:(id)arg1;
- (void)resetPageZoom:(id)arg1;
- (void)resetTrackedRepaints;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)scriptDebugDelegate;
- (void)scrollDOMRangeToVisible:(id)arg1;
- (void)scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4 startInSelection:(BOOL)arg5;
- (void)selectAll:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)setAllowsNewCSSAnimationsWhileSuspended:(BOOL)arg1;
- (void)setAllowsRemoteInspection:(BOOL)arg1;
- (void)setAllowsUndo:(BOOL)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setCSSAnimationsSuspended:(BOOL)arg1;
- (void)setCaretChangeListener:(id)arg1;
- (void)setCurrentNodeHighlight:(id)arg1;
- (void)setDefersCallbacks:(BOOL)arg1;
- (void)setHistoryDelegate:(id)arg1;
- (void)setInteractiveFormValidationEnabled:(BOOL)arg1;
- (void)setMainFrameDocumentReady:(BOOL)arg1;
- (void)setMaintainsBackForwardList:(BOOL)arg1;
- (void)setMark:(id)arg1;
- (void)setMediaVolume:(float)arg1;
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)setPageSizeMultiplier:(float)arg1;
- (void)setScriptDebugDelegate:(id)arg1;
- (void)setSelectTrailingWhitespaceEnabled:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (void)setShowingInspectorIndication:(BOOL)arg1;
- (void)setTabKeyCyclesThroughElements:(BOOL)arg1;
- (void)setTracksRepaints:(BOOL)arg1;
- (void)setUsesPageCache:(BOOL)arg1;
- (void)setValidationMessageTimerMagnification:(int)arg1;
- (void)setWebMailDelegate:(id)arg1;
- (BOOL)shouldClose;
- (BOOL)shouldRequestCandidates;
- (void)showCandidates:(id)arg1 forString:(id)arg2 inRect:(struct CGRect)arg3 forSelectedRange:(struct _NSRange)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)showGuessPanel:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)stopLoadingAndClear;
- (void)stopSpeaking:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)styleAtSelectionStart;
- (id)styleDeclarationWithText:(id)arg1;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (BOOL)tabKeyCyclesThroughElements;
- (void)takeFindStringFromSelection:(id)arg1;
- (void)takeStringURLFrom:(id)arg1;
- (id)textIteratorForRect:(struct CGRect)arg1;
- (void)toggleBaseWritingDirection:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)toggleItalic:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)trackedRepaintRects;
- (void)transpose:(id)arg1;
- (id)typingAttributes;
- (void)underline:(id)arg1;
- (void)unmarkAllTextMatches;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)unscript:(id)arg1;
- (void)updateLayoutIgnorePendingStyleSheets;
- (void)updateWebViewAdditions;
- (void)uppercaseWord:(id)arg1;
- (id)userAgentForURL:(id)arg1;
- (BOOL)usesPageCache;
- (int)validationMessageTimerMagnification;
- (void)viewDidMoveToWindow;
- (void)webViewAdditionsWillDestroyView;
- (void)yank:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)zoomPageIn:(id)arg1;
- (void)zoomPageOut:(id)arg1;

@end

