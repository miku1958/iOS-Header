//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDisplayProfile.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKColor;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>
{
    BOOL _tallCode;
    long long _passStyle;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_iconHash;
    NSData *_logoHash;
    NSData *_thumbnailHash;
    NSData *_backgroundHash;
    NSData *_stripHash;
    NSData *_paymentAssetsHash;
}

@property (strong, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) NSData *backgroundHash; // @synthesize backgroundHash=_backgroundHash;
@property (strong, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (strong, nonatomic) NSData *iconHash; // @synthesize iconHash=_iconHash;
@property (strong, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property (readonly, nonatomic) long long layoutMode;
@property (strong, nonatomic) NSData *logoHash; // @synthesize logoHash=_logoHash;
@property (nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
@property (strong, nonatomic) NSData *paymentAssetsHash; // @synthesize paymentAssetsHash=_paymentAssetsHash;
@property (readonly, nonatomic) BOOL showsBackgroundImage;
@property (readonly, nonatomic) BOOL showsStripImage;
@property (strong, nonatomic) PKColor *stripColor; // @synthesize stripColor=_stripColor;
@property (strong, nonatomic) NSData *stripHash; // @synthesize stripHash=_stripHash;
@property (nonatomic) BOOL tallCode; // @synthesize tallCode=_tallCode;
@property (strong, nonatomic) NSData *thumbnailHash; // @synthesize thumbnailHash=_thumbnailHash;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (long long)type;

@end
