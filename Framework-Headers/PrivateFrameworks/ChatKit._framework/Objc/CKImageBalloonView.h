//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, CKBalloonImageView, NSArray, NSString, UIImageView;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver>
{
    BOOL _isIrisAsset;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
    CKBalloonImageView *_tailMask;
    UIImageView *_irisBadgeView;
}

@property (strong, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *irisBadgeView; // @synthesize irisBadgeView=_irisBadgeView;
@property (nonatomic) BOOL isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKBalloonImageView *tailMask; // @synthesize tailMask=_tailMask;

- (void)animationTimerFired:(unsigned long long)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)needsGroupOpacity;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setHasTail:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)updateAnimationTimerObserving;

@end

