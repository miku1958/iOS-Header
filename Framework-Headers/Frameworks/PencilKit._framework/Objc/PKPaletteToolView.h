//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteTool-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSDictionary, NSLayoutConstraint, NSString, PKPaletteAttributeViewController, UIImageView, UIView;
@protocol PKPaletteErasingTool, PKPaletteInkingTool, PKPaletteTool;

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKEdgeLocatable, PKPaletteViewSizeScaling>
{
    NSString *_toolIdentifier;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteAttributeViewController *_attributeViewController;
    NSDictionary *_toolProperties;
    long long _colorUserInterfaceStyle;
    UIView *_toolShadowView;
    NSLayoutConstraint *_imageViewTopAnchorConstraint;
    NSLayoutConstraint *_imageViewBottomAnchorConstraint;
    NSLayoutConstraint *_imageViewLeftAnchorConstraint;
    NSLayoutConstraint *_imageViewRightAnchorConstraint;
    NSLayoutConstraint *_imageViewWidthAnchorConstraint;
    NSLayoutConstraint *_imageViewHeigthAnchorConstraint;
    UIImageView *_imageView;
}

@property (readonly, nonatomic) PKPaletteAttributeViewController *attributeViewController; // @synthesize attributeViewController=_attributeViewController;
@property (nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint; // @synthesize imageViewBottomAnchorConstraint=_imageViewBottomAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageViewHeigthAnchorConstraint; // @synthesize imageViewHeigthAnchorConstraint=_imageViewHeigthAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint; // @synthesize imageViewLeftAnchorConstraint=_imageViewLeftAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint; // @synthesize imageViewRightAnchorConstraint=_imageViewRightAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint; // @synthesize imageViewTopAnchorConstraint=_imageViewTopAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint; // @synthesize imageViewWidthAnchorConstraint=_imageViewWidthAnchorConstraint;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PKPaletteTool> tool;
@property (readonly, nonatomic) NSString *toolIdentifier; // @synthesize toolIdentifier=_toolIdentifier;
@property (readonly, nonatomic) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties; // @synthesize toolProperties=_toolProperties;
@property (strong, nonatomic) UIView *toolShadowView; // @synthesize toolShadowView=_toolShadowView;

+ (BOOL)_isHandwritingToolIdentfier:(id)arg1;
+ (id)_toolIdentifierFromInk:(id)arg1;
+ (BOOL)_toolIdentifierIsBitmapEraser:(id)arg1;
+ (BOOL)_toolIdentifierIsEraser:(id)arg1;
+ (BOOL)_toolIdentifierIsObjectEraser:(id)arg1;
+ (BOOL)_toolIdentifierIsRuler:(id)arg1;
+ (id)toolViewWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_reloadToolImage;
- (void)_reloadToolImageSizeConstraints;
- (double)_toolSelectedOffset;
- (void)_updateToolShadowView;
- (id)initWithToolIdentifier:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1 toolProperties:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isErasingTool;
- (BOOL)isHandwritingTool;
- (BOOL)isInkingTool;
- (BOOL)isLassoTool;
- (BOOL)isRulerTool;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

