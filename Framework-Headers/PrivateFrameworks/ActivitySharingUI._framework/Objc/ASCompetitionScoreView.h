//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASCompetitionParticipantScoreView, ASCompetitionScoreViewConfiguration, NSNumber, UIImageView, UILabel;

@interface ASCompetitionScoreView : UIView
{
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    NSNumber *_previousLayoutWidth;
    BOOL _isRTLLayout;
}

@property (readonly, nonatomic) double lastBaselineY;

+ (double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2;
- (void)setFriend:(id)arg1 competition:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

