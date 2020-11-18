//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAIntentGroupBatchSlotResolutionResult, SAIntentGroupConfirmIntentCompleted, SAIntentGroupHandleIntentCompleted;

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (strong, nonatomic) SAIntentGroupBatchSlotResolutionResult *batchSlotResolutionResult;
@property (strong, nonatomic) SAIntentGroupConfirmIntentCompleted *confirmIntentCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SAIntentGroupHandleIntentCompleted *handleIntentCompleted;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *lastAttemptedStep;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)processIntentCompleted;
+ (id)processIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

