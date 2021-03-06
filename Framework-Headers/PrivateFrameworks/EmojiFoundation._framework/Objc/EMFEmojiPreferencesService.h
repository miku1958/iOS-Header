//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/NSXPCListenerDelegate-Protocol.h>

@class EMFEmojiPreferences, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    EMFEmojiPreferences *_preferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) EMFEmojiPreferences *preferences; // @synthesize preferences=_preferences;
@property (readonly) Class superclass;

+ (id)sharedServiceWithMachName:(id)arg1;
- (void).cxx_destruct;
- (void)_createPreferencesIfNecessary;
- (void)dealloc;
- (id)initWithMachName:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

