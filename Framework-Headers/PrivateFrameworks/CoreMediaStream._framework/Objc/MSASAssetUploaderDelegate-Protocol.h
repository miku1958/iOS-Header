//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSASAlbum, MSASAssetCollection, MSASAssetUploader, NSError;

@protocol MSASAssetUploaderDelegate <NSObject>
- (void)MSASAssetUploader:(MSASAssetUploader *)arg1 didFinishUploadingAssetCollection:(MSASAssetCollection *)arg2 intoAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
@end

