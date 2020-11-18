//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/NSSecureCoding-Protocol.h>
#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSString;

@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_contentHash;
    NSString *_lastModifiedString;
}

@property (readonly, copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

