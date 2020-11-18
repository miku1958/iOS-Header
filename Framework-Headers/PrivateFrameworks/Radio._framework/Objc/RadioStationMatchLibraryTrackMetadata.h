//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioStationMatchMetadata.h>

@class NSNumber, NSString;

@interface RadioStationMatchLibraryTrackMetadata : RadioStationMatchMetadata
{
    NSString *_albumArtistName;
    NSString *_albumName;
    NSString *_artistName;
    NSString *_composerName;
    NSString *_copyright;
    NSNumber *_discCount;
    NSNumber *_discNumber;
    NSNumber *_fileSize;
    NSString *_genreName;
    NSNumber *_compilation;
    NSNumber *_duration;
    NSString *_kind;
    NSString *_name;
    NSNumber *_storeAdamID;
    NSNumber *_storeCloudID;
    NSNumber *_trackCount;
    NSNumber *_trackNumber;
    NSNumber *_year;
}

@property (copy, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property (copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (copy, nonatomic, getter=isCompilation) NSNumber *compilation; // @synthesize compilation=_compilation;
@property (copy, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property (copy, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property (copy, nonatomic) NSNumber *discCount; // @synthesize discCount=_discCount;
@property (copy, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property (copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property (copy, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property (copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSNumber *storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property (copy, nonatomic) NSNumber *storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property (copy, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property (copy, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property (copy, nonatomic) NSNumber *year; // @synthesize year=_year;

+ (id)metadataKey;
- (void).cxx_destruct;
- (id)copyMetadataDictionary;

@end

