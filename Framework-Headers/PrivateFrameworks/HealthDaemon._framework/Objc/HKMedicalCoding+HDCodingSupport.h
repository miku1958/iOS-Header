//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalCoding.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKMedicalCoding (HDCodingSupport) <HDCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)codeableRepresentationForMedicalCodings:(id)arg1;
+ (id)createWithCodable:(id)arg1;
+ (id)medicalCodingsWithCodeable:(id)arg1;
+ (id)multipleMedicalCodingsWithCodables:(id)arg1;
- (id)codableRepresentationForSync;
@end

