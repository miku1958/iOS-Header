//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFUserActivityInfo-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int valueType:1;
    } _has;
    int _valueType;
    NSString *_key;
    NSString *_stringValue;
    NSURL *_urlValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *urlValue; // @synthesize urlValue=_urlValue;
@property (nonatomic) int valueType; // @synthesize valueType=_valueType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasValueType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

