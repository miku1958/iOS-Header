//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMaterial/MTMaterialStyleProviding-Protocol.h>
#import <CoreMaterial/MTMaterialVersioning-Protocol.h>

@class NSString;
@protocol MTTinting><MTMaterialFiltering;

@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning, MTMaterialStyleProviding>

@property (readonly, nonatomic) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;
@property (readonly, nonatomic) id<MTTinting><MTMaterialFiltering> baseMaterialSettings;
@property (readonly, nonatomic) id<MTTinting><MTMaterialFiltering> baseOverlaySettings;
@property (readonly, nonatomic) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings;
@property (readonly, nonatomic) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings;

- (id<MTTinting><MTMaterialFiltering>)settingsForConfiguration:(NSString *)arg1;
@end
