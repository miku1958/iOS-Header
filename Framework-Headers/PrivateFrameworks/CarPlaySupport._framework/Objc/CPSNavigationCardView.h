//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSCardPlatterView, CPSPausedCardView, CPSUpcomingManeuversCardView, NSString, UIColor;

@interface CPSNavigationCardView : UIView <CPSNavigationDisplaying>
{
    CPSPausedCardView *_pausedView;
    UIColor *_guidanceBackgroundColor;
    CPSCardPlatterView *_platterView;
    CPSUpcomingManeuversCardView *_maneuversView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CPSUpcomingManeuversCardView *maneuversView; // @synthesize maneuversView=_maneuversView;
@property (readonly, nonatomic) CPSPausedCardView *pausedView; // @synthesize pausedView=_pausedView;
@property (readonly, nonatomic) CPSCardPlatterView *platterView; // @synthesize platterView=_platterView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showManeuversView;
- (void)_showPausedViewForReason:(unsigned long long)arg1 description:(id)arg2;
- (BOOL)hasContent;
- (id)initWithBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end

