//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface WCMessage : NSObject <NSSecureCoding>
{
    BOOL _dictionaryMessage;
    NSString *_identifier;
    NSData *_data;
}

@property (readonly, copy) NSData *data; // @synthesize data=_data;
@property (readonly, getter=isDictionaryMessage) BOOL dictionaryMessage; // @synthesize dictionaryMessage=_dictionaryMessage;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end
