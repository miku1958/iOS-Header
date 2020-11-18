//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogEventSerializationMetadata : NSObject
{
    NSMutableDictionary *_indexToStringMapping;
    NSMutableDictionary *_stringToIndexMapping;
    unsigned long long _flags;
    NSPredicate *_filterPredicate;
    unsigned long long _maxLogEventBatchSize;
    unsigned long long _serializedEventCount;
    NSDate *_firstDate;
    NSDate *_lastDate;
}

@property (strong, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (strong, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) NSMutableDictionary *indexToStringMapping; // @synthesize indexToStringMapping=_indexToStringMapping;
@property (strong, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property (nonatomic) unsigned long long maxLogEventBatchSize; // @synthesize maxLogEventBatchSize=_maxLogEventBatchSize;
@property (nonatomic) unsigned long long serializedEventCount; // @synthesize serializedEventCount=_serializedEventCount;
@property (readonly, nonatomic) NSMutableDictionary *stringToIndexMapping; // @synthesize stringToIndexMapping=_stringToIndexMapping;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)indexForString:(id)arg1;
- (id)init;
- (id)initWithDataRepresentation:(id)arg1;
- (id)stringForIndex:(id)arg1;

@end
