//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView;

@interface _PKInkThicknessButton : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    struct CGRect _lastRenderedBounds;
}

@property (strong, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property (readonly, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
@property (strong, nonatomic) UIImageView *inkImageView; // @synthesize inkImageView=_inkImageView;
@property (nonatomic) struct CGRect lastRenderedBounds; // @synthesize lastRenderedBounds=_lastRenderedBounds;
@property (readonly, nonatomic) double weight; // @synthesize weight=_weight;

+ (id)backgroundColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
+ (struct CGSize)buttonSize;
+ (id)imageTintColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_animateToHighlightedState:(BOOL)arg1;
- (void)didTouchUpInside;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
