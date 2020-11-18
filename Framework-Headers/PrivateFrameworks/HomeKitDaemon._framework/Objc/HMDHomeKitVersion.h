//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMDHomeKitVersion : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _updateVersion;
}

@property (readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property (readonly, nonatomic) unsigned long long updateVersion; // @synthesize updateVersion=_updateVersion;
@property (readonly, copy, nonatomic) NSString *versionString;

+ (BOOL)supportsSecureCoding;
+ (id)version;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithVersionString:(id)arg1;
- (BOOL)isAtLeastVersion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVersion:(id)arg1;

@end

