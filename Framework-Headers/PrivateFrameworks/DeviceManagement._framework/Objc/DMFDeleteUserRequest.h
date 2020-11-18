//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFDeleteUserRequest : CATTaskRequest
{
    BOOL _forceDeletion;
    NSString *_username;
}

@property (nonatomic) BOOL forceDeletion; // @synthesize forceDeletion=_forceDeletion;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
