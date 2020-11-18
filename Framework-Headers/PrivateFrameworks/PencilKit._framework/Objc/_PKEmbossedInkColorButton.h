//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PencilKit/PKInkColorButton-Protocol.h>

@class UIColor, UIImageView;

@interface _PKEmbossedInkColorButton : UIButton <PKInkColorButton>
{
    BOOL _isCompact;
    BOOL _isUsedOnDarkBackground;
    UIColor *_color;
    UIImageView *_colorImageView;
    UIImageView *_embossImageView;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (strong, nonatomic) UIImageView *colorImageView; // @synthesize colorImageView=_colorImageView;
@property (strong, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;
@property (nonatomic) BOOL isCompact; // @synthesize isCompact=_isCompact;
@property (nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;

+ (id)buttonWithColor:(id)arg1 isCompact:(BOOL)arg2;
+ (id)colorFillImageIsCompact:(BOOL)arg1;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3;
+ (BOOL)isColorBlack:(id)arg1;
+ (BOOL)isColorWhite:(id)arg1;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 isCompact:(BOOL)arg2;
- (void)layoutSubviews;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
