//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKTransitionCATransition.h>

@interface OKTransitionAlignedFlip : OKTransitionCATransition
{
    unsigned long long _direction;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)needsToClip;
- (void)prepareInView:(id)arg1;
- (void)setSettingDirection:(unsigned long long)arg1;
- (unsigned long long)settingDirection;

@end

