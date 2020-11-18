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

@class NSString;

@interface _UIHyperrectangle : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>
{
    double *__maximumPoint;
    double *__minimumPoint;
    unsigned long long __dimensions;
}

@property (readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
@property (readonly, nonatomic) const double *_maximumPoint;
@property (readonly, nonatomic) const double *_minimumPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (BOOL)supportsSecureCoding;
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;
- (void)_mutateMaximumPoint:(CDUnknownBlockType)arg1;
- (void)_mutateMinimumPoint:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
