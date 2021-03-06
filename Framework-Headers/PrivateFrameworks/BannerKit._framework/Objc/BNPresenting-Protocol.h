//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BannerKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol BNConsidering, BNPosting, BNPresentable, BNPresentableUniquelyIdentifying;

@protocol BNPresenting <NSObject>

@property (readonly, nonatomic) id<BNConsidering> authority;
@property (weak, nonatomic) id<BNPosting> poster;
@property (readonly, copy, nonatomic) NSArray *presentedPresentables;
@property (readonly, copy, nonatomic) NSArray *topPresentables;

- (NSArray *)dismissPresentablesWithIdentification:(id<BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 animated:(BOOL)arg3 userInfo:(NSDictionary *)arg4;
- (NSArray *)dismissPresentablesWithIdentification:(id<BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (id)initWithAuthority:(id<BNConsidering>)arg1;
- (void)presentPresentable:(id<BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;

@optional
- (NSArray *)dismissAllPresentablesWithRequesterIdentifier:(NSString *)arg1 withReason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 animated:(BOOL)arg4 userInfo:(NSDictionary *)arg5;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
@end

