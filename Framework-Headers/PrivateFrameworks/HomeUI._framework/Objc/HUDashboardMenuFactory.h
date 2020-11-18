//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUDashboardMenuFactory : NSObject
{
}

+ (CDUnknownBlockType)_actionHandlerForDelegate:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_addAccessoryAction:(id)arg1 delegate:(id)arg2;
+ (id)_addSceneAction:(id)arg1 delegate:(id)arg2;
+ (id)_editScreenAction:(id)arg1;
+ (id)_homeActionWithHome:(id)arg1 selected:(BOOL)arg2 currentLocation:(BOOL)arg3 delegate:(id)arg4;
+ (id)_homeSettingsAction:(id)arg1 incomingInvitationsCount:(unsigned long long)arg2 delegate:(id)arg3;
+ (id)_roomActionWithRoom:(id)arg1 selected:(BOOL)arg2 delegate:(id)arg3;
+ (id)_roomSettingsAction:(id)arg1 delegate:(id)arg2;
+ (id)createAddMenuForHome:(id)arg1 delegate:(id)arg2;
+ (id)createHomeMenuForHomes:(id)arg1 currentlySelectedHome:(id)arg2 currentLocationHome:(id)arg3 delegate:(id)arg4;
+ (id)createRoomMenuForHome:(id)arg1 currentRoom:(id)arg2 delegate:(id)arg3;
+ (id)createSettingsMenuForHome:(id)arg1 room:(id)arg2 incomingInvitationsCount:(unsigned long long)arg3 allowEditing:(BOOL)arg4 delegate:(id)arg5;

@end
