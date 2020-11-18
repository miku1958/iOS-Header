//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseCorruptionTTRPromptDataSource-Protocol.h>

@class HDProfile, NSString;

__attribute__((visibility("hidden")))
@interface _HDDefaultDatabaseCorruptionDataSource : NSObject <HDDatabaseCorruptionTTRPromptDataSource>
{
    HDProfile *_profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentDatabaseIdentifier;
- (id)currentOSBuild;
- (id)initWithProfile:(id)arg1;
- (BOOL)isAppleInternalInstall;
- (BOOL)isTestingDevice;
- (void)persistObject:(id)arg1 forKey:(id)arg2;
- (id)persistedDictionaryForKey:(id)arg1;
- (id)persistedStringForKey:(id)arg1;
- (id)profileIdentifier;

@end
