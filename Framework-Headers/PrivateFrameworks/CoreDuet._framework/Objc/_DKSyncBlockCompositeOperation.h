//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_blocks;
}

@property (readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;

- (void).cxx_destruct;
- (id)executionBlocks;
- (BOOL)isAsynchronous;
- (void)main;

@end
