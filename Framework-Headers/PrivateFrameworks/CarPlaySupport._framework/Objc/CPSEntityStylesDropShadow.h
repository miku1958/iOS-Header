//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface CPSEntityStylesDropShadow : NSObject
{
    UIColor *_color;
    double _radius;
    double _opacity;
    struct CGSize _offset;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (nonatomic) double radius; // @synthesize radius=_radius;

- (void).cxx_destruct;
- (void)applyShadowToLayer:(id)arg1;

@end
