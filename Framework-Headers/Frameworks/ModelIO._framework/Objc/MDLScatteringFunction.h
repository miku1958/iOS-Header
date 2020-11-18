//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class MDLMaterialProperty, NSString;

@interface MDLScatteringFunction : NSObject <MDLNamed>
{
    NSString *_name;
    MDLMaterialProperty *_baseColor;
    struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> _bsdf;
    MDLMaterialProperty *_emission;
    MDLMaterialProperty *_specular;
    MDLMaterialProperty *_materialIndexOfRefraction;
    MDLMaterialProperty *_interfaceIndexOfRefraction;
    MDLMaterialProperty *_normal;
    MDLMaterialProperty *_ambientOcclusion;
    MDLMaterialProperty *_ambientOcclusionScale;
}

@property (readonly, strong, nonatomic) MDLMaterialProperty *ambientOcclusion; // @synthesize ambientOcclusion=_ambientOcclusion;
@property (readonly, strong, nonatomic) MDLMaterialProperty *ambientOcclusionScale; // @synthesize ambientOcclusionScale=_ambientOcclusionScale;
@property (readonly, strong, nonatomic) MDLMaterialProperty *baseColor; // @synthesize baseColor=_baseColor;
@property (readonly, strong, nonatomic) MDLMaterialProperty *emission; // @synthesize emission=_emission;
@property (readonly, strong, nonatomic) MDLMaterialProperty *interfaceIndexOfRefraction; // @synthesize interfaceIndexOfRefraction=_interfaceIndexOfRefraction;
@property (readonly, strong, nonatomic) MDLMaterialProperty *materialIndexOfRefraction; // @synthesize materialIndexOfRefraction=_materialIndexOfRefraction;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, strong, nonatomic) MDLMaterialProperty *normal; // @synthesize normal=_normal;
@property (readonly, strong, nonatomic) MDLMaterialProperty *specular; // @synthesize specular=_specular;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
