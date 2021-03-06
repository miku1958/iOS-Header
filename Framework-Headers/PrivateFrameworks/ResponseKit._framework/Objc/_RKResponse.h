//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _RKResponse : NSObject
{
    NSString *_speechAct;
    NSString *_headword;
    NSString *_text;
}

@property (readonly) NSString *headword; // @synthesize headword=_headword;
@property (readonly) NSString *speechAct; // @synthesize speechAct=_speechAct;
@property (readonly) NSString *text; // @synthesize text=_text;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

