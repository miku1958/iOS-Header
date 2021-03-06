//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParameterLine-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CNVCardLine : NSObject <CNVCardParameterLine>
{
    NSString *_name;
    id _value;
    NSMutableArray *_parameters;
    NSString *_grouping;
    NSMutableArray *_groupedLines;
    NSString *_itemSeparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *groupedLines; // @synthesize groupedLines=_groupedLines;
@property (readonly) NSString *groupingName; // @synthesize groupingName=_grouping;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *itemSeparator; // @synthesize itemSeparator=_itemSeparator;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) NSArray *parameters; // @synthesize parameters=_parameters;
@property (readonly) Class superclass;
@property (readonly) id value; // @synthesize value=_value;

+ (id)lineWithLiteralValue:(id)arg1;
+ (id)lineWithName:(id)arg1 value:(id)arg2;
+ (id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
+ (id)versionPlaceholderLine;
- (void).cxx_destruct;
- (void)addGroupedLine:(id)arg1 withCounter:(long long *)arg2;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
- (BOOL)canSerializeWithStrategy:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)makeGroupingNameWithCounter:(long long *)arg1;
- (void)serializeValueWithStrategy:(id)arg1;
- (void)serializeWithStrategy:(id)arg1;

@end

