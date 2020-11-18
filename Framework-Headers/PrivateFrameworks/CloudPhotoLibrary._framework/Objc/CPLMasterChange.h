//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSData, NSDate, NSString;

@interface CPLMasterChange : CPLItemChange
{
    short _importedBy;
    short _videoFrameRate;
    NSArray *_resources;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    long long _originalOrientation;
    unsigned long long _fullSizeJPEGSource;
    NSString *_originatingFingerprint;
    NSString *_codec;
}

@property (copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (nonatomic) unsigned long long fullSizeJPEGSource; // @synthesize fullSizeJPEGSource=_fullSizeJPEGSource;
@property (copy, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property (copy, nonatomic) NSString *importGroupIdentifier; // @synthesize importGroupIdentifier=_importGroupIdentifier;
@property (nonatomic) short importedBy; // @synthesize importedBy=_importedBy;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property (strong, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property (copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property (nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property (copy, nonatomic) NSString *originatingFingerprint; // @synthesize originatingFingerprint=_originatingFingerprint;
@property (copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property (nonatomic) short videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;

- (void).cxx_destruct;
- (void)awakeFromStorage;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (unsigned long long)dataClassType;
- (long long)dequeueOrder;
- (id)init;
- (BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (id)name;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (BOOL)supportsDeletion;
- (BOOL)supportsResources;
- (BOOL)validateRecordForTracker:(id)arg1;

@end
