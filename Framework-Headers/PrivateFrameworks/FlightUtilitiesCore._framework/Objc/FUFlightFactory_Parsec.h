//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FlightUtilitiesCore/FUFlightFactory.h>

#import <FlightUtilitiesCore/FUFlightFactoryInternalProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
