//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPLocale : PBCodable <NSCopying>
{
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

@property (strong, nonatomic) NSString *activeKeyboard; // @synthesize activeKeyboard=_activeKeyboard;
@property (strong, nonatomic) NSMutableArray *enabledKeyboards; // @synthesize enabledKeyboards=_enabledKeyboards;
@property (readonly, nonatomic) BOOL hasActiveKeyboard;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasRegionCode;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;

- (void).cxx_destruct;
- (void)addEnabledKeyboards:(id)arg1;
- (void)clearEnabledKeyboards;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enabledKeyboardsAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledKeyboardsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

