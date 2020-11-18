//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation
{
    unsigned long long _badgeValue;
    CDUnknownBlockType _modifyBadgeCompletionBlock;
}

@property (nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
@property (copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (void)performCKOperation;

@end

