//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFAttachmentCapabilities : NSObject
{
}

+ (BOOL)_isMailDropDevice;
+ (unsigned long long)_mailDropLimit;
+ (id)allowedMailDropDownloadDomains;
+ (id)capabilitiesDictionary;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)currentPlaceholderThreshold;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentUploadLimitForAccount:(id)arg1;
+ (BOOL)mailDropAvailable;
+ (BOOL)mailDropAvailableForAccount:(id)arg1;
+ (BOOL)mailDropConfigured;
+ (double)mailDropExpiration;
+ (id)mailDropPreferences;
+ (unsigned long long)mailDropThreshold;
+ (BOOL)placeholdersAvailable;

@end

