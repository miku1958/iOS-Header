//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryProtocol-Protocol.h>

@class CLSPOICache, NSArray, NSString;
@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    CLSPOICache *_cache;
    BOOL _isCancelled;
    NSArray *_muids;
    id<GEOMapServiceTicket> _ticket;
    NSArray *_resolvedBusinessItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, copy, nonatomic) NSArray *muids; // @synthesize muids=_muids;
@property (readonly, nonatomic) NSArray *resolvedBusinessItems; // @synthesize resolvedBusinessItems=_resolvedBusinessItems;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMUIDs:(id)arg1;
- (void)prepareForRetry;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;

@end
