//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
{
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)_groupMediaCharacteristics;
- (BOOL)_isStreamingGroup;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4;
- (id)asset;
- (void)dealloc;
- (id)defaultOption;
- (id)dictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;

@end

