//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCH3DShaderVariable;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderLinkedVariable : NSObject
{
    NSString *name;
    TSCH3DShaderVariable *variable;
    struct TSCH3DShaderVariableScopeType scope;
}

@property (strong, nonatomic) NSString *name; // @synthesize name;
@property (nonatomic) struct TSCH3DShaderVariableScopeType scope; // @synthesize scope;
@property (strong, nonatomic) TSCH3DShaderVariable *variable; // @synthesize variable;

+ (id)linkedVariable;
- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (id)inputVariableName;
- (BOOL)isAttribute;

@end

