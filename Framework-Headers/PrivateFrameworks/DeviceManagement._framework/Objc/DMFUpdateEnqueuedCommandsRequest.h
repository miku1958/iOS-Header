//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray, NSString;

@interface DMFUpdateEnqueuedCommandsRequest : CATTaskRequest
{
    NSString *_organizationIdentifier;
    NSArray *_addCommands;
    NSArray *_removeCommands;
}

@property (copy, nonatomic) NSArray *addCommands; // @synthesize addCommands=_addCommands;
@property (copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property (copy, nonatomic) NSArray *removeCommands; // @synthesize removeCommands=_removeCommands;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

