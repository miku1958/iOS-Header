//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource
{
    NSMapTable *_keysForSizes;
}

@property (strong, nonatomic) NSMapTable *keysForSizes; // @synthesize keysForSizes=_keysForSizes;

- (void)dealloc;
- (id)imageForImageSize:(struct CGSize)arg1;
- (id)keyForImageSize:(struct CGSize)arg1;

@end
