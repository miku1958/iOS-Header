//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray;
@protocol PUPhotoPicker;

@protocol PUPhotoPickerServicesConsumer <NSObject>

@property (weak, nonatomic) id<PUPhotoPicker> photoPicker;

- (void)setPhotoPickerMediaTypes:(NSArray *)arg1;
@end

