//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject
{
    NSString *_echo;
    NSString *_resultStatus;
}

@property (copy, nonatomic) NSString *echo; // @synthesize echo=_echo;
@property (copy, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
