//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTAttributeValueView.h>

@class NSArray, UIView;

@interface AVTColorWheelView : AVTAttributeValueView
{
    UIView *_containerView;
    NSArray *_circleViews;
}

@property (strong, nonatomic) NSArray *circleViews; // @synthesize circleViews=_circleViews;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;

+ (id)buildCircleViewWithDiameter:(double)arg1;
+ (BOOL)colorItems:(id)arg1 containColorItem:(id)arg2;
+ (id)colorItemsFrom:(id)arg1 excluding:(id)arg2;
- (void).cxx_destruct;
- (id)buildAllCircleViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGPoint)rotatePoint:(struct CGPoint)arg1 aroundCenter:(struct CGPoint)arg2 withAngle:(double)arg3;
- (void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2;

@end
