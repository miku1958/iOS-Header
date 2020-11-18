//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSMutableDictionary;

@interface GKPlayerMultiPhotoView : UIImageView
{
    NSArray *_players;
    NSMutableDictionary *_photoImages;
}

@property (strong, nonatomic) NSMutableDictionary *photoImages; // @synthesize photoImages=_photoImages;
@property (strong, nonatomic) NSArray *players; // @synthesize players=_players;

- (void)dealloc;
- (void)refreshPhotos;
- (void)updateImage;

@end
