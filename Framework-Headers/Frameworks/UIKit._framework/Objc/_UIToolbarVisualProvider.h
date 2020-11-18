//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIToolbar, UIView;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProvider : NSObject
{
    UIToolbar *_toolbar;
    UIView *_customBackgroundView;
    UIView *_currentBackgroundView;
}

@property (readonly, nonatomic) struct CGRect backgroundFrame;
@property (readonly, nonatomic) UIView *currentBackgroundView; // @synthesize currentBackgroundView=_currentBackgroundView;
@property (strong, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property (readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property (readonly, nonatomic) BOOL toolbarIsSmall;

- (void).cxx_destruct;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (id)initWithToolbar:(id)arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;

@end

