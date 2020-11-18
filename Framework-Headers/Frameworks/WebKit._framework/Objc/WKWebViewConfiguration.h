//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCoding-Protocol.h>
#import <WebKit/NSCopying-Protocol.h>

@class NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebViewContentProviderRegistry, WKWebsiteDataStore, _WKVisitedLinkStore, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCoding, NSCopying>
{
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool>> _processPool;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences>> _preferences;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController>> _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>> _visitedLinkStore;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> _websiteDataStore;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    struct RetainPtr<NSString> _groupIdentifier;
    struct LazyInitialized<WTF::RetainPtr<NSString>> _applicationNameForUserAgent;
    double _incrementalRenderingSuppressionTimeout;
    BOOL _treatsSHA1SignedCertificatesAsInsecure;
    BOOL _respectsImageOrientation;
    BOOL _printsBackgrounds;
    BOOL _allowsJavaScriptMarkup;
    BOOL _convertsPositionStyleOnCopy;
    BOOL _allowsMetaRefresh;
    BOOL _allowUniversalAccessFromFileURLs;
    struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>> _contentProviderRegistry;
    BOOL _alwaysRunsAtForegroundPriority;
    BOOL _allowsInlineMediaPlayback;
    BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    BOOL _allowsInlineMediaPlaybackAfterFullscreen;
    BOOL _invisibleAutoplayNotPermitted;
    BOOL _mediaDataLoadsAutomatically;
    BOOL _attachmentElementEnabled;
    BOOL _mainContentUserGestureOverrideEnabled;
    BOOL _initialCapitalizationEnabled;
    BOOL _waitsForPaintAfterViewDidMoveToWindow;
    BOOL _controlledByAutomation;
    BOOL _applePayEnabled;
    BOOL _needsStorageAccessFromFileURLsQuirk;
    NSString *_overrideContentSecurityPolicy;
    BOOL _suppressesIncrementalRendering;
    BOOL _allowsAirPlayForMediaPlayback;
    BOOL _allowsPictureInPictureMediaPlayback;
    BOOL _ignoresViewportScaleLimits;
    unsigned long long _mediaTypesRequiringUserActionForPlayback;
    long long _selectionGranularity;
    unsigned long long _dataDetectorTypes;
}

@property (nonatomic, setter=_setAllowUniversalAccessFromFileURLs:) BOOL _allowUniversalAccessFromFileURLs;
@property (nonatomic, setter=_setAllowsInlineMediaPlaybackAfterFullscreen:) BOOL _allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic, setter=_setAllowsJavaScriptMarkup:) BOOL _allowsJavaScriptMarkup;
@property (nonatomic, setter=_setAllowsMetaRefresh:) BOOL _allowsMetaRefresh;
@property (weak, nonatomic, setter=_setAlternateWebViewForNavigationGestures:) WKWebView *_alternateWebViewForNavigationGestures;
@property (nonatomic, setter=_setAlwaysRunsAtForegroundPriority:) BOOL _alwaysRunsAtForegroundPriority;
@property (nonatomic, setter=_setApplePayEnabled:) BOOL _applePayEnabled;
@property (nonatomic, setter=_setAttachmentElementEnabled:) BOOL _attachmentElementEnabled;
@property (nonatomic, setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (nonatomic, getter=_isControlledByAutomation, setter=_setControlledByAutomation:) BOOL _controlledByAutomation;
@property (nonatomic, setter=_setConvertsPositionStyleOnCopy:) BOOL _convertsPositionStyleOnCopy;
@property (copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property (nonatomic, setter=_setIncrementalRenderingSuppressionTimeout:) double _incrementalRenderingSuppressionTimeout;
@property (nonatomic, setter=_setInitialCapitalizationEnabled:) BOOL _initialCapitalizationEnabled;
@property (nonatomic, setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:) BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (nonatomic, setter=_setInvisibleAutoplayNotPermitted:) BOOL _invisibleAutoplayNotPermitted;
@property (nonatomic, setter=_setMainContentUserGestureOverrideEnabled:) BOOL _mainContentUserGestureOverrideEnabled;
@property (nonatomic, setter=_setMediaDataLoadsAutomatically:) BOOL _mediaDataLoadsAutomatically;
@property (nonatomic, setter=_setNeedsStorageAccessFromFileURLsQuirk:) BOOL _needsStorageAccessFromFileURLsQuirk;
@property (nonatomic, setter=_setOverrideContentSecurityPolicy:) NSString *_overrideContentSecurityPolicy;
@property (nonatomic, setter=_setPrintsBackgrounds:) BOOL _printsBackgrounds;
@property (weak, nonatomic, setter=_setRelatedWebView:) WKWebView *_relatedWebView;
@property (nonatomic, setter=_setRequiresUserActionForAudioPlayback:) BOOL _requiresUserActionForAudioPlayback;
@property (nonatomic, setter=_setRequiresUserActionForVideoPlayback:) BOOL _requiresUserActionForVideoPlayback;
@property (nonatomic, setter=_setRespectsImageOrientation:) BOOL _respectsImageOrientation;
@property (nonatomic, setter=_setTreatsSHA1SignedCertificatesAsInsecure:) BOOL _treatsSHA1SignedCertificatesAsInsecure;
@property (strong, nonatomic, setter=_setVisitedLinkStore:) _WKVisitedLinkStore *_visitedLinkStore;
@property (nonatomic, setter=_setWaitsForPaintAfterViewDidMoveToWindow:) BOOL _waitsForPaintAfterViewDidMoveToWindow;
@property (strong, nonatomic, setter=_setWebsiteDataStore:) _WKWebsiteDataStore *_websiteDataStore;
@property (nonatomic) BOOL allowsAirPlayForMediaPlayback; // @synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback;
@property (nonatomic) BOOL allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property (nonatomic) BOOL allowsPictureInPictureMediaPlayback; // @synthesize allowsPictureInPictureMediaPlayback=_allowsPictureInPictureMediaPlayback;
@property (copy, nonatomic) NSString *applicationNameForUserAgent;
@property (nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property (nonatomic) BOOL ignoresViewportScaleLimits; // @synthesize ignoresViewportScaleLimits=_ignoresViewportScaleLimits;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback; // @synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback;
@property (strong, nonatomic) WKPreferences *preferences;
@property (strong, nonatomic) WKProcessPool *processPool;
@property (nonatomic) BOOL requiresUserActionForMediaPlayback;
@property (nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property (nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
@property (strong, nonatomic) WKUserContentController *userContentController;
@property (strong, nonatomic) WKWebsiteDataStore *websiteDataStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setVisitedLinkProvider:(id)arg1;
- (void)_validate;
- (id)_visitedLinkProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

