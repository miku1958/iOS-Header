//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest
{
    NSSet *_appleIDs;
}

@property (copy, nonatomic) NSSet *appleIDs; // @synthesize appleIDs=_appleIDs;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
