//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding>
{
    int _key;
    unsigned int _clientPort;
    NSDictionary *_payload;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property (nonatomic) unsigned int clientPort; // @synthesize clientPort=_clientPort;
@property (nonatomic) int key; // @synthesize key=_key;
@property (copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property (readonly, copy, nonatomic) NSString *senderBundleId;

+ (id)archivedMessageFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;

@end

