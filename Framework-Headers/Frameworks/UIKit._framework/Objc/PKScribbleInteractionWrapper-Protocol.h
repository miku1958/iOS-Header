//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIEvent, UIView;
@protocol NSObject><NSCopying, UIInteraction;

@protocol PKScribbleInteractionWrapper <NSObject>

@property (readonly, nonatomic) id<UIInteraction> interaction;
@property (readonly, nonatomic) UIView *interactionView;
@property (readonly, nonatomic) UIView *view;

- (BOOL)beginSuppressingPlaceholderForElement:(id<NSObject><NSCopying>)arg1;
- (void)didFinishWritingInElement:(id<NSObject><NSCopying>)arg1;
- (void)endSuppressingPlaceholderForElement:(id<NSObject><NSCopying>)arg1;
- (void)focusElement:(id<NSObject><NSCopying>)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(void (^)(id<UITextInput>))arg3;
- (BOOL)focusWillTransformElement:(id<NSObject><NSCopying>)arg1;
- (struct CGRect)frameForElement:(id<NSObject><NSCopying>)arg1;
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id<NSObject><NSCopying>)arg2;
- (BOOL)isElementContainer;
- (BOOL)isElementFocused:(id<NSObject><NSCopying>)arg1;
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(void (^)(NSArray *, long long))arg2;
- (BOOL)shouldBeginAtLocation:(struct CGPoint)arg1;
- (BOOL)supportsIsElementFocused;
- (BOOL)supportsShouldBegin;
- (void)willBeginWritingInElement:(id<NSObject><NSCopying>)arg1;

@optional
- (void)didTargetElement:(id<NSObject><NSCopying>)arg1 forTouches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (BOOL)isEnabled;
- (BOOL)shouldDisableInputAssistant;
@end

