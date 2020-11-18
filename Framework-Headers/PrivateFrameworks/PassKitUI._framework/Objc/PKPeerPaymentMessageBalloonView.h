//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKTranscriptPluginBalloonView, PKPeerPaymentBubbleView;

@interface PKPeerPaymentMessageBalloonView : UIView
{
    PKPeerPaymentBubbleView *_bubbleView;
    long long _peerPaymentType;
    CKTranscriptPluginBalloonView *_balloonView;
}

@property (strong, nonatomic) CKTranscriptPluginBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property (readonly, nonatomic) PKPeerPaymentBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property (readonly, nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;

- (void).cxx_destruct;
- (void)_updateTailOrientation;
- (id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2;
- (void)layoutSubviews;

@end
