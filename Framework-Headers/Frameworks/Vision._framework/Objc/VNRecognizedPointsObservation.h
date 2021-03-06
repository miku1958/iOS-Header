//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSNumber, VNRecognizedPointsSpecifier;

@interface VNRecognizedPointsObservation : VNObservation
{
    VNRecognizedPointsSpecifier *_specifier;
}

@property (readonly, copy) NSArray *availableGroupKeys;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly) NSNumber *groupIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 keypointReturningObservation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)keypointsMultiArrayAndReturnError:(id *)arg1;
- (id)recognizedPointForKey:(id)arg1 error:(id *)arg2;
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id *)arg2;

@end

