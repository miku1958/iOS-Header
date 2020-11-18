//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFStartSearchFeedback : SFFeedback
{
    NSString *_input;
    NSString *_uuid;
    unsigned long long _triggerEvent;
    unsigned long long _queryId;
}

@property (copy, nonatomic) NSString *input; // @synthesize input=_input;
@property (nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;

@end
