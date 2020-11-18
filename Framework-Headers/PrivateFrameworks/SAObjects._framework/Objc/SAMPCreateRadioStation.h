//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSURL *stationUrl;

+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
