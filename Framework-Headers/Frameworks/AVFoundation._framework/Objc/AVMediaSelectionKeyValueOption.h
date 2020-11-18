//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary, NSString;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)_groupID;
- (id)_groupMediaType;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (id)dictionary;
- (id)group;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;

@end

