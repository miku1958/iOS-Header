//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDLayoutManager : NSObject
{
}

- (id)containerViewForHUD:(id)arg1;
- (struct CGRect)contentRectForHUD:(id)arg1;
- (struct CGSize)contentSizeForHUD:(id)arg1;
- (struct UIEdgeInsets)imageInsetsForHUD:(id)arg1;
- (struct CGRect)imageViewFrameForHUD:(id)arg1;
- (struct CGSize)imageViewSizeForHUD:(id)arg1;
- (struct CGRect)labelFrameForHUD:(id)arg1;
- (void)layoutSubviewsOfHUD:(id)arg1;
- (double)margin;
- (double)maxImageHeight;
- (unsigned long long)numberOfLinesForLabelInHUD:(id)arg1;

@end
