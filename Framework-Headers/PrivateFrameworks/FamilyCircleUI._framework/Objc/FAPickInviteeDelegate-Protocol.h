//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class FAFamilyPickInviteeViewController;

@protocol FAPickInviteeDelegate <NSObject>
- (void)pickInviteeViewController:(FAFamilyPickInviteeViewController *)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)pickInviteeViewControllerWantsChildAccountFlow:(FAFamilyPickInviteeViewController *)arg1;
@end
