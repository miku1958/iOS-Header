//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@interface PRSAbandonmentFeedback : PRSFeedback
{
    unsigned long long _method;
}

@property (readonly, nonatomic) unsigned long long method; // @synthesize method=_method;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2 method:(unsigned long long)arg3;
- (id)plist;
- (id)typeString;

@end

