//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CalLogConfiguration : NSObject
{
    NSString *_name;
    NSMutableArray *_nodes;
}

@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDetailedDefinition:(id)arg1;
- (id)initWithSimpleDefinition:(id)arg1;
- (void)parseConfigurationDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (id)parseWriterDefinition:(id)arg1;

@end

