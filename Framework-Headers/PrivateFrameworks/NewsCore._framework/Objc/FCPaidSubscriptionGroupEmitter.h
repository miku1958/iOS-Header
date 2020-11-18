//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSString;

@interface FCPaidSubscriptionGroupEmitter : NSObject <FCFeedGroupEmitting>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly, nonatomic) BOOL requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

- (BOOL)canEmitGroupsWithType:(long long)arg1;
- (BOOL)insertEveryRefreshSession;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end

