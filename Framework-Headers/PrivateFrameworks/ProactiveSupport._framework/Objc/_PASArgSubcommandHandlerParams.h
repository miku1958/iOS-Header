//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, _PASArgSubcommand;

@interface _PASArgSubcommandHandlerParams : NSObject
{
    _PASArgSubcommand *_subcommand;
    NSDictionary *_options;
    NSArray *_positionalArguments;
}

@property (readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly, nonatomic) NSArray *positionalArguments; // @synthesize positionalArguments=_positionalArguments;
@property (readonly, nonatomic) _PASArgSubcommand *subcommand; // @synthesize subcommand=_subcommand;

- (void).cxx_destruct;
- (id)initWithSubcommand:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;

@end

