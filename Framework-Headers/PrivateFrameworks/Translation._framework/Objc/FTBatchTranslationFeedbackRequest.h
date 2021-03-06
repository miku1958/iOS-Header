//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationFeedbackRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationFeedbackRequest *_root;
}

@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) NSString *errors;
@property (readonly, nonatomic) NSString *os_version;
@property (readonly, nonatomic) NSString *safari_version;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *source_content;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *translated_content;
@property (readonly, nonatomic) NSString *url;

- (void).cxx_destruct;
- (Offset_94ef6cc9)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest *)arg2 verify:(BOOL)arg3;

@end

