//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GLKShaderBlockNode, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GLKEffect : NSObject
{
    NSMutableArray *_properties;
    unsigned char _colorMaterialEnabled;
    unsigned char _lightModelTwoSided;
    union _GLKVector4 _lightModelAmbientColor;
    unsigned char _texturingEnabled;
    NSArray *_textureOrder;
    NSString *_label;
    unsigned char _perVertexLightingEnabled;
    unsigned char _perPixelLightingEnabled;
    unsigned char _masksInitialized;
    BOOL _textureOrderStale;
    unsigned int _numLights;
    unsigned int _numTextures;
    int _aColorLoc;
    unsigned int _vshName;
    unsigned int _fshName;
    unsigned int _programName;
    unsigned int _numVshStrings;
    unsigned int _numFshStrings;
    int _lightModelAmbientColorLoc;
    int _baseLightingColorLoc;
    NSMutableDictionary *_programHash;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    id *_effectShaderArray;
    NSMutableArray *_lightProperties;
    GLKShaderBlockNode *_vshRootNode;
    GLKShaderBlockNode *_fshRootNode;
    char **_vshStrings;
    char **_fshStrings;
    unsigned long long _dirtyUniforms;
    struct GLKBigInt_s *_fshMask;
    struct GLKBigInt_s *_vshMask;
    union _GLKVector4 _baseLightingColor;
    struct GLKBigInt_s _prevFshMask;
    struct GLKBigInt_s _prevVshMask;
}

@property (nonatomic) int aColorLoc; // @synthesize aColorLoc=_aColorLoc;
@property (nonatomic) union _GLKVector4 baseLightingColor; // @synthesize baseLightingColor=_baseLightingColor;
@property (nonatomic) int baseLightingColorLoc; // @synthesize baseLightingColorLoc=_baseLightingColorLoc;
@property (nonatomic) unsigned char colorMaterialEnabled; // @synthesize colorMaterialEnabled=_colorMaterialEnabled;
@property (nonatomic) unsigned long long dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
@property (nonatomic) id *effectShaderArray; // @synthesize effectShaderArray=_effectShaderArray;
@property (nonatomic) struct GLKBigInt_s *fshMask; // @synthesize fshMask=_fshMask;
@property (nonatomic) unsigned int fshName; // @synthesize fshName=_fshName;
@property (readonly, nonatomic) GLKShaderBlockNode *fshRootNode; // @synthesize fshRootNode=_fshRootNode;
@property (nonatomic) char **fshStrings; // @synthesize fshStrings=_fshStrings;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) union _GLKVector4 lightModelAmbientColor; // @synthesize lightModelAmbientColor=_lightModelAmbientColor;
@property (nonatomic) int lightModelAmbientColorLoc; // @synthesize lightModelAmbientColorLoc=_lightModelAmbientColorLoc;
@property (nonatomic) unsigned char lightModelTwoSided; // @synthesize lightModelTwoSided=_lightModelTwoSided;
@property (strong, nonatomic) NSMutableArray *lightProperties; // @synthesize lightProperties=_lightProperties;
@property (nonatomic) unsigned char masksInitialized; // @synthesize masksInitialized=_masksInitialized;
@property (readonly, nonatomic) float *materialAmbientColor; // @synthesize materialAmbientColor=_materialAmbientColor;
@property (readonly, nonatomic) float *materialDiffuseColor; // @synthesize materialDiffuseColor=_materialDiffuseColor;
@property (nonatomic) unsigned int numFshStrings; // @synthesize numFshStrings=_numFshStrings;
@property (nonatomic) unsigned int numLights; // @synthesize numLights=_numLights;
@property (nonatomic) unsigned int numTextures; // @synthesize numTextures=_numTextures;
@property (nonatomic) unsigned int numVshStrings; // @synthesize numVshStrings=_numVshStrings;
@property (nonatomic) unsigned char perPixelLightingEnabled; // @synthesize perPixelLightingEnabled=_perPixelLightingEnabled;
@property (nonatomic) unsigned char perVertexLightingEnabled; // @synthesize perVertexLightingEnabled=_perVertexLightingEnabled;
@property (nonatomic) struct GLKBigInt_s prevFshMask; // @synthesize prevFshMask=_prevFshMask;
@property (nonatomic) struct GLKBigInt_s prevVshMask; // @synthesize prevVshMask=_prevVshMask;
@property (readonly, nonatomic) NSMutableDictionary *programHash; // @synthesize programHash=_programHash;
@property (nonatomic) unsigned int programName; // @synthesize programName=_programName;
@property (strong, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property (copy, nonatomic) NSArray *textureOrder; // @synthesize textureOrder=_textureOrder;
@property (nonatomic) BOOL textureOrderStale; // @synthesize textureOrderStale=_textureOrderStale;
@property (nonatomic) unsigned char texturingEnabled; // @synthesize texturingEnabled=_texturingEnabled;
@property (nonatomic) struct GLKBigInt_s *vshMask; // @synthesize vshMask=_vshMask;
@property (nonatomic) unsigned int vshName; // @synthesize vshName=_vshName;
@property (readonly, nonatomic) GLKShaderBlockNode *vshRootNode; // @synthesize vshRootNode=_vshRootNode;
@property (nonatomic) char **vshStrings; // @synthesize vshStrings=_vshStrings;

+ (void)initialize;
+ (void)initializeStaticMasks;
+ (BOOL)parseXMLFile:(id)arg1 rootNode:(id)arg2;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;
- (void)addTransformProperty;
- (void)bind;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (unsigned int)fshMaskCt;
- (char **)fshMaskStr;
- (struct GLKBigInt_s *)fshMasks;
- (BOOL)includeFshShaderTextForRootNode:(id)arg1;
- (BOOL)includeShaderTextForRootNode:(id)arg1;
- (BOOL)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (id)initWithPropertyArray:(id)arg1;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)setTextureIndices;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (BOOL)useColorAttrib;
- (BOOL)useTexCoordAttrib;
- (unsigned int)vshMaskCt;
- (char **)vshMaskStr;
- (struct GLKBigInt_s *)vshMasks;

@end

