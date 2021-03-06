//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionWrapper-Protocol.h>

@class NSString, PKScribbleInteraction, UIView;
@protocol UIInteraction;

@interface PKScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper>
{
    PKScribbleInteraction *_interaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<UIInteraction> interaction;
@property (readonly, nonatomic) UIView *interactionView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (BOOL)beginSuppressingPlaceholderForElement:(id)arg1;
- (void)didFinishWritingInElement:(id)arg1;
- (void)didTargetElement:(id)arg1 forTouches:(id)arg2 event:(id)arg3;
- (void)endSuppressingPlaceholderForElement:(id)arg1;
- (void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)focusWillTransformElement:(id)arg1;
- (struct CGRect)frameForElement:(id)arg1;
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id)arg2;
- (id)initWithScribbleInteraction:(id)arg1;
- (BOOL)isElementContainer;
- (BOOL)isElementFocused:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldBeginAtLocation:(struct CGPoint)arg1;
- (BOOL)shouldDisableInputAssistant;
- (BOOL)supportsIsElementFocused;
- (BOOL)supportsShouldBegin;
- (void)willBeginWritingInElement:(id)arg1;

@end

