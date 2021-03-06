//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding>
{
    BOOL _skipViewMode;
    long long _imageExtensionType;
    NSURL *_baseURL;
    NSString *_alt;
    NSString *_caption;
    NSString *_posterId;
    NSString *_videoId;
    NSString *_fallbackId;
    NSString *_imageId;
}

@property (copy, nonatomic) NSString *alt; // @synthesize alt=_alt;
@property (copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (copy, nonatomic) NSString *fallbackId; // @synthesize fallbackId=_fallbackId;
@property (nonatomic) long long imageExtensionType; // @synthesize imageExtensionType=_imageExtensionType;
@property (copy, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property (copy, nonatomic) NSString *posterId; // @synthesize posterId=_posterId;
@property (nonatomic) BOOL skipViewMode; // @synthesize skipViewMode=_skipViewMode;
@property (copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;

+ (id)assetsFromDictionary:(id)arg1;
+ (id)classSet;
+ (id)na_identity;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasImage;
- (BOOL)hasVideo;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

