//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBEnumDescriptor, GPBOneofDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface GPBFieldDescriptor : NSObject
{
    struct GPBMessageFieldDescription *description_;
    GPBOneofDescriptor *containingOneof_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    CDUnion_88782d86 defaultValue_;
    Class msgClass_;
    union {
        GPBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;
}

@property (readonly, nonatomic) GPBOneofDescriptor *containingOneof; // @synthesize containingOneof=containingOneof_;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) CDUnion_88782d86 defaultValue;
@property (readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) unsigned char fieldType;
@property (readonly, nonatomic) BOOL hasDefaultValue;
@property (readonly, nonatomic) unsigned char mapKeyDataType;
@property (readonly, nonatomic) Class msgClass; // @synthesize msgClass=msgClass_;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int number;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic, getter=isRequired) BOOL required;

- (void)dealloc;
- (id)init;
- (id)initWithFieldDescription:(void *)arg1 includesDefault:(BOOL)arg2 syntax:(unsigned char)arg3;
- (BOOL)isValidEnumValue:(int)arg1;
- (id)textFormatName;

@end
