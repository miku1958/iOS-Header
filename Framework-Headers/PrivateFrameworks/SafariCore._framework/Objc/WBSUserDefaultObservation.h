//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSUserDefaultObservation-Protocol.h>

@class NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation>
{
    NSUserDefaults *_defaults;
    CDUnknownBlockType _handler;
    NSString *_key;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

