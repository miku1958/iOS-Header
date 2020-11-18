//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAlertControllerBackgroundView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView>
{
    UIView *_colorBurnView;
    UIView *_plusDView;
}

@property double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;

@end

