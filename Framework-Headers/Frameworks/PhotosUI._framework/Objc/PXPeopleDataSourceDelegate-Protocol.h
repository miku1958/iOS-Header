//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXArrayChangeDetails, PXPeopleDataSource;

@protocol PXPeopleDataSourceDelegate <NSObject>
- (void)peopleDataSource:(PXPeopleDataSource *)arg1 didApplyIncrementalChanges:(PXArrayChangeDetails *)arg2;
- (void)peopleDataSourceMembersChanged:(PXPeopleDataSource *)arg1;
@end

