//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSOrderedSetChange : NSObject
{
}

@property (readonly) unsigned long long changeType;
@property (readonly) unsigned long long destinationIndex;
@property (readonly) unsigned long long sourceIndex;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;

@end

