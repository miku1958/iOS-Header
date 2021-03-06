//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REExportedValueEncoder : NSObject
{
    unsigned long long _options;
}

- (id)_namesArrayFromArray:(id)arg1;
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(CDUnknownBlockType)arg3 writerBlock:(CDUnknownBlockType)arg4 endBlock:(CDUnknownBlockType)arg5 wantsHeader:(BOOL)arg6 depth:(unsigned long long)arg7;
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(BOOL)arg4;
- (id)dataFromExportedValue:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)writeArrayEndToStream:(id)arg1;
- (void)writeArrayStartToStream:(id)arg1;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(BOOL)arg3;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeDictionaryEndToStream:(id)arg1;
- (void)writeDictionaryStartToStream:(id)arg1;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(BOOL)arg4;
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(BOOL)arg4;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;
- (BOOL)writesArrayHeader;
- (BOOL)writesDictionaryHeader;

@end

