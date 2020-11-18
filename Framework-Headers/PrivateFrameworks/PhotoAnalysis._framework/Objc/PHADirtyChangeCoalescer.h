//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFCoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
    id<PHADirtyChangeCoalescerDelegate> _delegate;
}

@property (weak, nonatomic) id<PHADirtyChangeCoalescerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)init;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;

@end

