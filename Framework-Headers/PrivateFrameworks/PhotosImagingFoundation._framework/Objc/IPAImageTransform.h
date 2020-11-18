//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageTransform-Protocol.h>

@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject <IPAImageTransform>
{
    id<IPAImageGeometry> _inputGeometry;
    id<IPAImageGeometry> _intrinsicGeometry;
}

+ (id)compositeTransforms:(id)arg1;
+ (id)identityTransformForGeometry:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canAlignToPixelsExactly;
- (id)description;
- (id)init;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2;
- (id)inputGeometry;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;

@end
