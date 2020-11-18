//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXExecutableIdentifier, NSDate;

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding>
{
    ATXExecutableIdentifier *_executable;
    NSDate *_dateEngaged;
    unsigned long long _engagementRecordType;
}

@property (readonly, nonatomic) NSDate *dateEngaged; // @synthesize dateEngaged=_dateEngaged;
@property (readonly, nonatomic) unsigned long long engagementRecordType; // @synthesize engagementRecordType=_engagementRecordType;
@property (readonly, nonatomic) ATXExecutableIdentifier *executable; // @synthesize executable=_executable;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutable:(id)arg1 dateEngaged:(id)arg2 engagementRecordType:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)jsonDict;

@end
