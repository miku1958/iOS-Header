//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ChoiceAlignment *_root;
}

@property (readonly, nonatomic) NSArray *post_itn_choice_indices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;

- (void).cxx_destruct;
- (Offset_22d7513b)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment *)arg2 verify:(BOOL)arg3;

@end
