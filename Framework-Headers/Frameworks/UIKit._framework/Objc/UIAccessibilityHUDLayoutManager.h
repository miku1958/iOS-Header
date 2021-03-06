//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDLayoutManager : NSObject
{
}

- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)arg1 preferredSize:(struct CGSize)arg2;
- (double)_imageCenterToTopForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;
- (id)containerViewForHUD:(id)arg1;
- (struct UIEdgeInsets)imageInsetsForHUD:(id)arg1;
- (struct CGRect)imageViewFrameForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;
- (struct CGSize)imageViewSizeForHUD:(id)arg1;
- (id)itemContainerViewForHUD:(id)arg1;
- (id)labelFontForHUD:(id)arg1;
- (struct CGRect)labelFrameForHUD:(id)arg1 preferredSize:(struct CGSize)arg2;
- (struct CGRect)layoutBoundsForHUD:(id)arg1;
- (void)layoutSubviewsOfHUD:(id)arg1;
- (struct CGSize)minimumUnscaledSizeForHUD:(id)arg1 preferredLabelSize:(struct CGSize)arg2;
- (struct CGSize)preferredSizeForLabelInHUD:(id)arg1 maximumWidth:(double)arg2;
- (struct CGSize)unscaledSizeForHUD:(id)arg1 containingSize:(struct CGSize)arg2;

@end

