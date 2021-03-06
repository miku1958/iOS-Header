//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PXUIButtonConfiguration;

@interface PXUIButton : UIButton
{
    PXUIButtonConfiguration *_configuration;
}

@property (copy, nonatomic) PXUIButtonConfiguration *configuration; // @synthesize configuration=_configuration;

+ (BOOL)_cursorInteractionEnabled;
- (void).cxx_destruct;
- (struct CGRect)_pointerRectForCurrentState;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)setHighlighted:(BOOL)arg1;

@end

