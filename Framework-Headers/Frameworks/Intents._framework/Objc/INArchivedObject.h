//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface INArchivedObject : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_typeName;
    NSData *_messageData;
}

@property (readonly, copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property (readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

