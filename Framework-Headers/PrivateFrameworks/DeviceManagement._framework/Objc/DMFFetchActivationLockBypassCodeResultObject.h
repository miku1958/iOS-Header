//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject
{
    NSString *_bypassCode;
}

@property (readonly, copy, nonatomic) NSString *bypassCode; // @synthesize bypassCode=_bypassCode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBypassCode:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

