//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject
{
    NSArray *_groupIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifiers:(id)arg1;

@end

