//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSRVoiceProfileStorePrefs : NSObject
{
}

+ (id)sharedStorePrefs;
- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)saveKnownUserVoiceProfiles:(id)arg1;
- (void)setVoiceProfileStoreVersion:(unsigned long long)arg1;

@end

