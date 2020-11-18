//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

@class NSString;

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)flightFactoryClassWithProvider:(id)arg1;
+ (void)loadFlightDataWithFlightNumber:(long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)parseFlightData:(id)arg1 withError:(id *)arg2;

@end
