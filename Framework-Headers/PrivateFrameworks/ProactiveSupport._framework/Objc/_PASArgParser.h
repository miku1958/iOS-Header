//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface _PASArgParser : NSObject
{
    NSMutableArray *_registeredSubcommands;
    NSMutableArray *_registeredOptions;
    NSMutableSet *_requiredOptions;
    CDUnknownBlockType _handler;
}

@property (readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic) NSMutableArray *registeredOptions; // @synthesize registeredOptions=_registeredOptions;
@property (readonly, nonatomic) NSMutableArray *registeredSubcommands; // @synthesize registeredSubcommands=_registeredSubcommands;
@property (strong, nonatomic) NSMutableSet *requiredOptions; // @synthesize requiredOptions=_requiredOptions;

+ (id)boolValueForArgument:(id)arg1 error:(id *)arg2;
+ (id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id *)arg3;
+ (id)numberValueForArgument:(id)arg1 error:(id *)arg2;
+ (id)parserWithHandler:(CDUnknownBlockType)arg1;
+ (id)simpleParserWithHelpGenerator:(CDUnknownBlockType)arg1 version:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_argumentParseTemplate:(id)arg1 longArgs:(struct option **)arg2;
- (id)description;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (int)invokeHandlerWithArguments:(const char **)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id *)arg4;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (id)optionLongHelp;
- (id)optionShortHelp;
- (void)registerOption:(id)arg1;
- (void)registerSubcommand:(id)arg1;
- (id)subcommandLongHelp;

@end

