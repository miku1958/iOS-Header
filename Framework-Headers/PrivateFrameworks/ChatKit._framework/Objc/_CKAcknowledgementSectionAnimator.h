//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKEntity, CNAvatarView, UICollectionViewLayoutAttributes, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgementSectionAnimator : NSObject
{
    UICollectionViewLayoutAttributes *_avatarViewAttr;
    CNAvatarView *_avatarView;
    UILabel *_voteCountLabel;
    UICollectionViewLayoutAttributes *_voteCountViewAttr;
    UIImageView *_ackIconView;
    UICollectionViewLayoutAttributes *_ackIconViewAttr;
    UIView *_containerView;
    unsigned long long _ackVoteCount;
    CKEntity *_entityToShow;
    long long _acknowledgmentType;
}

@property (strong, nonatomic) UIImageView *ackIconView; // @synthesize ackIconView=_ackIconView;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *ackIconViewAttr; // @synthesize ackIconViewAttr=_ackIconViewAttr;
@property (nonatomic) unsigned long long ackVoteCount; // @synthesize ackVoteCount=_ackVoteCount;
@property (nonatomic) long long acknowledgmentType; // @synthesize acknowledgmentType=_acknowledgmentType;
@property (strong, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *avatarViewAttr; // @synthesize avatarViewAttr=_avatarViewAttr;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) CKEntity *entityToShow; // @synthesize entityToShow=_entityToShow;
@property (strong, nonatomic) UILabel *voteCountLabel; // @synthesize voteCountLabel=_voteCountLabel;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *voteCountViewAttr; // @synthesize voteCountViewAttr=_voteCountViewAttr;

- (void).cxx_destruct;
- (void)_updateAckIconViewDelayTime:(double)arg1;
- (void)_updateAvatarViewDelayTime:(double)arg1;
- (void)_updateVoteCountViewDelayTime:(double)arg1;
- (void)animateInAckIconView:(double)arg1;
- (void)dealloc;
- (void)insertAvatarDelayTime:(double)arg1;

@end
