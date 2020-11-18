//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying>
{
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)_groupDictionaries;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_internal;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_selectedMediaArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)propertyList;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;

@end

