//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLTextureLoader : NSObject
{
}

+ (id)p_textureInfoFromCGImage:(struct CGImage *)arg1 generateMipmaps:(BOOL)arg2;
+ (id)textureWithCGImage:(struct CGImage *)arg1 generateMipmaps:(BOOL)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(BOOL)arg2 error:(id *)arg3;

@end

