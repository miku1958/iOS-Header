//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface DOCChainedTagsView : UIView
{
    NSArray *_tagColors;
    UIColor *_borderColor;
    double _knockOutBorderWidth;
    unsigned long long _spacing;
    double _tagDimension;
    struct CGPoint _alignmentOffset;
}

@property (nonatomic) struct CGPoint alignmentOffset; // @synthesize alignmentOffset=_alignmentOffset;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property (nonatomic) unsigned long long spacing; // @synthesize spacing=_spacing;
@property (strong, nonatomic) NSArray *tagColors; // @synthesize tagColors=_tagColors;
@property (nonatomic) double tagDimension; // @synthesize tagDimension=_tagDimension;

+ (void)drawTagsInContext:(struct CGContext *)arg1 diameter:(double)arg2 horizontalSpacing:(unsigned long long)arg3 layoutDirection:(long long)arg4 tagColors:(id)arg5 ringColor:(id)arg6 borderColor:(id)arg7 knockOutBorderWidth:(double)arg8;
+ (double)horizontalSpacingForSpace:(unsigned long long)arg1 tagDiameter:(double)arg2;
+ (struct CGSize)sizeForDiameter:(double)arg1 horizontalSpacing:(unsigned long long)arg2 tags:(id)arg3;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)drawRect:(struct CGRect)arg1;
- (double)horizontalSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setknockOutBorderWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end
