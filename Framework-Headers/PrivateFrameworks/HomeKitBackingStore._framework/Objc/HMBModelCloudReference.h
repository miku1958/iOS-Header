//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelReference.h>

#import <HomeKitBackingStore/HMBModelNativeCKWrapper-Protocol.h>
#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class CKReference, HMBCloudZone, NSString;

@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding>
{
    CKReference *_reference;
    HMBCloudZone *_cloudZone;
    unsigned long long _action;
}

@property (nonatomic) unsigned long long action; // @synthesize action=_action;
@property (weak, nonatomic) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CKReference *reference; // @synthesize reference=_reference;
@property (readonly) Class superclass;

+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)includeInModelEncoding;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)associateWithContainer:(id)arg1;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelID:(id)arg1 action:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id *)arg2;
- (id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(BOOL)arg2;

@end

