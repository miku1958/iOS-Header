//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCompoundPredicate.h>

@interface NSCompoundPredicate (ABPredicateQueryCreation)
- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(BOOL)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
@end

