//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol ICSearchQueryable
- (void)cancelQuery:(id)arg1;
- (NSArray *)findNextMatchingIdentifiersForQuery:(id)arg1 isDone:(BOOL *)arg2;
- (id)newQueryWithSearchTerms:(NSString *)arg1;
@end
