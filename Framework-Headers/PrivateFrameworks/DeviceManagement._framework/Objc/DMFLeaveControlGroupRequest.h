//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface DMFLeaveControlGroupRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;
    NSArray *_leaderIdentifiers;
}

@property (copy, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers; // @synthesize leaderIdentifiers=_leaderIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

