//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBoundingPath.h>

__attribute__((visibility("hidden")))
@interface _UIRectangularBoundingPath : _UIBoundingPath
{
    struct CGRect _boundingRect;
}

@property (readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;

+ (BOOL)supportsSecureCoding;
- (id)_imageRepresentation;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (BOOL)_validateBoundingRect:(struct CGRect)arg1 forCoordinateSpace:(id)arg2;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 boundingRect:(struct CGRect)arg2;
- (BOOL)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (BOOL)validateForCoordinateSpace;

@end
