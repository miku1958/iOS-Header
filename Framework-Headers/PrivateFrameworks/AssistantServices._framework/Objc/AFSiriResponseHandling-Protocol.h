//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequestFailureHandling-Protocol.h>
#import <AssistantServices/NSObject-Protocol.h>

@class AFSiriResponse;

@protocol AFSiriResponseHandling <NSObject, AFSiriRequestFailureHandling>
- (void)handleSiriResponse:(AFSiriResponse *)arg1 atTime:(unsigned long long)arg2;
@end
