//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol _TtP9WidgetKit27WidgetCenterConnection_Host_
- (void)_loadCurrentConfigurations:(void (^)(NSArray *, NSError *))arg1;
- (void)_reloadAllTimelines:(void (^)(NSError *))arg1;
- (void)_reloadTimelinesOfKind:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)_reloadTimelinesOfKind:(NSString *)arg1 inBundle:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

