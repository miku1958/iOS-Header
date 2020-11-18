//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;
@protocol SKUIReviewsFacebookViewControllerDelegate;

@interface SKUIReviewsFacebookViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    id<SKUIReviewsFacebookViewControllerDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (weak, nonatomic) id<SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;

- (void).cxx_destruct;
- (void)_changeStatusToUserLiked:(BOOL)arg1;
- (void)_reloadFacebookView;
- (void)_toggleLike:(id)arg1;
- (void)dealloc;
- (void)loadView;

@end

