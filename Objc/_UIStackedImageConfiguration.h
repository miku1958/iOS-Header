//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <NSCopying>
{
    BOOL _overlayFixedFrame;
    BOOL _adjustMotionForSize;
    BOOL _flatImageContainsCornerRadius;
    BOOL _allowsNonOpaqueShadow;
    BOOL _boostBrightness;
    BOOL _hueShift;
    BOOL _focusCursorEnabled;
    BOOL _fullBleedCenteredGrowth;
    unsigned long long _maximumParallaxImages;
    double _maximumParallaxDepth;
    double _overlayDepth;
    double _zDepth;
    double _rotationAmount;
    double _scaleSizeIncrease;
    double _pressedScaleAdjustment;
    double _cornerRadius;
    double _specularHighlightHorizontalPositionSensitivity;
    double _specularHighlightVerticalPosition;
    double _specularHighlightVerticalPositionSensitivity;
    double _specularOpacity;
    double _defaultFocusedShadowOpacity;
    double _defaultHighlightedShadowOpacity;
    double _defaultUnfocusedShadowOpacity;
    double _fullBleedFocusedShadowOpacity;
    double _fullBleedUnfocusedShadowOpacity;
    double _focusCursorShadowOpacityAdjustment;
    double _defaultFocusedShadowRadius;
    double _defaultHighlightedShadowRadius;
    double _defaultUnfocusedShadowRadius;
    double _fullBleedFocusedShadowRadius;
    double _fullBleedUnfocusedShadowRadius;
    double _defaultFocusedShadowVerticalOffset;
    double _defaultHighlightedShadowVerticalOffset;
    double _defaultUnfocusedShadowVerticalOffset;
    double _defaultSelectedShadowVerticalOffset;
    UIImage *_placeholderImage;
    double _focusCursorBorderWidth;
    double _radiosityOffset;
    double _radiosityStrength;
    double _shadowSelectionDuration;
    double _shadowUnselectionDuration;
    double _repositionUnselectionDuration;
    double _layerSelectionDuration;
    double _layerUnselectionDuration;
    double _minimumFocusDuration;
    double _pressedDuration;
    double _unpressedDuration;
    double _fullBleedOffset;
    struct CGPoint _translationOffset;
}

@property (nonatomic) BOOL adjustMotionForSize; // @synthesize adjustMotionForSize=_adjustMotionForSize;
@property (nonatomic) BOOL allowsNonOpaqueShadow; // @synthesize allowsNonOpaqueShadow=_allowsNonOpaqueShadow;
@property (nonatomic) BOOL boostBrightness; // @synthesize boostBrightness=_boostBrightness;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) double defaultFocusedShadowOpacity; // @synthesize defaultFocusedShadowOpacity=_defaultFocusedShadowOpacity;
@property (nonatomic) double defaultFocusedShadowRadius; // @synthesize defaultFocusedShadowRadius=_defaultFocusedShadowRadius;
@property (nonatomic) double defaultFocusedShadowVerticalOffset; // @synthesize defaultFocusedShadowVerticalOffset=_defaultFocusedShadowVerticalOffset;
@property (nonatomic) double defaultHighlightedShadowOpacity; // @synthesize defaultHighlightedShadowOpacity=_defaultHighlightedShadowOpacity;
@property (nonatomic) double defaultHighlightedShadowRadius; // @synthesize defaultHighlightedShadowRadius=_defaultHighlightedShadowRadius;
@property (nonatomic) double defaultHighlightedShadowVerticalOffset; // @synthesize defaultHighlightedShadowVerticalOffset=_defaultHighlightedShadowVerticalOffset;
@property (nonatomic) double defaultSelectedShadowVerticalOffset; // @synthesize defaultSelectedShadowVerticalOffset=_defaultSelectedShadowVerticalOffset;
@property (nonatomic) double defaultUnfocusedShadowOpacity; // @synthesize defaultUnfocusedShadowOpacity=_defaultUnfocusedShadowOpacity;
@property (nonatomic) double defaultUnfocusedShadowRadius; // @synthesize defaultUnfocusedShadowRadius=_defaultUnfocusedShadowRadius;
@property (nonatomic) double defaultUnfocusedShadowVerticalOffset; // @synthesize defaultUnfocusedShadowVerticalOffset=_defaultUnfocusedShadowVerticalOffset;
@property (nonatomic) BOOL flatImageContainsCornerRadius; // @synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius;
@property (readonly, copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic) double focusCursorBorderWidth; // @synthesize focusCursorBorderWidth=_focusCursorBorderWidth;
@property (nonatomic) BOOL focusCursorEnabled; // @synthesize focusCursorEnabled=_focusCursorEnabled;
@property (nonatomic) double focusCursorShadowOpacityAdjustment; // @synthesize focusCursorShadowOpacityAdjustment=_focusCursorShadowOpacityAdjustment;
@property (nonatomic) BOOL fullBleedCenteredGrowth; // @synthesize fullBleedCenteredGrowth=_fullBleedCenteredGrowth;
@property (nonatomic) double fullBleedFocusedShadowOpacity; // @synthesize fullBleedFocusedShadowOpacity=_fullBleedFocusedShadowOpacity;
@property (nonatomic) double fullBleedFocusedShadowRadius; // @synthesize fullBleedFocusedShadowRadius=_fullBleedFocusedShadowRadius;
@property (nonatomic) double fullBleedOffset; // @synthesize fullBleedOffset=_fullBleedOffset;
@property (nonatomic) double fullBleedUnfocusedShadowOpacity; // @synthesize fullBleedUnfocusedShadowOpacity=_fullBleedUnfocusedShadowOpacity;
@property (nonatomic) double fullBleedUnfocusedShadowRadius; // @synthesize fullBleedUnfocusedShadowRadius=_fullBleedUnfocusedShadowRadius;
@property (nonatomic) BOOL hueShift; // @synthesize hueShift=_hueShift;
@property (nonatomic) double layerSelectionDuration; // @synthesize layerSelectionDuration=_layerSelectionDuration;
@property (nonatomic) double layerUnselectionDuration; // @synthesize layerUnselectionDuration=_layerUnselectionDuration;
@property (nonatomic) double maximumParallaxDepth; // @synthesize maximumParallaxDepth=_maximumParallaxDepth;
@property (nonatomic) unsigned long long maximumParallaxImages; // @synthesize maximumParallaxImages=_maximumParallaxImages;
@property (nonatomic) double minimumFocusDuration; // @synthesize minimumFocusDuration=_minimumFocusDuration;
@property (nonatomic) double overlayDepth; // @synthesize overlayDepth=_overlayDepth;
@property (nonatomic) BOOL overlayFixedFrame; // @synthesize overlayFixedFrame=_overlayFixedFrame;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (nonatomic) double pressedDuration; // @synthesize pressedDuration=_pressedDuration;
@property (nonatomic) double pressedScaleAdjustment; // @synthesize pressedScaleAdjustment=_pressedScaleAdjustment;
@property (nonatomic) double radiosityOffset; // @synthesize radiosityOffset=_radiosityOffset;
@property (nonatomic) double radiosityStrength; // @synthesize radiosityStrength=_radiosityStrength;
@property (nonatomic) double repositionUnselectionDuration; // @synthesize repositionUnselectionDuration=_repositionUnselectionDuration;
@property (nonatomic) double rotationAmount; // @synthesize rotationAmount=_rotationAmount;
@property (nonatomic) double scaleSizeIncrease; // @synthesize scaleSizeIncrease=_scaleSizeIncrease;
@property (nonatomic) double shadowSelectionDuration; // @synthesize shadowSelectionDuration=_shadowSelectionDuration;
@property (nonatomic) double shadowUnselectionDuration; // @synthesize shadowUnselectionDuration=_shadowUnselectionDuration;
@property (nonatomic) double specularHighlightHorizontalPositionSensitivity; // @synthesize specularHighlightHorizontalPositionSensitivity=_specularHighlightHorizontalPositionSensitivity;
@property (nonatomic) double specularHighlightVerticalPosition; // @synthesize specularHighlightVerticalPosition=_specularHighlightVerticalPosition;
@property (nonatomic) double specularHighlightVerticalPositionSensitivity; // @synthesize specularHighlightVerticalPositionSensitivity=_specularHighlightVerticalPositionSensitivity;
@property (nonatomic) double specularOpacity; // @synthesize specularOpacity=_specularOpacity;
@property (nonatomic) struct CGPoint translationOffset; // @synthesize translationOffset=_translationOffset;
@property (nonatomic) double unpressedDuration; // @synthesize unpressedDuration=_unpressedDuration;
@property (nonatomic) double zDepth; // @synthesize zDepth=_zDepth;

+ (id)newAppIconConfiguration;
+ (id)newStandardConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

