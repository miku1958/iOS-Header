//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage
{
    long long _completedUnitCount;
    long long _totalUnitCount;
}

@property (nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property (nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;

@end

