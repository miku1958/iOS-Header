//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFFetchProfilesRequest : DMFTaskRequest
{
    unsigned long long _filterFlags;
}

@property (nonatomic) unsigned long long filterFlags; // @synthesize filterFlags=_filterFlags;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

