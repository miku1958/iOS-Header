//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject
{
    NSUserDefaults *_soundDefaults;
    BOOL _keyboardPlaysSounds;
}

@property (nonatomic) BOOL keyboardPlaysSounds; // @synthesize keyboardPlaysSounds=_keyboardPlaysSounds;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;

@end
