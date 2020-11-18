//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject
{
    NSDictionary *_currentAVChatInfo;
}

@property (readonly, weak, nonatomic) NSDictionary *currentAVChatInfo;
@property (strong, nonatomic) NSArray *myAvailableMessages;
@property (strong, nonatomic) NSArray *myAwayMessages;
@property (readonly, nonatomic) unsigned long long requestAudioReflectorStart;
@property (readonly, nonatomic) unsigned long long requestAudioReflectorStop;
@property (readonly, nonatomic) unsigned long long vcCapabilities;

+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)notificationCenter;
+ (long long)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(long long)arg1;
+ (id)sharedAgent;
- (void).cxx_destruct;
- (void)launchIfNecessary;
- (id)myPictureData;
- (id)notificationCenter;
- (unsigned long long)requestVideoStillForPerson:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;

@end

