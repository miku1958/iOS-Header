//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PageTilesWidgetPrivate;

@interface PageTilesWidget : CALayer
{
    PageTilesWidgetPrivate *_private;
}

+ (id)sharedWidget;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawString:(id)arg1 atPosition:(struct CGPoint)arg2 inBounds:(struct CGRect)arg3 toContext:(struct CGContext *)arg4;
- (id)init;
- (void)removeViewRectForPageNumber:(int)arg1;
- (void)setViewFrustumSize:(struct CGSize)arg1;
- (void)setViewRect:(struct CGRect)arg1 forPageNumber:(int)arg2;
- (void)showWidget:(BOOL)arg1;

@end
