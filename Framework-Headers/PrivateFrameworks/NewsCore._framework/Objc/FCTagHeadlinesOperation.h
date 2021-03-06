//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;

@interface FCTagHeadlinesOperation : FCOperation
{
    FCCloudContext *_context;
    NSString *_tagID;
    unsigned long long _maxHeadlinesCount;
    CDUnknownBlockType _fetchCompletionHandler;
    NSArray *_resultHeadlines;
}

@property (strong, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property (copy) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property (nonatomic) unsigned long long maxHeadlinesCount; // @synthesize maxHeadlinesCount=_maxHeadlinesCount;
@property (copy) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property (copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

