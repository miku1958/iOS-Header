//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject
{
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
}

@property (copy, nonatomic) NSArray *activeCourseIdentifiers; // @synthesize activeCourseIdentifiers=_activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers; // @synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

