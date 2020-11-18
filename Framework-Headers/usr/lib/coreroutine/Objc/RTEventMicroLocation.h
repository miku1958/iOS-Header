//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEvent.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSArray;

@interface RTEventMicroLocation : RTEvent <NSSecureCoding>
{
    NSArray *_microLocations;
}

@property (readonly, nonatomic) NSArray *microLocations; // @synthesize microLocations=_microLocations;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4 microLocations:(id)arg5;

@end
