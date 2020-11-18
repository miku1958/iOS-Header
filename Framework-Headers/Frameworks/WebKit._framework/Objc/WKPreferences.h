//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject, NSCopying, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebPreferences> _preferences;
}

@property (nonatomic, setter=_setAcceleratedDrawingEnabled:) BOOL _acceleratedDrawingEnabled;
@property (nonatomic, setter=_setAllowFileAccessFromFileURLs:) BOOL _allowFileAccessFromFileURLs;
@property (nonatomic, setter=_setAllowsPictureInPictureMediaPlayback:) BOOL _allowsPictureInPictureMediaPlayback;
@property (nonatomic, setter=_setAnimatedImageAsyncDecodingEnabled:) BOOL _animatedImageAsyncDecodingEnabled;
@property (readonly) struct Object *_apiObject;
@property (nonatomic, setter=_setApplePayCapabilityDisclosureAllowed:) BOOL _applePayCapabilityDisclosureAllowed;
@property (nonatomic, setter=_setCompositingBordersVisible:) BOOL _compositingBordersVisible;
@property (nonatomic, setter=_setCompositingRepaintCountersVisible:) BOOL _compositingRepaintCountersVisible;
@property (nonatomic, setter=_setDefaultFixedPitchFontSize:) unsigned long long _defaultFixedPitchFontSize;
@property (nonatomic, setter=_setDefaultFontSize:) unsigned long long _defaultFontSize;
@property (nonatomic, setter=_setDeveloperExtrasEnabled:) BOOL _developerExtrasEnabled;
@property (nonatomic, setter=_setDiagnosticLoggingEnabled:) BOOL _diagnosticLoggingEnabled;
@property (nonatomic, setter=_setDisplayListDrawingEnabled:) BOOL _displayListDrawingEnabled;
@property (nonatomic, setter=_setDOMPasteAllowed:) BOOL _domPasteAllowed;
@property (nonatomic, setter=_setEditableLinkBehavior:) long long _editableLinkBehavior;
@property (nonatomic, setter=_setEnumeratingAllNetworkInterfacesEnabled:) BOOL _enumeratingAllNetworkInterfacesEnabled;
@property (copy, nonatomic, setter=_setFixedPitchFontFamily:) NSString *_fixedPitchFontFamily;
@property (nonatomic, setter=_setFullScreenEnabled:) BOOL _fullScreenEnabled;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingEnabled:) BOOL _hiddenPageDOMTimerThrottlingEnabled;
@property (nonatomic, setter=_setICECandidateFilteringEnabled:) BOOL _iceCandidateFilteringEnabled;
@property (nonatomic, setter=_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:) double _inactiveMediaCaptureSteamRepromptIntervalInMinutes;
@property (nonatomic, setter=_setJavaScriptCanAccessClipboard:) BOOL _javaScriptCanAccessClipboard;
@property (nonatomic, setter=_setJavaScriptRuntimeFlags:) unsigned long long _javaScriptRuntimeFlags;
@property (nonatomic, setter=_setLargeImageAsyncDecodingEnabled:) BOOL _largeImageAsyncDecodingEnabled;
@property (nonatomic, setter=_setLoadsImagesAutomatically:) BOOL _loadsImagesAutomatically;
@property (nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (nonatomic, setter=_setMediaCaptureRequiresSecureConnection:) BOOL _mediaCaptureRequiresSecureConnection;
@property (nonatomic, setter=_setMediaDevicesEnabled:) BOOL _mediaDevicesEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesEnabled:) BOOL _mockCaptureDevicesEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesPromptEnabled:) BOOL _mockCaptureDevicesPromptEnabled;
@property (nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) BOOL _offlineApplicationCacheIsEnabled;
@property (nonatomic, setter=_setPageVisibilityBasedProcessSuppressionEnabled:) BOOL _pageVisibilityBasedProcessSuppressionEnabled;
@property (nonatomic, setter=_setPeerConnectionEnabled:) BOOL _peerConnectionEnabled;
@property (nonatomic, setter=_setResourceUsageOverlayVisible:) BOOL _resourceUsageOverlayVisible;
@property (nonatomic, setter=_setScreenCaptureEnabled:) BOOL _screenCaptureEnabled;
@property (nonatomic, setter=_setShouldAllowUserInstalledFonts:) BOOL _shouldAllowUserInstalledFonts;
@property (nonatomic, setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property (nonatomic, setter=_setSimpleLineLayoutDebugBordersEnabled:) BOOL _simpleLineLayoutDebugBordersEnabled;
@property (nonatomic, setter=_setSimpleLineLayoutEnabled:) BOOL _simpleLineLayoutEnabled;
@property (nonatomic, getter=_isStandalone, setter=_setStandalone:) BOOL _standalone;
@property (nonatomic, setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property (nonatomic, setter=_setSubpixelAntialiasedLayerTextEnabled:) BOOL _subpixelAntialiasedLayerTextEnabled;
@property (nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) BOOL _telephoneNumberDetectionIsEnabled;
@property (nonatomic, setter=_setTextAutosizingEnabled:) BOOL _textAutosizingEnabled;
@property (nonatomic, setter=_setTiledScrollingIndicatorVisible:) BOOL _tiledScrollingIndicatorVisible;
@property (nonatomic, setter=_setVisibleDebugOverlayRegions:) unsigned long long _visibleDebugOverlayRegions;
@property (nonatomic, setter=_setVisualViewportEnabled:) BOOL _visualViewportEnabled;
@property (nonatomic, setter=_setWebRTCLegacyAPIEnabled:) BOOL _webRTCLegacyAPIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) double minimumFontSize;
@property (readonly) Class superclass;

+ (id)_experimentalFeatures;
+ (BOOL)supportsSecureCoding;
- (BOOL)_isEnabledForFeature:(id)arg1;
- (void)_setEnabled:(BOOL)arg1 forFeature:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

