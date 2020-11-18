//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage
{
    SBIconLabelImageParameters *_parameters;
    struct UIEdgeInsets _alignmentRectInsets;
    double _baselineOffsetFromBottom;
    UIImage *_legibilityImage;
}

@property (strong, nonatomic) UIImage *legibilityImage; // @synthesize legibilityImage=_legibilityImage;
@property (readonly, copy, nonatomic) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;

+ (struct CGSize)_maxLegibilityImageSizeForLabelSize:(struct CGSize)arg1;
+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (BOOL)attributedText:(id)arg1 fitsInRect:(struct CGRect)arg2 textRect:(out struct CGRect *)arg3;
+ (id)imageWithParameters:(id)arg1;
+ (id)imageWithParameters:(id)arg1 pool:(id)arg2 legibilityPool:(id)arg3;
+ (id)legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2 pool:(id)arg3;
+ (double)legibilityStrengthForLegibilityStyle:(long long)arg1;
+ (BOOL)needsLegibilityImageForParameters:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 alignmentRectInsets:(struct UIEdgeInsets)arg5 baselineOffsetFromBottom:(double)arg6;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (id)description;
- (BOOL)hasBaseline;

@end
