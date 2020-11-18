//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKMicaLayer.h>

@class CAGradientLayer, CAShapeLayer;
@protocol PKCheckGlyphLayerDelegate;

@interface PKCheckGlyphLayer : PKMicaLayer
{
    struct CGColor *_primaryColor;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    BOOL _revealed;
    id<PKCheckGlyphLayerDelegate> _checkGlyphDelegate;
}

@property (weak, nonatomic) id<PKCheckGlyphLayerDelegate> checkGlyphDelegate; // @synthesize checkGlyphDelegate=_checkGlyphDelegate;
@property (nonatomic) BOOL revealed; // @synthesize revealed=_revealed;

- (void).cxx_destruct;
- (void)_createMask;
- (double)_updateCovered:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (struct CGColor *)primaryColor;
- (double)setCovered:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPrimaryColor:(struct CGColor *)arg1 animated:(BOOL)arg2;
- (double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;

@end
