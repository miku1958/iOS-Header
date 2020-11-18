//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IPMessage, NSArray, NSMutableArray, NSString;

@interface IPMessageUnit : NSObject
{
    NSMutableArray *_followups;
    NSArray *_flatMessageThread;
    NSArray *_features;
    NSString *_text;
    IPMessageUnit *_previous;
    IPMessage *_originalMessage;
    long long _indexInOriginalMessage;
}

@property (readonly) NSArray *features; // @synthesize features=_features;
@property (readonly) NSArray *followups;
@property (readonly) long long indexInOriginalMessage; // @synthesize indexInOriginalMessage=_indexInOriginalMessage;
@property (readonly, weak) IPMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property (readonly, weak) IPMessageUnit *previous; // @synthesize previous=_previous;
@property (readonly) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)addFollowup:(id)arg1;
- (id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3;

@end

