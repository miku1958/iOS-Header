//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class CRKUser, DMFControlGroupIdentifier, NSDate, NSDictionary, NSSet, NSString;

@interface CRKCourse : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _requestingUnenroll;
    BOOL _studentCredentialsAreValid;
    BOOL _mustRequestUnenroll;
    BOOL _expired;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    CRKUser *_courseUser;
    NSDictionary *_instructorsByIdentifier;
    unsigned long long _type;
    NSDate *_automaticRemovalDate;
    NSSet *_trustedCertificatePersistentIds;
    NSSet *_validTrustedCertificatePersistentIds;
}

@property (strong, nonatomic) NSDate *automaticRemovalDate; // @synthesize automaticRemovalDate=_automaticRemovalDate;
@property (nonatomic) unsigned long long courseColorType; // @synthesize courseColorType=_courseColorType;
@property (copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property (strong, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property (nonatomic) unsigned long long courseMascotType; // @synthesize courseMascotType=_courseMascotType;
@property (copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property (strong, nonatomic) CRKUser *courseUser; // @synthesize courseUser=_courseUser;
@property (nonatomic, getter=isExpired) BOOL expired; // @synthesize expired=_expired;
@property (copy, nonatomic) NSDictionary *instructorsByIdentifier; // @synthesize instructorsByIdentifier=_instructorsByIdentifier;
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (nonatomic) BOOL mustRequestUnenroll; // @synthesize mustRequestUnenroll=_mustRequestUnenroll;
@property (nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll; // @synthesize requestingUnenroll=_requestingUnenroll;
@property (nonatomic) BOOL studentCredentialsAreValid; // @synthesize studentCredentialsAreValid=_studentCredentialsAreValid;
@property (strong, nonatomic) NSSet *trustedCertificatePersistentIds; // @synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSSet *validTrustedCertificatePersistentIds; // @synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds;

+ (id)new;
+ (id)stringForType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 managed:(BOOL)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)isDeeplyEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCourse:(id)arg1;
- (void)setManaged:(BOOL)arg1;

@end

