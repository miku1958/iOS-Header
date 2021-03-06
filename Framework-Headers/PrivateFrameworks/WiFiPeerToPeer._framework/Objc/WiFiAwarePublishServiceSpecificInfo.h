//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_blob;
    NSData *_txtRecordData;
    NSString *_instanceName;
}

@property (copy, nonatomic) NSData *blob; // @synthesize blob=_blob;
@property (copy, nonatomic) NSString *instanceName; // @synthesize instanceName=_instanceName;
@property (copy, nonatomic) NSData *txtRecordData; // @synthesize txtRecordData=_txtRecordData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)blobEquals:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)instanceNameEquals:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)txtRecordEquals:(id)arg1;

@end

