//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSPointerArray, NSString, UIImage;

@interface WGWidgetInfo : NSObject
{
    NSPointerArray *_registeredWidgetHosts;
    struct {
        unsigned int didInitializeWantsVisibleFrame:1;
    } _widgetInfoFlags;
    BOOL _wantsVisibleFrame;
    NSString *_sdkVersion;
    NSExtension *_extension;
    long long _initialDisplayMode;
    long long _largestAllowedDisplayMode;
    UIImage *_icon;
    UIImage *_outlineIcon;
    NSString *_displayName;
    struct CGSize _preferredContentSize;
}

@property (copy, nonatomic, setter=_setDisplayName:) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic, getter=_icon, setter=_setIcon:) UIImage *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) long long initialDisplayMode; // @synthesize initialDisplayMode=_initialDisplayMode;
@property (readonly, nonatomic) double initialHeight;
@property (nonatomic, setter=_setLargestAllowedDisplayMode:) long long largestAllowedDisplayMode; // @synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode;
@property (strong, nonatomic, getter=_outlineIcon, setter=_setOutlineIcon:) UIImage *outlineIcon; // @synthesize outlineIcon=_outlineIcon;
@property (nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property (readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property (nonatomic, setter=_setWantsVisibleFrame:) BOOL wantsVisibleFrame; // @synthesize wantsVisibleFrame=_wantsVisibleFrame;
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;

+ (id)_productVersion;
+ (void)_updateRowHeightForContentSizeCategory;
+ (double)maximumContentHeightForCompactDisplayMode;
+ (id)widgetInfoWithExtension:(id)arg1;
- (void).cxx_destruct;
- (id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(struct CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (void)_requestIcon:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_resetIcons;
- (void)_resetIconsImpl;
- (id)initWithExtension:(id)arg1;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (void)registerWidgetHost:(id)arg1;
- (void)requestIconWithHandler:(CDUnknownBlockType)arg1;
- (void)requestSettingsIconWithHandler:(CDUnknownBlockType)arg1;
- (void)updatePreferredContentSize:(struct CGSize)arg1 forWidgetHost:(id)arg2;
- (id)widgetInfoWithExtension:(id)arg1;

@end
