//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLCAAnimationDelegate : NSObject
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _start;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (copy, nonatomic) CDUnknownBlockType start; // @synthesize start=_start;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;

@end

