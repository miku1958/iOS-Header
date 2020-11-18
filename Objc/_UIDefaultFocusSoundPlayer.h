//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusSoundPlayer-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer>
{
    NSMutableDictionary *_urlPools;
    NSMutableDictionary *_focusSoundPools;
    NSObject<OS_dispatch_queue> *_soundQueue;
    NSTimer *_unregisterTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *focusSoundPools; // @synthesize focusSoundPools=_focusSoundPools;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *soundQueue; // @synthesize soundQueue=_soundQueue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *unregisterTimer; // @synthesize unregisterTimer=_unregisterTimer;
@property (strong, nonatomic) NSMutableDictionary *urlPools; // @synthesize urlPools=_urlPools;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (void)_playSystemSound:(unsigned int)arg1 withVolume:(double)arg2 pan:(double)arg3;
- (void)_registerForSystemSoundsIfNecessary;
- (void)dealloc;
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;

@end

