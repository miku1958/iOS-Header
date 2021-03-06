//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIImage;

__attribute__((visibility("hidden")))
@interface _CUINineImagePieces : NSObject
{
    CUIImage *_center;
    CUIImage *_topLeft;
    CUIImage *_top;
    CUIImage *_topRight;
    CUIImage *_right;
    CUIImage *_bottomRight;
    CUIImage *_bottom;
    CUIImage *_bottomLeft;
    CUIImage *_left;
    BOOL _tileCenterAndEdges;
}

- (id)bottom;
- (id)bottomLeft;
- (id)bottomRight;
- (id)center;
- (void)dealloc;
- (id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(BOOL)arg10;
- (id)left;
- (id)right;
- (BOOL)tileCenterAndEdges;
- (id)top;
- (id)topLeft;
- (id)topRight;

@end

