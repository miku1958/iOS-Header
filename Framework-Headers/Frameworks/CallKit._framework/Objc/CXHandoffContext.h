//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSDictionary, NSString;

@interface CXHandoffContext : NSObject <NSSecureCoding>
{
    BOOL _outgoing;
    NSString *_handoffIdentifier;
    CXHandle *_remoteHandle;
    NSDictionary *_context;
}

@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *handoffIdentifier; // @synthesize handoffIdentifier=_handoffIdentifier;
@property (nonatomic, getter=isOutgoing) BOOL outgoing; // @synthesize outgoing=_outgoing;
@property (copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithHandoffIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToHandoffContext:(id)arg1;

@end

