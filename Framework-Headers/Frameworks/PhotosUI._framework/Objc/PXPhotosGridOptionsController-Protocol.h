//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;
@protocol PXPhotosGridOptionsControllerDelegate;

@protocol PXPhotosGridOptionsController <NSObject>

@property (readonly, nonatomic) NSString *actionPerformerType;
@property (weak, nonatomic) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate;
@property (readonly, nonatomic) NSString *systemIconImageName;


@optional
- (void)preloadOptions;
@end

