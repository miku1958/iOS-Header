//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/_TtC13CoreKnowledge21CKDeviceActivityStore.h>

#import <CoreKnowledge/_TtP13CoreKnowledge28CKDeviceActivityStorePrivate_-Protocol.h>

@class NSDictionary, _TtC13CoreKnowledge16CKKnowledgeStore;

@interface _TtC13CoreKnowledge21CKDeviceActivityStore (CoreKnowledge) <_TtP13CoreKnowledge28CKDeviceActivityStorePrivate_>

@property (nonatomic, readonly) NSDictionary *activities;
@property (nonatomic, readonly) _TtC13CoreKnowledge16CKKnowledgeStore *backingStore;

+ (id)identifierWithPrefix:(id)arg1 intent:(id)arg2 error:(id *)arg3;
- (id)createActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (BOOL)deleteActivityWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)setFirstSeen:(id)arg1 forActivityId:(id)arg2 error:(id *)arg3;
- (BOOL)setFrequency:(long long)arg1 forActivityId:(id)arg2 error:(id *)arg3;
- (BOOL)setLastDuration:(double)arg1 forActivityId:(id)arg2 error:(id *)arg3;
- (BOOL)setLastSeen:(id)arg1 forActivityId:(id)arg2 error:(id *)arg3;
- (BOOL)setTotalDuration:(double)arg1 forActivityId:(id)arg2 error:(id *)arg3;
- (BOOL)setValue:(id)arg1 forActivityId:(id)arg2 error:(id *)arg3;
@end

