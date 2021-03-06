//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject
{
    NPSManager *_npsManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_getCustomAbbreviationsFromPrefs;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (id)customAbbreviations;
- (void)dealloc;
- (id)init;
- (void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2;

@end

