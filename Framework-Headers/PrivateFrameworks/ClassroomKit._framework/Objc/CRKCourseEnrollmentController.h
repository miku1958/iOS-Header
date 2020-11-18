//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskOperationNotificationDelegate-Protocol.h>
#import <ClassroomKit/CRKStudentDaemonProxyObserver-Protocol.h>

@class CATRemoteTaskOperation, CRKStudentDaemonProxy, NSArray, NSString;
@protocol CRKCourseEnrollmentControllerDelegate;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate>
{
    id<CRKCourseEnrollmentControllerDelegate> mDelegate;
    CRKStudentDaemonProxy *mDaemonProxy;
    CATRemoteTaskOperation *mBrowseOperation;
    CATRemoteTaskOperation *mActiveCoursesOperation;
    NSArray *_courses;
    NSArray *_courseInvitations;
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
}

@property (copy, nonatomic) NSArray *activeCourseIdentifiers; // @synthesize activeCourseIdentifiers=_activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers; // @synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers;
@property (copy, nonatomic) NSArray *courseInvitations; // @synthesize courseInvitations=_courseInvitations;
@property (copy, nonatomic) NSArray *courses; // @synthesize courses=_courses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)courseWithIdentifier:(id)arg1;
- (id)coursesWithInstructorIdentifier:(id)arg1;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidConnect:(id)arg1;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)dealloc;
- (void)fetchActiveCourses;
- (void)fetchActiveCoursesOperationDidFinish:(id)arg1;
- (void)fetchCourseInvitations;
- (void)fetchCourseInvitationsOperationDidFinish:(id)arg1;
- (void)fetchCourses;
- (void)fetchCoursesOperationDidFinish:(id)arg1;
- (void)fetchStoredCourses;
- (id)initWithDelegate:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2;
- (id)invitationWithCourseIdentifier:(id)arg1;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)storeCourses;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;

@end

