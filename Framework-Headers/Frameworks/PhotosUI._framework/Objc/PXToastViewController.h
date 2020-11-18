//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CAShapeLayer, NSString, PXToastPresentationWindow, UIImage, UIImageView, UILabel, UINotificationFeedbackGenerator, UIVisualEffectView;
@protocol PXToastViewControllerDelegate;

@interface PXToastViewController : UIViewController
{
    BOOL _shouldUseAnimatedCheckmark;
    id<PXToastViewControllerDelegate> _delegate;
    NSString *_message;
    UIImage *_image;
    PXToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
    CAShapeLayer *_checkLayer;
    UINotificationFeedbackGenerator *_feedbackGenerator;
}

@property (strong, nonatomic) CAShapeLayer *checkLayer; // @synthesize checkLayer=_checkLayer;
@property (weak, nonatomic) id<PXToastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) PXToastPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property (strong, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (nonatomic) BOOL shouldUseAnimatedCheckmark; // @synthesize shouldUseAnimatedCheckmark=_shouldUseAnimatedCheckmark;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (strong, nonatomic) UIVisualEffectView *toastView; // @synthesize toastView=_toastView;

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;
+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;
+ (id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2;
+ (id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
- (void).cxx_destruct;
- (void)_animateCheckMark;
- (void)_dismissAfterDelay:(double)arg1;
- (id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
- (void)present;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
