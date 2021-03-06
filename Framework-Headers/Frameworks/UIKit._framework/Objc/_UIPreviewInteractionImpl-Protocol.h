//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIPreviewInteraction, UIView;
@protocol UICoordinateSpace, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@protocol _UIPreviewInteractionImpl <NSObject>

@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;
@property (strong, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (readonly, weak, nonatomic) UIView *view;

- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id<UICoordinateSpace>)arg2;
- (void)cancelInteraction;
- (id)initWithView:(UIView *)arg1 previewInteraction:(UIPreviewInteraction *)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id<UICoordinateSpace>)arg1;
@end

