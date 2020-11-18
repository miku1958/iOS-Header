//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import <LocationSupport/CLSettingsManagerProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol>
{
    NSMutableSet *_clients;
    NSMutableDictionary *_settingsDictionary;
}

@property (strong) NSMutableSet *clients; // @synthesize clients=_clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
- (void)beginService;
- (void)endService;
- (void)flush;
- (void)refresh;
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;
- (id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
- (void)unregisterForUpdates:(byref id)arg1;
- (void)updateClientsWithDictionary:(id)arg1;

@end
