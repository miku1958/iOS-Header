//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IFManager : NSObject
{
}

+ (BOOL)executeQuery:(id)arg1;
+ (void)processTopic:(id)arg1 query:(id)arg2;
+ (void)propagateDown:(id)arg1 score:(double)arg2 root:(id)arg3 distance:(unsigned long long)arg4;
+ (void)propagateUp:(id)arg1 score:(double)arg2 parent:(id)arg3 distance:(unsigned long long)arg4;
+ (BOOL)provideIndication:(id)arg1 forTopic:(id)arg2;
+ (id)rankDocuments:(id)arg1 withTopics:(id)arg2;

@end

