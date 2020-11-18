//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_containerIdentifier;
    NSString *_applicationBundleIdentifierOverride;
    CKRecordZoneID *_repairZoneID;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifierOverride; // @synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride;
@property (copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (copy, nonatomic) CKRecordZoneID *repairZoneID; // @synthesize repairZoneID=_repairZoneID;

+ (id)configurationFromBaseContainer:(id)arg1;
+ (id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromBaseContainer:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
