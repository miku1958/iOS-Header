//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding>
{
    unsigned long long _version;
    NSData *_data;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)payloadWithData:(id)arg1;
+ (id)payloadWithData:(id)arg1 version:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

