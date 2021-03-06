//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIImageAccumulator : NSObject
{
    void *_state;
}

@property (readonly) struct CGRect extent;
@property (readonly) int format;

+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
- (void)clear;
- (struct CGColorSpace *)colorSpace;
- (void)commitUpdates:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)image;
- (id)init;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 dirtyRect:(struct CGRect)arg2;

@end

