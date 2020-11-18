//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet;

@interface PGMoodGeneratorOptions : NSObject
{
    unsigned long long _memoryCategory;
    unsigned long long _memorySubcategory;
    NSArray *_moodHistory;
    NSSet *_momentIDs;
    NSDate *_referenceDate;
    NSArray *_prefetchedAssets;
    NSDictionary *_sceneIdentifiersByMomentNodeIdentifier;
}

@property (nonatomic) unsigned long long memoryCategory; // @synthesize memoryCategory=_memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory; // @synthesize memorySubcategory=_memorySubcategory;
@property (strong) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property (strong, nonatomic) NSArray *moodHistory; // @synthesize moodHistory=_moodHistory;
@property (strong) NSArray *prefetchedAssets; // @synthesize prefetchedAssets=_prefetchedAssets;
@property (strong) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property (strong) NSDictionary *sceneIdentifiersByMomentNodeIdentifier; // @synthesize sceneIdentifiersByMomentNodeIdentifier=_sceneIdentifiersByMomentNodeIdentifier;

- (void).cxx_destruct;

@end

