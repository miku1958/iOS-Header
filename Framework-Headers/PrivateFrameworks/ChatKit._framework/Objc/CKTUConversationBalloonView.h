//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

@class NSString, NSUUID, UIButton, UIImageView, UILabel;

@interface CKTUConversationBalloonView : CKColoredBalloonView
{
    BOOL _animating;
    NSUUID *_tuConversationUUID;
    unsigned long long _state;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_durationLabel;
    UIButton *_joinButton;
    NSString *_joinButtonText_TestingOverride;
}

@property (nonatomic) BOOL animating; // @synthesize animating=_animating;
@property (strong, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride; // @synthesize joinButtonText_TestingOverride=_joinButtonText_TestingOverride;
@property (readonly, nonatomic) BOOL shouldRenderJoinButtonAsIcon;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSUUID *tuConversationUUID; // @synthesize tuConversationUUID=_tuConversationUUID;

+ (struct CGSize)facetimeIconSize;
+ (id)facetimeImageForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)_currentCall;
- (void)_joinButtonTapped:(id)arg1;
- (id)_joinButtonText;
- (id)_joinStateStatusString;
- (void)_updateStatusLabelForDuration;
- (BOOL)color;
- (void)configureForCurrentState;
- (void)configureForTUConversationChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)joinButtonIsShowingImageContent;
- (BOOL)joinButtonIsShowingTextContent;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (id)tuConversation;
- (BOOL)wantsGradient;

@end

