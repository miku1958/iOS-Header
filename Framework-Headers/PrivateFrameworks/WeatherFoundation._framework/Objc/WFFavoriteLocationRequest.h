//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask
{
    CDUnknownBlockType _resultHandler;
}

@property (readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;

- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;
- (void)startWithService:(id)arg1;

@end
