//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXVideoControlItem-Protocol.h>

@class NSString, SXSkipButton, SXTimeline, SXUpNextButton, SXUpNextItem, SXUpNextView, SXVideoButton, UIActivityIndicatorView;
@protocol SXUpNextViewControllerDelegate;

@interface SXUpNextViewController : UIViewController <SXVideoControlItem>
{
    id<SXUpNextViewControllerDelegate> _delegate;
    double _duration;
    double _time;
    SXTimeline *_timeline;
    SXUpNextItem *_item;
    SXVideoButton *_advanceButton;
    SXVideoButton *_replayButton;
    SXSkipButton *_skipButton;
    UIActivityIndicatorView *_activityIndicator;
    SXUpNextButton *_upNextButton;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) SXVideoButton *advanceButton; // @synthesize advanceButton=_advanceButton;
@property (readonly, nonatomic) double autoAppearanceTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXUpNextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideable;
@property (strong, nonatomic) SXUpNextItem *item; // @synthesize item=_item;
@property (strong, nonatomic) SXVideoButton *replayButton; // @synthesize replayButton=_replayButton;
@property (strong, nonatomic) SXSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property (readonly) Class superclass;
@property (nonatomic) double time; // @synthesize time=_time;
@property (strong, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property (strong, nonatomic) SXUpNextButton *upNextButton; // @synthesize upNextButton=_upNextButton;
@property (strong) SXUpNextView *view; // @dynamic view;

- (void).cxx_destruct;
- (id)accessoryViewsConfiguredForItem:(id)arg1;
- (void)hide:(BOOL)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (BOOL)isVisible;
- (void)loadView;
- (void)populateWithItem:(id)arg1;
- (void)replay;
- (void)scheduleAutoAppearanceOfReplayButton;
- (void)scheduleSkipDurationUpdateWithSeconds:(long long)arg1;
- (void)skip;
- (void)viewDidLoad;

@end

