//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

@class PRSSearchCompletionResultSet;

@interface PRSFakeQueryTask : PRSQueryTask
{
    PRSSearchCompletionResultSet *_results;
}

@property (strong, nonatomic) PRSSearchCompletionResultSet *results; // @synthesize results=_results;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 results:(id)arg5;
- (void)resume;

@end
