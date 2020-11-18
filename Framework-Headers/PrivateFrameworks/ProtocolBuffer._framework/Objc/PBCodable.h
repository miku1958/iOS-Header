//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSSecureCoding-Protocol.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>
{
}

@property (readonly, nonatomic) NSData *data;

+ (id)options;
+ (BOOL)supportsSecureCoding;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

