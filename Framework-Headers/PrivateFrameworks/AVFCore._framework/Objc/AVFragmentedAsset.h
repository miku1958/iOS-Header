//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVURLAsset.h>

#import <AVFCore/AVFragmentMinding-Protocol.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding>
{
    AVFragmentedAssetInternal *_fragmentedAsset;
}

@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
@property (readonly, nonatomic) NSArray *tracks;

+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;
- (Class)_classForAssetTracks;
- (BOOL)_mindsFragments;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)trackWithTrackID:(int)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end

