//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PUImportItemViewModel, PUImportOneUpCell;

@protocol PUImportOneUpCellDisplayDelegate
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 requestedBadgeUpdateForImportItem:(PUImportItemViewModel *)arg2;
- (long long)importOneUpCell:(PUImportOneUpCell *)arg1 requestedThumbnailForImportItem:(PUImportItemViewModel *)arg2 completion:(void (^)(UIImage *, BOOL))arg3;
@end

