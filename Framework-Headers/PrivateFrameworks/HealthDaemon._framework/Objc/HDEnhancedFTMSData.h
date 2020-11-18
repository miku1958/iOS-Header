//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class NSDate, NSNumber;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering>
{
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

@property (strong, nonatomic) NSNumber *averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property (strong, nonatomic) NSNumber *instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
@property (readonly, nonatomic) NSDate *updateTime;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
- (void).cxx_destruct;
- (id)description;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

@end

