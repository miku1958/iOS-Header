//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent : _UIImageContent
{
    CIImage *_ciImage;
}

- (void).cxx_destruct;
- (id)CIImage;
- (id)_context;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (BOOL)isCIImage;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;

@end

