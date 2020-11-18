//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class CDBSourceConstraints, NSNumber, NSString;

@interface EKPersistentSource : EKPersistentObject
{
    CDBSourceConstraints *_constraints;
}

@property (nonatomic) NSString *UUID;
@property (readonly, nonatomic) CDBSourceConstraints *constraints; // @synthesize constraints=_constraints;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) long long preferredEventPrivateValue;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long strictestEventPrivateValue;
@property (copy, nonatomic) NSString *title;

+ (long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1;
+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (void)dealloc;
- (id)description;
- (int)entityType;
- (id)init;
- (BOOL)refresh;
- (void)reset;

@end
