//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIWindow;

@interface SKUIStackView : UIView
{
    UIImage *_image;
    NSMutableArray *_stackViews;
    long long _stackViewStyle;
    UIWindow *_window;
}

@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;

- (void).cxx_destruct;
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;
- (id)_initSKUIStackView;
- (struct CGSize)_levelInsetSize;
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg1 perspectiveTargetView:(id)arg2;
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg1 maximumRelativeOffset:(struct UIOffset)arg2 normalizedDistanceFromVanishingPoint:(struct CGSize)arg3;
- (struct UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(struct CGPoint)arg2;
- (struct CGSize)_sizeOfItemAtIndex:(double)arg1;
- (long long)_stackDepth;
- (void)didMoveToWindow;
- (id)initWithStackViewStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
