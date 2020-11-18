//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NSDictionary, PHChange;

@protocol PXPhotoLibraryUIChangeObserver <NSObject>

@optional
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1 withPreparedInfo:(NSDictionary *)arg2;
- (NSDictionary *)prepareForPhotoLibraryChange:(PHChange *)arg1;
@end

