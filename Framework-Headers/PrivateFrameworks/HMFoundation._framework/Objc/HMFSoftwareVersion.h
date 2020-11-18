//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion
{
    NSString *_buildVersion;
}

@property (readonly, copy) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;

+ (BOOL)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(CDStruct_2ec95fd7)arg1;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithVersionString:(id)arg1;
- (id)localizedDescription;
- (CDStruct_2ec95fd7)operatingSystemVersion;
- (id)versionString;

@end

