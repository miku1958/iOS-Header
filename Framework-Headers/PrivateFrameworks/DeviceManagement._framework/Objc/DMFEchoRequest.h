//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEchoRequest : DMFTaskRequest
{
    NSString *_echo;
    NSString *_resultStatus;
}

@property (copy, nonatomic) NSString *echo; // @synthesize echo=_echo;
@property (copy, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

