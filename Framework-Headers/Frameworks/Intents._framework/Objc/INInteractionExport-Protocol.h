//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntent, INIntentResponse, NSDateInterval;

@protocol INInteractionExport <NSObject, JSExport>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) INIntent *intent;
@property (copy, nonatomic) INIntentResponse *intentResponse;

- (id)init;
@end

