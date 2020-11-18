//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

@class NSURL;

@interface MSPFileContainerPersister : MSPContainerPersister
{
    NSURL *_persistenceFileURL;
}

@property (readonly, nonatomic) NSURL *persistenceFileURL; // @synthesize persistenceFileURL=_persistenceFileURL;

+ (void)initialize;
- (void).cxx_destruct;
- (id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(CDUnknownBlockType)arg1 error:(out id *)arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)getSnapshot:(out id *)arg1 data:(out id *)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id *)arg6;
- (BOOL)getSnapshot:(out id *)arg1 data:(out id *)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id *)arg6;
- (id)init;
- (id)initWithPersistenceFileAtURL:(id)arg1;
- (id)newStateSnapshot;
- (id)stateSnapshotFromData:(id)arg1;

@end

