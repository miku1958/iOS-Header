//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class NSURL;

@interface PlayVideoIntentResponse : INIntentResponse
{
    long long _code;
}

@property (nonatomic) long long code; // @synthesize code=_code;
@property (copy, nonatomic) NSURL *urlToLaunch; // @dynamic urlToLaunch;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end

