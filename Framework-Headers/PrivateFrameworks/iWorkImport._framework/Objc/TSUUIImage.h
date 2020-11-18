//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUImage.h>

@class TSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface TSUUIImage : TSUImage
{
    UIImage *mUIImage;
    TSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;
+ (id)imageNamed:(id)arg1;
- (struct CGImage *)CGImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (long long)imageOrientation;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2;
- (double)scale;
- (struct CGSize)size;

@end

