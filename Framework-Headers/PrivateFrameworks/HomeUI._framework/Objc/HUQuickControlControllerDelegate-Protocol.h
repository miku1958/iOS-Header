//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUQuickControlController, NSString;

@protocol HUQuickControlControllerDelegate <NSObject>
- (void)quickControlController:(HUQuickControlController *)arg1 didUpdateOverrideStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)quickControlController:(HUQuickControlController *)arg1 valueDidChange:(id)arg2;
- (void)quickControlControllerDidEndPossibleWrites:(HUQuickControlController *)arg1;
- (void)quickControlControllerWillBeginPossibleWrites:(HUQuickControlController *)arg1;
@end
