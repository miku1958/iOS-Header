//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSServiceDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface IDSSignInController : NSObject <IDSServiceDelegate>
{
    NSMapTable *_serviceCallbackMap;
    NSMutableDictionary *_nameServiceMap;
    NSNumber *_faceTimePreviousEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSNumber *faceTimePreviousEnabled; // @synthesize faceTimePreviousEnabled=_faceTimePreviousEnabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *nameServiceMap; // @synthesize nameServiceMap=_nameServiceMap;
@property (strong, nonatomic) NSMapTable *serviceCallbackMap; // @synthesize serviceCallbackMap=_serviceCallbackMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_serviceForName:(id)arg1;
- (void)disableFaceTime;
- (void)disableService:(id)arg1;
- (void)disableiMessage;
- (void)enableFaceTime;
- (void)enableService:(id)arg1;
- (void)enableiMessage;
- (id)init;
- (BOOL)isFaceTimeEnabled;
- (BOOL)isServiceCurrentlyEnabled:(id)arg1;
- (BOOL)isiMessageEnabled;
- (void)registerEnabledStatusChangedCallback:(CDUnknownBlockType)arg1 forService:(id)arg2;
- (void)registerFaceTimeEnabledStatusChangedCallback:(CDUnknownBlockType)arg1;
- (void)registeriMessageEnabledStatusChangedCallback:(CDUnknownBlockType)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)unregisterEnabledStatusChangedCallbackForService:(id)arg1;
- (void)unregisterFaceTimeEnabledStatusChangedCallback;
- (void)unregisteriMessageEnabledStatusChangedCallback;

@end
