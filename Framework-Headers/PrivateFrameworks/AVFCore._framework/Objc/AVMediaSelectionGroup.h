//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVMediaSelectionGroupInternal, AVMediaSelectionOption, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying>
{
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) NSArray *options;

+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (BOOL)_isStreamingGroup;
- (BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)_primaryMediaCharacteristic;
- (id)_weakReference;
- (id)asset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end

