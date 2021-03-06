//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/NSSecureCoding-Protocol.h>

@class GTGPUToolsVersionInfo, NSArray, NSString;

@interface GTDeviceInfo : NSObject <NSSecureCoding>
{
    NSArray *_profiles;
}

@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) GTGPUToolsVersionInfo *gputoolsVersionInfo;
@property (readonly, nonatomic) BOOL isEmbeddedPlatform;
@property (readonly, nonatomic) CDStruct_fc1d2ed0 mainScreenDescriptor;
@property (readonly, nonatomic) NSString *metalVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int nativePointerSize;
@property (readonly, nonatomic) NSString *permanentIdentifier;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSArray *profiles;
@property (readonly, nonatomic) unsigned long long runtimeIdentifier;
@property (readonly, nonatomic) NSString *version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_systemDevicePathForPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

