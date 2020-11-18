//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFUtilities : NSObject
{
}

+ (void)acceptEmployeeCameraFeedbackConsent;
+ (id)applicationSupportDirectoryURL;
+ (id)cachesDirectoryURL;
+ (id)cameraFeedbackQueryString;
+ (BOOL)cameraFeedbackSupported;
+ (CDUnknownBlockType)comparatorWithSortedClasses:(id)arg1 secondaryComparator:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)comparatorWithSortedObjects:(id)arg1;
+ (id)demoModeDirectoryURL;
+ (id)deviceAirDropIdentifier;
+ (id)documentsDirectoryURL;
+ (BOOL)hasAcceptedCameraFeedbackEmployeeConsent;
+ (BOOL)isAMac;
+ (BOOL)isHorseman;
+ (BOOL)isInAirplaneMode;
+ (BOOL)isInternalInstall;
+ (BOOL)isInternalTest;
+ (BOOL)isPressDemoModeEnabled;
+ (id)libraryDirectoryURL;
+ (id)sanitizeAutoGeneratedHomeKitName:(id)arg1;
+ (id)sanitizeUserEnteredHomeKitName:(id)arg1;
+ (id)sharedApplicationSupportDirectoryURL;
+ (id)sharedLibraryDirectoryURL;
+ (id)sharedUserDirectoryURL;
+ (BOOL)shouldShowReachabilityErrors;
+ (BOOL)shouldSuppressAllErrorsForDemo;
+ (BOOL)supportsAddAccessory;
+ (BOOL)supportsBeingCurrentLocationDevice;
+ (id)uniqueHomeKitNameForName:(id)arg1 allNames:(id)arg2;
+ (BOOL)useWLANInsteadOfWiFi;
+ (id)wallpaperURL;

@end
