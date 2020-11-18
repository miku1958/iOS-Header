//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKCourseInvitation : NSObject <NSSecureCoding>
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    NSString *_instructorName;
    NSData *_instructorImageData;
    NSArray *_anchorCertificates;
}

@property (copy, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property (copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property (copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property (copy, nonatomic) NSData *instructorImageData; // @synthesize instructorImageData=_instructorImageData;
@property (copy, nonatomic) NSString *instructorName; // @synthesize instructorName=_instructorName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6;

@end

