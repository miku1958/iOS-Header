//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class UIView;
@protocol HKGraphRenderer;

@protocol HKGraphRenderDelegate <NSObject>
- (void)graphRenderer:(UIView<HKGraphRenderer> *)arg1 shouldRenderSceneWithContext:(struct CGContext *)arg2 chartRect:(struct CGRect)arg3;
- (BOOL)stillAnimating:(UIView<HKGraphRenderer> *)arg1;
@end

