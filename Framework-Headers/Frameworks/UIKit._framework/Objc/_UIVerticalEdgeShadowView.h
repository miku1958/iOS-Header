//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIShadowView.h>

__attribute__((visibility("hidden")))
@interface _UIVerticalEdgeShadowView : _UIShadowView
{
    double _width;
    unsigned long long _edge;
}

@property (readonly, nonatomic) unsigned long long edge; // @synthesize edge=_edge;
@property (readonly, nonatomic) double width; // @synthesize width=_width;

- (void)_loadImageIfNecessary;
- (id)initWithWidth:(double)arg1 edge:(unsigned long long)arg2;
- (void)layoutSubviews;

@end
