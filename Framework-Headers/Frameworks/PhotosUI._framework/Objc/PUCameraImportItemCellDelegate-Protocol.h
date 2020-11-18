//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUCameraImportItemCell, PXImportItemViewModel;

@protocol PUCameraImportItemCellDelegate <NSObject>
- (long long)contentFillModeForImportCell:(PUCameraImportItemCell *)arg1;
- (void)handleTouchEvent:(long long)arg1 forCell:(PUCameraImportItemCell *)arg2;
- (void)importCell:(PUCameraImportItemCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importCell:(PUCameraImportItemCell *)arg1 requestImageForImportItem:(PXImportItemViewModel *)arg2 ofSize:(unsigned long long)arg3 completion:(void (^)(UIImage *, unsigned long long, BOOL))arg4;
@end
