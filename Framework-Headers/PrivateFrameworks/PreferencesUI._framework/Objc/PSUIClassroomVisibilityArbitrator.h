//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PreferencesUI/CRKCourseEnrollmentControllerDelegate-Protocol.h>

@class CRKCourseEnrollmentController, NSString;

@interface PSUIClassroomVisibilityArbitrator : NSObject <CRKCourseEnrollmentControllerDelegate>
{
    CRKCourseEnrollmentController *_enrollmentController;
    BOOL _previouslyEnrolled;
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property (copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (id)init;
- (void)reloadVisibilityState;

@end

