//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AFUIDelayedActionCommandCacheDelegate;

@interface AFUIDelayedActionCommandCache : NSObject
{
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
    id<AFUIDelayedActionCommandCacheDelegate> _delegate;
}

@property (weak, nonatomic) id<AFUIDelayedActionCommandCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasPendingCommands;

- (void).cxx_destruct;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)dealloc;
- (void)handleDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;

@end

