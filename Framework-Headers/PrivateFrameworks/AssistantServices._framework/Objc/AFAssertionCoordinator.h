//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol AFAssertionCoordinatorDelegate, OS_dispatch_queue;

@interface AFAssertionCoordinator : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic long long _numberOfPendingAndActiveRecords;
    NSMutableDictionary *_recordsByUUID;
    id<AFAssertionCoordinatorDelegate> _delegate;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_addRecord:(id)arg1 isFirstRecord:(BOOL *)arg2;
- (void)_didAcquireAssertion:(id)arg1 isFirstAssertion:(BOOL)arg2;
- (void)_didRelinquishAssertion:(id)arg1 isLastAssertion:(BOOL)arg2;
- (id)_records;
- (void)_removeAllRecords;
- (id)_removeRecordWithUUID:(id)arg1 isLastRecord:(BOOL *)arg2;
- (id)acquireRelinquishableAssertionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)getActiveAssertionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)relinquishAssertionWithUUID:(id)arg1 context:(id)arg2;

@end
