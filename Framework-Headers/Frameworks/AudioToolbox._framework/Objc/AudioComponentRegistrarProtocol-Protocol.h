//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AudioComponentRegistrarProtocol
- (void)canRegisterComponent:(NSDictionary *)arg1 reply:(void (^)(BOOL))arg2;
- (void)getComponentList:(NSString *)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 includeExtensions:(BOOL)arg3 reply:(void (^)(NSData *, NSData *, NSArray *, BOOL))arg4;
@end
