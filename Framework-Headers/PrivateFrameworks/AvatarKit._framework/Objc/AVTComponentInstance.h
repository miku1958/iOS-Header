//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SCNNode;

@interface AVTComponentInstance : NSObject
{
    SCNNode *_assetNode;
    NSString *_assetImage;
    NSArray *_assets;
    NSDictionary *_layers;
}

@property (readonly) NSString *assetImage; // @synthesize assetImage=_assetImage;
@property (readonly) SCNNode *assetNode; // @synthesize assetNode=_assetNode;
@property (readonly) BOOL imageMirror;
@property (readonly) struct CGSize imageOffset;
@property (readonly) double imageScale;
@property (readonly) CDStruct_10883d13 uvRemappingInfo;

- (void).cxx_destruct;
- (void)_commonInitForCaching:(BOOL)arg1 component:(id)arg2;
- (id)assetImageForAsset:(id)arg1;
- (id)assetImageWithLayerNamed:(id)arg1;
- (void)dealloc;
- (BOOL)has2DAsset;
- (BOOL)has3DAsset;
- (id)initWithComponent:(id)arg1;
- (id)initWithComponent:(id)arg1 forCaching:(BOOL)arg2;
- (void)updateMaterialsWithComponent:(id)arg1;

@end
