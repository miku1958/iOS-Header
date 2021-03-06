//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMBalloonPlugin.h>

#import <ChatKit/CKAppMenuItem-Protocol.h>

@class NSString;

@interface IMBalloonPlugin (CKAppMenuItem) <CKAppMenuItem>

@property (readonly, nonatomic) NSString *__ck_displayName;
@property (readonly, nonatomic) id __ck_identifier;

+ (id)__ck_appIconFromPayloadDictionary:(id)arg1;
- (id)__ckImageForInterfaceStyle:(long long)arg1 generateSynchronously:(BOOL)arg2;
- (id)__ck_attributionInfo;
- (id)__ck_badgeImage;
- (id)__ck_breadcrumbImage;
- (id)__ck_browserImageForInterfaceStyle:(long long)arg1;
- (id)__ck_browserImageGenerateSynchronously:(BOOL)arg1 interfaceStyle:(long long)arg2;
- (id)__ck_browserImageName:(BOOL *)arg1;
- (id)__ck_cacheKeyForInterfaceStyle:(long long)arg1;
- (id)__ck_cachedAssetCatalogImageForInterfaceStyle:(long long)arg1;
- (id)__ck_generateAssetCatalogImageForInterfaceStyle:(long long)arg1;
- (id)__ck_generateIconForInterfaceStyle:(long long)arg1 notify:(BOOL)arg2;
- (id)__ck_iconServicesBundleIdentifier;
- (id)__ck_iconServicesDescriptor;
- (id)__ck_iconServicesIconForInterfaceStyle:(long long)arg1;
- (id)__ck_imageForTraitCollection:(id)arg1;
- (id)__ck_placeholderImageForInterfaceStyle:(long long)arg1;
- (void)__ck_postImageUpdateNotificationWithImage:(id)arg1;
- (BOOL)__ck_preferIconServices;
- (void)__ck_prefetchBrowserImageForInterfaceStyle:(long long)arg1;
- (id)__ck_statusImage;
- (id)__ck_statusImageForTransport;
- (id)__ck_statusJPEGImageDataForTransportWithCompressionFactor:(double)arg1;
- (id)_adamID;
- (id)_scaledImage:(id)arg1 xscale:(double)arg2 yscale:(double)arg3;
- (id)appStoreBadgeIcon;
- (id)description;
- (id)recentsBadgeIcon;
@end

