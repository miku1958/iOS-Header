//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer
{
    CALayer *_contentLayer;
    unsigned long long _clippingMode;
    struct CGRect _contentFrame;
}

@property (nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (strong, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;

- (void).cxx_destruct;
- (void)layoutForContentsRect;
- (void)layoutForMasking;
- (void)layoutSublayers;

@end

