//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface TSUWeakProxy : NSProxy
{
    id _target;
    Class _targetClass;
}

@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (strong, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
