//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/NSObject-Protocol.h>

@class VNFaceObservation;
@protocol NSObject><NSCopying><NSSecureCoding;

@protocol VNPersonsModelFaceModelDataProvider <NSObject>
- (VNFaceObservation *)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id<NSObject><NSCopying><NSSecureCoding>)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id<NSObject><NSCopying><NSSecureCoding>)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
@end

