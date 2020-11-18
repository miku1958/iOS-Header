//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNFaceObservation;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>
{
    VNFaceObservation *_faceObservation;
    id<NSObject><NSCopying><NSSecureCoding> _predictedPersonUniqueIdentifier;
    float _confidence;
}

@property (readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property (readonly, nonatomic) VNFaceObservation *faceObservation; // @synthesize faceObservation=_faceObservation;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier; // @synthesize predictedPersonUniqueIdentifier=_predictedPersonUniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3;
- (BOOL)isEqual:(id)arg1;

@end
