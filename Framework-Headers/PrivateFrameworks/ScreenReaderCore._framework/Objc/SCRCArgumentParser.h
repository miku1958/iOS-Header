//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentParser : SCRCArgumentSubcommand
{
    BOOL _isLaunchedAtLogin;
    NSString *_appName;
    NSMutableArray *__subcommandArray;
    SCRCArgumentSubcommand *__subcommand;
    NSArray *__arguments;
}

@property (copy, nonatomic) NSArray *_arguments; // @synthesize _arguments=__arguments;
@property (strong, nonatomic) SCRCArgumentSubcommand *_subcommand; // @synthesize _subcommand=__subcommand;
@property (strong, nonatomic) NSMutableArray *_subcommandArray; // @synthesize _subcommandArray=__subcommandArray;
@property (copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (nonatomic) BOOL isLaunchedAtLogin; // @synthesize isLaunchedAtLogin=_isLaunchedAtLogin;

+ (id)commandPath;
+ (id)processIdentifier;
+ (id)versionString;
- (void).cxx_destruct;
- (id)_displayHelp:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (void)addSubcommand:(id)arg1;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (BOOL)parse;
- (int)run;
- (id)setRunningAtStartup:(id)arg1;
- (void)stop;

@end
