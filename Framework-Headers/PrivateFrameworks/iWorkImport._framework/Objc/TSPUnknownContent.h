//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownContent : NSObject
{
    NSArray *_messages;
    NSArray *_ignoreAndPreserveFields;
    NSArray *_ignoreAndDropFields;
    NSArray *_savedIgnoreAndPreserveFields;
    NSArray *_savedIgnoreAndDropFields;
}

@property (readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)updateMessageInfo:(struct MessageInfo *)arg1;
- (void)willModifyObject;

@end
