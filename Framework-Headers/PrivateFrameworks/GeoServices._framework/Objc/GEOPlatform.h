//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPlatform : NSObject
{
}

+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)arg1;
+ (id)sharedPlatform;
- (BOOL)_deviceSupportsNavigation;
- (id)buildVersion;
- (id)clientCapabilities;
- (id)deviceCountrySKU;
- (id)deviceCountrySKUForServiceRequests;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (id)init;
- (BOOL)isCellDataPossible;
- (BOOL)isInternalInstall;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)osAndBuildVersion;
- (id)osVersion;
- (id)productName;
- (BOOL)supportsForceTouch;
- (BOOL)supportsNavigation;
- (BOOL)supportsRealisticTiles;

@end

