//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBPower;

@protocol _INPBCarChargingConnectorPower <NSObject>

@property (nonatomic) int chargingConnector;
@property (nonatomic) BOOL hasChargingConnector;
@property (readonly, nonatomic) BOOL hasMaximumPower;
@property (strong, nonatomic) _INPBPower *maximumPower;

- (int)StringAsChargingConnector:(NSString *)arg1;
- (NSString *)chargingConnectorAsString:(int)arg1;
@end

