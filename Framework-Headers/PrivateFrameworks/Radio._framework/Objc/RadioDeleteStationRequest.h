//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioSyncRequest.h>

@class NSDictionary;

@interface RadioDeleteStationRequest : RadioSyncRequest
{
    NSDictionary *_stationDictionary;
    unsigned long long _stationID;
}

- (void).cxx_destruct;
- (id)changeList;
- (id)init;
- (id)initWithStation:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

