//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface GTGPUToolsVersionInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_infoPlist;
    NSDictionary *_versionPlist;
}

@property (readonly, nonatomic) unsigned int interposeVersionGL;
@property (readonly, nonatomic) unsigned int interposeVersionMetal;
@property (readonly, nonatomic) NSString *shortVersion;
@property (readonly, nonatomic) NSString *sourceVersion;
@property (readonly, nonatomic) NSString *version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
