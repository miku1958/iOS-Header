//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSCEFunctionSpec : NSObject
{
    NSString *_functionName;
    short _minArguments;
    short _maxArguments;
    short _repeatingGroupSize;
    vector_2a3fe66d _arguments;
    vector_2a3fe66d _repeatingArguments;
    BOOL _isOperator;
    int _shipVersion;
    int _functionIndex;
}

@property (readonly) const vector_2a3fe66d *arguments;
@property (readonly) int functionIndex; // @synthesize functionIndex=_functionIndex;
@property (readonly) NSString *functionName;
@property (readonly, nonatomic) BOOL isOperator; // @synthesize isOperator=_isOperator;
@property (readonly, nonatomic) short maxArguments; // @synthesize maxArguments=_maxArguments;
@property (readonly, nonatomic) short minArguments; // @synthesize minArguments=_minArguments;
@property (readonly, nonatomic) unsigned long long numArguments;
@property (readonly, nonatomic) short repeatingGroupSize; // @synthesize repeatingGroupSize=_repeatingGroupSize;
@property (readonly, nonatomic) int versionShippedIn; // @synthesize versionShippedIn=_shipVersion;

+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)functionSpecForFunctionName:(id)arg1;
+ (BOOL)hasAnyDateArgumentsToFunction:(int)arg1;
+ (BOOL)isModeEnabled:(short)arg1 functionIndex:(short)arg2;
+ (id)specDictionary;
+ (id)specWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(short)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(const vector_2a3fe66d *)arg7 functionIndex:(int)arg8;
+ (id)unsupportedFunctionNameForLocale:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)accessorModeForArgumentIndex:(unsigned long long)arg1;
- (struct TSCEFunctionArgSpec *)argumentSpecForIndex:(unsigned long long)arg1;
- (id)description;
- (id)displayStringForLocale:(id)arg1;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(short)arg4 isOperator:(BOOL)arg5 shipVersion:(int)arg6 arguments:(const vector_2a3fe66d *)arg7 functionIndex:(int)arg8;
- (void)loadRepeatingArguments;
- (id)localizedFunctionNameForLocale:(id)arg1;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (long long)modeNumberForLocalizedString:(id)arg1 argumentSpecIndex:(unsigned long long)arg2 attributeMax:(long long)arg3 locale:(id)arg4;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (void)p_ValidateArguments;
- (int)preferredTypeForArgumentIndex:(unsigned long long)arg1;

@end

