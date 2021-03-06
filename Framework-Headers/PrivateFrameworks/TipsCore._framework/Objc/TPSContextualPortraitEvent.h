//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSContextualEvent.h>

@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent
{
    double _confidenceThreshold;
    NSString *_topicID;
}

@property (nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property (copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;

+ (id)classSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)minObservationCount;

@end

