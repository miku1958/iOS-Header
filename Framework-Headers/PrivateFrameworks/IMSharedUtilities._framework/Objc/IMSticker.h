//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface IMSticker : NSObject
{
    NSURL *_fileURL;
    struct NSString *_stickerGUID;
    struct NSString *_stickerPackGUID;
    NSString *_accessibilityLabel;
    NSString *_moodCategory;
    NSString *_stickerName;
    NSData *_recipe;
    NSString *_ballonBundleID;
    NSDictionary *_attributionInfo;
}

@property (copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property (copy, nonatomic) NSString *ballonBundleID; // @synthesize ballonBundleID=_ballonBundleID;
@property (readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (copy, nonatomic) NSString *moodCategory; // @synthesize moodCategory=_moodCategory;
@property (strong, nonatomic) NSData *recipe; // @synthesize recipe=_recipe;
@property (readonly, copy, nonatomic) NSString *stickerGUID; // @synthesize stickerGUID=_stickerGUID;
@property (copy, nonatomic) NSString *stickerName; // @synthesize stickerName=_stickerName;
@property (readonly, copy, nonatomic) NSString *stickerPackGUID; // @synthesize stickerPackGUID=_stickerPackGUID;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStickerID:(struct NSString *)arg1 stickerPackID:(struct NSString *)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6;
- (id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(struct NSString *)arg2 stickerPackBundlePath:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

