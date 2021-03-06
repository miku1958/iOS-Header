//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPictureItemContainer-Protocol.h>

@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>
{
    NSArray *_pictureItems;
    BOOL _allowFullScreenPhoto;
}

@property (readonly, nonatomic) BOOL allowFullScreenPhoto; // @synthesize allowFullScreenPhoto=_allowFullScreenPhoto;
@property (readonly, nonatomic) NSArray *pictureItems; // @synthesize pictureItems=_pictureItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPictureItemContainer:(id)arg1;
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(BOOL)arg2;

@end

