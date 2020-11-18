//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPointSize-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding>
{
    _SFPBGraphicalFloat *_width;
    _SFPBGraphicalFloat *_height;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasWidth;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _SFPBGraphicalFloat *height; // @synthesize height=_height;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBGraphicalFloat *width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCGSize:(struct CGSize)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

