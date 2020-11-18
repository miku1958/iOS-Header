//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSStickerBrowserViewLayoutSpec : NSObject
{
    long long _stickerSize;
    long long _interfaceOrientation;
    struct CGSize _itemSize;
}

@property (readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (readonly, nonatomic) double minimumInteritemSpacing;
@property (readonly, nonatomic) double minimumLineSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets sectionInset;
@property (readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;

+ (id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2;
- (id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2;

@end
