//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKTurnBasedMatch, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface GKDashboardTurnDetailViewController : GKDetailViewController
{
    BOOL _shouldShowPlay;
    BOOL _shouldShowQuit;
    GKTurnBasedMatch *_match;
    UIView *_contentVerticalCenteringView;
    UIView *_turnDetailContentView;
    UILabel *_playingWithLabel;
    UILabel *_createdLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    NSLayoutConstraint *_secondButtonCenteringConstraint;
}

@property (nonatomic) UIView *contentVerticalCenteringView; // @synthesize contentVerticalCenteringView=_contentVerticalCenteringView;
@property (nonatomic) UILabel *createdLabel; // @synthesize createdLabel=_createdLabel;
@property (nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property (strong, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property (nonatomic) UILabel *playingWithLabel; // @synthesize playingWithLabel=_playingWithLabel;
@property (nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // @synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint;
@property (nonatomic) BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property (nonatomic) UIView *turnDetailContentView; // @synthesize turnDetailContentView=_turnDetailContentView;

- (void)acceptInvitation:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (void)dealloc;
- (void)declineInvitation:(id)arg1;
- (void)disableButtons;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)initWithTurnBasedMatch:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)quitMatch:(id)arg1;
- (void)refreshPresenter;
- (void)removeMatch:(id)arg1;
- (void)turnOK:(id)arg1;
- (void)viewDidLoad;

@end

