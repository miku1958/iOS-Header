//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class CADisplayLink, NSMutableSet, NSString, SXViewport;

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener>
{
    NSMutableSet *_registeredComponents;
    NSMutableSet *_animatingComponents;
    SXViewport *_viewport;
    CADisplayLink *_displayLink;
    NSMutableSet *_animationHandlersToFinish;
}

@property (strong, nonatomic) NSMutableSet *animatingComponents; // @synthesize animatingComponents=_animatingComponents;
@property (readonly, nonatomic) NSMutableSet *animationHandlersToFinish; // @synthesize animationHandlersToFinish=_animationHandlersToFinish;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *registeredComponents; // @synthesize registeredComponents=_registeredComponents;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (id)animatingHandlerForComponent:(id)arg1;
- (struct CGRect)convertRectForComponent:(id)arg1;
- (void)displayLinkTick:(id)arg1;
- (void)finishAnimationHandlerAnimated:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (void)registerComponentView:(id)arg1 animation:(id)arg2;
- (id)registeredHandlerForComponent:(id)arg1;
- (void)startOrStopDisplayLink;
- (void)startUpdatingAnimationForComponentView:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(BOOL)arg2;
- (void)unregisterComponentView:(id)arg1;
- (void)updateVisibleBounds:(struct CGRect)arg1;
- (void)updateVisibleBoundsIfNeeded;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;

@end

