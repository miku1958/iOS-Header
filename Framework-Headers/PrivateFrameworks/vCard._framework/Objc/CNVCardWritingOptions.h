//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNVCardWritingOptions : NSObject
{
    BOOL _includeNotes;
    BOOL _includePhotos;
    BOOL _includePrivateFields;
    BOOL _includePrivateBundleIdentifiers;
    BOOL _includeUserSettings;
    BOOL _compressPhotos;
    BOOL _prefersUncroppedPhotos;
    BOOL _usePhotoReferencesIfAvailable;
    unsigned long long _maximumEncodingLength;
    unsigned long long _maximumImageEncodingLength;
    struct CGSize _maximumImageSize;
    NSArray *_treatAsUnknownProperties;
    unsigned long long _outputVersion;
    NSArray *_availableEncodings;
}

@property (copy) NSArray *availableEncodings; // @synthesize availableEncodings=_availableEncodings;
@property BOOL compressPhotos; // @synthesize compressPhotos=_compressPhotos;
@property BOOL includeNotes; // @synthesize includeNotes=_includeNotes;
@property BOOL includePhotos; // @synthesize includePhotos=_includePhotos;
@property BOOL includePrivateBundleIdentifiers; // @synthesize includePrivateBundleIdentifiers=_includePrivateBundleIdentifiers;
@property BOOL includePrivateFields; // @synthesize includePrivateFields=_includePrivateFields;
@property BOOL includeUserSettings; // @synthesize includeUserSettings=_includeUserSettings;
@property unsigned long long maximumEncodingLength; // @synthesize maximumEncodingLength=_maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength; // @synthesize maximumImageEncodingLength=_maximumImageEncodingLength;
@property struct CGSize maximumImageSize; // @synthesize maximumImageSize=_maximumImageSize;
@property unsigned long long outputVersion; // @synthesize outputVersion=_outputVersion;
@property BOOL prefersUncroppedPhotos; // @synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos;
@property (copy) NSArray *treatAsUnknownProperties; // @synthesize treatAsUnknownProperties=_treatAsUnknownProperties;
@property BOOL usePhotoReferencesIfAvailable; // @synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable;

+ (id)optionsFromPreferences;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

