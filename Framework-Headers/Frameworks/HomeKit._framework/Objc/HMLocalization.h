//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject
{
    HMFUnfairLock *_lock;
    NSDictionary *_localizedStrings;
}

@property (readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_updateLocalizedStrings;
- (void)dealloc;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (id)init;

@end

