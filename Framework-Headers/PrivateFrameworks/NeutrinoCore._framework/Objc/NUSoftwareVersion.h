//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>
{
    NSString *_platform;
    NSString *_buildNumber;
    NSString *_appVersion;
    long long _schemaRevision;
}

@property (copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (copy) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property (copy) NSString *platform; // @synthesize platform=_platform;
@property long long schemaRevision; // @synthesize schemaRevision=_schemaRevision;

+ (id)_frameworkVersion;
+ (id)_systemBuildVersion;
+ (id)_systemVersionPlistPath;
+ (id)currentSoftwareVersion;
+ (id)frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)arg1;
+ (id)systemBuildVersion;
- (void).cxx_destruct;
- (id)archivalRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSoftwareVersion:(id)arg1;

@end

