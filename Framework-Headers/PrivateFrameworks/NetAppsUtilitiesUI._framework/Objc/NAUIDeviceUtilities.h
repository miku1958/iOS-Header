//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAUIDeviceUtilities : NSObject
{
}

+ (int)deviceClass;
+ (BOOL)hasOrbCapability;
+ (id)localizedProductName;
+ (double)mainScreenScale;
+ (BOOL)naui_isPad;
+ (BOOL)naui_isUsingLandscapeOrientation;
+ (BOOL)naui_shouldUseLargeiPadLayout;
+ (BOOL)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize)arg1;
+ (id)operatingSystemName;
+ (id)productBuildVersion;
+ (id)productClass;
+ (id)productHardwareModel;
+ (id)productHardwareModelName;
+ (id)productType;
+ (id)productVersion;
+ (id)uniqueDeviceIdentifier;
- (id)init;

@end
