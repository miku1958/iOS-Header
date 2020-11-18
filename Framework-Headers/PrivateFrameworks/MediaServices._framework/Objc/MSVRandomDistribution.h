//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/MSVRandom-Protocol.h>
#import <MediaServices/NSSecureCoding-Protocol.h>

@protocol MSVRandom;

@interface MSVRandomDistribution : NSObject <MSVRandom, NSSecureCoding>
{
    id<MSVRandom> _source;
    long long _lowestValue;
    long long _highestValue;
    unsigned long long _numberOfPossibleOutcomes;
}

@property (readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highestValue;
@property (readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowestValue;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes; // @synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;

@end
