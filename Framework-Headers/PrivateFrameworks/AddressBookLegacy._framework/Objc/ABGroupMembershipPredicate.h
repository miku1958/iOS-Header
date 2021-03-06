//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate
{
    void *_group;
    void *_store;
    NSString *_accountIdentifier;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) void *group;
@property (nonatomic) void *store;

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)dealloc;
- (id)description;
- (BOOL)isValid;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;

@end

