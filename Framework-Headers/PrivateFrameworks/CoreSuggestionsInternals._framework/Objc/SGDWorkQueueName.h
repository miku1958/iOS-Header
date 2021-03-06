//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGDWorkQueueName : NSObject <NSCopying>
{
    unsigned int _timestamp32;
    unsigned int _counter32;
    unsigned short _otherbits;
}

@property (nonatomic) unsigned long long counter;
@property (nonatomic) unsigned long long fails;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long timestamp;

+ (BOOL)isValidFilename:(id)arg1;
- (id)copyWithState:(unsigned long long)arg1;
- (id)copyWithState:(unsigned long long)arg1 andFails:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)pathInDirectory:(id)arg1;
- (id)queueItemId;

@end

