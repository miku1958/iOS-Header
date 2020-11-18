//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingButton : UIButton
{
}

@property (copy, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) WFFloatingLayer *layer; // @dynamic layer;

+ (Class)layerClass;
- (void)applyConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
