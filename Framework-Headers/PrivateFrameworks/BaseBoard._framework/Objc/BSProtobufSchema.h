//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSProtobufSchemaBuilder-Protocol.h>

@class NSMutableData, NSString;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder>
{
    Class _rootClass;
    BSProtobufSchema *_superSchema;
    long long _fieldCount;
    long long _autotagIndex;
    struct _BSProtobufFieldEntry *_entries;
    NSMutableData *_memoryData;
    BOOL _respondsToDidFinishProtobufDecodingWithError;
    BOOL _respondsToInitForProtobufDecoding;
    BOOL _respondsToInitProtobufTranslatorForObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addField:(const char *)arg1;
- (void)addField:(const char *)arg1 allowedClasses:(id)arg2;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(id)arg2;
- (void)dealloc;

@end

