//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFBlockBasedCAAnimationDelegate : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _animationDidStopBlock;
}

@property (copy, nonatomic) CDUnknownBlockType animationDidStopBlock; // @synthesize animationDidStopBlock=_animationDidStopBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)associateLifetimeWithAnimation:(id)arg1;

@end

