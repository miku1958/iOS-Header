//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface QLDelegateProxy : NSProxy
{
    id _firstDelegate;
    id _secondDelegate;
}

@property (weak) id firstDelegate; // @synthesize firstDelegate=_firstDelegate;
@property (weak) id secondDelegate; // @synthesize secondDelegate=_secondDelegate;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

