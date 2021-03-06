//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTMaterial, AVTMemoji, NSArray, NSString;

@interface AVTComponent : NSObject
{
    long long _type;
    NSArray *_assets;
    BOOL _mirrored;
    AVTMemoji *_memoji;
    AVTMaterial *_materials[3];
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    double _morphVariantIntensity;
    double _textureAssetPresence;
}

@property (readonly) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, nonatomic) NSString *imageVariant; // @synthesize imageVariant=_imageVariant;
@property (readonly, nonatomic) NSString *materialVariant; // @synthesize materialVariant=_materialVariant;
@property (readonly, nonatomic) BOOL mirrored; // @synthesize mirrored=_mirrored;
@property (readonly, nonatomic) NSString *morphVariant; // @synthesize morphVariant=_morphVariant;
@property (readonly, nonatomic) double morphVariantIntensity; // @synthesize morphVariantIntensity=_morphVariantIntensity;
@property (readonly, nonatomic) double textureAssetPresence; // @synthesize textureAssetPresence=_textureAssetPresence;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 assets:(id)arg2 morphVariant:(id)arg3 imageVariant:(id)arg4 materialVariant:(id)arg5 morphVariantIntensity:(double)arg6 textureAssetPresence:(double)arg7 mirrored:(BOOL)arg8;
- (id)materialAtIndex:(unsigned long long)arg1;
- (id)memoji;
- (void)setMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMemoji:(id)arg1;

@end

