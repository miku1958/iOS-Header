//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor>
{
    BOOL _shouldForceLTR;
    NSString *_formattedTemperature;
    long long _heatingCoolingMode;
    long long _targetHeatingCoolingMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedTemperature; // @synthesize formattedTemperature=_formattedTemperature;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long heatingCoolingMode; // @synthesize heatingCoolingMode=_heatingCoolingMode;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long targetHeatingCoolingMode; // @synthesize targetHeatingCoolingMode=_targetHeatingCoolingMode;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

