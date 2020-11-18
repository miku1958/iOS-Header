//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKIconManager, VKShieldManager;

@interface MKTransitArtworkManager : NSObject
{
    VKIconManager *_iconManager;
    VKShieldManager *_shieldManager;
}

@property (readonly, nonatomic) VKIconManager *iconManager; // @synthesize iconManager=_iconManager;
@property (readonly, nonatomic) VKShieldManager *shieldManager; // @synthesize shieldManager=_shieldManager;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(CDUnknownBlockType)arg1;
- (id)_imageFroMVKImage:(id)arg1;
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4 fullBleedColor:(id *)arg5;
- (BOOL)_isMemoryConstrained;
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 widthPaddingMultiple:(double)arg4;
- (id)initWithShieldManager:(id)arg1 iconManager:(id)arg2;
- (void)purge;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 forView:(id)arg3;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 forView:(id)arg3 withWidthPaddingMultiple:(double)arg4;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 forView:(id)arg3 withWidthPaddingMultiple:(double)arg4 fullBleedColor:(id *)arg5;
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 forView:(id)arg3;

@end

