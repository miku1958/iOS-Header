//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class ARPointCloud, MISSING_TYPE, NSData, NSString, NSUUID;

@interface ARReferenceObject : NSObject <NSSecureCoding>
{
    NSString *_name;
    ARPointCloud *_rawFeaturePoints;
    NSUUID *_identifier;
    long long _version;
    NSData *_trackingData;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

@property (readonly, nonatomic) MISSING_TYPE *center; // @synthesize center=_center;
@property (readonly, nonatomic) MISSING_TYPE *extent; // @synthesize extent=_extent;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints; // @synthesize rawFeaturePoints=_rawFeaturePoints;
@property (readonly, nonatomic) CDStruct_14d5dc5e referenceOriginTransform; // @synthesize referenceOriginTransform=_referenceOriginTransform;
@property (readonly, nonatomic) MISSING_TYPE *scale;
@property (readonly, nonatomic) NSData *trackingData; // @synthesize trackingData=_trackingData;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

+ (id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id *)arg3;
- (unsigned long long)hash;
- (id)initWithArchiveURL:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)referenceObjectByApplyingTransform:(CDStruct_14d5dc5e)arg1;
- (id)referenceObjectByMergingObject:(id)arg1 error:(id *)arg2;

@end

