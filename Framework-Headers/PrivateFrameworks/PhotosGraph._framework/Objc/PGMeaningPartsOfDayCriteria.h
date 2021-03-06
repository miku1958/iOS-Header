//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSArray, NSString;

@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria>
{
    NSArray *_positiveSignificantPartsOfDay;
    NSArray *_positiveSignificantPartsOfDayStrings;
    NSArray *_negativeSignificantPartsOfDay;
    NSArray *_negativeSignificantPartsOfDayStrings;
    NSArray *_positivePartsOfDay;
    NSArray *_positivePartsOfDayStrings;
    NSArray *_negativePartsOfDay;
    NSArray *_negativePartsOfDayStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *negativePartsOfDay; // @synthesize negativePartsOfDay=_negativePartsOfDay;
@property (strong, nonatomic) NSArray *negativePartsOfDayStrings; // @synthesize negativePartsOfDayStrings=_negativePartsOfDayStrings;
@property (strong, nonatomic) NSArray *negativeSignificantPartsOfDay; // @synthesize negativeSignificantPartsOfDay=_negativeSignificantPartsOfDay;
@property (strong, nonatomic) NSArray *negativeSignificantPartsOfDayStrings; // @synthesize negativeSignificantPartsOfDayStrings=_negativeSignificantPartsOfDayStrings;
@property (strong, nonatomic) NSArray *positivePartsOfDay; // @synthesize positivePartsOfDay=_positivePartsOfDay;
@property (strong, nonatomic) NSArray *positivePartsOfDayStrings; // @synthesize positivePartsOfDayStrings=_positivePartsOfDayStrings;
@property (strong, nonatomic) NSArray *positiveSignificantPartsOfDay; // @synthesize positiveSignificantPartsOfDay=_positiveSignificantPartsOfDay;
@property (strong, nonatomic) NSArray *positiveSignificantPartsOfDayStrings; // @synthesize positiveSignificantPartsOfDayStrings=_positiveSignificantPartsOfDayStrings;
@property (readonly) Class superclass;

+ (id)_partsOfDayAsNumbersFromStrings:(id)arg1;
+ (id)_partsOfDayNumbersByString;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_passesPartsOfDayWithMomentNodePartsOfDay:(unsigned long long)arg1 positivePartsOfDay:(id)arg2 negativePartsOfDay:(id)arg3;
- (BOOL)isValid;
- (BOOL)passesForMomentNode:(id)arg1;

@end

