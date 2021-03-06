//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DMaterialPackage.h>

@class TSCH3DDiffuseMaterial, TSCH3DEmissiveMaterial, TSCH3DModulateMaterial, TSCH3DShininessMaterial, TSCH3DSpecularMaterial;

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage
{
    TSCH3DEmissiveMaterial *_emissive;
    TSCH3DDiffuseMaterial *_diffuse;
    TSCH3DModulateMaterial *_modulate;
    TSCH3DSpecularMaterial *_specular;
    TSCH3DShininessMaterial *_shininess;
}

@property (strong, nonatomic) TSCH3DDiffuseMaterial *diffuse; // @synthesize diffuse=_diffuse;
@property (strong, nonatomic) TSCH3DEmissiveMaterial *emissive; // @synthesize emissive=_emissive;
@property (strong, nonatomic) TSCH3DModulateMaterial *modulate; // @synthesize modulate=_modulate;
@property (strong, nonatomic) TSCH3DShininessMaterial *shininess; // @synthesize shininess=_shininess;
@property (strong, nonatomic) TSCH3DSpecularMaterial *specular; // @synthesize specular=_specular;

+ (id)instanceWithArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 unarchiver:(id)arg2;
+ (id)package;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)hasCompleteData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)materialEnumerator;
- (void)saveToArchive:(struct Chart3DPhongMaterialPackageArchive *)arg1 archiver:(id)arg2;

@end

