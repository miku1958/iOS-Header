//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSPhotosPolicyController : NSObject
{
}

- (id)_photosStatus:(id)arg1;
- (void)_setPhotosStatus:(id)arg1 specifier:(id)arg2;
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2;
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(BOOL)arg3 showPhotosAddAccess:(BOOL)arg4;
- (void)getAuthorizationStatesForService:(struct __CFString *)arg1 allowedArray:(id *)arg2 limitedArray:(id *)arg3 deniedArray:(id *)arg4;
- (void)setTCCForService:(struct __CFString *)arg1 appIdentifier:(id)arg2 value:(int)arg3;

@end
