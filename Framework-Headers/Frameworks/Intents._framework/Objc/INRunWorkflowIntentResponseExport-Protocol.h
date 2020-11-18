//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INArchivedObject, NSArray, NSNumber, NSString;

@protocol INRunWorkflowIntentResponseExport <NSObject, JSExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSArray *steps;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSNumber *waitingForResume;

@end

