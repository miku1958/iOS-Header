//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOClientMetrics, NSData, NSError, NSString, NSURL;
@protocol GEORequestCounterTicket, NSObject;

@protocol GEODataSessionTask <NSObject>

@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) id<NSObject> parsedResponse;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) id<GEORequestCounterTicket> requestCounterTicket;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;

- (void)cancel;
- (void)start;
@end

