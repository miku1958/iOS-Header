//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INArchivedObject, NSDictionary, NSNumber, NSString;

@protocol INRunVoiceCommandIntentResponseExport <NSObject, JSExport>

@property (copy, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSNumber *customResponsesDisabled;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSNumber *interstitialDisabled;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *responseTemplate;
@property (nonatomic) long long toggleState;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (copy, nonatomic) NSString *verb;

@end

