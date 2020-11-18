//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderVariable : NSObject <NSCopying>
{
    NSString *mName;
    struct NSString *mType;
    struct NSString *mPrecision;
    unsigned long long mArraySize;
    struct TSCH3DShaderType mShaderType;
    BOOL mIsSpecial;
    TSCH3DShaderVariable *mGenericName;
    NSArray *mElements;
}

@property (readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=mArraySize;
@property (readonly, nonatomic) TSCH3DShaderVariable *genericName; // @synthesize genericName=mGenericName;
@property (readonly, nonatomic) struct TSCH3DShaderType initialLinkType;
@property (readonly, nonatomic) BOOL isSpecial; // @synthesize isSpecial=mIsSpecial;
@property (readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property (readonly, nonatomic) NSString *precision; // @synthesize precision=mPrecision;
@property (readonly, nonatomic) struct TSCH3DShaderType shaderType; // @synthesize shaderType=mShaderType;
@property (readonly, nonatomic) NSString *type; // @synthesize type=mType;

+ (id)variableWithName:(id)arg1 type:(struct NSString *)arg2 precision:(struct NSString *)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(BOOL)arg6 generic:(id)arg7;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 type:(struct NSString *)arg2 precision:(struct NSString *)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(BOOL)arg6 generic:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)variableAtIndex:(unsigned long long)arg1;

@end

