//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIPrototypingSettingsManager : NSObject
{
    NSMutableDictionary *_storedSettings;
}

@property (readonly, nonatomic) NSArray *allSettings;
@property (strong, nonatomic) NSMutableDictionary *storedSettings; // @synthesize storedSettings=_storedSettings;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)deleteAllStoredSettings;
- (id)init;
- (id)settingOfType:(long long)arg1 withName:(id)arg2;
- (void)synchronizeStoredSettings;

@end

