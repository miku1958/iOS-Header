//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSArray, NSString;

@interface _UIHyperregionUnion : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>
{
    unsigned long long __dimensions;
    NSArray *__regions;
    double *__temp;
}

@property (readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
@property (copy, nonatomic, setter=_setRegions:) NSArray *_regions; // @synthesize _regions=__regions;
@property (readonly, nonatomic) double *_temp; // @synthesize _temp=__temp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;
- (BOOL)_isBoundaryCrossedFromPoint:(const double *)arg1 toPoint:(const double *)arg2;
- (unsigned long long)_regionIndexForClosestPoint:(double *)arg1 toPoint:(const double *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

