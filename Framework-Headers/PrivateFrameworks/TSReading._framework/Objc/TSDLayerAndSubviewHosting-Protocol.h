//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class CALayer, NSArray, TSDCanvasSubviewsController, UIView, UIViewController;

@protocol TSDLayerAndSubviewHosting <NSObject>

@property (readonly, strong, nonatomic) CALayer *containerLayer;
@property (readonly, strong, nonatomic) UIView *containerView;
@property (readonly, strong, nonatomic) UIViewController *containerViewController;
@property (readonly, strong, nonatomic) TSDCanvasSubviewsController *subviewsController;
@property (readonly, strong, nonatomic) CALayer *topLevelTilingLayer;

- (NSArray *)topLevelReps;
@end

