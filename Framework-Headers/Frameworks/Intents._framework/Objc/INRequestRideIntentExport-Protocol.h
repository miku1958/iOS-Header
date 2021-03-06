//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INPaymentMethod, INSpeakableString, NSNumber;

@protocol INRequestRideIntentExport <NSObject, JSExport>

@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) NSNumber *partySize;
@property (copy, nonatomic) INPaymentMethod *paymentMethod;
@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) INSpeakableString *rideOptionName;
@property (copy, nonatomic) INDateComponentsRange *scheduledPickupTime;

- (id)init;
@end

