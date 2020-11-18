//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SKUIEditorialCellLayout, UIImage, UIImageView, UIView;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell
{
    NSString *_accessibilityLabel;
    UIImageView *_brickImageView;
    struct UIEdgeInsets _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property (copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (strong, nonatomic) UIImage *brickImage;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;

- (void).cxx_destruct;
- (void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;

@end
