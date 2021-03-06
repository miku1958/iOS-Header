//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray;
@protocol FCContentContext;

@interface FCIssuesFetchOperation : FCOperation
{
    FCCachePolicy *_cachePolicy;
    CDUnknownBlockType _interestTokenHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    id<FCContentContext> _context;
    NSArray *_issueIDs;
    NSArray *_resultIssues;
}

@property (copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;
@property (strong, nonatomic) NSArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property (strong, nonatomic) NSArray *resultIssues; // @synthesize resultIssues=_resultIssues;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

