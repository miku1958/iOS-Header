//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTContextWithPronHints, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTGraphemeToPhonemeRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct GraphemeToPhonemeRequest *_root;
}

@property (readonly, nonatomic) FTContextWithPronHints *context_with_pron_hints;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSString *session_id;

- (void).cxx_destruct;
- (Offset_67099afb)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest *)arg2 verify:(BOOL)arg3;

@end

