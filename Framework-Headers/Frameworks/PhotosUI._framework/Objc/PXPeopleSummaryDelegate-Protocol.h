//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleConfirmationSummaryViewController;
@protocol PXFaceCollection;

@protocol PXPeopleSummaryDelegate <NSObject>
- (unsigned long long)autoConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (id<PXFaceCollection>)faceCollectionForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
@end

