//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UISwipeActionDeleteScanlineView : UIView
{
    UIView *_bottomLineWrapper;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property (copy, nonatomic) UIColor *deleteLineColor;

+ (double)lineHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

