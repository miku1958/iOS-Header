//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFSplashButton : NSObject
{
    UIButton *_button;
    long long _style;
    CDUnknownBlockType _action;
}

@property (copy) CDUnknownBlockType action; // @synthesize action=_action;
@property (strong) UIButton *button; // @synthesize button=_button;
@property long long style; // @synthesize style=_style;

- (void).cxx_destruct;

@end
