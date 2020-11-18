//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation
{
    VNDetectionprint *_detectionprint;
}

@property (readonly, copy) VNDetectionprint *detectionprint; // @synthesize detectionprint=_detectionprint;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectionprint:(id)arg1 requestRevision:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end
