//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDatabaseResultFetchOperation.h>

@class NSArray;

@interface WFDatabaseResultTieredFetchRequestOperation : WFDatabaseResultFetchOperation
{
    NSArray *_fetchRequests;
    long long _resultsLimit;
}

@property (readonly, nonatomic) NSArray *fetchRequests; // @synthesize fetchRequests=_fetchRequests;
@property (readonly, nonatomic) long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;

- (void).cxx_destruct;
- (long long)countWithContext:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)entity;
- (id)initWithFetchRequests:(id)arg1 resultsLimit:(long long)arg2;
- (id)resultsWithContext:(id)arg1 error:(id *)arg2;

@end
