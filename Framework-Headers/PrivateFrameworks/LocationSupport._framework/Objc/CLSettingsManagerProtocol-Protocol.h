//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class NSDictionary, NSString;
@protocol CLSettingsManagerClientProtocol;

@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
- (void)flush;
- (void)refresh;
- (NSDictionary *)syncgetSetValue:(id)arg1 forKey:(NSString *)arg2 withoutNotifying:(byref id<CLSettingsManagerClientProtocol>)arg3;
- (NSDictionary *)syncgetSettingsAndRegisterForUpdates:(byref id<CLSettingsManagerClientProtocol>)arg1;
- (void)unregisterForUpdates:(byref id<CLSettingsManagerClientProtocol>)arg1;
@end
