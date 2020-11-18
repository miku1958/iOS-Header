//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFFavoritable-Protocol.h>

@class NSString;

@interface HMAccessory (HFFavoritableAdoption) <HFFavoritable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly) Class superclass;

- (id)hf_updateIsFavorite:(BOOL)arg1;
@end

