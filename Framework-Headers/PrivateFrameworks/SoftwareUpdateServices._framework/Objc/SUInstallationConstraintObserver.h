//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUComposedInstallationConstraintMonitor.h>

#import <SoftwareUpdateServices/SUInvalidatable-Protocol.h>

@class NSMapTable, NSString, SUDownload;
@protocol SUInstallationConstraintObserverDelegate;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable>
{
    id<SUInstallationConstraintObserverDelegate> _delegate;
    SUDownload *_download;
    NSMapTable *_queue_observerBlockTokens;
    BOOL _queue_invalidated;
    unsigned long long _queue_tokenCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUInstallationConstraintObserverDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) SUDownload *download; // @synthesize download=_download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasAnyBlockObservers;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)_removeToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDownload:(id)arg1;
- (id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (id)monitorOfClass:(Class)arg1;
- (id)registerObserverBlock:(CDUnknownBlockType)arg1;

@end

