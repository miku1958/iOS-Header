//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition
{
    NSArray *_personNames;
}

@property (strong, nonatomic) NSString *personName;
@property (readonly, nonatomic) NSArray *personNames;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;

@end

