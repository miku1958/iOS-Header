//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileLayoutInfo.h>

@class PUDisplayTileTransform;

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo
{
    PUDisplayTileTransform *_displayTileTransform;
    struct CGRect _untransformedContentFrame;
    struct CGRect _passthroughRect;
}

@property (readonly, nonatomic) PUDisplayTileTransform *displayTileTransform; // @synthesize displayTileTransform=_displayTileTransform;
@property (readonly, nonatomic) struct CGRect passthroughRect; // @synthesize passthroughRect=_passthroughRect;
@property (readonly, nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;

- (void).cxx_destruct;
- (id)clone;
- (id)description;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 displayTileTransform:(id)arg9 passthroughRect:(struct CGRect)arg10;
- (BOOL)isGeometryEqualToLayoutInfo:(id)arg1;

@end

