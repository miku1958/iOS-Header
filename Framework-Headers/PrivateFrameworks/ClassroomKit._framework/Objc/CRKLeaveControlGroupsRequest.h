//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSSet;

@interface CRKLeaveControlGroupsRequest : CATTaskRequest
{
    NSSet *_groupIdentifiers;
}

@property (strong, nonatomic) NSSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

