//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject
{
    NSString *_artworkURLTemplate;
    BOOL _supportsLayeredImage;
    BOOL _alpha;
    NSString *_artworkURLString;
    long long _artworkType;
    NSString *_format;
    struct CGSize _artworkSize;
}

@property (nonatomic, getter=hasAlpha) BOOL alpha; // @synthesize alpha=_alpha;
@property (readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property (readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSString *artworkURLString; // @synthesize artworkURLString=_artworkURLString;
@property (readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property (nonatomic) BOOL supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 cropCode:(id)arg3 format:(id)arg4;
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 format:(id)arg3;
- (void).cxx_destruct;
- (id)_sizeDescription:(struct CGSize)arg1;
- (id)artworkSizeTemplateURL;
- (id)artworkURLForSize:(struct CGSize)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1 cropCode:(id)arg2 format:(id)arg3;
- (id)artworkURLForSize:(struct CGSize)arg1 format:(id)arg2;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
