//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding>
{
    double _remainingColorWeight;
    NSArray *_mainColors;
    NSArray *_mainColorWeights;
}

@property (strong, nonatomic) NSArray *mainColorWeights; // @synthesize mainColorWeights=_mainColorWeights;
@property (strong, nonatomic) NSArray *mainColors; // @synthesize mainColors=_mainColors;
@property (nonatomic) double remainingColorWeight; // @synthesize remainingColorWeight=_remainingColorWeight;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMainColors:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMainColors:(id)arg1 weights:(id)arg2;

@end
