//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/SBLockScreenModalViewDelegate-Protocol.h>

@protocol SBLockScreenModalView;

@protocol CSModalViewDelegate <SBLockScreenModalViewDelegate>
- (void)handlePrimaryActionForView:(id<SBLockScreenModalView>)arg1;
- (void)handleSecondaryActionForView:(id<SBLockScreenModalView>)arg1;
- (BOOL)isPortrait;
@end
