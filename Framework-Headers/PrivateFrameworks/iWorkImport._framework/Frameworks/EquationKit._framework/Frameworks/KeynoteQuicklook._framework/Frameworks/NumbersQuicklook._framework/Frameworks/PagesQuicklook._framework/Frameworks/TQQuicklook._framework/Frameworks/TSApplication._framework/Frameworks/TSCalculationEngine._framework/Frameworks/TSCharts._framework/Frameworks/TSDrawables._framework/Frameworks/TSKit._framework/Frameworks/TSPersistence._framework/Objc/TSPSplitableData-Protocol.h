//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSPSplitableData

@property (readonly, nonatomic) unsigned long long tsp_length;

- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(void (^)(NSData *, unsigned long long, BOOL *))arg2;
@end

