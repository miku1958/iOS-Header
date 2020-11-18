//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSReceiverPreferences : NSObject
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    CDUnknownBlockType _notifyHandler;
    NSMutableDictionary *_stateDictionary;
    CDUnknownBlockType _notify_handler;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) CDUnknownBlockType notifyHandler; // @synthesize notifyHandler=_notifyHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property (readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property (readonly, copy, nonatomic) CDUnknownBlockType notify_handler; // @synthesize notify_handler=_notify_handler;
@property (strong, nonatomic) NSMutableDictionary *stateDictionary; // @synthesize stateDictionary=_stateDictionary;

- (void).cxx_destruct;
- (void)dealloc;
- (void)disableBundleIdentifier:(id)arg1;
- (void)enableBundleIdentifier:(id)arg1;
- (void)handlePreferencesChanged;
- (BOOL)notifyStart;
- (void)saveState:(id)arg1;

@end

