//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutItem;

@protocol PXMutableLayoutEngine <NSObject>

@property (strong, nonatomic) id<PXLayoutItem> seedItem;

- (void)setDataSourceSnapshot:(id<PXLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id<PXLayoutDataSourceChangeDetails>)arg2;
@end
