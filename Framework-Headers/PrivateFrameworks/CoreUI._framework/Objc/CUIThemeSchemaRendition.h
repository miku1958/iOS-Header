//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition
{
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage *_image[9];
    struct CGRect _layoutRects[9];
    struct CGSize _intrinsicSize;
    struct CGRect _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    CDStruct_3c058996 _contentInsets;
    CUIPSDGradient *_gradient;
}

@property (readonly, nonatomic) CUIPSDGradient *gradient;
@property (readonly, nonatomic) unsigned long long numberOfSlices;
@property (readonly, nonatomic) struct CGRect *sliceRects;

- (struct CGRect)alignmentRectangle;
- (unsigned short)appearance;
- (long long)columnSlices;
- (CDStruct_3c058996)contentInsets;
- (id)coreUIOptions;
- (void)dealloc;
- (id)defaultTemplateName;
- (id)description;
- (unsigned short)dimension1;
- (id)dimension1LocalizedString;
- (unsigned short)dimension2;
- (id)dimension2LocalizedString;
- (unsigned short)direction;
- (id)directionLocalizedString;
- (unsigned short)drawingLayer;
- (id)drawingLayerLocalizedString;
- (struct CGRect)edgeInsets:(BOOL)arg1;
- (unsigned short)identifier;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (unsigned short)keyScale;
- (unsigned short)layer;
- (unsigned short)localization;
- (unsigned short)presentationState;
- (id)presentationStateLocalizedString;
- (unsigned short)previousState;
- (id)previousStateLocalizedString;
- (unsigned short)previousValue;
- (id)previousValueLocalizedString;
- (id)referenceImage;
- (struct CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1;
- (long long)rowSlices;
- (double)scale;
- (id)scaleLocalizedString;
- (unsigned short)size;
- (id)sizeLocalizedString;
- (id)slices;
- (unsigned short)state;
- (id)stateLocalizedString;
- (id)stringForState:(unsigned short)arg1;
- (id)stringForValue:(unsigned short)arg1;
- (id)typeLocalizedString;
- (unsigned short)value;
- (id)valueLocalizedString;

@end

