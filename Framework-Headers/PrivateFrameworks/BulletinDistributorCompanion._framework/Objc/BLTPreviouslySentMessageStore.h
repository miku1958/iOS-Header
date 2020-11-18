//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BLTPreviouslySentMessageStore : NSObject
{
    NSMutableDictionary *_messageDigests;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_saveTimer;
    NSString *_path;
    BOOL _dirty;
}

@property (nonatomic) BOOL dirty; // @synthesize dirty=_dirty;

- (void).cxx_destruct;
- (void)_cancelSave;
- (void)_enqueueSave;
- (void)_save;
- (void)clear;
- (void)dealloc;
- (id)initWithMessageStorePath:(id)arg1;
- (void)invalidate;
- (BOOL)isEmpty;
- (id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2;
- (void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2;
- (void)removeDigestForKey:(id)arg1;

@end

