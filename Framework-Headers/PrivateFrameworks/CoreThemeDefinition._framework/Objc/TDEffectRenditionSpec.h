//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSSet;

@interface TDEffectRenditionSpec : TDRenditionSpec
{
}

@property (strong, nonatomic) NSSet *components; // @dynamic components;
@property (strong, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)effectPreset;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

@end

