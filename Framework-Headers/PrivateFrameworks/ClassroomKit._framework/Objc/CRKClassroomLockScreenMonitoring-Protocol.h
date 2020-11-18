//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSString;

@protocol CRKClassroomLockScreenMonitoring <NSObject>

@property (readonly, nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;

+ (id)sharedMonitor;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
@end

