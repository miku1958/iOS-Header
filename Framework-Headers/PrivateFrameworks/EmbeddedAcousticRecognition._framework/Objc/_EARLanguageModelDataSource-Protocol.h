//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmbeddedAcousticRecognition/NSObject-Protocol.h>

@protocol _EARLanguageModelDataSource <NSObject>
- (float)condititionalProbabilityOfWordID:(int)arg1 contextWordIDs:(const int *)arg2 count:(unsigned long long)arg3 symbolLookupBlock:(NSString * (^)(int))arg4;
@end

