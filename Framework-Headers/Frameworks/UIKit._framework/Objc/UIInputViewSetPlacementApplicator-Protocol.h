//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, UIGestureRecognizer, UIInputViewSetPlacement, UIView;
@protocol UIInputViewSetPlacementApplicator, UIInputViewSetPlacementOwner;

@protocol UIInputViewSetPlacementApplicator <NSObject>

@property (readonly, strong) NSArray *constraints;
@property (readonly) struct UIEdgeInsets contentInsets;
@property (readonly, strong) UIView *draggableView;
@property (readonly) struct CGPoint origin;
@property (readonly) struct CGRect popoverFrame;
@property (readonly, strong) UIView *twoFingerDraggableView;

+ (id<UIInputViewSetPlacementApplicator>)applicatorForOwner:(id<UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;
- (BOOL)allConstraintsActive;
- (void)applyChanges:(NSDictionary *)arg1;
- (void)invalidate;
- (BOOL)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint)arg2;
- (BOOL)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(BOOL *)arg2;
- (void)prepare;
@end

