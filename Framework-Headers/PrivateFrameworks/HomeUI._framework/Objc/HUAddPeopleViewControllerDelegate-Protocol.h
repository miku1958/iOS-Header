//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUAddPeopleViewController, NSArray;

@protocol HUAddPeopleViewControllerDelegate <NSObject>
- (void)addPeopleViewControllerDidCancel:(HUAddPeopleViewController *)arg1;

@optional
- (void)addPeopleViewController:(HUAddPeopleViewController *)arg1 didSendInvitations:(NSArray *)arg2;
@end

