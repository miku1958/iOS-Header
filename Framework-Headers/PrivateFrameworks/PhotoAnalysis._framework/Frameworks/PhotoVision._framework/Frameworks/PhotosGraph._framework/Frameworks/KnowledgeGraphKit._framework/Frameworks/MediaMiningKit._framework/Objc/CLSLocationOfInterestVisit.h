//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSLocationOfInterest, NSDateInterval, NSUUID;

@interface CLSLocationOfInterestVisit : NSObject
{
    NSUUID *_identifier;
    NSDateInterval *_visitInterval;
    CLSLocationOfInterest *_locationOfInterest;
}

@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) CLSLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property (readonly, nonatomic) NSDateInterval *visitInterval; // @synthesize visitInterval=_visitInterval;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
