//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@interface PLImageGeometry : NSObject <NSCopying>
{
    long long _appliedOrientation;
    struct CGRect _inputRect;
}

@property (nonatomic) long long appliedOrientation; // @synthesize appliedOrientation=_appliedOrientation;
@property (readonly, nonatomic) struct CGAffineTransform appliedTransform;
@property (readonly, nonatomic) struct CGRect inputRect; // @synthesize inputRect=_inputRect;
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored;
@property (readonly, nonatomic) struct CGRect outputRect;
@property (readonly, nonatomic, getter=isSizeInverted) BOOL sizeInverted;

+ (id)geometryWithInputSize:(struct CGSize)arg1 initialOrientation:(long long)arg2;
+ (id)geometryWithOutputSize:(struct CGSize)arg1 appliedOrientation:(long long)arg2;
- (struct CGRect)_basisRect:(long long)arg1;
- (struct CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)applyOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)denormalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (id)description;
- (void)flipHorizontally;
- (void)flipVertically;
- (id)init;
- (id)initWithInputSize:(struct CGSize)arg1;
- (struct CGRect)inputRectForOutputRect:(struct CGRect)arg1;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)outputRectForInputRect:(struct CGRect)arg1;
- (void)rotateClockwise;
- (void)rotateCounterClockwise;
- (struct CGAffineTransform)transformFromOrientation:(long long)arg1;
- (struct CGAffineTransform)transformToOrientation:(long long)arg1;

@end

