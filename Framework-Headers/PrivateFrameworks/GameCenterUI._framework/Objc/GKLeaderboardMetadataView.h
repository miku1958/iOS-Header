//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel, UIStackView;

@interface GKLeaderboardMetadataView : UIView
{
    UILabel *_rank;
    UILabel *_title;
    UILabel *_footnote;
    UIStackView *_container;
    NSLayoutConstraint *_containerRightMargin;
    UIStackView *_header;
    NSLayoutConstraint *_headerHeight;
    UIView *_avatarContainer1;
    UIView *_avatarContainer2;
    UIView *_avatarContainer3;
    UIStackView *_body;
}

@property (strong, nonatomic) UIView *avatarContainer1; // @synthesize avatarContainer1=_avatarContainer1;
@property (strong, nonatomic) UIView *avatarContainer2; // @synthesize avatarContainer2=_avatarContainer2;
@property (strong, nonatomic) UIView *avatarContainer3; // @synthesize avatarContainer3=_avatarContainer3;
@property (strong, nonatomic) UIStackView *body; // @synthesize body=_body;
@property (strong, nonatomic) UIStackView *container; // @synthesize container=_container;
@property (strong, nonatomic) NSLayoutConstraint *containerRightMargin; // @synthesize containerRightMargin=_containerRightMargin;
@property (strong, nonatomic) UILabel *footnote; // @synthesize footnote=_footnote;
@property (strong, nonatomic) UIStackView *header; // @synthesize header=_header;
@property (strong, nonatomic) NSLayoutConstraint *headerHeight; // @synthesize headerHeight=_headerHeight;
@property (strong, nonatomic) UILabel *rank; // @synthesize rank=_rank;
@property (strong, nonatomic) UILabel *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureFootnote:(id)arg1 altFootnote:(id)arg2;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4;
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3;
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4;
- (void)stackVertically:(BOOL)arg1;
- (void)updateAvatarContainer:(id)arg1 withPlayer:(id)arg2;

@end
