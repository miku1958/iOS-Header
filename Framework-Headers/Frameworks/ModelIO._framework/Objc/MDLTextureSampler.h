//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject
{
    MDLTexture *texture;
    MDLTextureFilter *hardwareFilter;
    MDLTransform *transform;
    unsigned long long mappingChannel;
    long long textureComponents;
}

@property (strong, nonatomic) MDLTextureFilter *hardwareFilter; // @synthesize hardwareFilter;
@property (nonatomic) unsigned long long mappingChannel; // @synthesize mappingChannel;
@property (strong, nonatomic) MDLTexture *texture; // @synthesize texture;
@property (nonatomic) long long textureComponents; // @synthesize textureComponents;
@property (strong, nonatomic) MDLTransform *transform; // @synthesize transform;

- (void).cxx_destruct;
- (id)init;

@end
