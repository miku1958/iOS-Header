//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCDeviceCapabilities : NSObject
{
    BOOL _supportsBlockLevelEncryption;
    BOOL _supportsFileLevelEncryption;
}

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;

+ (id)currentDevice;
- (BOOL)_mediaDiskIsEncrypted;
- (id)init;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;

@end

