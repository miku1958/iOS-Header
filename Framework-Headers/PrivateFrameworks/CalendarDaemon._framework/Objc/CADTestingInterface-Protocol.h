//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol CADTestingInterface
- (void)CADTestingDatabasePath:(void (^)(int, NSString *))arg1;
- (void)CADTestingSetDatabasePath:(NSString *)arg1 reply:(void (^)(int))arg2;
@end
