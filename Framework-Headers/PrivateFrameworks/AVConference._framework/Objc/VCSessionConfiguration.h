//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject
{
    unsigned long long _maxRemoteParticipants;
    long long _sessionType;
}

@property (readonly, nonatomic) BOOL isContinuity;
@property (nonatomic) unsigned long long maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
@property (nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;

- (BOOL)applyConfigurationUsingClientDict:(id)arg1;
- (id)initWithClientDictionary:(id)arg1;
- (BOOL)updateWithClientDictionary:(id)arg1;

@end
