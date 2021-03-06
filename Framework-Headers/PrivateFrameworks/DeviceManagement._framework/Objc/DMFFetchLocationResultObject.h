//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject
{
    CLLocation *_location;
}

@property (readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1;

@end

