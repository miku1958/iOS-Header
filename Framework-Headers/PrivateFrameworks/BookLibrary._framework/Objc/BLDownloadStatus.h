//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface BLDownloadStatus : NSObject <NSCopying>
{
    BOOL _isAudiobook;
    BOOL _isRestore;
    BOOL _canPause;
    BOOL _isSample;
    BOOL _isPurchase;
    NSNumber *_storeID;
    NSNumber *_storePlaylistID;
    NSString *_permLink;
    NSString *_downloadID;
    NSNumber *_percentComplete;
    NSNumber *_estimatedTimeRemaining;
    NSNumber *_transferBytesWritten;
    NSNumber *_transferBytesExpected;
    long long _downloadPhase;
    NSDate *_purchaseDate;
    long long _persistentIdentifier;
    NSNumber *_storeAccountIdentifier;
    NSString *_artistName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_collectionArtistName;
    NSString *_collectionTitle;
    NSString *_genre;
    NSString *_thumbnailImageURL;
    NSString *_assetKind;
}

@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (copy, nonatomic) NSString *assetKind; // @synthesize assetKind=_assetKind;
@property (nonatomic) BOOL canPause; // @synthesize canPause=_canPause;
@property (copy, nonatomic) NSString *collectionArtistName; // @synthesize collectionArtistName=_collectionArtistName;
@property (copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property (copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property (nonatomic) long long downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property (strong, nonatomic) NSNumber *estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (nonatomic) BOOL isAudiobook; // @synthesize isAudiobook=_isAudiobook;
@property (nonatomic) BOOL isPurchase; // @synthesize isPurchase=_isPurchase;
@property (nonatomic) BOOL isRestore; // @synthesize isRestore=_isRestore;
@property (nonatomic) BOOL isSample; // @synthesize isSample=_isSample;
@property (strong, nonatomic) NSNumber *percentComplete; // @synthesize percentComplete=_percentComplete;
@property (copy, nonatomic) NSString *permLink; // @synthesize permLink=_permLink;
@property (nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (strong, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (strong, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
@property (strong, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;
@property (strong, nonatomic) NSNumber *storePlaylistID; // @synthesize storePlaylistID=_storePlaylistID;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSNumber *transferBytesExpected; // @synthesize transferBytesExpected=_transferBytesExpected;
@property (strong, nonatomic) NSNumber *transferBytesWritten; // @synthesize transferBytesWritten=_transferBytesWritten;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

