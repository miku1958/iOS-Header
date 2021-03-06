//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PGMeaningCriteriaInfo;

@interface PGMeaningCriteriaEvaluator : NSObject
{
    NSString *_meaningLabel;
    PGMeaningCriteriaInfo *_meaningCriteriaInfo;
    NSArray *_allMeaningCriteriaArray;
}

@property (strong, nonatomic) NSArray *allMeaningCriteriaArray; // @synthesize allMeaningCriteriaArray=_allMeaningCriteriaArray;
@property (strong, nonatomic) PGMeaningCriteriaInfo *meaningCriteriaInfo; // @synthesize meaningCriteriaInfo=_meaningCriteriaInfo;
@property (readonly, nonatomic) NSString *meaningLabel; // @synthesize meaningLabel=_meaningLabel;

+ (id)_allMeaningCriteriaClassArray;
+ (id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg1 withDictionary:(id)arg2;
- (void).cxx_destruct;
- (BOOL)allCriteriaIsValid;
- (BOOL)allCriteriaPassesForMomentNode:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 meaningCriteriaInfo:(id)arg2;

@end

