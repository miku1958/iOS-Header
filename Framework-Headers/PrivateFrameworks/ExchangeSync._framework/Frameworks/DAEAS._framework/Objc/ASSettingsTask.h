//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class DASettingsRequestParams, NSArray, NSDictionary;

@interface ASSettingsTask : ASTask
{
    int _key;
    NSArray *_getters;
    NSDictionary *_setters;
    DASettingsRequestParams *_requestParams;
    long long _status;
    id _result;
}

@property (strong, nonatomic) NSArray *getters; // @synthesize getters=_getters;
@property (nonatomic) int key; // @synthesize key=_key;
@property (strong, nonatomic) DASettingsRequestParams *requestParams; // @synthesize requestParams=_requestParams;
@property (strong, nonatomic) id result; // @synthesize result=_result;
@property (strong, nonatomic) NSDictionary *setters; // @synthesize setters=_setters;
@property (nonatomic) long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (int)commandCode;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)init;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;

@end

