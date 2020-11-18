//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKTextureHandler : NSObject
{
    int _paperTexture;
    int _eraserTexture;
    struct CGSize _paperTextureSize;
    NSMutableDictionary *_textureDictionary;
}

@property (readonly, nonatomic) unsigned int eraserTexture;
@property (readonly, nonatomic) unsigned int paperTexture;
@property (readonly, nonatomic) struct CGSize paperTextureSize;

+ (id)sharedTextureHandler;
- (void).cxx_destruct;
- (unsigned int)gradientTextureFrom:(double)arg1;
- (id)init;
- (unsigned int)loadTexture:(int *)arg1 image:(struct CGImage *)arg2 wrap:(BOOL)arg3;
- (unsigned int)loadTexture:(int *)arg1 name:(id)arg2 forInk:(BOOL)arg3;
- (unsigned int)loadTexture:(int *)arg1 name:(id)arg2 wrap:(BOOL)arg3 forInk:(BOOL)arg4;
- (unsigned int)textureWithImage:(struct CGImage *)arg1 textureName:(id)arg2 wrap:(BOOL)arg3;
- (unsigned int)textureWithName:(id)arg1;
- (unsigned int)textureWithName:(id)arg1 forInk:(BOOL)arg2;
- (unsigned int)textureWithName:(id)arg1 wrap:(BOOL)arg2;
- (unsigned int)textureWithName:(id)arg1 wrap:(BOOL)arg2 forInk:(BOOL)arg3;

@end

