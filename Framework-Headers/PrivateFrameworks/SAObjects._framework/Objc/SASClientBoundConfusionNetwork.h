//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SASRecognition;

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand
{
}

@property (strong, nonatomic) SASRecognition *rawRecognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)clientBoundConfusionNetwork;
+ (id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

