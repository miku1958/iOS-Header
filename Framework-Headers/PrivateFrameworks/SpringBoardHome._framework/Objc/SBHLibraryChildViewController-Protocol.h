//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHLegibility-Protocol.h>
#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>

@class SBFolderIconImageCache, SBHIconImageCache, SBIcon, SBIconView, SBRootFolder;
@protocol SBIconListLayoutProvider;

@protocol SBHLibraryChildViewController <SBIconLocationPresenting, SBIconViewQuerying, SBHLegibility>

@property (strong, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (strong, nonatomic) SBHIconImageCache *iconImageCache;
@property (strong, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (strong, nonatomic) SBRootFolder *rootFolder;


@optional
- (SBIconView *)folderIconViewForIcon:(SBIcon *)arg1 folderRelativeIconIndexPath:(id *)arg2;
@end
