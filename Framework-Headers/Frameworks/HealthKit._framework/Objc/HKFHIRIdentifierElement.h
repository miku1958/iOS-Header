//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCodingCollection, NSArray, NSString;

@interface HKFHIRIdentifierElement : NSObject <NSSecureCoding, NSCopying, HKCodedObject>
{
    NSArray *_typeCodings;
    NSString *_value;
    HKConcept *_type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKConcept *type;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *typeCodingCollection;
@property (readonly, copy, nonatomic) NSArray *typeCodings; // @synthesize typeCodings=_typeCodings;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)identifierWithTypeCodings:(id)arg1 value:(id)arg2;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setType:(id)arg1;
- (void)_setTypeCodings:(id)arg1;
- (BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCodings:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

