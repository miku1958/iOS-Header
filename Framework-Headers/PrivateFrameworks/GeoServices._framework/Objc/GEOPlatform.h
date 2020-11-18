//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOPlatform : NSObject
{
}

+ (id)sharedPlatform;
- (BOOL)_deviceSupportsNavigation;
- (id)_systemInfoDictionary;
- (id)buildVersion;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareIdentifier;
- (BOOL)isInternalInstall;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)osVersion;
- (BOOL)supportsForceTouch;
- (BOOL)supportsNavigation;
- (BOOL)supportsNewiOS9Features;
- (BOOL)supportsRealisticTiles;

@end
