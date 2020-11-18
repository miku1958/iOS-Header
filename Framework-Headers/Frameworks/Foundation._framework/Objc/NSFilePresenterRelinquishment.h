//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject
{
    NSCountedSet *_blockingAccessClaimIDs;
    NSMutableArray *_relinquishReplies;
    CDUnknownBlockType _reacquirer;
    BOOL _prerelinquishInProgress;
    NSMutableArray *_blockingPrerelinquishReplies;
}

- (void)addPrerelinquishReply:(CDUnknownBlockType)arg1;
- (void)addRelinquishReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didRelinquish;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)setReacquirer:(CDUnknownBlockType)arg1;

@end

