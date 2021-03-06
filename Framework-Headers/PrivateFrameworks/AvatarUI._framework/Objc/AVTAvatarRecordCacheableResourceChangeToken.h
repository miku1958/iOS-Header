//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResourceChangeToken-Protocol.h>

@class NSNotificationCenter, NSString;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken>
{
    NSString *_recordID;
    CDUnknownBlockType _changeHandler;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)startObservingChanges;
- (void)stopObservingChanges;

@end

