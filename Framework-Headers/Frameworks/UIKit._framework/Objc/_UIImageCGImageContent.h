//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGImageContent : _UIImageContent
{
    _Atomic struct CGImage *_imageRef;
}

- (struct CGImage *)CGImage;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasCGImage;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (BOOL)isCGImage;
- (BOOL)isEqual:(id)arg1;
- (id)renditionApplyingEffect:(id)arg1;
- (struct CGSize)sizeInPixels;

@end
