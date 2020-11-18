//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand
{
}

@property (nonatomic) double eosLikelihood;
@property (nonatomic) long long numOfWords;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationMs;
@property (nonatomic) double silenceProbability;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) long long trailingSilenceDuration;

+ (id)serverEndpointFeatures;
+ (id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

