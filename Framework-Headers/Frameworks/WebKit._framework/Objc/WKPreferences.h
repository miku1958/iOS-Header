//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPreferences> _preferences;
}

@property (nonatomic, setter=_setAllowFileAccessFromFileURLs:) BOOL _allowFileAccessFromFileURLs;
@property (nonatomic, setter=_setAntialiasedFontDilationEnabled:) BOOL _antialiasedFontDilationEnabled;
@property (readonly) struct Object *_apiObject;
@property (nonatomic, setter=_setCompositingBordersVisible:) BOOL _compositingBordersVisible;
@property (nonatomic, setter=_setCompositingRepaintCountersVisible:) BOOL _compositingRepaintCountersVisible;
@property (nonatomic, setter=_setDeveloperExtrasEnabled:) BOOL _developerExtrasEnabled;
@property (nonatomic, setter=_setDiagnosticLoggingEnabled:) BOOL _diagnosticLoggingEnabled;
@property (nonatomic, setter=_setFullScreenEnabled:) BOOL _fullScreenEnabled;
@property (nonatomic, setter=_setJavaScriptRuntimeFlags:) unsigned long long _javaScriptRuntimeFlags;
@property (nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) BOOL _offlineApplicationCacheIsEnabled;
@property (nonatomic, setter=_setSimpleLineLayoutDebugBordersEnabled:) BOOL _simpleLineLayoutDebugBordersEnabled;
@property (nonatomic, getter=_isStandalone, setter=_setStandalone:) BOOL _standalone;
@property (nonatomic, setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property (nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) BOOL _telephoneNumberDetectionIsEnabled;
@property (nonatomic, setter=_setTiledScrollingIndicatorVisible:) BOOL _tiledScrollingIndicatorVisible;
@property (nonatomic, setter=_setVisibleDebugOverlayRegions:) unsigned long long _visibleDebugOverlayRegions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) double minimumFontSize;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;

@end

