//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIImageDecorator.h>

@class UIColor;

@interface VUIImageScaleDecorator : VUIImageDecorator
{
    BOOL _centerGrowth;
    BOOL _cornerContinuous;
    BOOL _preservesAlpha;
    long long _scaleMode;
    double _focusedSizeIncrease;
    UIColor *_bgColor;
    struct CGSize _scaleToSize;
    struct UIEdgeInsets _padding;
    struct _VUICornerRadii _cornerRadii;
}

@property (copy, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property (nonatomic) BOOL centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property (nonatomic) BOOL cornerContinuous; // @synthesize cornerContinuous=_cornerContinuous;
@property (nonatomic) struct _VUICornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (nonatomic) BOOL preservesAlpha; // @synthesize preservesAlpha=_preservesAlpha;
@property (nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property (nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
@property (nonatomic) double upscaleAdjustment;

- (void).cxx_destruct;
- (void)_applyCornerMaskForRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (double)_focusedSizeIncreaseFactor;
- (id)_imageFixedForRotation:(id)arg1;
- (struct UIEdgeInsets)_paddingAdjustedForUpscaling;
- (struct CGSize)_scaleToSizeAdjustedForUpscaling;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(BOOL)arg3;
- (id)decoratorIdentifier;
- (struct CGSize)expectedSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithScaleToSize:(struct CGSize)arg1;
- (id)initWithScaleToSize:(struct CGSize)arg1 cropToFit:(BOOL)arg2;
- (id)initWithScaleToSize:(struct CGSize)arg1 scaleMode:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)loaderCropToFit;
- (struct CGSize)loaderScaleToSize;
- (BOOL)needsAlphaForImage:(id)arg1;

@end

