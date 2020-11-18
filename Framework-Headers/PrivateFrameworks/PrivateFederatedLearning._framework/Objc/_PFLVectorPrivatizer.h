//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PFLVectorPrivatizer : NSObject
{
    double _r;
    double _nu;
}

@property double nu; // @synthesize nu=_nu;
@property double r; // @synthesize r=_r;

+ (id)vectorPrivatizerWithGamma:(double)arg1 nu:(double)arg2;
- (double)biasWithD:(double)arg1 minCDProduct:(double)arg2;
- (id)description;
- (id)init;
- (id)initWithGamma:(double)arg1 nu:(double)arg2;
- (double)privMagn:(double)arg1;
- (id)privatizeUnitWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4;
- (id)sampleUnitSDPWithUnitVector:(id)arg1 gamma:(double)arg2 maxRejection:(unsigned long long)arg3 minCDProduct:(double)arg4 precision:(double)arg5;
- (id)sdpWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4;

@end
