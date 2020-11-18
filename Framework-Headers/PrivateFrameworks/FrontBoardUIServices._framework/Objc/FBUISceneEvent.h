//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject
{
    FBSSceneTransitionContext *_transitionContext;
    CDUnknownBlockType _sender;
    BOOL _sent;
}

@property (readonly, strong, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;

- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 sender:(CDUnknownBlockType)arg2;
- (void)send;
- (void)sendWithResponseHandler:(CDUnknownBlockType)arg1;

@end

