//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSUUID, UIImageView;

@protocol PUAssetPickerAsyncImageCell <NSObject>

@property (strong, nonatomic) NSUUID *asyncRequestID;
@property (nonatomic) int imageRequestID;
@property (readonly, nonatomic) struct CGSize imageRequestSize;
@property (readonly, nonatomic) UIImageView *imageView;

@end

