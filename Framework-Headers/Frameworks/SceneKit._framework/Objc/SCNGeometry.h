//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNBoundingVolume-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNGeometryElement, SCNGeometrySource, SCNMaterial, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DGeometry *_geometry;
    unsigned int _isPresentationInstance:1;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSMutableArray *_materials;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_levelsOfDetail;
    unsigned long long _subdivisionLevel;
    BOOL _subdivisionIsAdaptive;
    CDStruct_4c02ed10 _subdivisionSettings;
    SCNGeometrySource *_edgeCreasesSource;
    SCNGeometryElement *_edgeCreasesElement;
    SCNShadableHelper *_shadableHelper;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property (strong, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property (strong, nonatomic) SCNMaterial *firstMaterial;
@property (readonly, nonatomic) long long geometryElementCount;
@property (readonly, nonatomic) NSArray *geometryElements;
@property (readonly, nonatomic) NSArray *geometrySources;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *levelsOfDetail;
@property (copy, nonatomic) NSArray *materials;
@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) SCNProgram *program;
@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (nonatomic) unsigned long long subdivisionLevel;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsAdaptiveSubdivision;

+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5;
+ (id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4;
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)floorWithOptions:(id)arg1;
+ (id)geometry;
+ (id)geometryWithGeometryRef:(struct __C3DGeometry *)arg1;
+ (id)geometryWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3;
+ (id)morpherWithMDLMesh:(id)arg1;
+ (id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)sphereWithRadius:(double)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4;
- (const void *)__CFObject;
- (struct __C3DGeometry *)__createCFObject;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)__shadableHelper;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_copyAttributesTo:(id)arg1;
- (void)_customDecodingOfSCNGeometry:(id)arg1;
- (void)_customEncodingOfSCNGeometry:(id)arg1;
- (void)_discardOriginalTopology;
- (void)_expand;
- (id)_firstMaterial;
- (id)_geometryByAddingSourcesOfSkinner:(id)arg1;
- (id)_geometryByRemovingSkinnerSources;
- (id)_geometryByUnifyingNormalsWithCreaseThreshold:(double)arg1;
- (id)_geometryByWeldingVerticesWithThreshold:(double)arg1 normalThreshold:(double)arg2;
- (BOOL)_hasFixedBoundingBoxExtrema;
- (id)_materialWithName:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (void)_releaseCachedSourcesAndElements;
- (id)_renderableCopy;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setAttributes:(id)arg1;
- (void)_setGeometryRef:(struct __C3DGeometry *)arg1;
- (void)_setupGeometryElements;
- (void)_setupGeometrySources;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_setupShadableHelperIfNeeded;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (CDStruct_4c02ed10)_subdivisionSettings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_unifyNormals;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)copyShaderModifiersFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countOfMaterials;
- (id)customMaterialAttributeNames;
- (id)customMaterialAttributes;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (id)geometryDescription;
- (id)geometryElementAtIndex:(long long)arg1;
- (struct __C3DGeometry *)geometryRef;
- (id)geometrySourceChannels;
- (id)geometrySourceForSemantic:(id)arg1;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)getBoundingBox;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)getBoundingSphere;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)identifier;
- (id)init;
- (id)initPresentationGeometryWithGeometryRef:(struct __C3DGeometry *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometryRef:(struct __C3DGeometry *)arg1;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2;
- (id)interleavedCopy;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isPausedOrPausedByInheritance;
- (BOOL)isPresentationInstance;
- (id)keyForNodeAttributes;
- (id)material;
- (struct __C3DMaterial *)materialRef;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
- (id)materialWithName:(id)arg1;
- (id)mutableCopy;
- (id)mutableMaterials;
- (id)objectInMaterialsAtIndex:(unsigned long long)arg1;
- (BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationGeometry;
- (id)presentationInstance;
- (long long)primitiveType;
- (void)removeAllAnimations;
- (void)removeAllBindings;
- (void)removeAllMaterials;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeMaterial:(id)arg1;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1;
- (void)replaceMaterial:(id)arg1 with:(id)arg2;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;
- (void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)setGeometryRef:(struct __C3DGeometry *)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaterial:(id)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;
- (void)set_subdivisionSettings:(CDStruct_4c02ed10)arg1;
- (id)shaderModifiersArgumentsNames;
- (BOOL)simdGetBoundingSphereCenter:(MISSING_TYPE **)arg1 radius:(float *)arg2;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

