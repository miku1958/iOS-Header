//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PUImportOneUpCell, PXImportItemViewModel;

@protocol PUImportOneUpCellDisplayDelegate
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 requestedBadgeUpdateForImportItem:(PXImportItemViewModel *)arg2;
- (long long)importOneUpCell:(PUImportOneUpCell *)arg1 requestedThumbnailForImportItem:(PXImportItemViewModel *)arg2 completion:(void (^)(UIImage *, BOOL))arg3;
@end
