//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject <NSCopying, NSSecureCoding>
{
    ARReferenceObject *_referenceObject;
    CDStruct_14d5dc5e _visionTransform;
}

@property (strong, nonatomic) ARReferenceObject *referenceObject; // @synthesize referenceObject=_referenceObject;
@property (nonatomic) CDStruct_14d5dc5e visionTransform; // @synthesize visionTransform=_visionTransform;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
