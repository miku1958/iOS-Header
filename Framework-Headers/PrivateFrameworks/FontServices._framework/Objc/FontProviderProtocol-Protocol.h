//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol FontProviderProtocol
- (void)registerFonts:(NSArray *)arg1 enabled:(BOOL)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)registeredFontsInfo:(BOOL)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)unregisterFonts:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSDictionary *))arg2;
@end

