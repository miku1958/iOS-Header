//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIImage, CUIShapeEffectPreset, NSDictionary;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition
{
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (BOOL)_generateReferenceImage;
- (void)_initializeCoreUIOptions:(id)arg1;
- (id)_rendererInitializationDictionary;
- (id)coreUIOptions;
- (void)dealloc;
- (id)effectPreset;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (id)referenceImage;

@end

