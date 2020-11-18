//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileServerLocalProxyBatchContext : NSObject
{
    GEOTileKeyList *_fullList;
    GEOTileKeyList *_interestList;
    GEOTileKeyList *_networkList;
    GEOTileKeyList *_pendingNetworkList;
    GEOTileRequester *_tileRequester;
}

@property (strong, nonatomic) GEOTileKeyList *fullList; // @synthesize fullList=_fullList;
@property (strong, nonatomic) GEOTileKeyList *interestList; // @synthesize interestList=_interestList;
@property (strong, nonatomic) GEOTileKeyList *networkList; // @synthesize networkList=_networkList;
@property (strong, nonatomic) GEOTileKeyList *pendingNetworkList; // @synthesize pendingNetworkList=_pendingNetworkList;
@property (strong, nonatomic) GEOTileRequester *tileRequester; // @synthesize tileRequester=_tileRequester;

- (void).cxx_destruct;

@end

