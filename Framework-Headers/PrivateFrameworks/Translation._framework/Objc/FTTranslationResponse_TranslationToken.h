//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAlignment, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationToken *_root;
}

@property (readonly, nonatomic) BOOL add_space_after;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) FTAlignment *mt_alignment;
@property (readonly, nonatomic) NSString *token;

- (void).cxx_destruct;
- (Offset_f50ee2c0)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken *)arg2 verify:(BOOL)arg3;

@end
