//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKCancellableRemoteOperation-Protocol.h>

@class EKEventStore, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    CDUnknownBlockType _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
    int _retryCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (void).cxx_destruct;
- (id)_createOSActivity;
- (void)_fetchObjectIDsActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (void)_startActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (void)_startActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (void)_startFetchObjectIDsActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (void)_startProcessingWithCompletion:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2 processor:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)disconnect;
- (id)fetchObjectIDs;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)runSynchronously;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminate;

@end

