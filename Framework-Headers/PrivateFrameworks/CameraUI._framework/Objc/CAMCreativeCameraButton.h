//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMCreativeCameraButton : UIButton
{
    BOOL _useCompactLayout;
    BOOL __overContent;
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__circleBackgroundView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (strong, nonatomic) UIImageView *_circleBackgroundView; // @synthesize _circleBackgroundView=__circleBackgroundView;
@property (readonly, nonatomic, getter=_isOverContent) BOOL _overContent; // @synthesize _overContent=__overContent;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property (nonatomic, setter=useCompactLayout:) BOOL useCompactLayout; // @synthesize useCompactLayout=_useCompactLayout;

- (void).cxx_destruct;
- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2;
- (void)_updateImages;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initForOverContent;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;

@end

