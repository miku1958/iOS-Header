//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView
{
    TLKTextButton *_unlockScreenButton;
}

@property (strong) TLKTextButton *unlockScreenButton; // @synthesize unlockScreenButton=_unlockScreenButton;

- (void).cxx_destruct;
- (id)init;
- (void)unlockButtonPressed:(id)arg1;
- (void)updateTitle;

@end

