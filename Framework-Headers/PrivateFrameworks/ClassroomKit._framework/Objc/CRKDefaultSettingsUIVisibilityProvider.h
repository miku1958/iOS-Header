//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCourseEnrollmentControllerDelegate-Protocol.h>
#import <ClassroomKit/CRKSettingsUIVisibilityProvider-Protocol.h>

@class CRKCourseEnrollmentController, CRKUserDefaultsObject, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider>
{
    CRKUserDefaultsObject *mPreviouslyEnrolled;
    CRKUserDefaultsObject *mPreviouslyCloudEnrolled;
    CRKCourseEnrollmentController *mEnrollmentController;
    BOOL _settingsUIVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateCloudEnrollmentStatus:(id)arg1;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (id)init;
- (void)updateVisibilityState;

@end
