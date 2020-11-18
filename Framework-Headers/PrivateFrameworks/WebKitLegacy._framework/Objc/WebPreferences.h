//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface WebPreferences : NSObject <NSCoding>
{
    struct WebPreferencesPrivate *_private;
}

@property (nonatomic) BOOL CSSOMViewScrollingAPIEnabled;
@property (nonatomic) BOOL accessibilityObjectModelEnabled;
@property (strong, nonatomic) NSArray *additionalSupportedImageTypes;
@property (nonatomic) BOOL allowCrossOriginSubresourcesToAskForCredentials;
@property (nonatomic) BOOL allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property (nonatomic) BOOL allowsAirPlayForMediaPlayback;
@property (nonatomic) BOOL allowsAnimatedImageLooping;
@property (nonatomic) BOOL allowsAnimatedImages;
@property (nonatomic) BOOL allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic) BOOL animatedImageAsyncDecodingEnabled;
@property (nonatomic) BOOL ariaReflectionEnabled;
@property (nonatomic) BOOL attachmentElementEnabled;
@property (nonatomic) BOOL autosaves;
@property (nonatomic) unsigned long long cacheModel;
@property (nonatomic) BOOL colorFilterEnabled;
@property (nonatomic) BOOL constantPropertiesEnabled;
@property (nonatomic) BOOL coreMathMLEnabled;
@property (copy, nonatomic) NSString *cursiveFontFamily;
@property (nonatomic) int defaultFixedFontSize;
@property (nonatomic) int defaultFontSize;
@property (copy, nonatomic) NSString *defaultTextEncodingName;
@property (nonatomic) BOOL displayContentsEnabled;
@property (nonatomic) BOOL encryptedMediaAPIEnabled;
@property (copy, nonatomic) NSString *fantasyFontFamily;
@property (copy, nonatomic) NSString *fixedFontFamily;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL inspectorAdditionsEnabled;
@property (nonatomic) BOOL intersectionObserverEnabled;
@property (nonatomic) BOOL isSecureContextAttributeEnabled;
@property (nonatomic, getter=isJavaEnabled) BOOL javaEnabled;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;
@property (nonatomic) BOOL javaScriptMarkupEnabled;
@property (nonatomic) BOOL largeImageAsyncDecodingEnabled;
@property (nonatomic) BOOL legacyEncryptedMediaAPIEnabled;
@property (nonatomic) BOOL linkPreloadEnabled;
@property (nonatomic) BOOL linkPreloadResponsiveImagesEnabled;
@property (nonatomic) BOOL loadsImagesAutomatically;
@property (nonatomic) BOOL mediaCapabilitiesEnabled;
@property (nonatomic) NSString *mediaContentTypesRequiringHardwareSupport;
@property (nonatomic) BOOL mediaDataLoadsAutomatically;
@property (nonatomic) BOOL mediaRecorderEnabled;
@property (nonatomic) BOOL mediaUserGestureInheritsFromDocument;
@property (nonatomic) BOOL menuItemElementEnabled;
@property (nonatomic) int minimumFontSize;
@property (nonatomic) int minimumLogicalFontSize;
@property (nonatomic, getter=arePlugInsEnabled) BOOL plugInsEnabled;
@property (nonatomic) BOOL privateBrowsingEnabled;
@property (nonatomic) BOOL punchOutWhiteBackgroundsInDarkMode;
@property (nonatomic) BOOL quickLookDocumentSavingEnabled;
@property (nonatomic) BOOL referrerPolicyAttributeEnabled;
@property (nonatomic) BOOL resizeObserverEnabled;
@property (nonatomic) BOOL resourceTimingEnabled;
@property (copy, nonatomic) NSString *sansSerifFontFamily;
@property (copy, nonatomic) NSString *serifFontFamily;
@property (nonatomic) BOOL sourceBufferChangeTypeEnabled;
@property (copy, nonatomic) NSString *standardFontFamily;
@property (nonatomic) BOOL suppressesIncrementalRendering;
@property (nonatomic) BOOL userStyleSheetEnabled;
@property (strong, nonatomic) NSURL *userStyleSheetLocation;
@property (nonatomic) BOOL userTimingEnabled;
@property (nonatomic) BOOL usesPageCache;
@property (nonatomic) BOOL viewportFitEnabled;
@property (nonatomic) BOOL visualViewportAPIEnabled;

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_clearNetworkLoaderSession;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (unsigned int)_systemCFStringEncoding;
+ (void)initialize;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)standardPreferences;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (BOOL)_allowPasswordEcho;
- (BOOL)_alwaysRequestGeolocationPermission;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (double)_backForwardCacheExpirationInterval;
- (BOOL)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (id)_ftpDirectoryTemplatePath;
- (int)_integerValueForKey:(id)arg1;
- (int)_interpolationQuality;
- (void)_invalidateCachedPreferences;
- (int)_layoutInterval;
- (id)_localStorageDatabasePath;
- (long long)_longLongValueForKey:(id)arg1;
- (float)_maxParseDuration;
- (BOOL)_mediaRecorderEnabled;
- (float)_minimumZoomFontSize;
- (float)_passwordEchoDuration;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setInterpolationQuality:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMediaRecorderEnabled:(BOOL)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setStringArrayValueForKey:(id)arg1 forKey:(id)arg2;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (void)_setTextAutosizingEnabled:(BOOL)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)_standalone;
- (id)_stringArrayValueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (BOOL)_telephoneNumberParsingEnabled;
- (BOOL)_textAutosizingEnabled;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_updatePrivateBrowsingStateTo:(BOOL)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (BOOL)acceleratedCompositingEnabled;
- (BOOL)acceleratedDrawingEnabled;
- (BOOL)adClickAttributionEnabled;
- (BOOL)allowFileAccessFromFileURLs;
- (BOOL)allowUniversalAccessFromFileURLs;
- (BOOL)allowsAlternateFullscreen;
- (BOOL)allowsPictureInPictureMediaPlayback;
- (long long)applicationCacheDefaultOriginQuota;
- (long long)applicationCacheTotalQuota;
- (BOOL)applicationChromeModeEnabled;
- (BOOL)asyncFrameScrollingEnabled;
- (BOOL)asynchronousSpellCheckingEnabled;
- (BOOL)audioPlaybackRequiresUserGesture;
- (unsigned int)audioSessionCategoryOverride;
- (BOOL)authorAndUserStylesEnabled;
- (BOOL)automaticallyDetectsCacheModel;
- (BOOL)avKitEnabled;
- (BOOL)backspaceKeyNavigationEnabled;
- (BOOL)cacheAPIEnabled;
- (BOOL)canvasUsesAcceleratedDrawing;
- (BOOL)contentChangeObserverEnabled;
- (BOOL)cssLogicalEnabled;
- (BOOL)customElementsEnabled;
- (BOOL)customPasteboardDataEnabled;
- (BOOL)dataTransferItemsEnabled;
- (BOOL)databasesEnabled;
- (void)dealloc;
- (BOOL)developerExtrasEnabled;
- (BOOL)diagnosticLoggingEnabled;
- (void)didRemoveFromWebView;
- (BOOL)directoryUploadEnabled;
- (BOOL)displayListDrawingEnabled;
- (BOOL)domTimersThrottlingEnabled;
- (BOOL)downloadAttributeEnabled;
- (int)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)enumeratingAllNetworkInterfacesEnabled;
- (BOOL)experimentalNotificationsEnabled;
- (BOOL)fetchAPIEnabled;
- (BOOL)fetchAPIKeepAliveEnabled;
- (BOOL)forceLowPowerGPUForWebGL;
- (BOOL)forceSoftwareWebGLRendering;
- (int)frameFlattening;
- (BOOL)fullScreenEnabled;
- (BOOL)gamepadsEnabled;
- (BOOL)hiddenPageCSSAnimationSuspensionEnabled;
- (BOOL)hiddenPageDOMTimerThrottlingEnabled;
- (BOOL)httpEquivEnabled;
- (BOOL)hyperlinkAuditingEnabled;
- (BOOL)iceCandidateFilteringEnabled;
- (BOOL)imageControlsEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (BOOL)inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (BOOL)invisibleAutoplayNotPermitted;
- (BOOL)isAVFoundationEnabled;
- (BOOL)isAVFoundationNSURLSessionEnabled;
- (BOOL)isDNSPrefetchingEnabled;
- (BOOL)isDOMPasteAllowed;
- (BOOL)isFrameFlatteningEnabled;
- (BOOL)isHixie76WebSocketProtocolEnabled;
- (BOOL)isInheritURIQueryComponentEnabled;
- (BOOL)isSpatialNavigationEnabled;
- (BOOL)isVideoPluginProxyEnabled;
- (BOOL)isWebSecurityEnabled;
- (BOOL)isXSSAuditorEnabled;
- (BOOL)javaScriptCanAccessClipboard;
- (int)javaScriptRuntimeFlags;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (BOOL)localFileContentSniffingEnabled;
- (BOOL)localStorageEnabled;
- (BOOL)lowPowerVideoAudioBufferSizeEnabled;
- (BOOL)mediaCaptureRequiresSecureConnection;
- (BOOL)mediaControlsScaleWithPageZoom;
- (BOOL)mediaDevicesEnabled;
- (id)mediaKeysStorageDirectory;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackAllowsInline;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (BOOL)mediaPreloadingEnabled;
- (BOOL)mediaSourceEnabled;
- (BOOL)mediaStreamEnabled;
- (BOOL)metaRefreshEnabled;
- (BOOL)mockCaptureDevicesEnabled;
- (BOOL)mockCaptureDevicesPromptEnabled;
- (BOOL)mockScrollbarsEnabled;
- (BOOL)modernMediaControlsEnabled;
- (BOOL)needsStorageAccessFromFileURLsQuirk;
- (BOOL)networkDataUsageTrackingEnabled;
- (id)networkInterfaceName;
- (BOOL)notificationsEnabled;
- (BOOL)offlineWebApplicationCacheEnabled;
- (BOOL)overrideUserGestureRequirementForMainContent;
- (BOOL)pageCacheSupportsPlugins;
- (BOOL)paginateDuringLayoutEnabled;
- (BOOL)peerConnectionEnabled;
- (id)pictographFontFamily;
- (BOOL)plugInSnapshottingEnabled;
- (BOOL)pointerEventsEnabled;
- (BOOL)readableByteStreamAPIEnabled;
- (BOOL)requestAnimationFrameEnabled;
- (BOOL)resourceLoadStatisticsEnabled;
- (BOOL)selectionAcrossShadowBoundariesEnabled;
- (BOOL)serverTimingEnabled;
- (BOOL)serviceControlsEnabled;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (void)setAVFoundationNSURLSessionEnabled:(BOOL)arg1;
- (void)setAVKitEnabled:(BOOL)arg1;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)setAdClickAttributionEnabled:(BOOL)arg1;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (void)setAllowsAlternateFullscreen:(BOOL)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(BOOL)arg1;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (void)setAsyncFrameScrollingEnabled:(BOOL)arg1;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (void)setAudioPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (void)setBackspaceKeyNavigationEnabled:(BOOL)arg1;
- (void)setCSSLogicalEnabled:(BOOL)arg1;
- (void)setCacheAPIEnabled:(BOOL)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (void)setContentChangeObserverEnabled:(BOOL)arg1;
- (void)setCustomElementsEnabled:(BOOL)arg1;
- (void)setCustomPasteboardDataEnabled:(BOOL)arg1;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (void)setDOMTimersThrottlingEnabled:(BOOL)arg1;
- (void)setDataTransferItemsEnabled:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)setDiagnosticLoggingEnabled:(BOOL)arg1;
- (void)setDirectoryUploadEnabled:(BOOL)arg1;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (void)setDisplayListDrawingEnabled:(BOOL)arg1;
- (void)setDownloadAttributeEnabled:(BOOL)arg1;
- (void)setEditableLinkBehavior:(int)arg1;
- (void)setEnableInheritURIQueryComponent:(BOOL)arg1;
- (void)setEnumeratingAllNetworkInterfacesEnabled:(BOOL)arg1;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (void)setFetchAPIEnabled:(BOOL)arg1;
- (void)setFetchAPIKeepAliveEnabled:(BOOL)arg1;
- (void)setForceSoftwareWebGLRendering:(BOOL)arg1;
- (void)setForceWebGLUsesLowPower:(BOOL)arg1;
- (void)setFrameFlattening:(int)arg1;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (void)setGamepadsEnabled:(BOOL)arg1;
- (void)setHTTPEquivEnabled:(BOOL)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)arg1;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1;
- (void)setHixie76WebSocketProtocolEnabled:(BOOL)arg1;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (void)setIceCandidateFilteringEnabled:(BOOL)arg1;
- (void)setImageControlsEnabled:(BOOL)arg1;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setInlineMediaPlaybackRequiresPlaysInlineAttribute:(BOOL)arg1;
- (void)setInvisibleAutoplayNotPermitted:(BOOL)arg1;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(BOOL)arg1;
- (void)setMediaCaptureRequiresSecureConnection:(BOOL)arg1;
- (void)setMediaControlsScaleWithPageZoom:(BOOL)arg1;
- (void)setMediaDevicesEnabled:(BOOL)arg1;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setMediaPreloadingEnabled:(BOOL)arg1;
- (void)setMediaSourceEnabled:(BOOL)arg1;
- (void)setMediaStreamEnabled:(BOOL)arg1;
- (void)setMetaRefreshEnabled:(BOOL)arg1;
- (void)setMockCaptureDevicesEnabled:(BOOL)arg1;
- (void)setMockCaptureDevicesPromptEnabled:(BOOL)arg1;
- (void)setMockScrollbarsEnabled:(BOOL)arg1;
- (void)setModernMediaControlsEnabled:(BOOL)arg1;
- (void)setNeedsStorageAccessFromFileURLsQuirk:(BOOL)arg1;
- (void)setNetworkDataUsageTrackingEnabled:(BOOL)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setOverrideUserGestureRequirementForMainContent:(BOOL)arg1;
- (void)setPageCacheSupportsPlugins:(BOOL)arg1;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (void)setPeerConnectionEnabled:(BOOL)arg1;
- (void)setPictographFontFamily:(id)arg1;
- (void)setPlugInSnapshottingEnabled:(BOOL)arg1;
- (void)setPointerEventsEnabled:(BOOL)arg1;
- (void)setReadableByteStreamAPIEnabled:(BOOL)arg1;
- (void)setRequestAnimationFrameEnabled:(BOOL)arg1;
- (void)setResourceLoadStatisticsEnabled:(BOOL)arg1;
- (void)setSelectionAcrossShadowBoundariesEnabled:(BOOL)arg1;
- (void)setServerTimingEnabled:(BOOL)arg1;
- (void)setServiceControlsEnabled:(BOOL)arg1;
- (void)setShadowDOMEnabled:(BOOL)arg1;
- (void)setShouldConvertPositionStyleOnCopy:(BOOL)arg1;
- (void)setShouldDisplayCaptions:(BOOL)arg1;
- (void)setShouldDisplaySubtitles:(BOOL)arg1;
- (void)setShouldDisplayTextDescriptions:(BOOL)arg1;
- (void)setShouldRespectImageOrientation:(BOOL)arg1;
- (void)setShowDebugBorders:(BOOL)arg1;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (void)setSimpleLineLayoutDebugBordersEnabled:(BOOL)arg1;
- (void)setSimpleLineLayoutEnabled:(BOOL)arg1;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (void)setSubpixelAntialiasedLayerTextEnabled:(BOOL)arg1;
- (void)setSubpixelCSSOMElementMetricsEnabled:(BOOL)arg1;
- (void)setSyntheticEditingCommandsEnabled:(BOOL)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(BOOL)arg1;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (void)setVideoPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setVideoPluginProxyEnabled:(BOOL)arg1;
- (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)arg1;
- (void)setWebAnimationsCSSIntegrationEnabled:(BOOL)arg1;
- (void)setWebAnimationsEnabled:(BOOL)arg1;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (void)setWebGL2Enabled:(BOOL)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (void)setWebGPUEnabled:(BOOL)arg1;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (void)setWritableStreamAPIEnabled:(BOOL)arg1;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)shadowDOMEnabled;
- (BOOL)shouldConvertPositionStyleOnCopy;
- (BOOL)shouldDisplayCaptions;
- (BOOL)shouldDisplaySubtitles;
- (BOOL)shouldDisplayTextDescriptions;
- (BOOL)shouldRespectImageOrientation;
- (BOOL)showDebugBorders;
- (BOOL)showRepaintCounter;
- (BOOL)shrinksStandaloneImagesToFit;
- (BOOL)simpleLineLayoutDebugBordersEnabled;
- (BOOL)simpleLineLayoutEnabled;
- (int)storageBlockingPolicy;
- (BOOL)storageTrackerEnabled;
- (BOOL)subpixelAntialiasedLayerTextEnabled;
- (BOOL)subpixelCSSOMElementMetricsEnabled;
- (BOOL)syntheticEditingCommandsEnabled;
- (int)textDirectionSubmenuInclusionBehavior;
- (BOOL)useLegacyTextAlignPositionedElementBehavior;
- (BOOL)usePreHTML5ParserQuirks;
- (BOOL)usesEncodingDetector;
- (BOOL)videoPlaybackRequiresUserGesture;
- (BOOL)wantsBalancedSetDefersLoadingBehavior;
- (BOOL)webAnimationsCSSIntegrationEnabled;
- (BOOL)webAnimationsEnabled;
- (BOOL)webArchiveDebugModeEnabled;
- (BOOL)webAudioEnabled;
- (BOOL)webGL2Enabled;
- (BOOL)webGLEnabled;
- (BOOL)webGPUEnabled;
- (void)willAddToWebView;
- (BOOL)writableStreamAPIEnabled;
- (BOOL)zoomsTextOnly;

@end
