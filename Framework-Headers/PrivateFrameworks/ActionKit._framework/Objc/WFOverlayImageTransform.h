//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFOverlayImageTransform : NSObject
{
    double _rotation;
    double _scale;
    double _opacity;
    struct CGPoint _center;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (nonatomic) struct CGPoint center; // @synthesize center=_center;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (nonatomic) double rotation; // @synthesize rotation=_rotation;
@property (nonatomic) double scale; // @synthesize scale=_scale;

- (void)applyToImageFile:(id)arg1 withOverlayImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initForCenteringImage:(id)arg1 inBackgroundImage:(id)arg2;
- (id)initWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 opacity:(double)arg5;

@end

