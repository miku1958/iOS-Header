//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol P256PublicKeyProtocol;

__attribute__((visibility("hidden")))
@interface PublicKey : NSObject
{
    id<P256PublicKeyProtocol> _key;
}

@property (strong) id<P256PublicKeyProtocol> key; // @synthesize key=_key;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

