//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class IKColor, IKFourTuple, NSShadow, NSString, UIColor, UIImageSymbolConfiguration;

@interface TVImageLayout : TVViewLayout
{
    BOOL _continuousBorder;
    BOOL _allowsNonOpaqueShadows;
    BOOL _useInSearchPartial;
    double _upscaleFactor;
    double _aspectRatio;
    long long _scaleMode;
    UIColor *_borderColor;
    IKColor *_ikTintColor;
    IKColor *_ikDarkTintColor;
    NSShadow *_shadow;
    NSString *_placeholderArtworkName;
    NSString *_cropCode;
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
    NSString *_imageTreatment;
    IKFourTuple *_ikBorderRadius;
    NSString *_inlineTitle;
    struct CGSize _imageSize;
    struct TVCornerRadii _borderRadii;
    struct UIEdgeInsets _borderWidth;
}

@property (nonatomic) BOOL allowsNonOpaqueShadows; // @synthesize allowsNonOpaqueShadows=_allowsNonOpaqueShadows;
@property (nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property (nonatomic) struct UIEdgeInsets borderWidth; // @synthesize borderWidth=_borderWidth;
@property (nonatomic) BOOL continuousBorder; // @synthesize continuousBorder=_continuousBorder;
@property (copy, nonatomic) NSString *cropCode; // @synthesize cropCode=_cropCode;
@property (readonly, nonatomic) struct CGSize decoratorSize;
@property (strong, nonatomic) IKFourTuple *ikBorderRadius; // @synthesize ikBorderRadius=_ikBorderRadius;
@property (strong, nonatomic) IKColor *ikDarkTintColor; // @synthesize ikDarkTintColor=_ikDarkTintColor;
@property (strong, nonatomic) IKColor *ikTintColor; // @synthesize ikTintColor=_ikTintColor;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (strong, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property (copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property (copy, nonatomic) NSString *inlineTitle; // @synthesize inlineTitle=_inlineTitle;
@property (copy, nonatomic) NSString *placeholderArtworkName; // @synthesize placeholderArtworkName=_placeholderArtworkName;
@property (nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property (strong, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property (nonatomic) double upscaleFactor; // @synthesize upscaleFactor=_upscaleFactor;
@property (nonatomic) BOOL useInSearchPartial; // @synthesize useInSearchPartial=_useInSearchPartial;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (struct CGSize)_aspectFitToSize:(struct CGSize)arg1 scaleToSize:(struct CGSize)arg2 aspectRatio:(double)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)defaultFocusSizeIncrease;
- (id)init;

@end
