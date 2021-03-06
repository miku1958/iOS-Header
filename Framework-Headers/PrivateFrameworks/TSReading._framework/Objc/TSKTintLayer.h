//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer *_contentsLayer;
}

@property (strong, nonatomic) CALayer *contentsLayer; // @synthesize contentsLayer=_contentsLayer;
@property struct CGColor *tintColor;

- (id)contents;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setContents:(id)arg1;
- (void)setNeedsDisplay;

@end

