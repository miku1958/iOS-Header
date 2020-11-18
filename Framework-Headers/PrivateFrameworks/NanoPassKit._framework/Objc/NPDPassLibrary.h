//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class NPKPassLibraryFilter, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NPDPassLibrary : NSObject <PDXPCServiceExportedInterface>
{
    BOOL _serviceActive;
    NSXPCConnection *_connection;
    NPKPassLibraryFilter *_filter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NPKPassLibraryFilter *filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property BOOL serviceActive; // @synthesize serviceActive=_serviceActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)broadcastPassAdded:(id)arg1;
- (void)broadcastPassRemoved:(id)arg1;
- (void)broadcastPassUpdated:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)serviceResumed;
- (void)serviceSuspended;

@end

