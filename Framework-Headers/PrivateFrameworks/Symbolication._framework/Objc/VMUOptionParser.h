//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface VMUOptionParser : NSObject
{
    NSString *_purposeDescription;
    NSString *_syntaxDescription;
    NSString *_discussionDescription;
    NSMutableArray *_optionDescriptions;
    NSMutableArray *_appleInternalOptionDescriptions;
    NSMutableDictionary *_optionBlockByString;
    struct __CFArray *_longOptStructs;
    NSMutableString *_shortOpts;
    unsigned long long _spacing;
    BOOL _singleHyphenLongNames;
    BOOL _parametersShowAsAssignment;
}

@property (copy, nonatomic) NSString *discussion; // @synthesize discussion=_discussionDescription;
@property (readonly) int optind;
@property (nonatomic) BOOL parametersShowAsAssignment; // @synthesize parametersShowAsAssignment=_parametersShowAsAssignment;
@property (copy, nonatomic) NSString *purposeDescription; // @synthesize purposeDescription=_purposeDescription;
@property (nonatomic) BOOL singleHyphenLongNames; // @synthesize singleHyphenLongNames=_singleHyphenLongNames;
@property (copy, nonatomic) NSString *syntaxDescription; // @synthesize syntaxDescription=_syntaxDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)parseArguments:(char **)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)parseArgumentsArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)printOptionDescriptions:(id)arg1;
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 flags:(unsigned long long)arg6 handler:(CDUnknownBlockType)arg7;
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)usage:(id)arg1;
- (void)usage:(id)arg1 shouldExit:(BOOL)arg2;

@end
