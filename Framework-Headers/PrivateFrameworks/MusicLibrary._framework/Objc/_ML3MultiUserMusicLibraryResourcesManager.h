//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>

@class NSObject, NSString;
@protocol MLMediaLibraryResourcesServiceProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver>
{
    NSString *_cachedLibraryContainerPath;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<MLMediaLibraryResourcesServiceProtocol> _libraryResourcesServices;
}

@property (copy, nonatomic) NSString *cachedLibraryContainerPath; // @synthesize cachedLibraryContainerPath=_cachedLibraryContainerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices; // @synthesize libraryResourcesServices=_libraryResourcesServices;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLibraryResourcesService:(id)arg1;
- (id)libraryContainerPath;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateForFailureToPerformDatabasePathChange;

@end

