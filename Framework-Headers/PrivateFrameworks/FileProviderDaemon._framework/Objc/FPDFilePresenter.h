//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPXEnumeratorObserver-Protocol.h>

@class FPDDomain, FPDExtensionManager, FPItem, FPItemID, NSData, NSString, NSURL;
@protocol FPXEnumerator, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender>
{
    FPDExtensionManager *_manager;
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    FPDDomain *_domain;
    NSData *_changeToken;
    FPItemID *_observedItemID;
    FPItem *_currentItem;
    BOOL _isFetchingChanges;
    BOOL _shouldRefetchChanges;
    BOOL _presenterWantsUbiqitousAttributes;
    BOOL _isEnumeratorActive;
    BOOL _isFrontmost;
    int _requestEffectivePID;
    int _presenterPid;
    id _filePresenterID;
    FPItemID *_itemID;
    NSURL *_presentedItemURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FPDDomain *domain; // @synthesize domain=_domain;
@property (copy, nonatomic) id filePresenterID; // @synthesize filePresenterID=_filePresenterID;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isEnumeratorActive; // @synthesize isEnumeratorActive=_isEnumeratorActive;
@property (nonatomic) BOOL isFrontmost; // @synthesize isFrontmost=_isFrontmost;
@property (strong, nonatomic) FPItemID *itemID; // @synthesize itemID=_itemID;
@property (readonly, nonatomic) FPItemID *observedItemID; // @synthesize observedItemID=_observedItemID;
@property (readonly, nonatomic) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property (nonatomic) int presenterPid; // @synthesize presenterPid=_presenterPid;
@property (readonly) NSString *prettyDescription;
@property (readonly) int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
@property (readonly) Class superclass;

+ (id)presenter:(id)arg1 withItemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;
- (void).cxx_destruct;
- (void)_destroyEnumerator;
- (void)_enumeratorRequestDidFailWithXPCError:(id)arg1 section:(unsigned long long)arg2;
- (void)_fetchChangeToken;
- (void)_fetchUpdates;
- (id)_newCoordinator;
- (id)_presentedItemDescription:(BOOL)arg1;
- (void)becomeFrontmost:(BOOL)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didUpdateItem:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)enumerationResultsDidChange;
- (id)enumerator;
- (id)initWithIdentifier:(id)arg1 itemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)start;
- (void)stop;

@end

