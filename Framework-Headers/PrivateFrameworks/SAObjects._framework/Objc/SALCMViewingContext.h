//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SALCMContent;

@interface SALCMViewingContext : SADomainObject
{
}

@property (nonatomic) BOOL commercialPlaying;
@property (copy, nonatomic) NSNumber *durationInMilliseconds;
@property (strong, nonatomic) SALCMContent *nowPlaying;
@property (copy, nonatomic) NSString *nowPlayingAppId;
@property (nonatomic) BOOL paused;
@property (copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property (copy, nonatomic) NSArray *viewingHistory;

+ (id)viewingContext;
+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

