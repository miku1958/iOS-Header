//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

#import <GeoServices/GEOMapServiceTransitLineTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineTicket : GEOAbstractRequestResponseTicket <GEOMapServiceTransitLineTicket>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;

@end

