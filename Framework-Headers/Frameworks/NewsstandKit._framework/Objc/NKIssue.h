//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NKLibrary, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface NKIssue : NSObject
{
    NKLibrary *_library;
    NSString *_name;
    NSDate *_date;
    NSString *_directory;
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSMutableSet *_resolvedAssets;
    BOOL _foundContent;
    BOOL _isDecodingValid;
}

@property (readonly, copy) NSURL *contentURL;
@property (copy) NSDate *date; // @synthesize date=_date;
@property (copy) NSString *directory; // @synthesize directory=_directory;
@property (readonly, copy) NSArray *downloadingAssets;
@property (copy) NSString *name; // @synthesize name=_name;
@property (readonly) long long status;

- (void)_assetChanged:(id)arg1;
- (id)_assetsForRequest:(id)arg1;
- (void)_cleanupAsset:(id)arg1;
- (id)_commonInit;
- (id)_directory;
- (id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3;
- (BOOL)_isDecodingValid;
- (id)_library;
- (void)_markAssetAsResolved:(id)arg1;
- (void)_setLibrary:(id)arg1;
- (id)addAssetWithRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

