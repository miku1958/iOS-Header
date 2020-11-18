//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPass, PKPassGroupView, PKPassView, PKReusablePassViewQueue;

@protocol PKPassGroupViewDelegate <NSObject>

@optional
- (BOOL)groupView:(PKPassGroupView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didBeginShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didEndShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didScrollToPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didUpdatePassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)groupView:(PKPassGroupView *)arg1 resizeButtonPressedForPass:(PKPass *)arg2;
- (struct CGRect)groupView:(PKPassGroupView *)arg1 targetPageControlFrameForProposedFrame:(struct CGRect)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(PKPassGroupView *)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(PKPassGroupView *)arg1;
- (void)groupViewFrontPassDidFlip:(PKPassGroupView *)arg1 animated:(BOOL)arg2;
- (void)groupViewFrontPassDidResize:(PKPassGroupView *)arg1 animated:(BOOL)arg2;
- (void)groupViewPanDidBegin:(PKPassGroupView *)arg1;
- (void)groupViewPanDidEnd:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(PKPassGroupView *)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(PKPassGroupView *)arg1;
- (PKReusablePassViewQueue *)groupViewReusablePassViewQueue:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPanning:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPassFlip:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPassResize:(PKPassGroupView *)arg1;
- (void)groupViewTapped:(PKPassGroupView *)arg1;
@end
