//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogTemplateView : UIView
{
    UIVisualEffectView *_backdropView;
    UIView *_cardView;
}

@property (readonly, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property (strong, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
