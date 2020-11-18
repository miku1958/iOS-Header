//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, _SBOrientationTransformedContentView;

@interface SBOrientationTransformWrapperView : UIView
{
    _SBOrientationTransformedContentView *_transformedView;
    long long _contentOrientation;
    long long _containerOrientation;
    NSMutableArray *_hitTestViews;
}

@property (nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property (nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property (readonly, nonatomic) NSArray *contentViews;

- (void).cxx_destruct;
- (struct CGSize)_referenceContainerSize;
- (void)_updateGeometry;
- (void)addContentView:(id)arg1;
- (void)addGestureRecognizerToTransformedView:(id)arg1;
- (void)addHitTestView:(id)arg1;
- (void)bringContentSubviewToFront:(id)arg1;
- (struct CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect)arg1;
- (struct CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect)arg1;
- (struct CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform)arg1;
- (id)description;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeGestureRecognizerFromTransformedView:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
