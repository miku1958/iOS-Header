//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSDataObserver.h>

#import <ClassKit/CLSQuery-Protocol.h>

@class NSDate, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CLSQuery : CLSDataObserver <CLSQuery>
{
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _executing;
    BOOL _shouldAddResultsToDataStore;
    BOOL _shouldFaultResults;
    long long _fetchLimit;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    unsigned long long _state;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property (nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldAddResultsToDataStore; // @synthesize shouldAddResultsToDataStore=_shouldAddResultsToDataStore;
@property (nonatomic) BOOL shouldFaultResults; // @synthesize shouldFaultResults=_shouldFaultResults;
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2;
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_faultResultsAndComplete;
- (void)_notifyOfCompletionWithError:(id)arg1;
- (void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;
- (oneway void)clientRemote_invalidate;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (void)reset;

@end

