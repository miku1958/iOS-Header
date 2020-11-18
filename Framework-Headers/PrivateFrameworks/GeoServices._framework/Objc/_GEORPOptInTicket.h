//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapServiceFixNotificationTicket-Protocol.h>

@class GEOMapServiceTraits, GEORPProblemOptInRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket>
{
    GEORPProblemOptInRequest *_request;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;

@end

