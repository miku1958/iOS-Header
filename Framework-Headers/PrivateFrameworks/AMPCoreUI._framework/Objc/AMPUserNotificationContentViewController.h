//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AMSUserNotification, AVPlayerViewController, NSString, UIImageView, UILabel;
@protocol AMPUserNotificationContentDelegate;

__attribute__((visibility("hidden")))
@interface AMPUserNotificationContentViewController : UIViewController
{
    AMSUserNotification *_userNotification;
    id<AMPUserNotificationContentDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIImageView *_imageView;
    AVPlayerViewController *_videoPlayerController;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionCategoryOptions;
}

@property (strong, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions; // @synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions;
@property (weak, nonatomic) id<AMPUserNotificationContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) struct CGSize expectedContentSize;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic) AMSUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController; // @synthesize videoPlayerController=_videoPlayerController;

- (void).cxx_destruct;
- (void)imageViewTapped:(id)arg1;
- (id)initWithNotification:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (void)mediaPause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewWillLayoutSubviews;

@end
