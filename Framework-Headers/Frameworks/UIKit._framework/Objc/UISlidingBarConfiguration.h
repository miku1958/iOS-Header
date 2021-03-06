//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying>
{
    union {
        unsigned int value;
        struct {
            unsigned int leadingMayBeHidden:1;
            unsigned int trailingMayBeHidden:1;
            unsigned int supplementaryMayBeHidden:1;
            unsigned int allowMixedSideBySideAndOverlay:1;
            unsigned int allowTotalWidthGreaterThanParent:1;
            unsigned int forceOverlay:1;
            unsigned int supplementaryComplementsLeadingTrailing:1;
            unsigned int detachedMain:1;
            unsigned int leadingBorderWidthIsInPixels:1;
            unsigned int trailingBorderWidthIsInPixels:1;
            unsigned int shouldFadeStaticNavBarButton:1;
            unsigned int reserved:21;
        } flags;
    } _configurationFlags;
    long long _supplementaryEdge;
    double _minimumMainWidthFraction;
    double _minimumMainWidthFractionForSecondColumn;
    double _maximumMainWidth;
    double _rubberBandExtension;
    NSArray *_leadingWidths;
    NSArray *_trailingWidths;
    NSArray *_supplementaryWidths;
    UIColor *_borderColor;
    double __rawLeadingBorderWidth;
    double __rawTrailingBorderWidth;
    long long __leadingBackgroundStyle;
    long long __trailingBackgroundStyle;
}

@property (nonatomic, setter=_setLeadingBackgroundStyle:) long long _leadingBackgroundStyle; // @synthesize _leadingBackgroundStyle=__leadingBackgroundStyle;
@property (nonatomic, setter=_setLeadingBorderWidthIsInPixels:) BOOL _leadingBorderWidthIsInPixels;
@property (nonatomic, setter=_setRawLeadingBorderWidth:) double _rawLeadingBorderWidth; // @synthesize _rawLeadingBorderWidth=__rawLeadingBorderWidth;
@property (nonatomic, setter=_setRawTrailingBorderWidth:) double _rawTrailingBorderWidth; // @synthesize _rawTrailingBorderWidth=__rawTrailingBorderWidth;
@property (nonatomic, setter=_setTrailingBackgroundStyle:) long long _trailingBackgroundStyle; // @synthesize _trailingBackgroundStyle=__trailingBackgroundStyle;
@property (nonatomic, setter=_setTrailingBorderWidthIsInPixels:) BOOL _trailingBorderWidthIsInPixels;
@property (nonatomic) BOOL allowMixedSideBySideAndOverlay;
@property (nonatomic) BOOL allowTotalWidthGreaterThanParent;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) BOOL detachedMain;
@property (nonatomic) BOOL forceOverlay;
@property (nonatomic) BOOL leadingMayBeHidden;
@property (copy, nonatomic) NSArray *leadingWidths; // @synthesize leadingWidths=_leadingWidths;
@property (nonatomic) double maximumMainWidth; // @synthesize maximumMainWidth=_maximumMainWidth;
@property (nonatomic) double minimumMainWidthFraction; // @synthesize minimumMainWidthFraction=_minimumMainWidthFraction;
@property (nonatomic) double minimumMainWidthFractionForSecondColumn; // @synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn;
@property (nonatomic) double rubberBandExtension; // @synthesize rubberBandExtension=_rubberBandExtension;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (nonatomic) BOOL supplementaryComplementsLeadingTrailing;
@property (nonatomic) long long supplementaryEdge; // @synthesize supplementaryEdge=_supplementaryEdge;
@property (nonatomic) BOOL supplementaryMayBeHidden;
@property (copy, nonatomic) NSArray *supplementaryWidths; // @synthesize supplementaryWidths=_supplementaryWidths;
@property (nonatomic) BOOL trailingMayBeHidden;
@property (copy, nonatomic) NSArray *trailingWidths; // @synthesize trailingWidths=_trailingWidths;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (double)leadingBorderWidthForScale:(double)arg1;
- (void)setLeadingBorderWidthInPixels:(double)arg1;
- (void)setLeadingBorderWidthInPoints:(double)arg1;
- (void)setTrailingBorderWidthInPixels:(double)arg1;
- (void)setTrailingBorderWidthInPoints:(double)arg1;
- (double)trailingBorderWidthForScale:(double)arg1;

@end

