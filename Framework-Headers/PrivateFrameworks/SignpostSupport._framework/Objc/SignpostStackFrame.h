//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SignpostStackFrame : NSObject
{
    NSUUID *_symbolOwnerUUID;
    unsigned long long _offset;
}

@property (readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) NSUUID *symbolOwnerUUID; // @synthesize symbolOwnerUUID=_symbolOwnerUUID;

- (void).cxx_destruct;
- (id)_serializableArrayRepresentation;
- (id)debugDescription;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

