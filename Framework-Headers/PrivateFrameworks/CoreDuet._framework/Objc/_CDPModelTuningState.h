//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _CDPModelTuningState : NSObject <NSSecureCoding>
{
    int _i;
    int _j;
    float _bestLogLambda;
    float _bestW0;
    float _bestScore;
    float _bestThreshold;
}

@property (nonatomic) float bestLogLambda; // @synthesize bestLogLambda=_bestLogLambda;
@property (nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property (nonatomic) float bestThreshold; // @synthesize bestThreshold=_bestThreshold;
@property (nonatomic) float bestW0; // @synthesize bestW0=_bestW0;
@property (nonatomic) int i; // @synthesize i=_i;
@property (nonatomic) int j; // @synthesize j=_j;
@property (readonly, nonatomic) float progress;

+ (id)initialTuningState;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

