//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSString, UICollectionViewCell, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarLibraryItem <NSObject>
+ (NSString *)cellIdentifier;
- (void)configureCell:(UICollectionViewCell *)arg1 imageProvider:(_AVTAvatarRecordImageProvider *)arg2;
@end

