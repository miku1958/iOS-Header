//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSURL;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest
{
    NSURL *_URL;
    NSString *_originator;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSString *originator; // @synthesize originator=_originator;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
