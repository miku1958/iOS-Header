//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol IKAppDataStoring
- (void)clear;
- (unsigned long long)count;
- (NSString *)getDataForKey:(NSString *)arg1;
- (NSString *)keyAtIndex:(unsigned long long)arg1;
- (void)removeDataForKey:(NSString *)arg1;
- (unsigned long long)setData:(NSString *)arg1 forKey:(NSString *)arg2;
@end

