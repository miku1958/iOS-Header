//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView
{
    UIGraphicsImageRenderer *_imageRenderer;
}

@property (strong, nonatomic) UIGraphicsImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;

- (void).cxx_destruct;
- (void)_updateRendererSize:(struct CGSize)arg1;
- (void)drawContentUsingBlock:(CDUnknownBlockType)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
