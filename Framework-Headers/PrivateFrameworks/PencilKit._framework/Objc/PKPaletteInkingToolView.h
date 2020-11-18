//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteToolView.h>

#import <PencilKit/PKInkAttributesPickerDelegate-Protocol.h>
#import <PencilKit/PKPaletteInkingTool-Protocol.h>

@class NSLayoutConstraint, NSString, PKInk, UIImage, UIImageView, UILabel, UIViewController;

@interface PKPaletteInkingToolView : PKPaletteToolView <PKPaletteInkingTool, PKInkAttributesPickerDelegate>
{
    UIViewController *_attributeViewController;
    PKInk *_ink;
    UIImageView *_colorIndicatorImageView;
    UIImage *_colorIndicatorImageUp;
    UIImage *_colorIndicatorImageRight;
    UIImage *_colorIndicatorImageLeft;
    UIImageView *_colorIndicatorContourImageView;
    UIImage *_colorIndicatorContourImageUp;
    UIImage *_colorIndicatorContourImageRight;
    UIImage *_colorIndicatorContourImageLeft;
    UIImageView *_tipIndicatorImageView;
    UIImage *_toolTipImageUp;
    UIImage *_toolTipImageRight;
    UIImage *_toolTipImageLeft;
    UIImageView *_tipIndicatorContourImageView;
    UIImage *_toolTipContourImageUp;
    UIImage *_toolTipContourImageRight;
    UIImage *_toolTipContourImageLeft;
    UILabel *_opacityLabel;
    NSLayoutConstraint *_opacityLabelBottomConstraint;
    NSLayoutConstraint *_opacityLabelLeadingConstraint;
    NSLayoutConstraint *_opacityLabelTrailingConstraint;
    NSLayoutConstraint *_opacityLabelCenterXConstraint;
    NSLayoutConstraint *_opacityLabelCenterYConstraint;
}

@property (strong, nonatomic) UIImage *colorIndicatorContourImageLeft; // @synthesize colorIndicatorContourImageLeft=_colorIndicatorContourImageLeft;
@property (strong, nonatomic) UIImage *colorIndicatorContourImageRight; // @synthesize colorIndicatorContourImageRight=_colorIndicatorContourImageRight;
@property (strong, nonatomic) UIImage *colorIndicatorContourImageUp; // @synthesize colorIndicatorContourImageUp=_colorIndicatorContourImageUp;
@property (strong, nonatomic) UIImageView *colorIndicatorContourImageView; // @synthesize colorIndicatorContourImageView=_colorIndicatorContourImageView;
@property (strong, nonatomic) UIImage *colorIndicatorImageLeft; // @synthesize colorIndicatorImageLeft=_colorIndicatorImageLeft;
@property (strong, nonatomic) UIImage *colorIndicatorImageRight; // @synthesize colorIndicatorImageRight=_colorIndicatorImageRight;
@property (strong, nonatomic) UIImage *colorIndicatorImageUp; // @synthesize colorIndicatorImageUp=_colorIndicatorImageUp;
@property (strong, nonatomic) UIImageView *colorIndicatorImageView; // @synthesize colorIndicatorImageView=_colorIndicatorImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property (strong, nonatomic) UILabel *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property (strong, nonatomic) NSLayoutConstraint *opacityLabelBottomConstraint; // @synthesize opacityLabelBottomConstraint=_opacityLabelBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint; // @synthesize opacityLabelCenterXConstraint=_opacityLabelCenterXConstraint;
@property (strong, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint; // @synthesize opacityLabelCenterYConstraint=_opacityLabelCenterYConstraint;
@property (strong, nonatomic) NSLayoutConstraint *opacityLabelLeadingConstraint; // @synthesize opacityLabelLeadingConstraint=_opacityLabelLeadingConstraint;
@property (strong, nonatomic) NSLayoutConstraint *opacityLabelTrailingConstraint; // @synthesize opacityLabelTrailingConstraint=_opacityLabelTrailingConstraint;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImageView *tipIndicatorContourImageView; // @synthesize tipIndicatorContourImageView=_tipIndicatorContourImageView;
@property (strong, nonatomic) UIImageView *tipIndicatorImageView; // @synthesize tipIndicatorImageView=_tipIndicatorImageView;
@property (strong, nonatomic) UIImage *toolTipContourImageLeft; // @synthesize toolTipContourImageLeft=_toolTipContourImageLeft;
@property (strong, nonatomic) UIImage *toolTipContourImageRight; // @synthesize toolTipContourImageRight=_toolTipContourImageRight;
@property (strong, nonatomic) UIImage *toolTipContourImageUp; // @synthesize toolTipContourImageUp=_toolTipContourImageUp;
@property (strong, nonatomic) UIImage *toolTipImageLeft; // @synthesize toolTipImageLeft=_toolTipImageLeft;
@property (strong, nonatomic) UIImage *toolTipImageRight; // @synthesize toolTipImageRight=_toolTipImageRight;
@property (strong, nonatomic) UIImage *toolTipImageUp; // @synthesize toolTipImageUp=_toolTipImageUp;

+ (id)defaultColorForInkingToolWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)_colorIndicatorImageViewFrame;
- (void)_inkAttributesPickerUserDidEndDraggingSlider:(id)arg1;
- (id)_opacityLabelFont;
- (void)_reloadToolImage;
- (void)_setToolProperties:(id)arg1 toolIdentifier:(id)arg2;
- (id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
- (id)_toolColorIndicatorImageForCurrentEdgeLocation;
- (id)_toolTipContourImageForCurrentEdgeLocation;
- (id)_toolTipImageForCurrentEdgeLocation;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateOpacityLabel;
- (void)_updateToolColorBandAndTipImageViews;
- (id)attributeViewController;
- (id)initWithToolIdentifier:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1 toolProperties:(id)arg2;
- (void)inkAttributesPickerDidChangeInkOpacity:(id)arg1;
- (void)inkAttributesPickerDidChangeInkThickness:(id)arg1;
- (void)layoutSubviews;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setInkColor:(id)arg1;
- (void)setInkWeight:(double)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setToolProperties:(id)arg1;
- (id)toolProperties;
- (void)updateConstraints;

@end
