//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKBubbleSet, NSArray, NSMutableArray;

@interface GKBubbleFlowContainerView : UIView
{
    struct CGRect _bubbleRestingRects[12];
    NSMutableArray *_bubbleSets;
    long long _supportedBubbles;
}

@property (strong, nonatomic) NSArray *bubbleSets; // @synthesize bubbleSets=_bubbleSets;
@property (readonly, nonatomic) GKBubbleSet *primaryBubbleControls;
@property (readonly, nonatomic) long long supportedBubbles; // @synthesize supportedBubbles=_supportedBubbles;

- (void)addBubbleSet:(id)arg1;
- (void)dealloc;
- (void)enumerateBubbles:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect)restingRectForBubbleType:(long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setRestingRect:(struct CGRect)arg1 forBubbleType:(long long)arg2;
- (union _GLKVector3)worldPositionForBubble:(long long)arg1;

@end

