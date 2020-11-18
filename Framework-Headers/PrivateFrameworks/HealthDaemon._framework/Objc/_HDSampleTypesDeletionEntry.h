//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSNumber, NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry
{
    NSNumber *_sourceID;
    NSSet *_types;
}

@property (copy, nonatomic) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property (strong, nonatomic) NSSet *types; // @synthesize types=_types;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (long long)behavior;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceID:(id)arg1 types:(id)arg2;

@end

