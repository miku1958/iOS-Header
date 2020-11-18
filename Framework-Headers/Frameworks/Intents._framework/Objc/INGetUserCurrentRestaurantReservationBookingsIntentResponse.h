//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INGetUserCurrentRestaurantReservationBookingsIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport>
{
    NSArray *_userCurrentBookings;
}

@property (readonly, nonatomic) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userCurrentBookings; // @synthesize userCurrentBookings=_userCurrentBookings;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserCurrentBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
