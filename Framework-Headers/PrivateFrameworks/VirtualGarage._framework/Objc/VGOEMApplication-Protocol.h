//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VirtualGarage/NSObject-Protocol.h>
#import <VirtualGarage/VGVehicleStateProviding-Protocol.h>

@class LSApplicationRecord, NSString, VGVehicle;
@protocol VGOEMAppSOCStreaming;

@protocol VGOEMApplication <NSObject, VGVehicleStateProviding>

@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (weak, nonatomic) id<VGOEMAppSOCStreaming> chargeStreamingDelegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;
- (id)init;
- (id)initWithIdentifier:(NSString *)arg1 applicationRecord:(LSApplicationRecord *)arg2;
- (void)startSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;
- (void)stopSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;
@end

