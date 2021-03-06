//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPFetcherConfiguration, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPFetcherGroup : NSObject
{
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    BOOL _cancelled;
    unsigned int _loggingID;
}

- (void).cxx_destruct;
- (void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_completed;
- (id)_responsesRespectingPolicy;
- (void)appendFetcher:(id)arg1;
- (void)cancel;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)initWithPolicy:(long long)arg1 configuration:(id)arg2 description:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)numberOfActiveFetches;
- (void)prependFetcher:(id)arg1;
- (void)startFetchesIfNeeded;

@end

