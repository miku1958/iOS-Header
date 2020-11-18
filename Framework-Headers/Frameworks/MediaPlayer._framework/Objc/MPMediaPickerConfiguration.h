//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPPlaybackArchiveConfiguration, NSArray, NSString;

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding>
{
    BOOL _allowsPickingMultipleItems;
    BOOL _showsCloudItems;
    BOOL _showsItemsWithProtectedAssets;
    BOOL _picksSingleCollectionEntity;
    BOOL _pickingForExternalPlayer;
    unsigned int _watchCompatibilityVersion;
    unsigned long long _mediaTypes;
    NSString *_prompt;
    NSArray *_typeIdentifiers;
    long long _selectionMode;
    MPPlaybackArchiveConfiguration *_playbackArchiveConfiguration;
    long long _supportedContentOptions;
}

@property (nonatomic) BOOL allowsPickingMultipleItems; // @synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems;
@property (nonatomic) unsigned long long mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property (nonatomic) BOOL pickingForExternalPlayer; // @synthesize pickingForExternalPlayer=_pickingForExternalPlayer;
@property (nonatomic) BOOL picksSingleCollectionEntity; // @synthesize picksSingleCollectionEntity=_picksSingleCollectionEntity;
@property (strong, nonatomic) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration; // @synthesize playbackArchiveConfiguration=_playbackArchiveConfiguration;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (nonatomic) long long selectionMode; // @synthesize selectionMode=_selectionMode;
@property (nonatomic) BOOL showsCatalogContent;
@property (nonatomic) BOOL showsCloudItems; // @synthesize showsCloudItems=_showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets; // @synthesize showsItemsWithProtectedAssets=_showsItemsWithProtectedAssets;
@property (nonatomic) BOOL showsLibraryContent;
@property (nonatomic) long long supportedContentOptions; // @synthesize supportedContentOptions=_supportedContentOptions;
@property (nonatomic) BOOL supportsUnavailableContent;
@property (copy, nonatomic) NSArray *typeIdentifiers; // @synthesize typeIdentifiers=_typeIdentifiers;
@property (nonatomic) unsigned int watchCompatibilityVersion; // @synthesize watchCompatibilityVersion=_watchCompatibilityVersion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
