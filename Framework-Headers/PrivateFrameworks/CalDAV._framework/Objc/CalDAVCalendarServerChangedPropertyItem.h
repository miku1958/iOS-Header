//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem
{
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property (strong, nonatomic) NSMutableSet *changedParameters; // @synthesize changedParameters=_changedParameters;
@property (strong, nonatomic) NSString *nameAttribute; // @synthesize nameAttribute=_nameAttribute;
@property (strong, nonatomic) NSString *typeAttribute; // @synthesize typeAttribute=_typeAttribute;

- (void).cxx_destruct;
- (void)addChangedParameter:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)parserFoundAttributes:(id)arg1;

@end

