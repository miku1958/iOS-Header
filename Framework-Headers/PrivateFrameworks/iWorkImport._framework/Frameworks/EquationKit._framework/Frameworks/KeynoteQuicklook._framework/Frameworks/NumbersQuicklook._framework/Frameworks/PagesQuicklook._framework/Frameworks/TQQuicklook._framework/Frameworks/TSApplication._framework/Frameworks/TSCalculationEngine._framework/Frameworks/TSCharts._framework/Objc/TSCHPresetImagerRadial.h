//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHPresetImager.h>

@interface TSCHPresetImagerRadial : TSCHPresetImager
{
}

- (id)fillFromStyle:(id)arg1;
- (struct CGPath *)newMutablePathWithRadius:(double)arg1 center:(struct CGPoint)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)p_drawShadowedContentIntoContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(BOOL *)arg5;
- (id)strokeFromStyle:(id)arg1;

@end

