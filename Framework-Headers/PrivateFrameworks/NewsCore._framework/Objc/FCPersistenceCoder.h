//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FCPersistenceCoder : NSObject
{
    NSData *_key;
}

@property (readonly, copy, nonatomic) NSData *key; // @synthesize key=_key;

- (void).cxx_destruct;
- (id)_codeData:(id)arg1;
- (id)decodeData:(id)arg1;
- (id)encodeData:(id)arg1;
- (id)initWithKey:(id)arg1;

@end
