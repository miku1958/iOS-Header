//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSArray, NSCalendar, NSDate, NTKZeusColorPalette, SKNode, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene
{
    NSCalendar *_calendar;
    NSDate *_overrideDate;
    SKNode *_fontContainerNodes[2];
    NSArray *_fontHourNodes[2];
    SKNode *_logoContainerNode;
    SKSpriteNode *_logo1Node;
    SKSpriteNode *_logo2Node;
    SKNode *_multicolorContainerNode;
    SKSpriteNode *_multicolorBackground;
    SKSpriteNode *_multicolorSplit[4];
    double _previousCorrectionTime;
    double _currentTime;
    double _startSplitRotation;
    double _endSplitRotation;
    double _rotationDuration;
    NTKZeusColorPalette *_palette;
    unsigned long long _currentDensity;
    unsigned long long _style;
    BOOL _isEditing;
    BOOL _isStatusIconVisible;
    double _bleedZRotation;
    BOOL _scrubbing;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;

- (void).cxx_destruct;
- (void)_applyHourLabelCollectionNode:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (id)_hoursNodeForStyle:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
- (struct CGPoint)_logoContainerPositionForStyle:(unsigned long long)arg1;
- (double)_lowerComplicationAlphaForEditing:(BOOL)arg1;
- (id)_nodeForBleed:(unsigned long long)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2;
- (void)_significantTimeChanged;
- (double)_splitAngle;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(BOOL)arg1;
- (void)applyDensity:(unsigned long long)arg1;
- (void)applyPalette:(id)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (struct CGPoint)centerOf4NumeralForStyle:(unsigned long long)arg1;
- (unsigned long long)currentDensity;
- (void)dealloc;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (void)setAdjustsForStatusBarIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)update:(double)arg1;

@end

