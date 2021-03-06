//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, CNContact, HMIncomingHomeInvitation, HUPillButton, UIActivityIndicatorView, UILabel, UIView;
@protocol HUIncomingInvitationTableViewCellDelegate;

@interface HUIncomingInvitationTableViewCell : UITableViewCell
{
    BOOL _showSpinner;
    HMIncomingHomeInvitation *_invitation;
    id<HUIncomingInvitationTableViewCellDelegate> _delegate;
    CNContact *_contact;
    CNAvatarView *_avatarView;
    UIView *_containerView;
    UILabel *_homeNameLabel;
    UILabel *_infoLabel;
    HUPillButton *_declineButton;
    HUPillButton *_acceptButton;
    UIActivityIndicatorView *_spinner;
}

@property (strong, nonatomic) HUPillButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property (strong, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) HUPillButton *declineButton; // @synthesize declineButton=_declineButton;
@property (weak, nonatomic) id<HUIncomingInvitationTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UILabel *homeNameLabel; // @synthesize homeNameLabel=_homeNameLabel;
@property (strong, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property (strong, nonatomic) HMIncomingHomeInvitation *invitation; // @synthesize invitation=_invitation;
@property (nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property (strong, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;

+ (id)_formatDate:(id)arg1;
- (void).cxx_destruct;
- (void)_hideInvitationSpinner;
- (void)_showInvitationSpinner;
- (void)acceptButtonPressed:(id)arg1;
- (void)declineButtonPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

