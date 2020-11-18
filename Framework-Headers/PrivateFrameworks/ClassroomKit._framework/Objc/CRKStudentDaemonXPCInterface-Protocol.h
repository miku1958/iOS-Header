//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol CRKStudentDaemonXPCInterface
- (void)fetchConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchResourceFromURL:(NSURL *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)setActiveStudentIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setConfiguration:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)studentDidAuthenticate:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end

