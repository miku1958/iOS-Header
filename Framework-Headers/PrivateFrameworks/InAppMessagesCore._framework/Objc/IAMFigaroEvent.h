//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessagesCore/IAMEventProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol>
{
    long long _type;
    NSDictionary *_payload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) id value;

- (void).cxx_destruct;
- (id)decomposeKey:(id)arg1;
- (id)initWithFigaroEventProperties:(id)arg1;
- (BOOL)matchesWithKey:(id)arg1;
- (id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2;

@end
