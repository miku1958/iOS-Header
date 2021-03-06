//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent : _UIImageContent
{
    struct CGSVGDocument *_svgDocumentRef;
}

- (struct CGSVGDocument *)CGSVGDocument;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (BOOL)canProvideFullResCGImage;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (BOOL)isCGSVGDocument;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;

@end

