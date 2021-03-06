//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry
{
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

@property (readonly, nonatomic) HKObject *dataObject; // @synthesize dataObject=_dataObject;
@property (readonly, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 provenance:(id)arg2;

@end

