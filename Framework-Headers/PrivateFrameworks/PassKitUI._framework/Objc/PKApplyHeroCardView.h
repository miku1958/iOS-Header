//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKApplyHeroCardView : UIView
{
    UIImageView *_cardImageView;
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    unsigned long long _featureIdentifier;
    double _cardHeight;
    double _cardTopPadding;
    double _cardBottomPadding;
    double _cardBackingHeight;
}

- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
