//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class MISSING_TYPE, NSArray, SKNode, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene
{
    NSArray *_fontHourNodes;
    SKNode *_logoContainerNode;
    SKSpriteNode *_logo1Node;
    SKSpriteNode *_logo2Node;
    unsigned long long _currentDensity;
    BOOL _isEditing;
    unsigned long long _style;
    BOOL _statusIconVisible;
    MISSING_TYPE *_lightDirection;
    BOOL _scrubbing;
}

@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;

- (void).cxx_destruct;
- (id)_colorForFaceColor:(unsigned long long)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_contentAlphaForEditing:(BOOL)arg1;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (id)_hoursNodeForStyle:(unsigned long long)arg1;
- (double)_lowerComplicationAlphaForEditing:(BOOL)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(BOOL)arg1;
- (void)applyColor:(unsigned long long)arg1;
- (void)applyDensity:(unsigned long long)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (unsigned long long)currentDensity;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (void)setAdjustsForStatusBarIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
