//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class NSBundle, NSString, UIColor;

@interface MusicBundleImageArtworkRequest : NSObject <NSCopying>
{
    NSBundle *_bundle;
    NSString *_imageName;
    long long _renderingMode;
    UIColor *_tintColor;
}

@property (readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property (copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithImageName:(id)arg1 inBundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

