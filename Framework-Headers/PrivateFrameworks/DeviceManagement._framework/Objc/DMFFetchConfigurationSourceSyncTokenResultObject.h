//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject
{
    NSString *_syncToken;
}

@property (copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

