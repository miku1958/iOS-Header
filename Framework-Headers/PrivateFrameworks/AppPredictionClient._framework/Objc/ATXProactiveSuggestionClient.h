//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProactiveSuggestionClientProtocol-Protocol.h>

@class ATXUICacheManager, NSString;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol>
{
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)arg1;
- (id)suggestionLayoutFromCache;

@end
