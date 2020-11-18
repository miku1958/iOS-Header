//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob
{
    BOOL _enableSharing;
}

@property (nonatomic) BOOL enableSharing; // @synthesize enableSharing=_enableSharing;

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(BOOL)arg2 withReason:(id)arg3;
+ (void)enableCloudSharing:(BOOL)arg1;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;

@end
