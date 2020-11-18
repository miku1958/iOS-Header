//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapServiceSearchFieldPlaceholderTicket-Protocol.h>

@class GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchPlaceholderTicket : NSObject <GEOMapServiceSearchFieldPlaceholderTicket>
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    NSDictionary *_userInfo;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;

@end
