//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlugInKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSDictionary, NSSet, NSString, PKDiscoveryLSWatcher;
@protocol OS_dispatch_queue, OS_os_activity;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _annotationNotifyToken;
    NSDictionary *_attributes;
    unsigned long long _flags;
    CDUnknownBlockType _report;
    NSObject<OS_os_activity> *_relatedActivity;
    NSSet *_lastResults;
    id _mcNotificationToken;
    PKDiscoveryLSWatcher *_lsWatcher;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sync;
}

@property int annotationNotifyToken; // @synthesize annotationNotifyToken=_annotationNotifyToken;
@property (strong) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (strong) NSSet *lastResults; // @synthesize lastResults=_lastResults;
@property (strong) PKDiscoveryLSWatcher *lsWatcher; // @synthesize lsWatcher=_lsWatcher;
@property (strong) id mcNotificationToken; // @synthesize mcNotificationToken=_mcNotificationToken;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSObject<OS_os_activity> *relatedActivity; // @synthesize relatedActivity=_relatedActivity;
@property (copy) CDUnknownBlockType report; // @synthesize report=_report;
@property (readonly) Class superclass;
@property (strong) NSObject<OS_dispatch_queue> *sync; // @synthesize sync=_sync;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(CDUnknownBlockType)arg3;
- (void)installWatchers;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2;
- (void)removeWatchers;

@end

