//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (UserNotification)
+ (id)un_bundleForBundleIdentifier:(id)arg1;
- (id)_un_bundle;
- (BOOL)_un_isReallyInstalled;
- (BOOL)_un_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (BOOL)_un_usesLocalNotification;
- (id)un_infoDictionary;
- (BOOL)un_isSystemApplication;
- (id)un_pathForSoundName:(id)arg1;
- (BOOL)un_requiresLocalNotification;
- (BOOL)un_shouldUseDefaultDataProvider;
@end

