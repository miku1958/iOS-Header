//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface _UIDragBadge : UIView
{
    UILabel *_label;
    UIImageView *_imageView;
    long long _style;
    long long _itemCount;
}

@property (readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView;
@property (readonly, nonatomic) UILabel *_label; // @synthesize _label;
@property (readonly, nonatomic) struct CGPoint anchorPointForAlignment;
@property (nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property (nonatomic) long long style; // @synthesize style=_style;

- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_updateForStyle;
- (void)_updateLabelTextFromItemCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

