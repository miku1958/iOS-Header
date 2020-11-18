//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMUserNotificationContext.h>

@class FAFamilyMember, NSNumber;

@interface RMAskForTimeRequestReceivedUserNotificationContext : RMUserNotificationContext
{
    FAFamilyMember *_familyMember;
    NSNumber *_childDSID;
}

@property (strong, nonatomic) NSNumber *childDSID; // @synthesize childDSID=_childDSID;
@property (strong, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(CDUnknownBlockType)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

