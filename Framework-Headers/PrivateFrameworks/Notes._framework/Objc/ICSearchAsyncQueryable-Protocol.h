//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol ICSearchAsyncQueryDelegate;

@protocol ICSearchAsyncQueryable
- (void)cancelAsyncQuery:(id)arg1;
- (id)newAsyncQueryWithSearchTerms:(NSString *)arg1 delegate:(id<ICSearchAsyncQueryDelegate>)arg2;
@end

