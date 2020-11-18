//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_medicalRecords;
}

@property (readonly, copy, nonatomic) NSArray *medicalRecords; // @synthesize medicalRecords=_medicalRecords;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMedicalRecords:(id)arg1;

@end
