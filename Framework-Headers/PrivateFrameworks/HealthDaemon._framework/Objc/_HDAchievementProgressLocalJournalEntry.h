//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableCategoryDomainDictionary;

@interface _HDAchievementProgressLocalJournalEntry : HDJournalEntry
{
    HDCodableCategoryDomainDictionary *_dictionary;
    long long _category;
    long long _provenance;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 category:(long long)arg2 provenance:(long long)arg3;

@end
