//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/CALayerDelegate-Protocol.h>

@class RBDevice, RBDisplayList, RBLayer;

@protocol RBLayerDelegate <CALayerDelegate>

@optional
- (void)RBLayer:(RBLayer *)arg1 draw:(RBDisplayList *)arg2;
- (RBDevice *)RBLayerDefaultDevice:(RBLayer *)arg1;
- (double)RBLayerPresentationTime:(RBLayer *)arg1;
@end
