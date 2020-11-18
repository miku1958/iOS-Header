//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class CUINamedLayerStack, NSBundle, NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding>
{
    _UIAssetManager *_assetManager;
    NSBundle *_containingBundle;
    BOOL _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct {
        unsigned int hasRegisteredImages:1;
        unsigned int supportsBlockGeneration:1;
        unsigned int disconnectedFromAssetManager:1;
    } _assetFlags;
    CUINamedLayerStack *_layerStack;
    id _unpinObserver;
    CDUnknownBlockType _rebuildStackImage;
    CDUnknownBlockType _creationBlock;
    NSString *_assetName;
}

@property (readonly, weak, nonatomic) _UIAssetManager *_assetManager; // @synthesize _assetManager;
@property (readonly, nonatomic) UITraitCollection *_defaultTraitCollection;
@property (strong, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack; // @synthesize _layerStack;
@property (copy, nonatomic, setter=_setRebuildStackImage:) CDUnknownBlockType _rebuildStackImage; // @synthesize _rebuildStackImage;
@property (weak, nonatomic, setter=_setUnpinObserver:) id _unpinObserver; // @synthesize _unpinObserver;
@property (copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property (copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;

+ (id)_dynamicAssetNamed:(id)arg1 generator:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_cacheRendition:(id)arg1 forSize:(struct CGSize)arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(BOOL)arg5 letterpress:(BOOL)arg6 drawMode:(unsigned int)arg7;
- (id)_cachedRenditionWithSize:(struct CGSize)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned int)arg6;
- (void)_clearResolvedImageResources;
- (BOOL)_containsImagesInPath:(id)arg1;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(CDUnknownBlockType)arg2;
- (id)_mutableCatalog;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (void)_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (id)_registeredAppearanceNames;
- (id)_renditionCache:(BOOL)arg1;
- (id)_symbolConfiguration;
- (id)_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageWithConfiguration:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)unregisterImageWithConfiguration:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end

