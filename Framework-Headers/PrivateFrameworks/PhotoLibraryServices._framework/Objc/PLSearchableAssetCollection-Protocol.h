//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol PLSearchableAssetCollection <NSObject>
- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSString *)uuid;
@end
