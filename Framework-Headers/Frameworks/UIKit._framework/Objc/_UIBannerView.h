//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, UIImageView, UILabel, _UIBannerContent;

__attribute__((visibility("hidden")))
@interface _UIBannerView : UIView
{
    BOOL _highlighted;
    _UIBannerContent *_content;
    CALayer *_backgroundLayer;
    UIView *_highlightView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_imageView;
}

@property (strong, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property (strong, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property (strong, nonatomic) _UIBannerContent *content; // @synthesize content=_content;
@property (strong, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 initialPress:(BOOL)arg2;
- (void)updateConstraints;

@end

