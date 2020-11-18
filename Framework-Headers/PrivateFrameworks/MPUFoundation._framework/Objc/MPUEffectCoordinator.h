//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MPUEffectCoordinator : NSObject
{
    NSMutableArray *_applyBlocks;
    unsigned long long _pendingEffectsCount;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

- (void).cxx_destruct;
- (void)addApplyChangesBlock:(CDUnknownBlockType)arg1;
- (void)beginChangeForEffectView:(id)arg1;
- (void)finishChangeForEffectView:(id)arg1;

@end

