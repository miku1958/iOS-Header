//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec
{
}

@property (readonly, strong, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property (readonly, strong, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (strong, nonatomic) NSOrderedSet *components; // @dynamic components;
@property (strong, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)componentOfType:(unsigned int)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)effectPreset;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

@end

