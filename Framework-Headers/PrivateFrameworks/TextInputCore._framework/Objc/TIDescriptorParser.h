//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TIDescriptorParser : NSObject
{
    long long _errorCode;
    NSMutableDictionary *_context;
}

@property (readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property (readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

- (void).cxx_destruct;
- (id)boxNilForValue:(id)arg1;
- (id)errorWithDetails:(id)arg1;
- (id)errorWithMessage:(id)arg1;
- (id)errorWithMessage:(id)arg1 andValue:(id)arg2;
- (id)initWithErrorCode:(long long)arg1;
- (id)invalidDataTypeErrorForKey:(id)arg1 withValue:(id)arg2 dataType:(id)arg3;
- (id)invalidValueErrorForKey:(id)arg1 withValue:(id)arg2;
- (id)missingValueErrorForKey:(id)arg1;
- (id)parseArrayForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseBooleanForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseDictionaryForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseFloatForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseIntegerForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseNumberForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;
- (id)parseObjectForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 validate:(CDUnknownBlockType)arg5;
- (id)parseStringForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4;

@end

