//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray;
@protocol PUPhotosGridViewSupplementalToolbarDataSource;

@protocol PUPhotosGridViewSupplementalToolbarProvider <NSObject>

@property (readonly, nonatomic) BOOL shouldShowToolbar;
@property (readonly, copy, nonatomic) NSArray *toolbarItems;

- (id)initWithDataSource:(id<PUPhotosGridViewSupplementalToolbarDataSource>)arg1;
@end

