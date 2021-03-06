//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCellButton : UIButton
{
    BOOL _highlighted;
    id<MKPlaceAttributionCellButtonDelegate> _buttonDelegate;
}

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;

@end

