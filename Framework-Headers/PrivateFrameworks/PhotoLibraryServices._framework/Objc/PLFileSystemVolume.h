//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, NSURL;

@interface PLFileSystemVolume : PLManagedObject
{
    NSURL *_url;
}

@property (readonly, nonatomic) BOOL isOffline;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSSet *resources; // @dynamic resources;
@property (copy, nonatomic) NSURL *url;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;
@property (strong, nonatomic) NSString *volumeUuidString; // @dynamic volumeUuidString;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)predictedURLForVolumeName:(id)arg1;
+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)predictedURL;
- (BOOL)supportsCloudUpload;
- (void)unregisterWithVolumeManager;
- (void)willTurnIntoFault;

@end

