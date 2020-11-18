//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class AAUIServerHookResponse, NSDictionary, NSHTTPURLResponse, RUIElement, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@protocol AAUIServerHook <NSObject>

@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;
@property (strong, nonatomic) RUIObjectModel *objectModel;
@property (strong, nonatomic) AAUIServerHookResponse *serverHookResponse;

- (void)processElement:(RUIElement *)arg1 attributes:(NSDictionary *)arg2 objectModel:(RUIObjectModel *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)processObjectModel:(RUIObjectModel *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (BOOL)shouldMatchElement:(RUIElement *)arg1;
- (BOOL)shouldMatchModel:(RUIObjectModel *)arg1;

@optional
- (void)harvestDataFromResponse:(NSHTTPURLResponse *)arg1;
@end
