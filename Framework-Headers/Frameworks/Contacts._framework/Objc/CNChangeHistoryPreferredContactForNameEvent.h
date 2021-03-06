//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryPreferredContactForNameEvent : CNChangeHistoryEvent
{
    CNContact *_preferredContact;
    CNContact *_unifiedContact;
}

@property (readonly, nonatomic) CNContact *preferredContact; // @synthesize preferredContact=_preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact; // @synthesize unifiedContact=_unifiedContact;

+ (unsigned long long)instanceSortOrder;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

