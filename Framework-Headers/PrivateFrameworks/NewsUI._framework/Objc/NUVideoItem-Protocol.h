//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NFCopying-Protocol.h>

@class FCAssetHandle, NSString, NSURL;
@protocol NUAdContextProvider;

@protocol NUVideoItem <NFCopying>

@property (readonly, nonatomic) id<NUAdContextProvider> adContextProvider;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext;
@property (readonly, copy, nonatomic) NSString *callToActionTitle;
@property (readonly, copy, nonatomic) NSURL *callToActionURL;
@property (readonly, copy, nonatomic) NSString *compactSourceName;
@property (readonly, nonatomic) FCAssetHandle *compactSourceNameImageAssetHandle;
@property (readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, copy, nonatomic) NSString *sourceTagID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *videoURL;

@end

