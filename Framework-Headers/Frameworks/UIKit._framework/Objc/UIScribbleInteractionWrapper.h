//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/PKScribbleInteractionWrapper-Protocol.h>

@class NSString, UIIndirectScribbleInteraction, UIScribbleInteraction, UIView;
@protocol UIInteraction;

__attribute__((visibility("hidden")))
@interface UIScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper>
{
    UIScribbleInteraction *_scribbleInteraction;
    UIIndirectScribbleInteraction *_indirectInteraction;
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
- (void)endSuppressingPlaceholderForElement:(id)arg1;
- (void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)focusWillTransformElement:(id)arg1;
- (struct CGRect)frameForElement:(id)arg1;
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id)arg2;
- (id)initWithCustomScribbleInteraction:(id)arg1 indirectScribbleInteraction:(id)arg2;
- (BOOL)isElement:(id)arg1 inFrontOf:(id)arg2;
- (BOOL)isElementContainer;
- (BOOL)isElementFocused:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldBeginAtLocation:(struct CGPoint)arg1;
- (BOOL)shouldDisableInputAssistant;
- (id)suggestedStrokeColorForElement:(id)arg1;
- (BOOL)supportsIsElementFocused;
- (BOOL)supportsIsElementInFrontOfElement;
- (BOOL)supportsShouldBegin;
- (void)willBeginWritingInElement:(id)arg1;

@end

