//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SUSUIPreferences : NSObject
{
    BOOL _alertAfterDownload;
    NSNumber *_passcodeRequiredDays;
    BOOL _needsAlertPresentationAfterOTAUpdate;
}

@property (readonly, nonatomic) BOOL alertAfterDownload; // @synthesize alertAfterDownload=_alertAfterDownload;
@property (nonatomic, setter=setNeedsAlertPresentationAfterOTAUpdate:) BOOL needsAlertPresentationAfterOTAUpdate; // @synthesize needsAlertPresentationAfterOTAUpdate=_needsAlertPresentationAfterOTAUpdate;
@property (readonly, strong, nonatomic) NSNumber *passcodeRequiredDays; // @synthesize passcodeRequiredDays=_passcodeRequiredDays;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_copyNumberPreferenceForKey:(id)arg1;
- (void *)_copyPreferenceForKey:(struct __CFString *)arg1 ofType:(unsigned long long)arg2;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (void)_loadPreferences;
- (void)_setBooleanPreferenceForKey:(id)arg1 value:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

