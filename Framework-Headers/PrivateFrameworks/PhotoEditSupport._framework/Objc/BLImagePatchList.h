//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BLImagePatchList : NSObject
{
    struct CGImage *_baseImage;
    struct CGSize _size;
    NSMutableArray *_patchArray;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage *)arg1;
- (void)addPatch:(id)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithImage:(struct CGImage *)arg1;
- (void)removeAllPatches;
- (struct CGSize)size;

@end

