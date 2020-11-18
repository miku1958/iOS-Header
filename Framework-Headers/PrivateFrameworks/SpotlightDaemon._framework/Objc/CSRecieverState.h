//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject
{
    int _notifyToken;
    CSReceiverPreferences *_receiverPreferences;
    NSSet *_enabledBundleIdentifiers;
    NSSet *_disabledBundleIdentifiers;
}

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
@property (readonly, nonatomic) NSSet *enabledBundleIdentifiers; // @synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers;
@property (readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property (readonly, nonatomic) CSReceiverPreferences *receiverPreferences; // @synthesize receiverPreferences=_receiverPreferences;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateFromPreferences;
- (BOOL)checkBundleIdentifier:(id)arg1;
- (id)init;

@end
