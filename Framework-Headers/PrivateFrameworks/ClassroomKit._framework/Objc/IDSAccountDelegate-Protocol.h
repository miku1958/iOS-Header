//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class IDSAccount, NSArray;

@protocol IDSAccountDelegate <NSObject>

@optional
- (void)account:(IDSAccount *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)account:(IDSAccount *)arg1 devicesChanged:(NSArray *)arg2;
- (void)account:(IDSAccount *)arg1 isActiveChanged:(BOOL)arg2;
- (void)account:(IDSAccount *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
@end

