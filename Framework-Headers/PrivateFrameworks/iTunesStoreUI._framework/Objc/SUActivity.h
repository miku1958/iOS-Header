//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage, UIViewController;
@protocol SUActivityDelegate;

@interface SUActivity : UIActivity
{
    id<SUActivityDelegate> _delegate;
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property (weak, nonatomic) id<SUActivityDelegate> ITunesStoreDelegate; // @synthesize ITunesStoreDelegate=_delegate;

- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityViewController:(id)arg1;

@end

