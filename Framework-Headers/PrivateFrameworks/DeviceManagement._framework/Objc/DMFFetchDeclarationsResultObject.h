//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject
{
    NSArray *_payloadDescriptions;
    NSArray *_payloadContents;
}

@property (copy, nonatomic) NSArray *payloadContents; // @synthesize payloadContents=_payloadContents;
@property (copy, nonatomic) NSArray *payloadDescriptions; // @synthesize payloadDescriptions=_payloadDescriptions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

