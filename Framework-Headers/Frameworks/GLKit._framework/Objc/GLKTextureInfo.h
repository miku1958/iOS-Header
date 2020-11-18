//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKTextureInfo : NSObject <NSCopying>
{
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    unsigned int depth;
    int alphaState;
    int textureOrigin;
    BOOL containsMipmaps;
    unsigned int mimapLevelCount;
    unsigned int arrayLength;
    BOOL lossyCompressedSource;
}

@property (readonly) int alphaState; // @synthesize alphaState;
@property (readonly) unsigned int arrayLength; // @synthesize arrayLength;
@property (readonly) BOOL containsMipmaps; // @synthesize containsMipmaps;
@property (readonly) unsigned int depth; // @synthesize depth;
@property (readonly) unsigned int height; // @synthesize height;
@property (readonly) unsigned int mimapLevelCount; // @synthesize mimapLevelCount;
@property (readonly) unsigned int name; // @synthesize name;
@property (readonly) unsigned int target; // @synthesize target;
@property (readonly) int textureOrigin; // @synthesize textureOrigin;
@property (readonly) unsigned int width; // @synthesize width;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (id)initWithTextureTXR:(id)arg1 textureName:(unsigned int)arg2;
- (BOOL)lossyCompressedSource;

@end

