//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKPOIIconGenerator : NSObject
{
}

+ (BOOL)canHandleStyle:(struct VKIconStyleInfo *)arg1;
+ (struct CGSize)imageSizeForStyle:(struct VKIconStyleInfo *)arg1 scale:(double)arg2 hasText:(BOOL)arg3;
+ (id)keyForStyle:(struct VKIconStyleInfo *)arg1;
+ (id)newIconWithGlyph:(struct CGImage *)arg1 style:(struct VKIconStyleInfo *)arg2 scale:(double)arg3;
+ (id)newIconWithGlyph:(struct CGImage *)arg1 style:(struct VKIconStyleInfo *)arg2 scale:(double)arg3 hasText:(BOOL)arg4 leftCapWidth:(double *)arg5 rightCapWidth:(double *)arg6;

@end

