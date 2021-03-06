//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AssetCollectionInfo : NSObject <NSSecureCoding>
{
    BOOL _isMine;
    BOOL _isVideo;
    BOOL _isPhotoIris;
    BOOL _isDeletable;
    unsigned short _playbackVariation;
    NSString *_GUID;
    NSString *_personID;
    NSDictionary *_metaData;
    NSNumber *_width;
    NSNumber *_height;
    NSDate *_timestamp;
    NSString *_derivativeUTI;
}

@property (readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property (readonly, nonatomic) NSString *derivativeUTI; // @synthesize derivativeUTI=_derivativeUTI;
@property (readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property (readonly, nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property (readonly, nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property (readonly, nonatomic) BOOL isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property (readonly, nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (readonly, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property (readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (readonly, nonatomic) unsigned short playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) NSNumber *width; // @synthesize width=_width;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

