//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSMutableDictionary;

@interface HDBackgroundObservationServerExtensionManager : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_availableExtensions;
    HDProfile *_profile;
}

@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;

- (void).cxx_destruct;
- (id)_lock_extensionForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)extensionForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end
