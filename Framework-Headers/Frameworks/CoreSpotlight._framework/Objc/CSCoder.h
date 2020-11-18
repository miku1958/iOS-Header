//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderData-Protocol.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData>
{
    BOOL _finalized;
    NSData *_data;
    struct _MDPlistContainer *_container;
}

@property (readonly, nonatomic) struct _MDPlistContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) BOOL finalized; // @synthesize finalized=_finalized;

- (void).cxx_destruct;
- (void)beginArray;
- (void)beginDictionary;
- (void)beginType:(const char *)arg1;
- (void)dealloc;
- (void)encodeBool:(BOOL)arg1;
- (void)encodeData:(const void *)arg1 length:(long long)arg2;
- (void)encodeDouble:(double)arg1;
- (void)encodeInt32:(int)arg1;
- (void)encodeInt64:(long long)arg1;
- (void)encodeMDPlistObject:(CDStruct_b7fac349)arg1;
- (void)encodeNSString:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;
- (void)encodeString:(const char *)arg1;
- (void)encodeString:(const char *)arg1 length:(long long)arg2;
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;
- (void)endArray;
- (void)endDictionary;
- (void)endType;
- (id)init;

@end
