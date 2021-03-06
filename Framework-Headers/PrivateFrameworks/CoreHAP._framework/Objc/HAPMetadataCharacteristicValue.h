//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber;

@interface HAPMetadataCharacteristicValue : HMFObject
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
    NSNumber *_minLength;
    NSNumber *_maxLength;
    NSArray *_validValues;
}

@property (strong, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property (strong, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property (strong, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
@property (strong, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property (strong, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property (readonly, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;

+ (id)initWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithMinLength:(id)arg1 maxLength:(id)arg2;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4;

@end

