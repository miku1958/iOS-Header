//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUMediaDestination : NSObject
{
}

- (void)cancelRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isSavingRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)saveInternalEditsForAsset:(id)arg1 usingPhotoEditModel:(id)arg2 version:(long long)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)supportsProgressForRequestWithIdentifier:(int)arg1;

@end

