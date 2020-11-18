//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSExternalAnalyticsEvent-Protocol.h>

@class NSDictionary, NTPBSession;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>
{
    NSDictionary *_requestQueryParameters;
    NTPBSession *_session;
}

@property (readonly, copy, nonatomic) NSDictionary *requestQueryParameters; // @synthesize requestQueryParameters=_requestQueryParameters;
@property (readonly, copy, nonatomic) NTPBSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;

@end

