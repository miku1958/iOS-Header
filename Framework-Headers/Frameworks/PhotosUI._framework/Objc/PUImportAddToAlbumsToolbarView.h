//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol PUImportAddToAlbumsToolbarViewDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsToolbarView : UIView
{
    NSString *_destinationCollectionTitle;
    UIButton *_destinationButton;
    id<PUImportAddToAlbumsToolbarViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_destinationLabel;
}

@property (weak, nonatomic) id<PUImportAddToAlbumsToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIButton *destinationButton; // @synthesize destinationButton=_destinationButton;
@property (strong, nonatomic) NSString *destinationCollectionTitle; // @synthesize destinationCollectionTitle=_destinationCollectionTitle;
@property (strong, nonatomic) UILabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_animateButtonAlpha:(double)arg1;
- (void)_setupButton;
- (void)_setupSubviews;
- (void)_updateButtonText;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)buttonPressed:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchDragInside:(id)arg1;
- (void)buttonTouchDragOutside:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAccessibilityElement;

@end

