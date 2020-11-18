//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CATSerialOperationQueue, CRKCourseEnrollmentController, NSMutableSet;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKMonitorExpiredCoursesInteraction : CATOperation
{
    BOOL mIsObservingEnrollmentController;
    id<CRKRequestPerformingProtocol> _studentDaemonProxy;
    id<CRKExpiredCoursesInteractionDelegate> _expiredCoursesInteractionDelegate;
    CRKCourseEnrollmentController *_enrollmentController;
    NSMutableSet *_expiredCoursesToPresent;
    CATSerialOperationQueue *_serialOperationQueue;
}

@property (readonly, nonatomic) CRKCourseEnrollmentController *enrollmentController; // @synthesize enrollmentController=_enrollmentController;
@property (readonly, nonatomic) id<CRKExpiredCoursesInteractionDelegate> expiredCoursesInteractionDelegate; // @synthesize expiredCoursesInteractionDelegate=_expiredCoursesInteractionDelegate;
@property (readonly, nonatomic) NSMutableSet *expiredCoursesToPresent; // @synthesize expiredCoursesToPresent=_expiredCoursesToPresent;
@property (readonly, nonatomic) CATSerialOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;

- (void).cxx_destruct;
- (void)beginInteractionWithExpiredCourses:(id)arg1;
- (void)cancel;
- (void)expiredCoursesInteractionDidFinish:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 enrollmentController:(id)arg2 expiredCoursesInteractionDelegate:(id)arg3;
- (BOOL)isAsynchronous;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithCourses:(id)arg1;

@end
