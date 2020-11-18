//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIMutableCommonAssetStorage, NSMutableArray, NSString;

@interface CUISingleNamedAssetCreator : NSObject
{
    NSString *_primaryName;
    unsigned long long _primaryIndex;
    NSMutableArray *_names;
    NSMutableArray *_generators;
    CUIMutableCommonAssetStorage *_store;
    double _radiosityCompressionQuaility;
    double _flattenedCompressionQuality;
    double _layersCompressionQuality;
    long long _compressionType;
}

@property (strong) NSMutableArray *generators; // @synthesize generators=_generators;
@property (strong) NSMutableArray *names; // @synthesize names=_names;
@property unsigned long long primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property (strong) NSString *primaryName; // @synthesize primaryName=_primaryName;
@property (strong) CUIMutableCommonAssetStorage *store; // @synthesize store=_store;

- (id)_addImage:(struct CGImage *)arg1 withBaseKey:(id)arg2 name:(id)arg3;
- (void)_addImageAsJPEG:(struct CGImage *)arg1 withBaseKey:(id)arg2 withName:(id)arg3;
- (void)_configureDefaultStorageParameters;
- (id)_defaultBaseKey;
- (BOOL)_distillNameEntries:(id *)arg1;
- (BOOL)_distillRenditions:(id *)arg1;
- (BOOL)_extractFlattenedImages:(id *)arg1;
- (void)_finalizeNameIdentifiers;
- (id)_flattenedImageBaseKey;
- (id)_generatorForName:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)_keyFormat;
- (id)_radiosityImageBaseKey;
- (void)addFlattenedImage:(struct CGImage *)arg1 forLayerStackWithName:(id)arg2;
- (void)addImage:(struct CGImage *)arg1 withName:(id)arg2;
- (void)addImageAsJPEG:(struct CGImage *)arg1 withName:(id)arg2;
- (void)addLayerReference:(id)arg1 forImage:(struct CGImage *)arg2 toLayerStackWithName:(id)arg3;
- (void)addLayerStackWithSize:(struct CGSize)arg1 stackData:(id)arg2 name:(id)arg3;
- (double)compressionQuality;
- (long long)compressionType;
- (void)dealloc;
- (BOOL)distillAndSave:(id *)arg1;
- (double)flattenedLossyCompressionQuality;
- (id)initWithOutputURL:(id)arg1 versionString:(id)arg2;
- (double)layersLossyCompressionQuality;
- (id)path;
- (double)radiosityLossyCompressionQuality;
- (void)setCompressionQuality:(double)arg1;
- (void)setCompressionType:(long long)arg1;
- (void)setFlattenedLossyCompressionQuality:(double)arg1;
- (void)setLayersLossyCompressionQuality:(double)arg1;
- (void)setRadiosityLossyCompressionQuality:(double)arg1;

@end

