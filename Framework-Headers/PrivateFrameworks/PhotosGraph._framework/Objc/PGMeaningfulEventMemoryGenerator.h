//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSString;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator
{
    BOOL _skipsCollectionTitle;
    NSDate *_lowerBoundLocalDate;
    unsigned long long _eventType;
    unsigned long long _meaning;
    NSString *_meaningfulEventUUID;
    unsigned long long _memoryCategory;
}

@property (nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (strong, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;
@property (nonatomic) unsigned long long meaning; // @synthesize meaning=_meaning;
@property (strong, nonatomic) NSString *meaningfulEventUUID; // @synthesize meaningfulEventUUID=_meaningfulEventUUID;
@property (nonatomic) unsigned long long memoryCategory; // @synthesize memoryCategory=_memoryCategory;
@property (nonatomic) BOOL skipsCollectionTitle; // @synthesize skipsCollectionTitle=_skipsCollectionTitle;

- (void).cxx_destruct;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)initWithController:(id)arg1;

@end
