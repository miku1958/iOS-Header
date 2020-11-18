//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADDimmerViewDelegate-Protocol.h>

@class ADInterstitialAd, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate>
{
    ADInterstitialAd *_interstitialAd;
    struct CGRect _dismissButtonRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect dismissButtonRect; // @synthesize dismissButtonRect=_dismissButtonRect;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ADInterstitialAd *interstitialAd;
@property (readonly) Class superclass;

+ (BOOL)requiresConstraintBasedLayout;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (BOOL)enableDimmerView:(id)arg1;
- (id)initForInterstitialAd:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
