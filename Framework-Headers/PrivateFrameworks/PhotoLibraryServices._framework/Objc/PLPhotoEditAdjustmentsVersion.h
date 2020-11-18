//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoEditAdjustmentsVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

@property (readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property (readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property (readonly, nonatomic) NSString *string;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAdjustmentVersion:(id)arg1;

@end
