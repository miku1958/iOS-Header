//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLAdditionalAssetAttributes, PLCloudMaster;

@interface PLCloudMasterMediaMetadata : PLManagedObject
{
}

@property (strong, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes; // @dynamic additionalAssetAttributes;
@property (strong, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property (strong, nonatomic) NSData *data; // @dynamic data;

+ (id)entityName;
- (void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4;
- (id)payloadsForChangedKeys:(id)arg1;

@end

