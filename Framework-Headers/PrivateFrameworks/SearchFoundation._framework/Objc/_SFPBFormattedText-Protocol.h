//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBImage, _SFPBText;

@protocol _SFPBFormattedText <NSObject>

@property (strong, nonatomic) _SFPBImage *glyph;
@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBText *text;
@property (nonatomic) int textColor;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

