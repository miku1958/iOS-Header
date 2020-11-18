//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class ACHEarnedInstance;

@interface ACHEarnedInstanceJournalEntry : HDJournalEntry
{
    long long _action;
    ACHEarnedInstance *_earnedInstance;
    long long _persistentID;
    long long _provenance;
}

@property (readonly, nonatomic) long long action; // @synthesize action=_action;
@property (readonly, nonatomic) ACHEarnedInstance *earnedInstance; // @synthesize earnedInstance=_earnedInstance;
@property (readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property (readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarnedInstance:(id)arg1 provenance:(long long)arg2 action:(long long)arg3;

@end
