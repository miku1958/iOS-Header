//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary;

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_keyMap;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (BOOL)_isValidHour:(long long)arg1;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)_numberForKey:(id)arg1;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (BOOL)allowInexpensiveHDMUnlimited;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutoDownloadAllowable;
- (BOOL)isDownloadAllowable;
- (BOOL)isDownloadAllowableOver2G;
- (BOOL)isDownloadFree;
- (long long)maximumDownloadSizeInBytes;
- (unsigned long long)numberOfDaysToWaitForCellularDownload;
- (long long)peakEndHour;
- (long long)peakStartHour;

@end
