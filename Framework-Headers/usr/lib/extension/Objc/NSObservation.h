//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObservation : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (void)remove;

@end
