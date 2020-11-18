//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary;

@interface SKUIMetricsRequestInfo : NSObject <NSCopying>
{
    BOOL _responseWasCached;
    BOOL _hasResponseWasCachedValue;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasResponseWasCachedValue; // @synthesize hasResponseWasCachedValue=_hasResponseWasCachedValue;
@property (nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property (nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property (nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property (nonatomic) BOOL responseWasCached; // @synthesize responseWasCached=_responseWasCached;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportRequestTimesMessagePayload:(id)arg1;

@end

