//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKCourseEnrollmentController, NSString;

@protocol CRKCourseEnrollmentControllerDelegate <NSObject>

@optional
- (void)enrollmentController:(CRKCourseEnrollmentController *)arg1 invitationWithIdentifierDidFail:(NSString *)arg2 localizedReason:(NSString *)arg3;
- (void)enrollmentControllerDidUpdateActiveCourses:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateCourses:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(CRKCourseEnrollmentController *)arg1;
@end

