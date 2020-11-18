//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSArray;

@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor
{
    NSArray *_suggestions;
    unsigned long long _availability;
}

@property (readonly, nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property (readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestions:(id)arg2 availability:(unsigned long long)arg3;

@end
