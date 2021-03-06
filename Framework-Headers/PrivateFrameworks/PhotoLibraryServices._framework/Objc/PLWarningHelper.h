//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PLPhotoLibrary;

@interface PLWarningHelper : NSObject
{
    NSArray *__assets;
    NSArray *__additionalPhotoStreamAssets;
    NSString *__clientName;
    long long __style;
    PLPhotoLibrary *_photoLibrary;
}

@property (strong, nonatomic) NSArray *_additionalPhotoStreamAssets; // @synthesize _additionalPhotoStreamAssets=__additionalPhotoStreamAssets;
@property (strong, nonatomic) NSArray *_assets; // @synthesize _assets=__assets;
@property (strong, nonatomic) NSString *_clientName; // @synthesize _clientName=__clientName;
@property (nonatomic) long long _style; // @synthesize _style=__style;
@property (strong, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;

- (void).cxx_destruct;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (void)_getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3;
- (void)_getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;
- (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inLibraryScopeCount:(long long)arg2 inPhotoStreamCount:(long long)arg3 iniPhotoCount:(long long)arg4 inSomeAlbumCount:(long long)arg5 affectedLocalAlbumsCount:(long long)arg6 itemKindSuffix:(id)arg7 actualDeletionCount:(long long)arg8;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3;
- (id)allWarningMessageCombinations;
- (void)getAvalancheDeleteWarning:(id *)arg1 actualDeletionCount:(long long *)arg2 forAssets:(id)arg3;
- (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
- (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
- (void)getExpungeWarningMessage:(id *)arg1 buttonTitle:(id *)arg2 forAssets:(id)arg3;
- (void)getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;
- (id)initWithPhotoLibrary:(id)arg1;

@end

