//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUWelcomeViewController.h>

@class NSLayoutConstraint, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface PUWhatsNewWelcomeViewController : PUWelcomeViewController
{
    BOOL __didAdjustScrollPosition;
    CDUnknownBlockType __completionHandler;
    UIScrollView *__scrollView;
    UIView *__topContentView;
    UIView *__bottomContentView;
    NSLayoutConstraint *__topConstraint;
}

@property (readonly, copy, nonatomic) UIView *_bottomContentView; // @synthesize _bottomContentView=__bottomContentView;
@property (readonly, copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property (nonatomic, setter=_setDidAdjustScrollPosition:) BOOL _didAdjustScrollPosition; // @synthesize _didAdjustScrollPosition=__didAdjustScrollPosition;
@property (readonly, copy, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property (readonly, copy, nonatomic) NSLayoutConstraint *_topConstraint; // @synthesize _topConstraint=__topConstraint;
@property (readonly, copy, nonatomic) UIView *_topContentView; // @synthesize _topContentView=__topContentView;

+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetLastPresentationInfo;
- (void).cxx_destruct;
- (void)_addSection:(id)arg1 containerView:(id)arg2 iconName:(id)arg3 lastLabel:(id *)arg4 lastSectionView:(id *)arg5 subheadlineFontScale:(double)arg6 text:(id)arg7 title:(id)arg8 titleLabel:(id)arg9;
- (void)_handleContinueButton:(id)arg1;
- (id)_initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
