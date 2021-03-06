//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptCollectionViewCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell
{
    CKBalloonView *_balloonView;
    long long _animationPauseReasons;
}

@property (nonatomic) long long animationPauseReasons; // @synthesize animationPauseReasons=_animationPauseReasons;
@property (strong, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)_balloonViewForChatItem:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

