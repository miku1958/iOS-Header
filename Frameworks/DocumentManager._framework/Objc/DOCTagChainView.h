//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface DOCTagChainView : UIView
{
    BOOL _invertUserInterfaceLayoutDirection;
    NSArray *_tagColors;
    UIColor *_borderColor;
    double _knockOutBorderWidth;
    unsigned long long _spacing;
}

@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) BOOL invertUserInterfaceLayoutDirection; // @synthesize invertUserInterfaceLayoutDirection=_invertUserInterfaceLayoutDirection;
@property (nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property (nonatomic) unsigned long long spacing; // @synthesize spacing=_spacing;
@property (strong, nonatomic) NSArray *tagColors; // @synthesize tagColors=_tagColors;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_update;
- (double)height;
- (double)horizontalSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setknockOutBorderWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (double)width;
- (double)widthWithHeight:(double)arg1;

@end
