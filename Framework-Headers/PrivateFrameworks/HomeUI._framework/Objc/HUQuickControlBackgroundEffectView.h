//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HUQuickControlBackgroundEffectView : UIView
{
    unsigned long long _effectType;
}

@property (readonly, nonatomic) unsigned long long effectType; // @synthesize effectType=_effectType;

- (void)_configureForCurrentEffectType;
- (id)initWithEffectType:(unsigned long long)arg1;
- (void)tintColorDidChange;

@end

