//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSArray, NSString;

@interface _UISimplex : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>
{
    double *__points;
    struct {
        unsigned int metadata:1;
    } _clean;
    int __cggetriWorkspaceSize;
    unsigned long long __dimensions;
    unsigned long long __pointCount;
    double *__projection;
    unsigned long long __missingNormalCount;
    double *__missingNormals;
    double *__facetNormals;
    double *__facetNormalOffsets;
    double *__incenter;
    NSArray *__facets;
    double *__cggetriWorkspace;
    double *__temp;
}

@property (readonly, nonatomic) double *_cggetriWorkspace; // @synthesize _cggetriWorkspace=__cggetriWorkspace;
@property (readonly, nonatomic) int _cggetriWorkspaceSize; // @synthesize _cggetriWorkspaceSize=__cggetriWorkspaceSize;
@property (readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
@property (readonly, nonatomic) double *_facetNormalOffsets; // @synthesize _facetNormalOffsets=__facetNormalOffsets;
@property (readonly, nonatomic) double *_facetNormals; // @synthesize _facetNormals=__facetNormals;
@property (readonly, nonatomic) NSArray *_facets; // @synthesize _facets=__facets;
@property (readonly, nonatomic) double *_incenter; // @synthesize _incenter=__incenter;
@property (readonly, nonatomic) unsigned long long _missingNormalCount; // @synthesize _missingNormalCount=__missingNormalCount;
@property (readonly, nonatomic) double *_missingNormals; // @synthesize _missingNormals=__missingNormals;
@property (readonly, nonatomic) unsigned long long _pointCount; // @synthesize _pointCount=__pointCount;
@property (readonly, nonatomic) const double *_points;
@property (readonly, nonatomic) double *_projection; // @synthesize _projection=__projection;
@property (readonly, nonatomic) double *_temp; // @synthesize _temp=__temp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;
- (void)_mutatePoints:(CDUnknownBlockType)arg1;
- (void)_recomputeMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1 pointCount:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

