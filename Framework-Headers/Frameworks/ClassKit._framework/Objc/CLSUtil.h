//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSUtil : NSObject
{
}

+ (id)dataFromError:(id)arg1;
+ (id)dataFromPath:(id)arg1 makeBackwardCompatible:(BOOL)arg2 error:(id *)arg3;
+ (id)errorFromData:(id)arg1;
+ (void)fetchInfoForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)hashArrayOfStrings:(id)arg1 lastHash:(id)arg2;
+ (id)hashData:(id)arg1 lastHash:(id)arg2;
+ (id)hashData:(id)arg1 lastHashData:(id)arg2;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)isSystemIntegrityEnabled;
+ (id)mediumDateFormatter;
+ (id)mediumStringFromDate:(id)arg1;
+ (id)pathFromData:(id)arg1;
+ (id)percentNumberFormatter;
+ (id)percentageStringFromNumber:(id)arg1;
+ (void)postNotification:(char *)arg1;
+ (void)postNotificationAsync:(char *)arg1;
+ (id)stringFromTimeInterval:(double)arg1;
+ (id)userDefaultsConfigurationDictionaryAndReturnError:(id *)arg1;

@end

