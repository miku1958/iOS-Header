//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage
{
    struct CGRect _frame;
    double _opacity;
    int _blendMode;
    BOOL _fixedFrame;
}

@property (nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property (nonatomic) BOOL fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;

- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

