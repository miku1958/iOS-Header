//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPFinder/NSObject-Protocol.h>

@protocol SPFinderStateXPCProtocol <NSObject>
- (oneway void)disableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)enableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchFinderState:(void (^)(BOOL, NSError *))arg1;
- (oneway void)setActiveCache:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)start;
- (oneway void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
@end

