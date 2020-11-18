//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString, SIServiceBatchInfo;

@interface SIServiceInstrumentationBatch : PBCodable
{
    BOOL _hasApp_id;
    BOOL _hasBatch_info;
    NSArray *_events;
    NSString *_app_id;
    SIServiceBatchInfo *_batch_info;
}

@property (copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
@property (strong, nonatomic) SIServiceBatchInfo *batch_info; // @synthesize batch_info=_batch_info;
@property (copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property (nonatomic) BOOL hasApp_id; // @synthesize hasApp_id=_hasApp_id;
@property (nonatomic) BOOL hasBatch_info; // @synthesize hasBatch_info=_hasBatch_info;
@property (readonly, nonatomic) NSData *jsonData;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)clearEvent;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
